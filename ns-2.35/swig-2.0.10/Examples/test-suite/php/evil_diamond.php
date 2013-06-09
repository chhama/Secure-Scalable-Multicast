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
if (!extension_loaded('evil_diamond')) {
  if (strtolower(substr(PHP_OS, 0, 3)) === 'win') {
    if (!dl('php_evil_diamond.dll')) return;
  } else {
    // PHP_SHLIB_SUFFIX gives 'dylib' on MacOS X but modules are 'so'.
    if (PHP_SHLIB_SUFFIX === 'dylib') {
      if (!dl('evil_diamond.so')) return;
    } else {
      if (!dl('evil_diamond.'.PHP_SHLIB_SUFFIX)) return;
    }
  }
}



abstract class evil_diamond {
	static function test($f) {
		$r=test($f);
		if (is_resource($r)) {
			$c=substr(get_resource_type($r), (strpos(get_resource_type($r), '__') ? strpos(get_resource_type($r), '__') + 2 : 3));
			if (class_exists($c)) return new $c($r);
			return new foo($r);
		}
		return $r;
	}
}

/* PHP Proxy Classes */
class foo {
	public $_cPtr=null;
	protected $_pData=array();

	function __set($var,$value) {
		if ($var === 'thisown') return swig_evil_diamond_alter_newobject($this->_cPtr,$value);
		$this->_pData[$var] = $value;
	}

	function __isset($var) {
		if ($var === 'thisown') return true;
		return array_key_exists($var, $this->_pData);
	}

	function __get($var) {
		if ($var === 'thisown') return swig_evil_diamond_get_newobject($this->_cPtr);
		return $this->_pData[$var];
	}

	function __construct($res=null) {
		if (is_resource($res) && get_resource_type($res) === '_p_foo') {
			$this->_cPtr=$res;
			return;
		}
		$this->_cPtr=new_foo();
	}
}

class bar extends foo {
	public $_cPtr=null;

	function __set($var,$value) {
		if ($var === 'thisown') return swig_evil_diamond_alter_newobject($this->_cPtr,$value);
		foo::__set($var,$value);
	}

	function __isset($var) {
		if ($var === 'thisown') return true;
		return foo::__isset($var);
	}

	function __get($var) {
		if ($var === 'thisown') return swig_evil_diamond_get_newobject($this->_cPtr);
		return foo::__get($var);
	}

	function __construct($res=null) {
		if (is_resource($res) && get_resource_type($res) === '_p_bar') {
			$this->_cPtr=$res;
			return;
		}
		$this->_cPtr=new_bar();
	}
}

class baz extends foo {
	public $_cPtr=null;

	function __set($var,$value) {
		if ($var === 'thisown') return swig_evil_diamond_alter_newobject($this->_cPtr,$value);
		foo::__set($var,$value);
	}

	function __isset($var) {
		if ($var === 'thisown') return true;
		return foo::__isset($var);
	}

	function __get($var) {
		if ($var === 'thisown') return swig_evil_diamond_get_newobject($this->_cPtr);
		return foo::__get($var);
	}

	function __construct($res=null) {
		if (is_resource($res) && get_resource_type($res) === '_p_baz') {
			$this->_cPtr=$res;
			return;
		}
		$this->_cPtr=new_baz();
	}
}

class spam extends bar {
	public $_cPtr=null;

	function __set($var,$value) {
		if ($var === 'thisown') return swig_evil_diamond_alter_newobject($this->_cPtr,$value);
		bar::__set($var,$value);
	}

	function __isset($var) {
		if ($var === 'thisown') return true;
		return bar::__isset($var);
	}

	function __get($var) {
		if ($var === 'thisown') return swig_evil_diamond_get_newobject($this->_cPtr);
		return bar::__get($var);
	}

	function __construct($res=null) {
		if (is_resource($res) && get_resource_type($res) === '_p_spam') {
			$this->_cPtr=$res;
			return;
		}
		$this->_cPtr=new_spam();
	}
}


?>
