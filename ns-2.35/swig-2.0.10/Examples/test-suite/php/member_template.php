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
if (!extension_loaded('member_template')) {
  if (strtolower(substr(PHP_OS, 0, 3)) === 'win') {
    if (!dl('php_member_template.dll')) return;
  } else {
    // PHP_SHLIB_SUFFIX gives 'dylib' on MacOS X but modules are 'so'.
    if (PHP_SHLIB_SUFFIX === 'dylib') {
      if (!dl('member_template.so')) return;
    } else {
      if (!dl('member_template.'.PHP_SHLIB_SUFFIX)) return;
    }
  }
}



/* PHP Proxy Classes */
class Fooint {
	public $_cPtr=null;
	protected $_pData=array();

	function __set($var,$value) {
		if ($var === 'thisown') return swig_member_template_alter_newobject($this->_cPtr,$value);
		$this->_pData[$var] = $value;
	}

	function __isset($var) {
		if ($var === 'thisown') return true;
		return array_key_exists($var, $this->_pData);
	}

	function __get($var) {
		if ($var === 'thisown') return swig_member_template_get_newobject($this->_cPtr);
		return $this->_pData[$var];
	}

	function maxi($x,$y) {
		return Fooint_maxi($this->_cPtr,$x,$y);
	}

	function maxd($x,$y) {
		return Fooint_maxd($this->_cPtr,$x,$y);
	}

	function __construct($res=null) {
		if (is_resource($res) && get_resource_type($res) === '_p_FooT_int_t') {
			$this->_cPtr=$res;
			return;
		}
		$this->_cPtr=new_Fooint();
	}
}

class Foodouble {
	public $_cPtr=null;
	protected $_pData=array();

	function __set($var,$value) {
		if ($var === 'thisown') return swig_member_template_alter_newobject($this->_cPtr,$value);
		$this->_pData[$var] = $value;
	}

	function __isset($var) {
		if ($var === 'thisown') return true;
		return array_key_exists($var, $this->_pData);
	}

	function __get($var) {
		if ($var === 'thisown') return swig_member_template_get_newobject($this->_cPtr);
		return $this->_pData[$var];
	}

	function maxi($x,$y) {
		return Foodouble_maxi($this->_cPtr,$x,$y);
	}

	function maxd($x,$y) {
		return Foodouble_maxd($this->_cPtr,$x,$y);
	}

	function __construct($res=null) {
		if (is_resource($res) && get_resource_type($res) === '_p_FooT_double_t') {
			$this->_cPtr=$res;
			return;
		}
		$this->_cPtr=new_Foodouble();
	}
}


?>
