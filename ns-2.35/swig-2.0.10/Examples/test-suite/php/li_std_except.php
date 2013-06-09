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
if (!extension_loaded('li_std_except')) {
  if (strtolower(substr(PHP_OS, 0, 3)) === 'win') {
    if (!dl('php_li_std_except.dll')) return;
  } else {
    // PHP_SHLIB_SUFFIX gives 'dylib' on MacOS X but modules are 'so'.
    if (PHP_SHLIB_SUFFIX === 'dylib') {
      if (!dl('li_std_except.so')) return;
    } else {
      if (!dl('li_std_except.'.PHP_SHLIB_SUFFIX)) return;
    }
  }
}



/* PHP Proxy Classes */
class E1 extends Exception {
	public $_cPtr=null;
	protected $_pData=array();

	function __set($var,$value) {
		if ($var === 'thisown') return swig_li_std_except_alter_newobject($this->_cPtr,$value);
		$this->_pData[$var] = $value;
	}

	function __isset($var) {
		if ($var === 'thisown') return true;
		return array_key_exists($var, $this->_pData);
	}

	function __get($var) {
		if ($var === 'thisown') return swig_li_std_except_get_newobject($this->_cPtr);
		return $this->_pData[$var];
	}

	function __construct($res=null) {
		if (is_resource($res) && get_resource_type($res) === '_p_E1') {
			$this->_cPtr=$res;
			return;
		}
		$this->_cPtr=new_E1();
	}
}

class E2 extends Exception {
	public $_cPtr=null;
	protected $_pData=array();

	function __set($var,$value) {
		if ($var === 'thisown') return swig_li_std_except_alter_newobject($this->_cPtr,$value);
		$this->_pData[$var] = $value;
	}

	function __isset($var) {
		if ($var === 'thisown') return true;
		return array_key_exists($var, $this->_pData);
	}

	function __get($var) {
		if ($var === 'thisown') return swig_li_std_except_get_newobject($this->_cPtr);
		return $this->_pData[$var];
	}

	function __construct($res=null) {
		if (is_resource($res) && get_resource_type($res) === '_p_E2') {
			$this->_cPtr=$res;
			return;
		}
		$this->_cPtr=new_E2();
	}
}

class Test {
	public $_cPtr=null;
	protected $_pData=array();

	function __set($var,$value) {
		if ($var === 'thisown') return swig_li_std_except_alter_newobject($this->_cPtr,$value);
		$this->_pData[$var] = $value;
	}

	function __isset($var) {
		if ($var === 'thisown') return true;
		return array_key_exists($var, $this->_pData);
	}

	function __get($var) {
		if ($var === 'thisown') return swig_li_std_except_get_newobject($this->_cPtr);
		return $this->_pData[$var];
	}

	function foo1() {
		return Test_foo1($this->_cPtr);
	}

	function foo2() {
		return Test_foo2($this->_cPtr);
	}

	function foo3() {
		return Test_foo3($this->_cPtr);
	}

	function foo4() {
		return Test_foo4($this->_cPtr);
	}

	function throw_bad_exception() {
		Test_throw_bad_exception($this->_cPtr);
	}

	function throw_domain_error() {
		Test_throw_domain_error($this->_cPtr);
	}

	function throw_exception() {
		Test_throw_exception($this->_cPtr);
	}

	function throw_invalid_argument() {
		Test_throw_invalid_argument($this->_cPtr);
	}

	function throw_length_error() {
		Test_throw_length_error($this->_cPtr);
	}

	function throw_logic_error() {
		Test_throw_logic_error($this->_cPtr);
	}

	function throw_out_of_range() {
		Test_throw_out_of_range($this->_cPtr);
	}

	function throw_overflow_error() {
		Test_throw_overflow_error($this->_cPtr);
	}

	function throw_range_error() {
		Test_throw_range_error($this->_cPtr);
	}

	function throw_runtime_error() {
		Test_throw_runtime_error($this->_cPtr);
	}

	function throw_underflow_error() {
		Test_throw_underflow_error($this->_cPtr);
	}

	function __construct($res=null) {
		if (is_resource($res) && get_resource_type($res) === '_p_Test') {
			$this->_cPtr=$res;
			return;
		}
		$this->_cPtr=new_Test();
	}
}


?>
