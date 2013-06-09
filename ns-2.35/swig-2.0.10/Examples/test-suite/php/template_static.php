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
if (!extension_loaded('template_static')) {
  if (strtolower(substr(PHP_OS, 0, 3)) === 'win') {
    if (!dl('php_template_static.dll')) return;
  } else {
    // PHP_SHLIB_SUFFIX gives 'dylib' on MacOS X but modules are 'so'.
    if (PHP_SHLIB_SUFFIX === 'dylib') {
      if (!dl('template_static.so')) return;
    } else {
      if (!dl('template_static.'.PHP_SHLIB_SUFFIX)) return;
    }
  }
}



/* PHP Proxy Classes */
class foo_i {
	public $_cPtr=null;
	protected $_pData=array();

	function __set($var,$value) {
		if ($var === 'thisown') return swig_template_static_alter_newobject($this->_cPtr,$value);
		$this->_pData[$var] = $value;
	}

	function __isset($var) {
		if ($var === 'thisown') return true;
		return array_key_exists($var, $this->_pData);
	}

	function __get($var) {
		if ($var === 'thisown') return swig_template_static_get_newobject($this->_cPtr);
		return $this->_pData[$var];
	}

	static function test() {
		if (func_num_args()) {
			foo_i_test_set(func_get_arg(0));
			return;
		}

		return foo_i_test_get();
	}

	function __construct($res=null) {
		if (is_resource($res) && get_resource_type($res) === '_p_fooT_int_t') {
			$this->_cPtr=$res;
			return;
		}
		$this->_cPtr=new_foo_i();
	}
}

class foo_d {
	public $_cPtr=null;
	protected $_pData=array();

	function __set($var,$value) {
		if ($var === 'thisown') return swig_template_static_alter_newobject($this->_cPtr,$value);
		$this->_pData[$var] = $value;
	}

	function __isset($var) {
		if ($var === 'thisown') return true;
		return array_key_exists($var, $this->_pData);
	}

	function __get($var) {
		if ($var === 'thisown') return swig_template_static_get_newobject($this->_cPtr);
		return $this->_pData[$var];
	}

	static function test() {
		if (func_num_args()) {
			foo_d_test_set(func_get_arg(0));
			return;
		}

		return foo_d_test_get();
	}

	function __construct($res=null) {
		if (is_resource($res) && get_resource_type($res) === '_p_fooT_double_t') {
			$this->_cPtr=$res;
			return;
		}
		$this->_cPtr=new_foo_d();
	}
}

class Foo {
	public $_cPtr=null;
	protected $_pData=array();

	function __set($var,$value) {
		if ($var === 'thisown') return swig_template_static_alter_newobject($this->_cPtr,$value);
		$this->_pData[$var] = $value;
	}

	function __isset($var) {
		if ($var === 'thisown') return true;
		return array_key_exists($var, $this->_pData);
	}

	function __get($var) {
		if ($var === 'thisown') return swig_template_static_get_newobject($this->_cPtr);
		return $this->_pData[$var];
	}

	static function bar_double($i) {
		return Foo_bar_double($i);
	}

	function __construct($res=null) {
		if (is_resource($res) && get_resource_type($res) === '_p_toto__Foo') {
			$this->_cPtr=$res;
			return;
		}
		$this->_cPtr=new_Foo();
	}
}


?>
