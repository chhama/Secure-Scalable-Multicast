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
if (!extension_loaded('reference_global_vars')) {
  if (strtolower(substr(PHP_OS, 0, 3)) === 'win') {
    if (!dl('php_reference_global_vars.dll')) return;
  } else {
    // PHP_SHLIB_SUFFIX gives 'dylib' on MacOS X but modules are 'so'.
    if (PHP_SHLIB_SUFFIX === 'dylib') {
      if (!dl('reference_global_vars.so')) return;
    } else {
      if (!dl('reference_global_vars.'.PHP_SHLIB_SUFFIX)) return;
    }
  }
}



abstract class reference_global_vars {
	static function getconstTC() {
		$r=getconstTC();
		if (is_resource($r)) {
			$c=substr(get_resource_type($r), (strpos(get_resource_type($r), '__') ? strpos(get_resource_type($r), '__') + 2 : 3));
			if (class_exists($c)) return new $c($r);
			return new TestClass($r);
		}
		return $r;
	}

	static function var_bool_set($var_bool) {
		var_bool_set($var_bool);
	}

	static function var_bool_get() {
		return var_bool_get();
	}

	static function setref_bool($x) {
		return setref_bool($x);
	}

	static function createref_bool($x) {
		return createref_bool($x);
	}

	static function value_bool($x) {
		return value_bool($x);
	}

	static function var_char_set($var_char) {
		var_char_set($var_char);
	}

	static function var_char_get() {
		return var_char_get();
	}

	static function setref_char($x) {
		return setref_char($x);
	}

	static function createref_char($x) {
		return createref_char($x);
	}

	static function value_char($x) {
		return value_char($x);
	}

	static function var_unsigned_char_set($var_unsigned_char) {
		var_unsigned_char_set($var_unsigned_char);
	}

	static function var_unsigned_char_get() {
		return var_unsigned_char_get();
	}

	static function setref_unsigned_char($x) {
		return setref_unsigned_char($x);
	}

	static function createref_unsigned_char($x) {
		return createref_unsigned_char($x);
	}

	static function value_unsigned_char($x) {
		return value_unsigned_char($x);
	}

	static function var_signed_char_set($var_signed_char) {
		var_signed_char_set($var_signed_char);
	}

	static function var_signed_char_get() {
		return var_signed_char_get();
	}

	static function setref_signed_char($x) {
		return setref_signed_char($x);
	}

	static function createref_signed_char($x) {
		return createref_signed_char($x);
	}

	static function value_signed_char($x) {
		return value_signed_char($x);
	}

	static function var_short_set($var_short) {
		var_short_set($var_short);
	}

	static function var_short_get() {
		return var_short_get();
	}

	static function setref_short($x) {
		return setref_short($x);
	}

	static function createref_short($x) {
		return createref_short($x);
	}

	static function value_short($x) {
		return value_short($x);
	}

	static function var_unsigned_short_set($var_unsigned_short) {
		var_unsigned_short_set($var_unsigned_short);
	}

	static function var_unsigned_short_get() {
		return var_unsigned_short_get();
	}

	static function setref_unsigned_short($x) {
		return setref_unsigned_short($x);
	}

	static function createref_unsigned_short($x) {
		return createref_unsigned_short($x);
	}

	static function value_unsigned_short($x) {
		return value_unsigned_short($x);
	}

	static function var_int_set($var_int) {
		var_int_set($var_int);
	}

	static function var_int_get() {
		return var_int_get();
	}

	static function setref_int($x) {
		return setref_int($x);
	}

	static function createref_int($x) {
		return createref_int($x);
	}

	static function value_int($x) {
		return value_int($x);
	}

	static function var_unsigned_int_set($var_unsigned_int) {
		var_unsigned_int_set($var_unsigned_int);
	}

	static function var_unsigned_int_get() {
		return var_unsigned_int_get();
	}

	static function setref_unsigned_int($x) {
		return setref_unsigned_int($x);
	}

	static function createref_unsigned_int($x) {
		return createref_unsigned_int($x);
	}

	static function value_unsigned_int($x) {
		return value_unsigned_int($x);
	}

	static function var_long_set($var_long) {
		var_long_set($var_long);
	}

	static function var_long_get() {
		return var_long_get();
	}

	static function setref_long($x) {
		return setref_long($x);
	}

	static function createref_long($x) {
		return createref_long($x);
	}

	static function value_long($x) {
		return value_long($x);
	}

	static function var_unsigned_long_set($var_unsigned_long) {
		var_unsigned_long_set($var_unsigned_long);
	}

	static function var_unsigned_long_get() {
		return var_unsigned_long_get();
	}

	static function setref_unsigned_long($x) {
		return setref_unsigned_long($x);
	}

	static function createref_unsigned_long($x) {
		return createref_unsigned_long($x);
	}

	static function value_unsigned_long($x) {
		return value_unsigned_long($x);
	}

	static function var_float_set($var_float) {
		var_float_set($var_float);
	}

	static function var_float_get() {
		return var_float_get();
	}

	static function setref_float($x) {
		return setref_float($x);
	}

	static function createref_float($x) {
		return createref_float($x);
	}

	static function value_float($x) {
		return value_float($x);
	}

	static function var_double_set($var_double) {
		var_double_set($var_double);
	}

	static function var_double_get() {
		return var_double_get();
	}

	static function setref_double($x) {
		return setref_double($x);
	}

	static function createref_double($x) {
		return createref_double($x);
	}

	static function value_double($x) {
		return value_double($x);
	}

	static function var_long_long_set($var_long_long) {
		var_long_long_set($var_long_long);
	}

	static function var_long_long_get() {
		return var_long_long_get();
	}

	static function setref_long_long($x) {
		return setref_long_long($x);
	}

	static function createref_long_long($x) {
		return createref_long_long($x);
	}

	static function value_long_long($x) {
		return value_long_long($x);
	}

	static function var_unsigned_long_long_set($var_unsigned_long_long) {
		var_unsigned_long_long_set($var_unsigned_long_long);
	}

	static function var_unsigned_long_long_get() {
		return var_unsigned_long_long_get();
	}

	static function setref_unsigned_long_long($x) {
		return setref_unsigned_long_long($x);
	}

	static function createref_unsigned_long_long($x) {
		return createref_unsigned_long_long($x);
	}

	static function value_unsigned_long_long($x) {
		return value_unsigned_long_long($x);
	}

	static function var_TestClass_set($var_TestClass) {
		var_TestClass_set($var_TestClass);
	}

	static function var_TestClass_get() {
		$r=var_TestClass_get();
		if (is_resource($r)) {
			$c=substr(get_resource_type($r), (strpos(get_resource_type($r), '__') ? strpos(get_resource_type($r), '__') + 2 : 3));
			if (class_exists($c)) return new $c($r);
			return new TestClass($r);
		}
		return $r;
	}

	static function setref_TestClass($x) {
		$r=setref_TestClass($x);
		if (is_resource($r)) {
			$c=substr(get_resource_type($r), (strpos(get_resource_type($r), '__') ? strpos(get_resource_type($r), '__') + 2 : 3));
			if (class_exists($c)) return new $c($r);
			return new TestClass($r);
		}
		return $r;
	}

	static function createref_TestClass($x) {
		$r=createref_TestClass($x);
		if (is_resource($r)) {
			$c=substr(get_resource_type($r), (strpos(get_resource_type($r), '__') ? strpos(get_resource_type($r), '__') + 2 : 3));
			if (class_exists($c)) return new $c($r);
			return new TestClass($r);
		}
		return $r;
	}

	static function value_TestClass($x) {
		$r=value_TestClass($x);
		if (is_resource($r)) {
			$c=substr(get_resource_type($r), (strpos(get_resource_type($r), '__') ? strpos(get_resource_type($r), '__') + 2 : 3));
			if (class_exists($c)) return new $c($r);
			return new TestClass($r);
		}
		return $r;
	}
}

/* PHP Proxy Classes */
class TestClass {
	public $_cPtr=null;
	protected $_pData=array();

	function __set($var,$value) {
		if ($var === 'num') return TestClass_num_set($this->_cPtr,$value);
		if ($var === 'thisown') return swig_reference_global_vars_alter_newobject($this->_cPtr,$value);
		$this->_pData[$var] = $value;
	}

	function __isset($var) {
		if (function_exists('TestClass_'.$var.'_set')) return true;
		if ($var === 'thisown') return true;
		return array_key_exists($var, $this->_pData);
	}

	function __get($var) {
		if ($var === 'num') return TestClass_num_get($this->_cPtr);
		if ($var === 'thisown') return swig_reference_global_vars_get_newobject($this->_cPtr);
		return $this->_pData[$var];
	}

	function __construct($n=0) {
		if (is_resource($n) && get_resource_type($n) === '_p_TestClass') {
			$this->_cPtr=$n;
			return;
		}
		$this->_cPtr=new_TestClass($n);
	}
}


?>
