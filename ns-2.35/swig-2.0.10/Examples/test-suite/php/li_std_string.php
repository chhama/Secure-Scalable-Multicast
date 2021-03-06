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
if (!extension_loaded('li_std_string')) {
  if (strtolower(substr(PHP_OS, 0, 3)) === 'win') {
    if (!dl('php_li_std_string.dll')) return;
  } else {
    // PHP_SHLIB_SUFFIX gives 'dylib' on MacOS X but modules are 'so'.
    if (PHP_SHLIB_SUFFIX === 'dylib') {
      if (!dl('li_std_string.so')) return;
    } else {
      if (!dl('li_std_string.'.PHP_SHLIB_SUFFIX)) return;
    }
  }
}



abstract class li_std_string {
	static function test_value($x) {
		return test_value($x);
	}

	static function test_const_reference($x) {
		return test_const_reference($x);
	}

	static function test_pointer($x) {
		test_pointer($x);
	}

	static function test_pointer_out() {
		return test_pointer_out();
	}

	static function test_const_pointer($x) {
		test_const_pointer($x);
	}

	static function test_const_pointer_out() {
		return test_const_pointer_out();
	}

	static function test_reference($x) {
		test_reference($x);
	}

	static function test_reference_out() {
		return test_reference_out();
	}

	static function test_reference_input($input) {
		return test_reference_input($input);
	}

	static function test_reference_inout($inout) {
		test_reference_inout($inout);
	}

	static function test_throw() {
		test_throw();
	}

	static function test_const_reference_throw() {
		test_const_reference_throw();
	}

	static function test_pointer_throw() {
		test_pointer_throw();
	}

	static function test_const_pointer_throw() {
		test_const_pointer_throw();
	}

	static function GlobalString_set($GlobalString) {
		GlobalString_set($GlobalString);
	}

	static function GlobalString_get() {
		return GlobalString_get();
	}

	static function GlobalString2_set($GlobalString2) {
		GlobalString2_set($GlobalString2);
	}

	static function GlobalString2_get() {
		return GlobalString2_get();
	}

	static function ConstGlobalString_get() {
		return ConstGlobalString_get();
	}

	static function stdstring_empty() {
		return stdstring_empty();
	}

	static function c_empty() {
		return c_empty();
	}

	static function c_null() {
		return c_null();
	}

	static function get_null($a) {
		return get_null($a);
	}
}

/* PHP Proxy Classes */
class Structure {
	public $_cPtr=null;
	protected $_pData=array();

	function __set($var,$value) {
		if ($var === 'MemberString2') return Structure_MemberString2_set($this->_cPtr,$value);
		if ($var === 'MemberString') return Structure_MemberString_set($this->_cPtr,$value);
		if ($var === 'thisown') return swig_li_std_string_alter_newobject($this->_cPtr,$value);
		$this->_pData[$var] = $value;
	}

	function __isset($var) {
		if (function_exists('Structure_'.$var.'_set')) return true;
		if ($var === 'thisown') return true;
		return array_key_exists($var, $this->_pData);
	}

	function __get($var) {
		$func = 'Structure_'.$var.'_get';
		if (function_exists($func)) return call_user_func($func,$this->_cPtr);
		if ($var === 'thisown') return swig_li_std_string_get_newobject($this->_cPtr);
		return $this->_pData[$var];
	}

	static function StaticMemberString() {
		if (func_num_args()) {
			Structure_StaticMemberString_set(func_get_arg(0));
			return;
		}

		return Structure_StaticMemberString_get();
	}

	static function StaticMemberString2() {
		if (func_num_args()) {
			Structure_StaticMemberString2_set(func_get_arg(0));
			return;
		}

		return Structure_StaticMemberString2_get();
	}

	static function ConstStaticMemberString() {
		return Structure_ConstStaticMemberString_get();
	}

	function __construct($res=null) {
		if (is_resource($res) && get_resource_type($res) === '_p_Structure') {
			$this->_cPtr=$res;
			return;
		}
		$this->_cPtr=new_Structure();
	}
}

class Foo {
	public $_cPtr=null;
	protected $_pData=array();

	function __set($var,$value) {
		if ($var === 'thisown') return swig_li_std_string_alter_newobject($this->_cPtr,$value);
		$this->_pData[$var] = $value;
	}

	function __isset($var) {
		if ($var === 'thisown') return true;
		return array_key_exists($var, $this->_pData);
	}

	function __get($var) {
		if ($var === 'thisown') return swig_li_std_string_get_newobject($this->_cPtr);
		return $this->_pData[$var];
	}

	function test($l) {
		return Foo_test($this->_cPtr,$l);
	}

	function testl($l) {
		return Foo_testl($this->_cPtr,$l);
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
