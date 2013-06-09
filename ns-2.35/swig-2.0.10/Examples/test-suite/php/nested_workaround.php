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
if (!extension_loaded('nested_workaround')) {
  if (strtolower(substr(PHP_OS, 0, 3)) === 'win') {
    if (!dl('php_nested_workaround.dll')) return;
  } else {
    // PHP_SHLIB_SUFFIX gives 'dylib' on MacOS X but modules are 'so'.
    if (PHP_SHLIB_SUFFIX === 'dylib') {
      if (!dl('nested_workaround.so')) return;
    } else {
      if (!dl('nested_workaround.'.PHP_SHLIB_SUFFIX)) return;
    }
  }
}



/* PHP Proxy Classes */
class Inner {
	public $_cPtr=null;
	protected $_pData=array();

	function __set($var,$value) {
		if ($var === 'thisown') return swig_nested_workaround_alter_newobject($this->_cPtr,$value);
		$this->_pData[$var] = $value;
	}

	function __isset($var) {
		if ($var === 'thisown') return true;
		return array_key_exists($var, $this->_pData);
	}

	function __get($var) {
		if ($var === 'thisown') return swig_nested_workaround_get_newobject($this->_cPtr);
		return $this->_pData[$var];
	}

	function __construct($v=0) {
		if (is_resource($v) && get_resource_type($v) === '_p_Inner') {
			$this->_cPtr=$v;
			return;
		}
		$this->_cPtr=new_Inner($v);
	}

	function setValue($v) {
		Inner_setValue($this->_cPtr,$v);
	}

	function getValue() {
		return Inner_getValue($this->_cPtr);
	}
}

class Outer {
	public $_cPtr=null;
	protected $_pData=array();

	function __set($var,$value) {
		if ($var === 'thisown') return swig_nested_workaround_alter_newobject($this->_cPtr,$value);
		$this->_pData[$var] = $value;
	}

	function __isset($var) {
		if ($var === 'thisown') return true;
		return array_key_exists($var, $this->_pData);
	}

	function __get($var) {
		if ($var === 'thisown') return swig_nested_workaround_get_newobject($this->_cPtr);
		return $this->_pData[$var];
	}

	function createInner($v) {
		$r=Outer_createInner($this->_cPtr,$v);
		if (is_resource($r)) {
			$c=substr(get_resource_type($r), (strpos(get_resource_type($r), '__') ? strpos(get_resource_type($r), '__') + 2 : 3));
			if (class_exists($c)) return new $c($r);
			return new Inner($r);
		}
		return $r;
	}

	function getInnerValue($i) {
		return Outer_getInnerValue($this->_cPtr,$i);
	}

	function doubleInnerValue($inner) {
		$r=Outer_doubleInnerValue($this->_cPtr,$inner);
		if (is_resource($r)) {
			$c=substr(get_resource_type($r), (strpos(get_resource_type($r), '__') ? strpos(get_resource_type($r), '__') + 2 : 3));
			if (class_exists($c)) return new $c($r);
			return new Inner($r);
		}
		return $r;
	}

	function __construct($res=null) {
		if (is_resource($res) && get_resource_type($res) === '_p_Outer') {
			$this->_cPtr=$res;
			return;
		}
		$this->_cPtr=new_Outer();
	}
}


?>
