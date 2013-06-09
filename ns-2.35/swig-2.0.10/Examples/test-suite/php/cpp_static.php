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
if (!extension_loaded('cpp_static')) {
  if (strtolower(substr(PHP_OS, 0, 3)) === 'win') {
    if (!dl('php_cpp_static.dll')) return;
  } else {
    // PHP_SHLIB_SUFFIX gives 'dylib' on MacOS X but modules are 'so'.
    if (PHP_SHLIB_SUFFIX === 'dylib') {
      if (!dl('cpp_static.so')) return;
    } else {
      if (!dl('cpp_static.'.PHP_SHLIB_SUFFIX)) return;
    }
  }
}



/* PHP Proxy Classes */
class StaticMemberTest {
	public $_cPtr=null;
	protected $_pData=array();

	function __set($var,$value) {
		if ($var === 'thisown') return swig_cpp_static_alter_newobject($this->_cPtr,$value);
		$this->_pData[$var] = $value;
	}

	function __isset($var) {
		if ($var === 'thisown') return true;
		return array_key_exists($var, $this->_pData);
	}

	function __get($var) {
		if ($var === 'thisown') return swig_cpp_static_get_newobject($this->_cPtr);
		return $this->_pData[$var];
	}

	static function static_int() {
		if (func_num_args()) {
			StaticMemberTest_static_int_set(func_get_arg(0));
			return;
		}

		return StaticMemberTest_static_int_get();
	}

	function __construct($res=null) {
		if (is_resource($res) && get_resource_type($res) === '_p_StaticMemberTest') {
			$this->_cPtr=$res;
			return;
		}
		$this->_cPtr=new_StaticMemberTest();
	}
}

class StaticFunctionTest {
	public $_cPtr=null;
	protected $_pData=array();

	function __set($var,$value) {
		if ($var === 'thisown') return swig_cpp_static_alter_newobject($this->_cPtr,$value);
		$this->_pData[$var] = $value;
	}

	function __isset($var) {
		if ($var === 'thisown') return true;
		return array_key_exists($var, $this->_pData);
	}

	function __get($var) {
		if ($var === 'thisown') return swig_cpp_static_get_newobject($this->_cPtr);
		return $this->_pData[$var];
	}

	static function static_func() {
		StaticFunctionTest_static_func();
	}

	static function static_func_2($param_1) {
		StaticFunctionTest_static_func_2($param_1);
	}

	static function static_func_3($param_1,$param_2) {
		StaticFunctionTest_static_func_3($param_1,$param_2);
	}

	function __construct($res=null) {
		if (is_resource($res) && get_resource_type($res) === '_p_StaticFunctionTest') {
			$this->_cPtr=$res;
			return;
		}
		$this->_cPtr=new_StaticFunctionTest();
	}
}


?>