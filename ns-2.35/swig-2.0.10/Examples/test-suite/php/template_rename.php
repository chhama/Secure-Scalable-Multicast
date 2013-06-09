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
if (!extension_loaded('template_rename')) {
  if (strtolower(substr(PHP_OS, 0, 3)) === 'win') {
    if (!dl('php_template_rename.dll')) return;
  } else {
    // PHP_SHLIB_SUFFIX gives 'dylib' on MacOS X but modules are 'so'.
    if (PHP_SHLIB_SUFFIX === 'dylib') {
      if (!dl('template_rename.so')) return;
    } else {
      if (!dl('template_rename.'.PHP_SHLIB_SUFFIX)) return;
    }
  }
}



/* PHP Proxy Classes */
class iFoo {
	public $_cPtr=null;
	protected $_pData=array();

	function __set($var,$value) {
		if ($var === 'thisown') return swig_template_rename_alter_newobject($this->_cPtr,$value);
		$this->_pData[$var] = $value;
	}

	function __isset($var) {
		if ($var === 'thisown') return true;
		return array_key_exists($var, $this->_pData);
	}

	function __get($var) {
		if ($var === 'thisown') return swig_template_rename_get_newobject($this->_cPtr);
		return $this->_pData[$var];
	}

	function blah_test($x) {
		return iFoo_blah_test($this->_cPtr,$x);
	}

	function spam_test($x) {
		return iFoo_spam_test($this->_cPtr,$x);
	}

	function groki_test($x) {
		return iFoo_groki_test($this->_cPtr,$x);
	}

	function __construct($res=null) {
		if (is_resource($res) && get_resource_type($res) === '_p_FooT_int_t') {
			$this->_cPtr=$res;
			return;
		}
		$this->_cPtr=new_iFoo();
	}
}

class dFoo {
	public $_cPtr=null;
	protected $_pData=array();

	function __set($var,$value) {
		if ($var === 'thisown') return swig_template_rename_alter_newobject($this->_cPtr,$value);
		$this->_pData[$var] = $value;
	}

	function __isset($var) {
		if ($var === 'thisown') return true;
		return array_key_exists($var, $this->_pData);
	}

	function __get($var) {
		if ($var === 'thisown') return swig_template_rename_get_newobject($this->_cPtr);
		return $this->_pData[$var];
	}

	function blah_test($x) {
		return dFoo_blah_test($this->_cPtr,$x);
	}

	function spam($x) {
		return dFoo_spam($this->_cPtr,$x);
	}

	function grok_test($x) {
		return dFoo_grok_test($this->_cPtr,$x);
	}

	function __construct($res=null) {
		if (is_resource($res) && get_resource_type($res) === '_p_FooT_double_t') {
			$this->_cPtr=$res;
			return;
		}
		$this->_cPtr=new_dFoo();
	}
}

class Flow {
	public $_cPtr=null;
	protected $_pData=array();

	function __set($var,$value) {
		if ($var === 'thisown') return swig_template_rename_alter_newobject($this->_cPtr,$value);
		$this->_pData[$var] = $value;
	}

	function __isset($var) {
		if ($var === 'thisown') return true;
		return array_key_exists($var, $this->_pData);
	}

	function __get($var) {
		if ($var === 'thisown') return swig_template_rename_get_newobject($this->_cPtr);
		return $this->_pData[$var];
	}

	function __construct($d) {
		if (is_resource($d) && get_resource_type($d) === '_p_Flow') {
			$this->_cPtr=$d;
			return;
		}
		$this->_cPtr=new_Flow($d);
	}
}

class VectFlow {
	public $_cPtr=null;
	protected $_pData=array();

	function __set($var,$value) {
		if ($var === 'thisown') return swig_template_rename_alter_newobject($this->_cPtr,$value);
		$this->_pData[$var] = $value;
	}

	function __isset($var) {
		if ($var === 'thisown') return true;
		return array_key_exists($var, $this->_pData);
	}

	function __get($var) {
		if ($var === 'thisown') return swig_template_rename_get_newobject($this->_cPtr);
		return $this->_pData[$var];
	}

	function __construct($res=null) {
		if (is_resource($res) && get_resource_type($res) === '_p_std__tvectorT_Flow_t') {
			$this->_cPtr=$res;
			return;
		}
		$this->_cPtr=new_VectFlow();
	}
}


?>