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
if (!extension_loaded('name_cxx')) {
  if (strtolower(substr(PHP_OS, 0, 3)) === 'win') {
    if (!dl('php_name_cxx.dll')) return;
  } else {
    // PHP_SHLIB_SUFFIX gives 'dylib' on MacOS X but modules are 'so'.
    if (PHP_SHLIB_SUFFIX === 'dylib') {
      if (!dl('name_cxx.so')) return;
    } else {
      if (!dl('name_cxx.'.PHP_SHLIB_SUFFIX)) return;
    }
  }
}



abstract class name_cxx {
	static function bar_int($i) {
		bar_int($i);
	}

	static function bar_double($i) {
		bar_double($i);
	}
}

/* PHP Proxy Classes */
class AA {
	public $_cPtr=null;
	protected $_pData=array();

	function __set($var,$value) {
		if ($var === 'thisown') return swig_name_cxx_alter_newobject($this->_cPtr,$value);
		$this->_pData[$var] = $value;
	}

	function __isset($var) {
		if ($var === 'thisown') return true;
		return array_key_exists($var, $this->_pData);
	}

	function __get($var) {
		if ($var === 'thisown') return swig_name_cxx_get_newobject($this->_cPtr);
		return $this->_pData[$var];
	}

	function __construct($res=null) {
		if (is_resource($res) && get_resource_type($res) === '_p_A') {
			$this->_cPtr=$res;
			return;
		}
		$this->_cPtr=new_AA();
	}
}

class B extends AA {
	public $_cPtr=null;

	function __set($var,$value) {
		if ($var === 'thisown') return swig_name_cxx_alter_newobject($this->_cPtr,$value);
		AA::__set($var,$value);
	}

	function __isset($var) {
		if ($var === 'thisown') return true;
		return AA::__isset($var);
	}

	function __get($var) {
		if ($var === 'thisown') return swig_name_cxx_get_newobject($this->_cPtr);
		return AA::__get($var);
	}

	function __construct($res=null) {
		if (is_resource($res) && get_resource_type($res) === '_p_B') {
			$this->_cPtr=$res;
			return;
		}
		$this->_cPtr=new_B();
	}
}


?>