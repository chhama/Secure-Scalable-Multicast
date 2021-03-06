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
if (!extension_loaded('overload_simple')) {
  if (strtolower(substr(PHP_OS, 0, 3)) === 'win') {
    if (!dl('php_overload_simple.dll')) return;
  } else {
    // PHP_SHLIB_SUFFIX gives 'dylib' on MacOS X but modules are 'so'.
    if (PHP_SHLIB_SUFFIX === 'dylib') {
      if (!dl('overload_simple.so')) return;
    } else {
      if (!dl('overload_simple.'.PHP_SHLIB_SUFFIX)) return;
    }
  }
}



abstract class overload_simple {
	static function foo($arg1=null,$arg2=null) {
		switch (func_num_args()) {
		case 0: $r=foo(); break;
		case 1: $r=foo($arg1); break;
		default: $r=foo($arg1,$arg2);
		}
		return $r;
	}

	static function blah($arg1) {
		return blah($arg1);
	}

	static function fbool($b) {
		return fbool($b);
	}

	static function fint($arg1) {
		return fint($arg1);
	}

	static function fdouble($arg1) {
		return fdouble($arg1);
	}

	static function num($arg1) {
		return num($arg1);
	}

	static function fid($arg1,$arg2) {
		return fid($arg1,$arg2);
	}

	static function ull($ull=null) {
		switch (func_num_args()) {
		case 0: $r=ull(); break;
		default: $r=ull($ull);
		}
		return $r;
	}

	static function ll($ull=null) {
		switch (func_num_args()) {
		case 0: $r=ll(); break;
		default: $r=ll($ull);
		}
		return $r;
	}

	static function malloc_void($nbytes) {
		return malloc_void($nbytes);
	}

	static function free_void($ptr) {
		free_void($ptr);
	}

	static function int_object($s_or_c) {
		return int_object($s_or_c);
	}
}

/* PHP Proxy Classes */
class Foo {
	public $_cPtr=null;
	protected $_pData=array();

	function __set($var,$value) {
		if ($var === 'thisown') return swig_overload_simple_alter_newobject($this->_cPtr,$value);
		$this->_pData[$var] = $value;
	}

	function __isset($var) {
		if ($var === 'thisown') return true;
		return array_key_exists($var, $this->_pData);
	}

	function __get($var) {
		if ($var === 'thisown') return swig_overload_simple_get_newobject($this->_cPtr);
		return $this->_pData[$var];
	}

	function __construct($res=null) {
		if (is_resource($res) && get_resource_type($res) === '_p_Foo') {
			$this->_cPtr=$res;
			return;
		}
		$this->_cPtr=new_Foo();
	}
}

class Bar {
	public $_cPtr=null;
	protected $_pData=array();

	function __set($var,$value) {
		if ($var === 'num') return Bar_num_set($this->_cPtr,$value);
		if ($var === 'thisown') return swig_overload_simple_alter_newobject($this->_cPtr,$value);
		$this->_pData[$var] = $value;
	}

	function __isset($var) {
		if (function_exists('Bar_'.$var.'_set')) return true;
		if ($var === 'thisown') return true;
		return array_key_exists($var, $this->_pData);
	}

	function __get($var) {
		if ($var === 'num') return Bar_num_get($this->_cPtr);
		if ($var === 'thisown') return swig_overload_simple_get_newobject($this->_cPtr);
		return $this->_pData[$var];
	}

	function __construct($i=0) {
		if (is_resource($i) && get_resource_type($i) === '_p_Bar') {
			$this->_cPtr=$i;
			return;
		}
		$this->_cPtr=new_Bar($i);
	}

	static function foo($a=0,$b=0) {
		return Bar_foo($a,$b);
	}
}

class Spam {
	public $_cPtr=null;
	protected $_pData=array();

	function __set($var,$value) {
		if ($var === 'thisown') return swig_overload_simple_alter_newobject($this->_cPtr,$value);
		$this->_pData[$var] = $value;
	}

	function __isset($var) {
		if ($var === 'thisown') return true;
		return array_key_exists($var, $this->_pData);
	}

	function __get($var) {
		if ($var === 'type') return Spam_type_get($this->_cPtr);
		if ($var === 'thisown') return swig_overload_simple_get_newobject($this->_cPtr);
		return $this->_pData[$var];
	}

	function __construct($arg1=null) {
		if (is_resource($arg1) && get_resource_type($arg1) === '_p_Spam') {
			$this->_cPtr=$arg1;
			return;
		}
		switch (func_num_args()) {
		case 0: $this->_cPtr=new_Spam(); break;
		default: $this->_cPtr=new_Spam($arg1);
		}
	}

	function foo($arg1) {
		return Spam_foo($this->_cPtr,$arg1);
	}

	static function bar($arg1) {
		return Spam_bar($arg1);
	}
}

class ClassA {
	public $_cPtr=null;
	protected $_pData=array();

	function __set($var,$value) {
		if ($var === 'thisown') return swig_overload_simple_alter_newobject($this->_cPtr,$value);
		$this->_pData[$var] = $value;
	}

	function __isset($var) {
		if ($var === 'thisown') return true;
		return array_key_exists($var, $this->_pData);
	}

	function __get($var) {
		if ($var === 'thisown') return swig_overload_simple_get_newobject($this->_cPtr);
		return $this->_pData[$var];
	}

	function __construct($res=null) {
		if (is_resource($res) && get_resource_type($res) === '_p_ClassA') {
			$this->_cPtr=$res;
			return;
		}
		$this->_cPtr=new_ClassA();
	}

	function method1($arg1=null) {
		switch (func_num_args()) {
		case 0: $r=ClassA_method1($this->_cPtr); break;
		default: $r=ClassA_method1($this->_cPtr,$arg1);
		}
		return $r;
	}
}


?>
