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
if (!extension_loaded('inctest')) {
  if (strtolower(substr(PHP_OS, 0, 3)) === 'win') {
    if (!dl('php_inctest.dll')) return;
  } else {
    // PHP_SHLIB_SUFFIX gives 'dylib' on MacOS X but modules are 'so'.
    if (PHP_SHLIB_SUFFIX === 'dylib') {
      if (!dl('inctest.so')) return;
    } else {
      if (!dl('inctest.'.PHP_SHLIB_SUFFIX)) return;
    }
  }
}



abstract class inctest {
	static function importtest1($i) {
		return importtest1($i);
	}

	static function importtest2($str) {
		return importtest2($str);
	}
}

/* PHP Proxy Classes */
class A {
	public $_cPtr=null;
	protected $_pData=array();

	function __set($var,$value) {
		if ($var === 'aa') return A_aa_set($this->_cPtr,$value);
		if ($var === 'thisown') return swig_inctest_alter_newobject($this->_cPtr,$value);
		$this->_pData[$var] = $value;
	}

	function __isset($var) {
		if (function_exists('A_'.$var.'_set')) return true;
		if ($var === 'thisown') return true;
		return array_key_exists($var, $this->_pData);
	}

	function __get($var) {
		if ($var === 'aa') return A_aa_get($this->_cPtr);
		if ($var === 'thisown') return swig_inctest_get_newobject($this->_cPtr);
		return $this->_pData[$var];
	}

	function __construct($res=null) {
		if (is_resource($res) && get_resource_type($res) === '_p_A') {
			$this->_cPtr=$res;
			return;
		}
		$this->_cPtr=new_A();
	}
}

class B {
	public $_cPtr=null;
	protected $_pData=array();

	function __set($var,$value) {
		if ($var === 'bb') return B_bb_set($this->_cPtr,$value);
		if ($var === 'thisown') return swig_inctest_alter_newobject($this->_cPtr,$value);
		$this->_pData[$var] = $value;
	}

	function __isset($var) {
		if (function_exists('B_'.$var.'_set')) return true;
		if ($var === 'thisown') return true;
		return array_key_exists($var, $this->_pData);
	}

	function __get($var) {
		if ($var === 'bb') return B_bb_get($this->_cPtr);
		if ($var === 'thisown') return swig_inctest_get_newobject($this->_cPtr);
		return $this->_pData[$var];
	}

	function __construct($res=null) {
		if (is_resource($res) && get_resource_type($res) === '_p_B') {
			$this->_cPtr=$res;
			return;
		}
		$this->_cPtr=new_B();
	}
}

class MY_TYPES {
	public $_cPtr=null;
	protected $_pData=array();

	function __set($var,$value) {
		if ($var === 'thisown') return swig_inctest_alter_newobject($this->_cPtr,$value);
		$this->_pData[$var] = $value;
	}

	function __isset($var) {
		if ($var === 'thisown') return true;
		return array_key_exists($var, $this->_pData);
	}

	function __get($var) {
		if ($var === 'thisown') return swig_inctest_get_newobject($this->_cPtr);
		return $this->_pData[$var];
	}

	function __construct($res=null) {
		if (is_resource($res) && get_resource_type($res) === '_p_MY_TYPES') {
			$this->_cPtr=$res;
			return;
		}
		$this->_cPtr=new_MY_TYPES();
	}
}

class MY_THINGS {
	public $_cPtr=null;
	protected $_pData=array();

	function __set($var,$value) {
		if ($var === 'IntegerMember') return MY_THINGS_IntegerMember_set($this->_cPtr,$value);
		if ($var === 'DoubleMember') return MY_THINGS_DoubleMember_set($this->_cPtr,$value);
		if ($var === 'thisown') return swig_inctest_alter_newobject($this->_cPtr,$value);
		$this->_pData[$var] = $value;
	}

	function __isset($var) {
		if (function_exists('MY_THINGS_'.$var.'_set')) return true;
		if ($var === 'thisown') return true;
		return array_key_exists($var, $this->_pData);
	}

	function __get($var) {
		if ($var === 'IntegerMember') return MY_THINGS_IntegerMember_get($this->_cPtr);
		if ($var === 'DoubleMember') return MY_THINGS_DoubleMember_get($this->_cPtr);
		if ($var === 'thisown') return swig_inctest_get_newobject($this->_cPtr);
		return $this->_pData[$var];
	}

	function __construct($res=null) {
		if (is_resource($res) && get_resource_type($res) === '_p_MY_THINGS') {
			$this->_cPtr=$res;
			return;
		}
		$this->_cPtr=new_MY_THINGS();
	}
}


?>
