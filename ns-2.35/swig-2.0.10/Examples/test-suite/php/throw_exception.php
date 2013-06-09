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
if (!extension_loaded('throw_exception')) {
  if (strtolower(substr(PHP_OS, 0, 3)) === 'win') {
    if (!dl('php_throw_exception.dll')) return;
  } else {
    // PHP_SHLIB_SUFFIX gives 'dylib' on MacOS X but modules are 'so'.
    if (PHP_SHLIB_SUFFIX === 'dylib') {
      if (!dl('throw_exception.so')) return;
    } else {
      if (!dl('throw_exception.'.PHP_SHLIB_SUFFIX)) return;
    }
  }
}



abstract class throw_exception {
	static function test_is_Error($r_) {
		test_is_Error($r_);
	}

	const enum1 = 0;

	const enum2 = enum2;
}

/* PHP Proxy Classes */
class Error extends Exception {
	public $_cPtr=null;
	protected $_pData=array();

	function __set($var,$value) {
		if ($var === 'thisown') return swig_throw_exception_alter_newobject($this->_cPtr,$value);
		$this->_pData[$var] = $value;
	}

	function __isset($var) {
		if ($var === 'thisown') return true;
		return array_key_exists($var, $this->_pData);
	}

	function __get($var) {
		if ($var === 'thisown') return swig_throw_exception_get_newobject($this->_cPtr);
		return $this->_pData[$var];
	}

	function __construct($res=null) {
		if (is_resource($res) && get_resource_type($res) === '_p_Error') {
			$this->_cPtr=$res;
			return;
		}
		$this->_cPtr=new_Error();
	}
}

class Foo {
	public $_cPtr=null;
	protected $_pData=array();

	function __set($var,$value) {
		if ($var === 'thisown') return swig_throw_exception_alter_newobject($this->_cPtr,$value);
		$this->_pData[$var] = $value;
	}

	function __isset($var) {
		if ($var === 'thisown') return true;
		return array_key_exists($var, $this->_pData);
	}

	function __get($var) {
		if ($var === 'thisown') return swig_throw_exception_get_newobject($this->_cPtr);
		return $this->_pData[$var];
	}

	function test_int() {
		Foo_test_int($this->_cPtr);
	}

	function test_msg() {
		Foo_test_msg($this->_cPtr);
	}

	function test_cls() {
		Foo_test_cls($this->_cPtr);
	}

	function test_cls_ptr() {
		Foo_test_cls_ptr($this->_cPtr);
	}

	function test_cls_ref() {
		Foo_test_cls_ref($this->_cPtr);
	}

	function test_cls_td() {
		Foo_test_cls_td($this->_cPtr);
	}

	function test_cls_ptr_td() {
		Foo_test_cls_ptr_td($this->_cPtr);
	}

	function test_cls_ref_td() {
		Foo_test_cls_ref_td($this->_cPtr);
	}

	function test_array() {
		Foo_test_array($this->_cPtr);
	}

	function test_enum() {
		Foo_test_enum($this->_cPtr);
	}

	function test_multi($x) {
		Foo_test_multi($this->_cPtr,$x);
	}

	function __construct($res=null) {
		if (is_resource($res) && get_resource_type($res) === '_p_Foo') {
			$this->_cPtr=$res;
			return;
		}
		$this->_cPtr=new_Foo();
	}
}


?>