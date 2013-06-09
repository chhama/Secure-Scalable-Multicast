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
if (!extension_loaded('operator_pointer_ref')) {
  if (strtolower(substr(PHP_OS, 0, 3)) === 'win') {
    if (!dl('php_operator_pointer_ref.dll')) return;
  } else {
    // PHP_SHLIB_SUFFIX gives 'dylib' on MacOS X but modules are 'so'.
    if (PHP_SHLIB_SUFFIX === 'dylib') {
      if (!dl('operator_pointer_ref.so')) return;
    } else {
      if (!dl('operator_pointer_ref.'.PHP_SHLIB_SUFFIX)) return;
    }
  }
}



/* PHP Proxy Classes */
class MyClass {
	public $_cPtr=null;
	protected $_pData=array();

	function __set($var,$value) {
		if ($var === 'thisown') return swig_operator_pointer_ref_alter_newobject($this->_cPtr,$value);
		$this->_pData[$var] = $value;
	}

	function __isset($var) {
		if ($var === 'thisown') return true;
		return array_key_exists($var, $this->_pData);
	}

	function __get($var) {
		if ($var === 'thisown') return swig_operator_pointer_ref_get_newobject($this->_cPtr);
		return $this->_pData[$var];
	}

	function __construct($s_="") {
		if (is_resource($s_) && get_resource_type($s_) === '_p_MyClass') {
			$this->_cPtr=$s_;
			return;
		}
		$this->_cPtr=new_MyClass($s_);
	}

	function AsCharStarRef() {
		return MyClass_AsCharStarRef($this->_cPtr);
	}
}


?>