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
if (!extension_loaded('class_ignore')) {
  if (strtolower(substr(PHP_OS, 0, 3)) === 'win') {
    if (!dl('php_class_ignore.dll')) return;
  } else {
    // PHP_SHLIB_SUFFIX gives 'dylib' on MacOS X but modules are 'so'.
    if (PHP_SHLIB_SUFFIX === 'dylib') {
      if (!dl('class_ignore.so')) return;
    } else {
      if (!dl('class_ignore.'.PHP_SHLIB_SUFFIX)) return;
    }
  }
}



abstract class class_ignore {
	static function do_blah($f) {
		return do_blah($f);
	}
}

/* PHP Proxy Classes */
class Bar {
	public $_cPtr=null;
	protected $_pData=array();

	function __set($var,$value) {
		if ($var === 'thisown') return swig_class_ignore_alter_newobject($this->_cPtr,$value);
		$this->_pData[$var] = $value;
	}

	function __isset($var) {
		if ($var === 'thisown') return true;
		return array_key_exists($var, $this->_pData);
	}

	function __get($var) {
		if ($var === 'thisown') return swig_class_ignore_get_newobject($this->_cPtr);
		return $this->_pData[$var];
	}

	function blah() {
		return Bar_blah($this->_cPtr);
	}

	function __construct($res=null) {
		if (is_resource($res) && get_resource_type($res) === '_p_hi__hello__Bar') {
			$this->_cPtr=$res;
			return;
		}
		$this->_cPtr=new_Bar();
	}
}

class Boo {
	public $_cPtr=null;
	protected $_pData=array();

	function __set($var,$value) {
		if ($var === 'thisown') return swig_class_ignore_alter_newobject($this->_cPtr,$value);
		$this->_pData[$var] = $value;
	}

	function __isset($var) {
		if ($var === 'thisown') return true;
		return array_key_exists($var, $this->_pData);
	}

	function __get($var) {
		if ($var === 'thisown') return swig_class_ignore_get_newobject($this->_cPtr);
		return $this->_pData[$var];
	}

	function away() {
		Boo_away($this->_cPtr);
	}

	function __construct($res=null) {
		if (is_resource($res) && get_resource_type($res) === '_p_Boo') {
			$this->_cPtr=$res;
			return;
		}
		$this->_cPtr=new_Boo();
	}
}

class Far extends Boo {
	public $_cPtr=null;

	function __set($var,$value) {
		if ($var === 'thisown') return swig_class_ignore_alter_newobject($this->_cPtr,$value);
		Boo::__set($var,$value);
	}

	function __isset($var) {
		if ($var === 'thisown') return true;
		return Boo::__isset($var);
	}

	function __get($var) {
		if ($var === 'thisown') return swig_class_ignore_get_newobject($this->_cPtr);
		return Boo::__get($var);
	}

	function __construct($res=null) {
		if (is_resource($res) && get_resource_type($res) === '_p_Far') {
			$this->_cPtr=$res;
			return;
		}
		$this->_cPtr=new_Far();
	}
}

class Hoo extends Far {
	public $_cPtr=null;

	function __set($var,$value) {
		if ($var === 'thisown') return swig_class_ignore_alter_newobject($this->_cPtr,$value);
		Far::__set($var,$value);
	}

	function __isset($var) {
		if ($var === 'thisown') return true;
		return Far::__isset($var);
	}

	function __get($var) {
		if ($var === 'thisown') return swig_class_ignore_get_newobject($this->_cPtr);
		return Far::__get($var);
	}

	function __construct($res=null) {
		if (is_resource($res) && get_resource_type($res) === '_p_Hoo') {
			$this->_cPtr=$res;
			return;
		}
		$this->_cPtr=new_Hoo();
	}
}


?>