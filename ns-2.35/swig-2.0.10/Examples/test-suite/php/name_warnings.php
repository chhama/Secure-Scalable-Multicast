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
if (!extension_loaded('name_warnings')) {
  if (strtolower(substr(PHP_OS, 0, 3)) === 'win') {
    if (!dl('php_name_warnings.dll')) return;
  } else {
    // PHP_SHLIB_SUFFIX gives 'dylib' on MacOS X but modules are 'so'.
    if (PHP_SHLIB_SUFFIX === 'dylib') {
      if (!dl('name_warnings.so')) return;
    } else {
      if (!dl('name_warnings.'.PHP_SHLIB_SUFFIX)) return;
    }
  }
}



abstract class name_warnings {
	static function max_i($a,$b) {
		return max_i($a,$b);
	}

	static function foo($abstract,$out) {
		return foo($abstract,$out);
	}

	static function bar($native,$boolean) {
		return bar($native,$boolean);
	}
}

/* PHP Proxy Classes */
abstract class A {
	public $_cPtr=null;
	protected $_pData=array();

	function __set($var,$value) {
		if ($var === 'thisown') return swig_name_warnings_alter_newobject($this->_cPtr,$value);
		$this->_pData[$var] = $value;
	}

	function __isset($var) {
		if ($var === 'thisown') return true;
		return array_key_exists($var, $this->_pData);
	}

	function __get($var) {
		if ($var === 'thisown') return swig_name_warnings_get_newobject($this->_cPtr);
		return $this->_pData[$var];
	}
	function __construct($h) {
		$this->_cPtr=$h;
	}

	function func() {
		return A_func($this->_cPtr);
	}
}

abstract class B extends A {
	public $_cPtr=null;

	function __set($var,$value) {
		if ($var === 'thisown') return swig_name_warnings_alter_newobject($this->_cPtr,$value);
		A::__set($var,$value);
	}

	function __isset($var) {
		if ($var === 'thisown') return true;
		return A::__isset($var);
	}

	function __get($var) {
		if ($var === 'thisown') return swig_name_warnings_get_newobject($this->_cPtr);
		return A::__get($var);
	}
	function __construct($h) {
		$this->_cPtr=$h;
	}
}


?>