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
if (!extension_loaded('global_scope_types')) {
  if (strtolower(substr(PHP_OS, 0, 3)) === 'win') {
    if (!dl('php_global_scope_types.dll')) return;
  } else {
    // PHP_SHLIB_SUFFIX gives 'dylib' on MacOS X but modules are 'so'.
    if (PHP_SHLIB_SUFFIX === 'dylib') {
      if (!dl('global_scope_types.so')) return;
    } else {
      if (!dl('global_scope_types.'.PHP_SHLIB_SUFFIX)) return;
    }
  }
}



abstract class global_scope_types {
	static function funcptrtest($arg1) {
		funcptrtest($arg1);
	}
}

/* PHP Proxy Classes */
class Dingaling {
	public $_cPtr=null;
	protected $_pData=array();

	function __set($var,$value) {
		if ($var === 'thisown') return swig_global_scope_types_alter_newobject($this->_cPtr,$value);
		$this->_pData[$var] = $value;
	}

	function __isset($var) {
		if ($var === 'thisown') return true;
		return array_key_exists($var, $this->_pData);
	}

	function __get($var) {
		if ($var === 'thisown') return swig_global_scope_types_get_newobject($this->_cPtr);
		return $this->_pData[$var];
	}
	function __construct($h) {
		$this->_cPtr=$h;
	}
}

class Ting {
	public $_cPtr=null;
	protected $_pData=array();

	function __set($var,$value) {
		if ($var === 'thisown') return swig_global_scope_types_alter_newobject($this->_cPtr,$value);
		$this->_pData[$var] = $value;
	}

	function __isset($var) {
		if ($var === 'thisown') return true;
		return array_key_exists($var, $this->_pData);
	}

	function __get($var) {
		if ($var === 'thisown') return swig_global_scope_types_get_newobject($this->_cPtr);
		return $this->_pData[$var];
	}

	function __construct($res=null) {
		if (is_resource($res) && get_resource_type($res) === '_p_Spac__Ting') {
			$this->_cPtr=$res;
			return;
		}
		$this->_cPtr=new_Ting();
	}
}

class Test {
	public $_cPtr=null;
	protected $_pData=array();

	function __set($var,$value) {
		if ($var === 'thisown') return swig_global_scope_types_alter_newobject($this->_cPtr,$value);
		$this->_pData[$var] = $value;
	}

	function __isset($var) {
		if ($var === 'thisown') return true;
		return array_key_exists($var, $this->_pData);
	}

	function __get($var) {
		if ($var === 'thisown') return swig_global_scope_types_get_newobject($this->_cPtr);
		return $this->_pData[$var];
	}

	function something($t,$pt,$rt,$crt) {
		Test_something($this->_cPtr,$t,$pt,$rt,$crt);
	}

	function tsomething($t1,$t2) {
		Test_tsomething($this->_cPtr,$t1,$t2);
	}

	function nothing($arg1,$arg2) {
		Test_nothing($this->_cPtr,$arg1,$arg2);
	}

	function __construct($res=null) {
		if (is_resource($res) && get_resource_type($res) === '_p_Spac__Test') {
			$this->_cPtr=$res;
			return;
		}
		$this->_cPtr=new_Test();
	}
}


?>
