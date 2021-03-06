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
if (!extension_loaded('threads_exception')) {
  if (strtolower(substr(PHP_OS, 0, 3)) === 'win') {
    if (!dl('php_threads_exception.dll')) return;
  } else {
    // PHP_SHLIB_SUFFIX gives 'dylib' on MacOS X but modules are 'so'.
    if (PHP_SHLIB_SUFFIX === 'dylib') {
      if (!dl('threads_exception.so')) return;
    } else {
      if (!dl('threads_exception.'.PHP_SHLIB_SUFFIX)) return;
    }
  }
}



/* PHP Proxy Classes */
class Exc extends Exception {
	public $_cPtr=null;
	protected $_pData=array();

	function __set($var,$value) {
		if ($var === 'code') return Exc_code_set($this->_cPtr,$value);
		if ($var === 'msg') return Exc_msg_set($this->_cPtr,$value);
		if ($var === 'thisown') return swig_threads_exception_alter_newobject($this->_cPtr,$value);
		$this->_pData[$var] = $value;
	}

	function __isset($var) {
		if (function_exists('Exc_'.$var.'_set')) return true;
		if ($var === 'thisown') return true;
		return array_key_exists($var, $this->_pData);
	}

	function __get($var) {
		if ($var === 'code') return Exc_code_get($this->_cPtr);
		if ($var === 'msg') return Exc_msg_get($this->_cPtr);
		if ($var === 'thisown') return swig_threads_exception_get_newobject($this->_cPtr);
		return $this->_pData[$var];
	}

	function __construct($c_,$m) {
		if (is_resource($c_) && get_resource_type($c_) === '_p_Exc') {
			$this->_cPtr=$c_;
			return;
		}
		$this->_cPtr=new_Exc($c_,$m);
	}
}

class Test {
	public $_cPtr=null;
	protected $_pData=array();

	function __set($var,$value) {
		if ($var === 'thisown') return swig_threads_exception_alter_newobject($this->_cPtr,$value);
		$this->_pData[$var] = $value;
	}

	function __isset($var) {
		if ($var === 'thisown') return true;
		return array_key_exists($var, $this->_pData);
	}

	function __get($var) {
		if ($var === 'thisown') return swig_threads_exception_get_newobject($this->_cPtr);
		return $this->_pData[$var];
	}

	function simple() {
		return Test_simple($this->_cPtr);
	}

	function message() {
		return Test_message($this->_cPtr);
	}

	function hosed() {
		return Test_hosed($this->_cPtr);
	}

	function unknown() {
		return Test_unknown($this->_cPtr);
	}

	function multi($x) {
		return Test_multi($this->_cPtr,$x);
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
