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
if (!extension_loaded('naturalvar')) {
  if (strtolower(substr(PHP_OS, 0, 3)) === 'win') {
    if (!dl('php_naturalvar.dll')) return;
  } else {
    // PHP_SHLIB_SUFFIX gives 'dylib' on MacOS X but modules are 'so'.
    if (PHP_SHLIB_SUFFIX === 'dylib') {
      if (!dl('naturalvar.so')) return;
    } else {
      if (!dl('naturalvar.'.PHP_SHLIB_SUFFIX)) return;
    }
  }
}



abstract class naturalvar {
	static function f_set($f) {
		f_set($f);
	}

	static function f_get() {
		$r=f_get();
		if (is_resource($r)) {
			$c=substr(get_resource_type($r), (strpos(get_resource_type($r), '__') ? strpos(get_resource_type($r), '__') + 2 : 3));
			if (class_exists($c)) return new $c($r);
			return new Foo($r);
		}
		return $r;
	}

	static function s_set($s) {
		s_set($s);
	}

	static function s_get() {
		return s_get();
	}
}

/* PHP Proxy Classes */
class Foo {
	public $_cPtr=null;
	protected $_pData=array();

	function __set($var,$value) {
		if ($var === 'thisown') return swig_naturalvar_alter_newobject($this->_cPtr,$value);
		$this->_pData[$var] = $value;
	}

	function __isset($var) {
		if ($var === 'thisown') return true;
		return array_key_exists($var, $this->_pData);
	}

	function __get($var) {
		if ($var === 'thisown') return swig_naturalvar_get_newobject($this->_cPtr);
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
		$func = 'Bar_'.$var.'_set';
		if (function_exists($func)) return call_user_func($func,$this->_cPtr,$value);
		if ($var === 'thisown') return swig_naturalvar_alter_newobject($this->_cPtr,$value);
		$this->_pData[$var] = $value;
	}

	function __isset($var) {
		if (function_exists('Bar_'.$var.'_set')) return true;
		if ($var === 'thisown') return true;
		return array_key_exists($var, $this->_pData);
	}

	function __get($var) {
		if ($var === 'f') return new Foo(Bar_f_get($this->_cPtr));
		if ($var === 'i') return Bar_i_get($this->_cPtr);
		if ($var === 's') return Bar_s_get($this->_cPtr);
		if ($var === 'thisown') return swig_naturalvar_get_newobject($this->_cPtr);
		return $this->_pData[$var];
	}

	function __construct($res=null) {
		if (is_resource($res) && get_resource_type($res) === '_p_Bar') {
			$this->_cPtr=$res;
			return;
		}
		$this->_cPtr=new_Bar();
	}
}


?>