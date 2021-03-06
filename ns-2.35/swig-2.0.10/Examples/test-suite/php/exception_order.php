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
if (!extension_loaded('exception_order')) {
  if (strtolower(substr(PHP_OS, 0, 3)) === 'win') {
    if (!dl('php_exception_order.dll')) return;
  } else {
    // PHP_SHLIB_SUFFIX gives 'dylib' on MacOS X but modules are 'so'.
    if (PHP_SHLIB_SUFFIX === 'dylib') {
      if (!dl('exception_order.so')) return;
    } else {
      if (!dl('exception_order.'.PHP_SHLIB_SUFFIX)) return;
    }
  }
}



abstract class exception_order {
	static function efoovar_set($efoovar) {
		efoovar_set($efoovar);
	}

	static function efoovar_get() {
		return efoovar_get();
	}

	static function foovar_set($foovar) {
		foovar_set($foovar);
	}

	static function foovar_get() {
		return foovar_get();
	}

	static function cfoovar_get() {
		return cfoovar_get();
	}
}

/* PHP Proxy Classes */
class E1 extends Exception {
	public $_cPtr=null;
	protected $_pData=array();

	function __set($var,$value) {
		if ($var === 'thisown') return swig_exception_order_alter_newobject($this->_cPtr,$value);
		$this->_pData[$var] = $value;
	}

	function __isset($var) {
		if ($var === 'thisown') return true;
		return array_key_exists($var, $this->_pData);
	}

	function __get($var) {
		if ($var === 'thisown') return swig_exception_order_get_newobject($this->_cPtr);
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
		if ($var === 'thisown') return swig_exception_order_alter_newobject($this->_cPtr,$value);
		$this->_pData[$var] = $value;
	}

	function __isset($var) {
		if ($var === 'thisown') return true;
		return array_key_exists($var, $this->_pData);
	}

	function __get($var) {
		if ($var === 'thisown') return swig_exception_order_get_newobject($this->_cPtr);
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

class E3 {
	public $_cPtr=null;
	protected $_pData=array();

	function __set($var,$value) {
		if ($var === 'thisown') return swig_exception_order_alter_newobject($this->_cPtr,$value);
		$this->_pData[$var] = $value;
	}

	function __isset($var) {
		if ($var === 'thisown') return true;
		return array_key_exists($var, $this->_pData);
	}

	function __get($var) {
		if ($var === 'thisown') return swig_exception_order_get_newobject($this->_cPtr);
		return $this->_pData[$var];
	}

	function __construct($res=null) {
		if (is_resource($res) && get_resource_type($res) === '_p_E3') {
			$this->_cPtr=$res;
			return;
		}
		$this->_cPtr=new_E3();
	}
}

class A {
	public $_cPtr=null;
	protected $_pData=array();

	function __set($var,$value) {
		if ($var === 'efoovar') return A_efoovar_set($this->_cPtr,$value);
		if ($var === 'foovar') return A_foovar_set($this->_cPtr,$value);
		if ($var === 'thisown') return swig_exception_order_alter_newobject($this->_cPtr,$value);
		$this->_pData[$var] = $value;
	}

	function __isset($var) {
		if (function_exists('A_'.$var.'_set')) return true;
		if ($var === 'thisown') return true;
		return array_key_exists($var, $this->_pData);
	}

	function __get($var) {
		if ($var === 'efoovar') return A_efoovar_get($this->_cPtr);
		if ($var === 'foovar') return A_foovar_get($this->_cPtr);
		if ($var === 'thisown') return swig_exception_order_get_newobject($this->_cPtr);
		return $this->_pData[$var];
	}

	static function sfoovar() {
		if (func_num_args()) {
			A_sfoovar_set(func_get_arg(0));
			return;
		}

		return A_sfoovar_get();
	}

	const CSFOOVAR = A_CSFOOVAR;

	function foo() {
		return A_foo($this->_cPtr);
	}

	function bar() {
		return A_bar($this->_cPtr);
	}

	function foobar() {
		return A_foobar($this->_cPtr);
	}

	function barfoo($i) {
		return A_barfoo($this->_cPtr,$i);
	}

	function __construct($res=null) {
		if (is_resource($res) && get_resource_type($res) === '_p_A') {
			$this->_cPtr=$res;
			return;
		}
		$this->_cPtr=new_A();
	}
}

class ET_i extends Exception {
	public $_cPtr=null;
	protected $_pData=array();

	function __set($var,$value) {
		if ($var === 'thisown') return swig_exception_order_alter_newobject($this->_cPtr,$value);
		$this->_pData[$var] = $value;
	}

	function __isset($var) {
		if ($var === 'thisown') return true;
		return array_key_exists($var, $this->_pData);
	}

	function __get($var) {
		if ($var === 'thisown') return swig_exception_order_get_newobject($this->_cPtr);
		return $this->_pData[$var];
	}

	function __construct($res=null) {
		if (is_resource($res) && get_resource_type($res) === '_p_ETT_int_t') {
			$this->_cPtr=$res;
			return;
		}
		$this->_cPtr=new_ET_i();
	}
}

class ET_d extends Exception {
	public $_cPtr=null;
	protected $_pData=array();

	function __set($var,$value) {
		if ($var === 'thisown') return swig_exception_order_alter_newobject($this->_cPtr,$value);
		$this->_pData[$var] = $value;
	}

	function __isset($var) {
		if ($var === 'thisown') return true;
		return array_key_exists($var, $this->_pData);
	}

	function __get($var) {
		if ($var === 'thisown') return swig_exception_order_get_newobject($this->_cPtr);
		return $this->_pData[$var];
	}

	function __construct($res=null) {
		if (is_resource($res) && get_resource_type($res) === '_p_ETT_double_t') {
			$this->_cPtr=$res;
			return;
		}
		$this->_cPtr=new_ET_d();
	}
}


?>
