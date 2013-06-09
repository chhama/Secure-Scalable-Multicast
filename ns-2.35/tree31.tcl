#
# Tree handling routines
#
# Author: Evan Rempel  <erempel@uvic.ca>
# http://web.uvic.ca/~erempel/tcl

# no user token, namespaces
package provide Tree 3.1

namespace eval ::Tree {

  namespace export isTree isRoot isLeaf
  namespace export create destroy root
  namespace export prune graft
  namespace export parent child children exist
  namespace export name value list appendValue
  namespace export height depth format walk

  variable Debug 0
  
  variable TreeObject
  variable tokenCount
  catch {set tokenCount 0}
}


# Object nodes have
#   name         ell name
#   allChildren  Ell# ...  (indecies all children with same name)
#   parent       Ell#
#   children     array of childnames = list of children
#   attributes   array of attribute name = value

# ---------------------------------------------------------- token
# Create an Tree token. Can create 2 billion per second
# before name conflicts arise.
proc ::Tree::token { } {
    variable tokenCount
    if {[incr tokenCount] >= 2000000000} then {
      set tokenCount 0
    }
    return "Tree.[clock seconds].$tokenCount"
}

# ---------------------------------------------------------- isTree
# Return True if treeToken represents a valid tree.
proc ::Tree::isTree { treeToken } {
  return [info exist "::Tree::${treeToken}.name" ]
}

# ---------------------------------------------------------- isRoot
# Return True if treeToken has no parents.
proc ::Tree::isRoot { treeToken } {

  if {[info exist "::Tree::${treeToken}.name"]} {
    if {[info exist "::Tree::${treeToken}.parent"]} then {
      return 0
    } else {
      return 1
    }
  } else {
    return 0
  }
  return 0
}

# ---------------------------------------------------------- isLeaf
# isLeaf   token
# return a 1 if the tree is a leaf.
proc ::Tree::isLeaf { treeToken } {

  if {[info exist "::Tree::${treeToken}.name"]} {
    if {[array size ::Tree::${treeToken}.children] == 0} then {
      return 1
    }
  } else {
    return 0
  }
  return 0
}

# ---------------------------------------------------------- create
# Create a single element tree
# Return the token for this tree
#
# ::Tree::create name ?value?
proc ::Tree::create { name {value ""}} {

    set treeToken [::Tree::token]
    set "::Tree::${treeToken}.name" $name 
    if {[string equal "" $value]} then {
      return $treeToken
    }
    set "::Tree::${treeToken}.attributes(value)" $value
    return $treeToken
}

# ---------------------------------------------------------- destroy
# Free up all of the resources for the tree and all of its
# children.
proc ::Tree::destroy { treeToken } {

  if {[info exist "::Tree::${treeToken}.parent"]} then {
    ::Tree::prune $treeToken
  }
  ::Tree::internalDestroy $treeToken
  return ""
}

# ---------------------------------------------------------- internalDestroy
# Destroy is recursive, but do not need to error check
# the children, only the passed in tree.
#
proc ::Tree::internalDestroy { treeList } {

    foreach child $treeList {
      if {[info exist "::Tree::${child}.allChildren"]} then {
        ::Tree::internalDestroy [set "::Tree::${child}.allChildren"]
      }
      unset -nocomplain "::Tree::${child}.name" "::Tree::${child}.parent" "::Tree::${child}.allChildren" "::Tree::${child}.children" "::Tree::${child}.attributes"
    }
}

# ---------------------------------------------------------- root
# return the root token for the tree containing token
# 
proc ::Tree::root { treeToken } {

  if {[info exist ::Tree::${treeToken}.name]} then {
    set Root $treeToken
    while {[info exists "::Tree::${Root}.parent"]} {
      set Root [set "::Tree::${Root}.parent"]
    }
    return $Root
  } else {
    return ""
  }
}

# ---------------------------------------------------------- prune
# remove from the tree the entire branch starting at token
# making it a new tree.
proc ::Tree::prune { treeToken } {

  if {[info exist "::Tree::${treeToken}.parent"]} then {
    set oldParent [set "::Tree::${treeToken}.parent"]
    upvar 0 "::Tree::${oldParent}.children" oldParentChildren
    upvar 0 "::Tree::${oldParent}.allChildren" oldParentAllChildren

    # remove links from old parent
    set removeIndex [lsearch -exact -ascii $oldParentAllChildren $treeToken]
    set oldParentAllChildren [lreplace $oldParentAllChildren $removeIndex $removeIndex]

    set name [set "::Tree::${treeToken}.name"]
    set removeIndex [lsearch -exact -ascii $oldParentChildren($name) $treeToken]
    set oldParentChildren($name) [lreplace $oldParentChildren($name) $removeIndex $removeIndex]
    if {[llength $oldParentChildren($name)] == 0} then {
      unset oldParentChildren($name)
    }

    # remove links to parent
    unset "::Tree::${treeToken}.parent"
  }
  return $treeToken
}

# ---------------------------------------------------------- graft
# Attach child to the new parent.
# Return the token for this child object
# if an object of this name already exists, create a second node
# of the same name.
proc ::Tree::graft { parentToken childToken } {

  if {![::Tree::isTree $parentToken] || ![::Tree::isTree $childToken]} then {
    return ""
  }

  # ensure that not grafting an ancestor
  set Root $parentToken
  while {![string equal "$Root" "$childToken"] && [info exists "::Tree::${Root}.parent"]} {
    set Root [set "::Tree::${Root}.parent"]
  }
  if {[string equal "$Root" "$childToken"]} then {
    return ""
  }

  # -- not an ancestor, so do the prune/graft
  if {![::Tree::isRoot $childToken]} then {
    ::Tree::prune $childToken
  }
  return [::Tree::internalGraft $parentToken $childToken]
}

# ---------------------------------------------------------- internalGraft
# perform a graft without any error checking
proc ::Tree::internalGraft { parentToken childToken } {

  lappend "::Tree::${parentToken}.allChildren" $childToken
  set ::Tree::${childToken}.parent $parentToken

  set name [set ::Tree::${childToken}.name]
  lappend "::Tree::${parentToken}.children($name)" $childToken

  return $childToken
}

# ---------------------------------------------------------- parent
# return the parent node for the object token
proc ::Tree::parent { treeToken } {
  if {[info exist "::Tree::${treeToken}.parent"]} then {
    return [set "::Tree::${treeToken}.parent"]
  }
  return ""
}

# ---------------------------------------------------------- children
# return the list of children for the object token
proc ::Tree::children { treeToken {pattern *} {method ""} {spec ""} } {

  if {[string equal "$pattern$method$spec" "*"]} {
     if {[info exist "::Tree::${treeToken}.allChildren"]} then {
       return [set "::Tree::${treeToken}.allChildren"]
     } else {
       return ""
     }
  } elseif {[string length $method] == 0} then {
      set nodeOrder {}
      foreach {name value} [array get "::Tree::${treeToken}.children" "$pattern"] {
        set nodeOrder [concat $nodeOrder $value]
      }
      return $nodeOrder

  } elseif {[string equal $method "-sort"]} then {

    upvar 0 "::Tree::${treeToken}.children" nodeChildren

    set nodeOrder ""
    foreach name [uplevel 1 $spec \{[array names nodeChildren $pattern]\}] {
       if {[info exist nodeChildren($name)]} then {
         set nodeOrder [concat $nodeOrder $nodeChildren($name)]
       } else {
         lappend nodeOrder ""
       }
    }
    return $nodeOrder

  } elseif {[string equal $method "-order"]} then {

    # only look at those children that match the pattern
    array set matchedNames [array get "::Tree::${treeToken}.children" $pattern]

    # create a list of children to return
    set nodeOrder ""
    foreach name $spec {
      if {[info exist matchedNames($name)]} then {
        set nodeOrder [concat $nodeOrder $matchedNames($name)]
        # keep track that this has been added
        unset matchedNames($name)
      } else {
        lappend nodeOrder ""
      }
    }
    # find nodes that are not yet included in the nodeOrder
    foreach {name value} [array get matchedNames] {
      set nodeOrder [concat $nodeOrder $value]
    }
    return $nodeOrder
  }
  return ""
}

# ---------------------------------------------------------- exist
# exist   token  pattern ?childvar?
# return a 1 if the child exists. If childvar is included
# then set it to the list of token of the children matching name.
proc ::Tree::exist { treeToken pattern {childVar ""}} {
  
  if {[info exist "::Tree::${treeToken}.children"]} then {
    if {[string equal "" $childVar]} then {
       if {[llength [array names "::Tree::${treeToken}.children" "$pattern"]] > 0} then {
         return 1
       } else {
         return 0
       }
    } else {
      upvar $childVar childNode
      set retValue 0
      set childNode ""
      foreach {child value} [array get "::Tree::${treeToken}.children" "$pattern"] {
        set childNode [concat $childNode $value]
        set retValue 1
      }
      return $retValue
    }
  }
  return 0
}

# ---------------------------------------------------------- name
# ::Tree::name Tree ?name?
# set and return the name of the node
proc ::Tree::name { treeToken {name ""}} {

  if {[info exist "::Tree::${treeToken}.name"]} then {
    upvar 0 "::Tree::${treeToken}.name" tokenName
  
    if {[string equal "" $name]} then {
      return $tokenName
    } else {
      set oldName $tokenName
    
      # if there is a parent, relink under new name
      if {[info exist "::Tree::${treeToken}.parent"]} then {
        set parent [set "::Tree::${treeToken}.parent"]
        upvar "::Tree::${parent}.children" parentChildren
	
        lappend parentChildren($name) $treeToken
        # remove named link from parent
        set removeIndex [lsearch -exact $parentChildren($oldName) $treeToken]
        set parentChildren($oldName) [lreplace $parentChildren($oldName) $removeIndex $removeIndex]
      }
      set tokenName $name
      return $oldName
    }
  } else {
    return ""
  }
}

# ---------------------------------------------------------- attribute
# ::Tree::attribute tree ?attribute? ?value?
# set and return the value of the node

proc ::Tree::attribute { treeToken {attributeName ""} args} {

  if {[info exist "::Tree::${treeToken}.name"]} then {
    upvar 0 "::Tree::${treeToken}.attributes" attributes
    if {[string equal "" $attributeName]} then {
      return [array get attributes]
    } elseif {[llength $args] == 0} then {
      if {[info exist attributes($attributeName)]} then {
        return $attributes($attributeName)
      } else {
        return ""
      }
      return $attributes($attributeName)
    } else {
      if {[info exist attributes($attributeName)]} then {
        set oldValue $attributes($attributeName)
      } else {
        set oldValue ""
      }
      set attributes($attributeName) [lindex $args 0]
      return $oldValue
    }
  }
  return ""
}

# ---------------------------------------------------------- attributeUnset
# ::Tree::attributeUnset tree attribute
# set and return the value of the node
proc ::Tree::attributeUnset { treeToken attributeName } {

  if {[info exist "::Tree::${treeToken}.attributes($attributeName)"]} then {
    upvar 0 "::Tree::${treeToken}.attributes" attributes
    set oldValue $attributes($attributeName)
    unset attributes($attributeName)
    return $oldValue
  } else {
    return ""
  }
}

# ---------------------------------------------------------- attributeExist
# ::Tree::attributeExist tree attribute
# set and return the value of the node
proc ::Tree::attributeExist { treeToken attributeName } {

  return [info exist "::Tree::${treeToken}.attributes($attributeName)"]
}

# ---------------------------------------------------------- attributeNames
# ::Tree::attributeNames tree
# return the list of attributes for the node
proc ::Tree::attributeNames { treeToken {pattern *}} {

  return [array names "::Tree::${treeToken}.attributes" $pattern]
}

# ---------------------------------------------------------- attributePairs
# ::Tree::attributeNames tree
# return the list of attribute/value pairs for the node 
# where the attribute name matches the pattern
proc ::Tree::attributePairs { treeToken {pattern *}} {

  return [array get "::Tree::${treeToken}.attributes" $pattern]
}

# ---------------------------------------------------------- appendAttribute
# OBSOLETE - will be removed
proc ::Tree::appendAttribute { treeToken attribute value } {

  if {[info exist "::Tree::${treeToken}.name"]} then {
    return [append "::Tree::${treeToken}.attributes($attribute)" $value]
  } else {
    return ""
  }
}

# ---------------------------------------------------------- attributeAppend
# append to the value of the node represented by token
proc ::Tree::attributeAppend { treeToken attribute value } {

  if {[info exist "::Tree::${treeToken}.name"]} then {
    return [append "::Tree::${treeToken}.attributes($attribute)" $value]
  } else {
    return ""
  }
}

# ---------------------------------------------------------- attributeLappend
# lappend to the value of the node represented by token
proc ::Tree::attributeLappend { treeToken attribute value } {

  if {[info exist "::Tree::${treeToken}.name"]} then {
    return [lappend "::Tree::${treeToken}.attributes($attribute)" $value]
  } else {
    return ""
  }
}

# ---------------------------------------------------------- list
# return the list of values pertaining to the multiple
# children called childName of treeToken
proc ::Tree::list { treeToken childName {attribute value}} {

  set returnList {}
  foreach {name children} [array get "::Tree::${treeToken}.children" "$childName"] {
    foreach child $children {
      foreach {attr value} [array get "::Tree::${child}.attributes" $attribute] {
        lappend returnList $value
      }
    }
  }
  return $returnList
}

# ---------------------------------------------------------- height
# return the number of levels in a tree
# a leaf tree has height of zero, one element, height of 1.
proc ::Tree::height { treeToken } {
  if {[info exist "::Tree::${treeToken}.name"]} then {
    return [::Tree::internalHeight $treeToken]
  } else {
    return ""
  }
}
# ---------------------------------------------------------- internalHeight
# no need to check all trees for existance
proc ::Tree::internalHeight { treeToken } {
  set max 0
  if {[info exist "::Tree::${treeToken}.allChildren"]} then {
    foreach child [set "::Tree::${treeToken}.allChildren"] {
      set height [::Tree::internalHeight $child]
      if {$height >= $max} then {
        set max [incr height]
      }
    }
  }
  return $max
}

# ---------------------------------------------------------- depth
# return the depth that the treeToken is in the whole tree
proc ::Tree::depth { treeToken } {

  if {[info exist "::Tree::${treeToken}.name"]} then {
    set Root $treeToken
    set depth 0
    while {[info exists "::Tree::${Root}.parent"]} {
      set Root [set "::Tree::${Root}.parent"]
      incr depth
    }
    return $depth
  } else {
    return ""
  }
}

# ---------------------------------------------------------- serialize
# turn a tree into a string of the form
# name attributes child child ....
#
# where attributes is a list containing (name value)*
# and child is another name attribute child child ...
# 
proc ::Tree::serialize { treeToken } {
  if {[info exist ::Tree::${treeToken}.name]} then {
    set value ""
    return [::Tree::internalSerialize $treeToken]
  } else {
    return ""
  }
}

proc ::Tree::internalSerialize { treeToken } {

  set value ""
  lappend value [::Tree::name $treeToken]
  lappend value [::Tree::attributePairs $treeToken *]
  set childrenValue {}
  foreach child [::Tree::children $treeToken] {
    lappend childrenValue [::Tree::internalSerialize $child]
  }
  lappend value $childrenValue
  return $value
}

# ---------------------------------------------------------- deserialize
# create a tree with the same tructure as the
# original tree prior to running serialize
# 
proc ::Tree::deserialize { serial } {
  if {[llength $serial] != 3} then {
    return ""
  } else {
    set treeToken [::Tree::create [lindex $serial 0]]
    foreach {name value} [lindex $serial 1] {
      ::Tree::attribute $treeToken $name $value
    }
    foreach childSerial [lindex $serial 2] {
      if {[::Tree::internalGraft $treeToken [::Tree::deserialize $childSerial]] == ""} then {
        ::Tree::destroy $treeToken
        return ""
      }
    }
    return $treeToken
  }
}

# ---------------------------------------------------------- format
# format  token
# format the xml object represented by token.
proc ::Tree::format { treeToken {valueName value} } {
  variable output
  set output ""

  if {[info exist "::Tree::${treeToken}.name"]} then {
    return [::Tree::internalFormat $treeToken $valueName 0]
  } else {
    return ""
  }
}

# ---------------------------------------------------------- internalFormat
proc ::Tree::internalFormat { treeToken valueName level } {
  variable output

  set offsetString [string repeat " " $level]
  incr level

  if {[info exist "::Tree::${treeToken}.allChildren"]} then { 
    set children [set "::Tree::${treeToken}.allChildren"]
  } else {
    set children ""
  }

  # create a string for all of the attributes other than $valueName
  set attribString ""
  array set attributes [array get "::Tree::${treeToken}.attributes"]
  if {[info exist attributes($valueName)]} then {
    set value $attributes($valueName)
    unset attributes($valueName)
  } else {
    set value ""
  }
  foreach {attributeName attributeValue} [array get attributes] {
    append attribString " $attributeName=\"$attributeValue\""
  }

  set name [set "::Tree::${treeToken}.name"]
  if {[llength $children] == 0} then {
    if {[string equal $value ""]} then {
      append output "$offsetString$offsetString<$name$attribString/>\n"
    } else {
      append output "$offsetString$offsetString<$name$attribString>$value</$name>\n"
    }
  } else {
    append output "$offsetString$offsetString<$name$attribString>$value\n"
    foreach child $children {
      ::Tree::internalFormat $child $valueName $level
    }
    append output "$offsetString$offsetString</$name>\n"
  }
  return $output
}

# ---------------------------------------------------------- walk
# walk  token traversal -preCall command -inCall command -postCall command -order names

# walk through the tree following a {traversal} patern calling the commands 
#    traversal - depth or breadth
#    preCall - called pior to processing children
#    inCall  - called in between ALL children
#    postcall - called after all children 
# The children will be visted in the order of the -order argument

proc ::Tree::walk { token traversal args } {
  variable output
  set output ""

  if {[::Tree::isTree $token]} then {
    array set state {
        -preCall	""
        -inCall		""
        -postCall	""
        -order		""
        -sort		""
        -arrange	""
        -singleInCall	1
        -authoritative  1
    }
  
    set options {-preCall -inCall -postCall -order -sort -arrange -singleInCall -authoritative}
    foreach {flag value} $args {
      if {[info exist state($flag)]} {
        # Validate numbers
        if { ![string equal "" $state($flag)] &&
	      [string is integer $state($flag)] && \
             ![string is integer $value]} {
          return -code error "Bad value for $flag ($value), must be integer"
        }
        set state($flag) $value
      } else {
        set usage [join [array names state] ", "]
        return -code error "Unknown option $flag, can be: $usage"
      }
    }
    set count 0
    
    # set up test flags for faster traversal
    set state(-preFlag) [expr {[string length $state(-preCall)] > 0}]
    set state(-inFlag) [expr {[string length $state(-inCall)] > 0}]
    set state(-postFlag) [expr {[string length $state(-postCall)] > 0}]

    # set up test flags for faster traversal
    set state(-sortFlag) [expr {[string length $state(-sort)] > 0}]
    set state(-orderFlag) [expr {[string length $state(-order)] > 0}]
    set state(-arrangeFlag) [expr {[string length $state(-arrange)] > 0}]

    if {($state(-sortFlag) + $state(-orderFlag) + $state(-arrangeFlag)) > 1} then {
      return -code error "only one of -order, -sort or -arrange can be specified"
    }
    
    # if inCalls are not being used, then set the inCallFlag to -1
    # otherwise 0 unless multiple inCalls are permitted, then set
    # it to 1, meaning the number of children less one.
    if {$state(-inFlag)} then {
      if {$state(-singleInCall)} then {
        set state(-inCallFlag) 0
      } else {
        set state(-inCallFlag) 1
      }
    } else {
      set state(-inCallFlag) -1
    }

    switch $traversal {
      depth { return [::Tree::internalDepthWalk $token state 0] }
      level { return [::Tree::internalLevelWalk $token state] }
    }
    return ""
  } else {
    return ""
  }
}

# ---------------------------------------------------------- internalDepthWalk
proc ::Tree::internalDepthWalk { tree stateVar depth } {
  upvar $stateVar state
    
  set uplevelCall [expr {$depth +2}]
  if {[array size "::Tree::${tree}.children"] == 0} then {
    # all three calls for leaf trees
    if {$state(-preFlag)} then {
      set returnData [uplevel $uplevelCall $state(-preCall) $tree $depth]
      if {![string equal "" $returnData]} then {
        return $returnData
      }
    }
    if {$state(-inFlag)} then {
      set returnData [uplevel $uplevelCall $state(-inCall) $tree $depth 0]
      if {![string equal "" $returnData]} then {
        return $returnData
      }
    }
    if {$state(-postFlag)} then {
      set returnData [uplevel $uplevelCall $state(-postCall) $tree $depth]
      if {![string equal "" $returnData]} then {
        return $returnData
      }
    }
  } else {
    # -- not a leaf node

    set nodeOrder {}
    array set includeNodes {}

    if {$state(-sortFlag)} then {
      upvar 0 "::Tree::${tree}.children" nodeChildren
      foreach name [uplevel $uplevelCall $state(-sort) \{[array names nodeChildren]\}] {
        if {[info exist nodeChildren($name)]} then {
	  set includeNodes($name) 1
          foreach child $nodeChildren($name) {
            lappend nodeOrder $child
          }
        } else {
          lappend nodeOrder ""
        }
      }
      # find nodes that are not yet included in the nodeOrder
      if {$state(-authoritative) == 0} then {
        foreach name [array names nodeChildren] {
	  if {![info exist includeNodes($name)]} then {
            foreach child $nodeChildren($name) {
              lappend nodeOrder $child
	    }
          }
        }
      }

    } elseif {$state(-orderFlag) || $state(-arrangeFlag)} {
      upvar 0 "::Tree::${tree}.children" nodeChildren

      # start with all children names
      array set matchedNames [array get nodeChildren]

      # create a list of children to traverse
      if {[string length $state(-arrange)]} {
        set startOrder [uplevel $uplevelCall $state(-arrange) $tree]
      } else {
        set startOrder $state(-order)
      }
      foreach name $startOrder {
        if {[info exist matchedNames($name)]} then {
          set nodeOrder [concat $nodeOrder $matchedNames($name)]
          # keep track that this has been added
          unset matchedNames($name)
        } else {
          # fill in an empty placeholder for the named node
          lappend nodeOrder ""
        }
      }
      # find nodes that are not yet included in the nodeOrder
      if {$state(-authoritative) == 0} then {
        foreach {name value} [array get matchedNames] {
          set nodeOrder [concat $nodeOrder $value]
        }
      }
    } else {
      set nodeOrder [set "::Tree::${tree}.allChildren"]
    }

    if {$state(-inCallFlag) == 1} then {
      # don't do an inCall after the last node, so -2
      set maxInCallNode [expr {[llength $nodeOrder] - 2}]
      # must do inCall after child 0
      incr maxInCallNode [expr $maxInCallNode < 0]
    } else {
      set maxInCallNode $state(-inCallFlag)
    }
    
    set nodeCount 0
    
    # perform the pre call if needed
    if {$state(-preFlag)} then {
      set returnData [uplevel $uplevelCall $state(-preCall) $tree $depth]
      if {![string equal "" $returnData]} then {
        return $returnData
      }
    }
        
    foreach childNode $nodeOrder {
    
      # can only be valid nodes or ""
      if {![string equal "" $childNode]} then {
        set returnData [::Tree::internalDepthWalk $childNode state [expr {$depth + 1}]]
        if {![string equal "" $returnData]} then {
          return $returnData
        }
      }

      # if an inCall is required
      if {$nodeCount <= $maxInCallNode} then {

        # in order call
        set returnData [uplevel $uplevelCall $state(-inCall) $tree $depth $nodeCount]
        if {![string equal "" $returnData]} then {
          return $returnData
        }
        incr nodeCount
      }
    }
    
    if {$state(-postFlag)} then {
      # post order call
      set returnData [uplevel $uplevelCall $state(-postCall) $tree $depth]
      if {![string equal "" $returnData]} then {
        return $returnData
      }
    }
  }
  return ""
}


# ---------------------------------------------------------- internalLevelWalk
proc ::Tree::internalLevelWalk { tree stateVar } {
  upvar $stateVar state

  # -- queues for nodes to still visit
  #    use indirection to avoid copying large lists around
  set queue(1) $tree
  set queue(2) ""
  set workingQueue 2
  set pendingQueue 1
  set depth 0

  while {[llength $queue($pendingQueue)] > 0} {
    # move the pending queue into the working queue
    set tempQueue $workingQueue
    set workingQueue $pendingQueue
    set pendingQueue $tempQueue
    set queue($pendingQueue) ""

    foreach tree $queue($workingQueue) {
      if {$state(-preFlag)} then {
        set returnData [uplevel 2 $state(-preCall) $tree $depth]
        if {![string equal "" $returnData]} then {
          return $returnData
        }
      }
      if {$state(-inFlag)} then {
        set returnData [uplevel 2 $state(-inCall) $tree $depth]
        if {![string equal "" $returnData]} then {
          return $returnData
        }
      }
      if {$state(-postFlag)} then {
        set returnData [uplevel 2 $state(-postCall) $tree $depth]
        if {![string equal "" $returnData]} then {
          return $returnData
        }
      }

      if {![::Tree::isLeaf $tree]} then {
 
        # create a list of children to traverse
        array set includeNodes {}
    
        if {$state(-sortFlag)} then {
          upvar 0 "::Tree::${tree}.children" nodeChildren
          foreach name [uplevel 2 $state(-sort) \{[array names nodeChildren]\}] {
            if {[info exist nodeChildren($name)]} then {
              set includeNodes($name) 1
              foreach child $nodeChildren($name) {
                lappend queue($pendingQueue) $child
              }
            } else {
              lappend queue($pendingQueue) ""
            }
          }
          # find nodes that are not yet included in the nodeOrder
          if {$state(-authoritative) == 0} then {
            foreach {name children} [array get nodeChildren] {
              if {![info exist includeNodes($name)]} then {
                foreach child $children {
                  lappend queue($pendingQueue) $child
                }
              }
            }
          }
        } elseif {$state(-orderFlag) || $state(-arrangeFlag)} {
          upvar 0 "::Tree::${tree}.children" nodeChildren
          # create a list of children to traverse
          if {$state(-orderFlag)} {
            set startOrder $state(-order)
          } else {
            set startOrder [uplevel 2 $state(-arrange) $tree]
          }
          foreach name $startOrder {
            if {[info exist nodeChildren($name)]} then {
              set includeNodes($name) 1
              foreach child $nodeChildren($name) {
                lappend queue($pendingQueue) $child
              }
            }
          }
          # find nodes that are not yet included in the nodeOrder
          if {$state(-authoritative) == 0} then {
            foreach {name children} [array get nodeChildren] {
              if {![info exist includeNodes($name)]} then {
                foreach child $children {
                  lappend queue($pendingQueue) $child
                }
              }
            }
          }
        } else {
          foreach child [set "::Tree::${tree}.allChildren"] {
            lappend queue($pendingQueue) $child
          }
        }
      }
    }
    incr depth
  }
  return ""
}
