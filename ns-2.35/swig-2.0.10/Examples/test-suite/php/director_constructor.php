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
if (!extension_loaded('director_constructor')) {
  if (strtolower(substr(PHP_OS, 0, 3)) === 'win') {
    if (!dl('php_director_constructor.dll')) return;
  } else {
    // PHP_SHLIB_SUFFIX gives 'dylib' on MacOS X but modules are 'so'.
    if (PHP_SHLIB_SUFFIX === 'dylib') {
      if (!dl('director_constructor.so')) return;
    } else {
      if (!dl('director_constructor.'.PHP_SHLIB_SUFFIX)) return;
    }
  }
}



/* PHP Proxy Classes */
abstract class Foo {
	public $_cPtr=null;
	protected $_pData=array();

	function __set($var,$value) {
		if ($var === 'a') return Foo_a_set($this->_cPtr,$value);
		if ($var === 'thisown') return swig_director_constructor_alter_newobject($this->_cPtr,$value);
		$this->_pData[$var] = $value;
	}

	function __isset($var) {
		if (function_exists('Foo_'.$var.'_set')) return true;
		if ($var === 'thisown') return true;
		return array_key_exists($var, $this->_pData);
	}

	function __get($var) {
		if ($var === 'a') return Foo_a_get($this->_cPtr);
		if ($var === 'thisown') return swig_director_constructor_get_newobject($this->_cPtr);
		return $this->_pData[$var];
	}

	function __construct($i) {
		if (is_resource($i) && get_resource_type($i) === '_p_Foo') {
			$this->_cPtr=$i;
			return;
		}
		if (get_class($this) === 'Foo') {
			$_this = null;
		} else {
			$_this = $this;
		}
		$this->_cPtr=new_Foo($_this, $i);
	}

	function do_test() {
		return Foo_do_test($this->_cPtr);
	}

	function getit() {
		return Foo_getit($this->_cPtr);
	}

	function doubleit() {
		Foo_doubleit($this->_cPtr);
	}

	function test() {
		return Foo_test($this->_cPtr);
	}
}


?>
