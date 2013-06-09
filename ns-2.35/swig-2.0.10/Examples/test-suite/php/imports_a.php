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
if (!extension_loaded('imports_a')) {
  if (strtolower(substr(PHP_OS, 0, 3)) === 'win') {
    if (!dl('php_imports_a.dll')) return;
  } else {
    // PHP_SHLIB_SUFFIX gives 'dylib' on MacOS X but modules are 'so'.
    if (PHP_SHLIB_SUFFIX === 'dylib') {
      if (!dl('imports_a.so')) return;
    } else {
      if (!dl('imports_a.'.PHP_SHLIB_SUFFIX)) return;
    }
  }
}



abstract class imports_a {
	const globalenum1 = 1;

	const globalenum2 = globalenum2;

	static function global_test($e) {
		return global_test($e);
	}
}

/* PHP Proxy Classes */
class A {
	public $_cPtr=null;
	protected $_pData=array();

	function __set($var,$value) {
		if ($var === 'thisown') return swig_imports_a_alter_newobject($this->_cPtr,$value);
		$this->_pData[$var] = $value;
	}

	function __isset($var) {
		if ($var === 'thisown') return true;
		return array_key_exists($var, $this->_pData);
	}

	function __get($var) {
		if ($var === 'thisown') return swig_imports_a_get_newobject($this->_cPtr);
		return $this->_pData[$var];
	}

	function __construct($res=null) {
		if (is_resource($res) && get_resource_type($res) === '_p_A') {
			$this->_cPtr=$res;
			return;
		}
		$this->_cPtr=new_A();
	}

	function hello() {
		A_hello($this->_cPtr);
	}

	const memberenum1 = 10;

	const memberenum2 = A_memberenum2;

	function member_virtual_test($e) {
		return A_member_virtual_test($this->_cPtr,$e);
	}

	function global_virtual_test($e) {
		return A_global_virtual_test($this->_cPtr,$e);
	}
}


?>
