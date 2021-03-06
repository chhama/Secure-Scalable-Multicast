<?php

/* ----------------------------------------------------------------------------
 * This file was automatically generated by SWIG (http://www.swig.org).
 * Version 2.0.10
 * 
 * This file is not intended to be easily readable and contains a number of 
 * coding conventions designed to improve portability and efficiency. Do not make
 * changes to this file unless you know what you are doing--modify the SWIG 
 * interface file instead. 
 * ----------------------------------------------------------------------------- */

// Try to load our extension if it's not already loaded.
if (!extension_loaded('template_typedef_inherit')) {
  if (strtolower(substr(PHP_OS, 0, 3)) === 'win') {
    if (!dl('php_template_typedef_inherit.dll')) return;
  } else {
    // PHP_SHLIB_SUFFIX gives 'dylib' on MacOS X but modules are 'so'.
    if (PHP_SHLIB_SUFFIX === 'dylib') {
      if (!dl('template_typedef_inherit.so')) return;
    } else {
      if (!dl('template_typedef_inherit.'.PHP_SHLIB_SUFFIX)) return;
    }
  }
}



/* PHP Proxy Classes */
class StringPersistentCollection {
	public $_cPtr=null;
	protected $_pData=array();

	function __set($var,$value) {
		if ($var === 'thisown') return swig_template_typedef_inherit_alter_newobject($this->_cPtr,$value);
		$this->_pData[$var] = $value;
	}

	function __isset($var) {
		if ($var === 'thisown') return true;
		return array_key_exists($var, $this->_pData);
	}

	function __get($var) {
		if ($var === 'thisown') return swig_template_typedef_inherit_get_newobject($this->_cPtr);
		return $this->_pData[$var];
	}

	function add($elt) {
		StringPersistentCollection_add($this->_cPtr,$elt);
	}

	function __construct($res=null) {
		if (is_resource($res) && get_resource_type($res) === '_p_Type__PersistentCollectionT_std__string_t') {
			$this->_cPtr=$res;
			return;
		}
		$this->_cPtr=new_StringPersistentCollection();
	}
}

class DescriptionImplementation extends StringPersistentCollection {
	public $_cPtr=null;

	function __set($var,$value) {
		if ($var === 'thisown') return swig_template_typedef_inherit_alter_newobject($this->_cPtr,$value);
		StringPersistentCollection::__set($var,$value);
	}

	function __isset($var) {
		if ($var === 'thisown') return true;
		return StringPersistentCollection::__isset($var);
	}

	function __get($var) {
		if ($var === 'thisown') return swig_template_typedef_inherit_get_newobject($this->_cPtr);
		return StringPersistentCollection::__get($var);
	}

	function __construct($res=null) {
		if (is_resource($res) && get_resource_type($res) === '_p_Type__DescriptionImplementation') {
			$this->_cPtr=$res;
			return;
		}
		$this->_cPtr=new_DescriptionImplementation();
	}
}

class DescriptionImplementationTypedInterfaceObject {
	public $_cPtr=null;
	protected $_pData=array();

	function __set($var,$value) {
		if ($var === 'thisown') return swig_template_typedef_inherit_alter_newobject($this->_cPtr,$value);
		$this->_pData[$var] = $value;
	}

	function __isset($var) {
		if ($var === 'thisown') return true;
		return array_key_exists($var, $this->_pData);
	}

	function __get($var) {
		if ($var === 'thisown') return swig_template_typedef_inherit_get_newobject($this->_cPtr);
		return $this->_pData[$var];
	}

	function __construct($res=null) {
		if (is_resource($res) && get_resource_type($res) === '_p_Type__TypedInterfaceObjectT_Type__DescriptionImplementation_t') {
			$this->_cPtr=$res;
			return;
		}
		$this->_cPtr=new_DescriptionImplementationTypedInterfaceObject();
	}
}

class DescriptionImplementationTypedCollectionInterfaceObject extends DescriptionImplementationTypedInterfaceObject {
	public $_cPtr=null;

	function __set($var,$value) {
		if ($var === 'thisown') return swig_template_typedef_inherit_alter_newobject($this->_cPtr,$value);
		DescriptionImplementationTypedInterfaceObject::__set($var,$value);
	}

	function __isset($var) {
		if ($var === 'thisown') return true;
		return DescriptionImplementationTypedInterfaceObject::__isset($var);
	}

	function __get($var) {
		if ($var === 'thisown') return swig_template_typedef_inherit_get_newobject($this->_cPtr);
		return DescriptionImplementationTypedInterfaceObject::__get($var);
	}

	function add($elt) {
		DescriptionImplementationTypedCollectionInterfaceObject_add($this->_cPtr,$elt);
	}

	function __construct($res=null) {
		if (is_resource($res) && get_resource_type($res) === '_p_Type__TypedCollectionInterfaceObjectT_Type__DescriptionImplementation_t') {
			$this->_cPtr=$res;
			return;
		}
		$this->_cPtr=new_DescriptionImplementationTypedCollectionInterfaceObject();
	}
}


?>
