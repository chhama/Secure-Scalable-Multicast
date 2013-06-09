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
if (!extension_loaded('director_string')) {
  if (strtolower(substr(PHP_OS, 0, 3)) === 'win') {
    if (!dl('php_director_string.dll')) return;
  } else {
    // PHP_SHLIB_SUFFIX gives 'dylib' on MacOS X but modules are 'so'.
    if (PHP_SHLIB_SUFFIX === 'dylib') {
      if (!dl('director_string.so')) return;
    } else {
      if (!dl('director_string.'.PHP_SHLIB_SUFFIX)) return;
    }
  }
}



/* PHP Proxy Classes */
class A {
	public $_cPtr=null;
	protected $_pData=array();

	function __set($var,$value) {
		if ($var === 'm_strings') return A_m_strings_set($this->_cPtr,$value);
		if ($var === 'thisown') return swig_director_string_alter_newobject($this->_cPtr,$value);
		$this->_pData[$var] = $value;
	}

	function __isset($var) {
		if (function_exists('A_'.$var.'_set')) return true;
		if ($var === 'thisown') return true;
		return array_key_exists($var, $this->_pData);
	}

	function __get($var) {
		if ($var === 'm_strings') return new StringVector(A_m_strings_get($this->_cPtr));
		if ($var === 'thisown') return swig_director_string_get_newobject($this->_cPtr);
		return $this->_pData[$var];
	}

	function __construct($first) {
		if (is_resource($first) && get_resource_type($first) === '_p_A') {
			$this->_cPtr=$first;
			return;
		}
		if (get_class($this) === 'A') {
			$_this = null;
		} else {
			$_this = $this;
		}
		$this->_cPtr=new_A($_this, $first);
	}

	function get_first() {
		return A_get_first($this->_cPtr);
	}

	function get($n) {
		return A_get($this->_cPtr,$n);
	}

	function call_get_first() {
		return A_call_get_first($this->_cPtr);
	}

	function call_get($n) {
		return A_call_get($this->_cPtr,$n);
	}

	function string_length($s) {
		return A_string_length($this->_cPtr,$s);
	}

	function process_text($text) {
		A_process_text($this->_cPtr,$text);
	}

	function call_process_func() {
		A_call_process_func($this->_cPtr);
	}
}

class StringVector {
	public $_cPtr=null;
	protected $_pData=array();

	function __set($var,$value) {
		if ($var === 'thisown') return swig_director_string_alter_newobject($this->_cPtr,$value);
		$this->_pData[$var] = $value;
	}

	function __isset($var) {
		if ($var === 'thisown') return true;
		return array_key_exists($var, $this->_pData);
	}

	function __get($var) {
		if ($var === 'thisown') return swig_director_string_get_newobject($this->_cPtr);
		return $this->_pData[$var];
	}

	function __construct($n=null) {
		if (is_resource($n) && get_resource_type($n) === '_p_std__vectorT_std__string_t') {
			$this->_cPtr=$n;
			return;
		}
		switch (func_num_args()) {
		case 0: $this->_cPtr=new_StringVector(); break;
		default: $this->_cPtr=new_StringVector($n);
		}
	}

	function size() {
		return StringVector_size($this->_cPtr);
	}

	function capacity() {
		return StringVector_capacity($this->_cPtr);
	}

	function reserve($n) {
		StringVector_reserve($this->_cPtr,$n);
	}

	function clear() {
		StringVector_clear($this->_cPtr);
	}

	function push($x) {
		StringVector_push($this->_cPtr,$x);
	}

	function is_empty() {
		return StringVector_is_empty($this->_cPtr);
	}

	function pop() {
		return StringVector_pop($this->_cPtr);
	}

	function get($i) {
		return StringVector_get($this->_cPtr,$i);
	}

	function set($i,$val) {
		StringVector_set($this->_cPtr,$i,$val);
	}
}


?>