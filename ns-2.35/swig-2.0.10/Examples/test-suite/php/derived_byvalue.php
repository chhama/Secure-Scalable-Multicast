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
if (!extension_loaded('derived_byvalue')) {
  if (strtolower(substr(PHP_OS, 0, 3)) === 'win') {
    if (!dl('php_derived_byvalue.dll')) return;
  } else {
    // PHP_SHLIB_SUFFIX gives 'dylib' on MacOS X but modules are 'so'.
    if (PHP_SHLIB_SUFFIX === 'dylib') {
      if (!dl('derived_byvalue.so')) return;
    } else {
      if (!dl('derived_byvalue.'.PHP_SHLIB_SUFFIX)) return;
    }
  }
}



/* PHP Proxy Classes */
class Foo {
	public $_cPtr=null;
	protected $_pData=array();

	function __set($var,$value) {
		if ($var === 'x') return Foo_x_set($this->_cPtr,$value);
		if ($var === 'thisown') return swig_derived_byvalue_alter_newobject($this->_cPtr,$value);
		$this->_pData[$var] = $value;
	}

	function __isset($var) {
		if (function_exists('Foo_'.$var.'_set')) return true;
		if ($var === 'thisown') return true;
		return array_key_exists($var, $this->_pData);
	}

	function __get($var) {
		if ($var === 'x') return Foo_x_get($this->_cPtr);
		if ($var === 'thisown') return swig_derived_byvalue_get_newobject($this->_cPtr);
		return $this->_pData[$var];
	}

	function rmethod($f) {
		return Foo_rmethod($this->_cPtr,$f);
	}

	function method($f) {
		return Foo_method($this->_cPtr,$f);
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
		if ($var === 'b') return Bar_b_set($this->_cPtr,$value);
		if ($var === 'a') return Bar_a_set($this->_cPtr,$value);
		if ($var === 'thisown') return swig_derived_byvalue_alter_newobject($this->_cPtr,$value);
		$this->_pData[$var] = $value;
	}

	function __isset($var) {
		if (function_exists('Bar_'.$var.'_set')) return true;
		if ($var === 'thisown') return true;
		return array_key_exists($var, $this->_pData);
	}

	function __get($var) {
		if ($var === 'b') return new Foo(Bar_b_get($this->_cPtr));
		if ($var === 'a') return new Foo(Bar_a_get($this->_cPtr));
		if ($var === 'thisown') return swig_derived_byvalue_get_newobject($this->_cPtr);
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

class DerFoo extends Foo {
	public $_cPtr=null;

	function __set($var,$value) {
		if ($var === 'thisown') return swig_derived_byvalue_alter_newobject($this->_cPtr,$value);
		Foo::__set($var,$value);
	}

	function __isset($var) {
		if ($var === 'thisown') return true;
		return Foo::__isset($var);
	}

	function __get($var) {
		if ($var === 'thisown') return swig_derived_byvalue_get_newobject($this->_cPtr);
		return Foo::__get($var);
	}

	function __construct($res=null) {
		if (is_resource($res) && get_resource_type($res) === '_p_DerFoo') {
			$this->_cPtr=$res;
			return;
		}
		$this->_cPtr=new_DerFoo();
	}
}


?>