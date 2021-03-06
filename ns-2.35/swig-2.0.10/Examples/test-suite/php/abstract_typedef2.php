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
if (!extension_loaded('abstract_typedef2')) {
  if (strtolower(substr(PHP_OS, 0, 3)) === 'win') {
    if (!dl('php_abstract_typedef2.dll')) return;
  } else {
    // PHP_SHLIB_SUFFIX gives 'dylib' on MacOS X but modules are 'so'.
    if (PHP_SHLIB_SUFFIX === 'dylib') {
      if (!dl('abstract_typedef2.so')) return;
    } else {
      if (!dl('abstract_typedef2.'.PHP_SHLIB_SUFFIX)) return;
    }
  }
}



abstract class abstract_typedef2 {
	const UnaryField = 0;

	const BinaryField = BinaryField;
}

/* PHP Proxy Classes */
abstract class Base_UF {
	public $_cPtr=null;
	protected $_pData=array();

	function __set($var,$value) {
		if ($var === 'thisown') return swig_abstract_typedef2_alter_newobject($this->_cPtr,$value);
		$this->_pData[$var] = $value;
	}

	function __isset($var) {
		if ($var === 'thisown') return true;
		return array_key_exists($var, $this->_pData);
	}

	function __get($var) {
		if ($var === 'thisown') return swig_abstract_typedef2_get_newobject($this->_cPtr);
		return $this->_pData[$var];
	}
	function __construct($h) {
		$this->_cPtr=$h;
	}

	function set($arg1) {
		return Base_UF_set($this->_cPtr,$arg1);
	}
}

class A_UF extends Base_UF {
	public $_cPtr=null;

	function __set($var,$value) {
		if ($var === 'thisown') return swig_abstract_typedef2_alter_newobject($this->_cPtr,$value);
		Base_UF::__set($var,$value);
	}

	function __isset($var) {
		if ($var === 'thisown') return true;
		return Base_UF::__isset($var);
	}

	function __get($var) {
		if ($var === 'thisown') return swig_abstract_typedef2_get_newobject($this->_cPtr);
		return Base_UF::__get($var);
	}

	function __construct($a=0) {
		if (is_resource($a) && get_resource_type($a) === '_p_AT_UnaryField_t') {
			$this->_cPtr=$a;
			return;
		}
		$this->_cPtr=new_A_UF($a);
	}

	function set($arg1) {
		return A_UF_set($this->_cPtr,$arg1);
	}
}


?>
