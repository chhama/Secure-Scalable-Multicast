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
if (!extension_loaded('director_ignore')) {
  if (strtolower(substr(PHP_OS, 0, 3)) === 'win') {
    if (!dl('php_director_ignore.dll')) return;
  } else {
    // PHP_SHLIB_SUFFIX gives 'dylib' on MacOS X but modules are 'so'.
    if (PHP_SHLIB_SUFFIX === 'dylib') {
      if (!dl('director_ignore.so')) return;
    } else {
      if (!dl('director_ignore.'.PHP_SHLIB_SUFFIX)) return;
    }
  }
}



/* PHP Proxy Classes */
abstract class DIgnores {
	public $_cPtr=null;
	protected $_pData=array();

	function __set($var,$value) {
		if ($var === 'thisown') return swig_director_ignore_alter_newobject($this->_cPtr,$value);
		$this->_pData[$var] = $value;
	}

	function __isset($var) {
		if ($var === 'thisown') return true;
		return array_key_exists($var, $this->_pData);
	}

	function __get($var) {
		if ($var === 'thisown') return swig_director_ignore_get_newobject($this->_cPtr);
		return $this->_pData[$var];
	}

	function OverloadedMethod($b) {
		DIgnores_OverloadedMethod($this->_cPtr,$b);
	}

	function Triple($n) {
		return DIgnores_Triple($this->_cPtr,$n);
	}

	function TempMethod() {
		DIgnores_TempMethod($this->_cPtr);
	}

	protected function OverloadedProtectedMethod() {
		DIgnores_OverloadedProtectedMethod($this->_cPtr);
	}

	function __construct($res=null) {
		if (is_resource($res) && get_resource_type($res) === '_p_DIgnores') {
			$this->_cPtr=$res;
			return;
		}
		if (get_class($this) === 'DIgnores') {
			$_this = null;
		} else {
			$_this = $this;
		}
		$this->_cPtr=new_DIgnores($_this);
	}
}

abstract class DAbstractIgnores {
	public $_cPtr=null;
	protected $_pData=array();

	function __set($var,$value) {
		if ($var === 'thisown') return swig_director_ignore_alter_newobject($this->_cPtr,$value);
		$this->_pData[$var] = $value;
	}

	function __isset($var) {
		if ($var === 'thisown') return true;
		return array_key_exists($var, $this->_pData);
	}

	function __get($var) {
		if ($var === 'thisown') return swig_director_ignore_get_newobject($this->_cPtr);
		return $this->_pData[$var];
	}

	function OverloadedMethod($b) {
		return DAbstractIgnores_OverloadedMethod($this->_cPtr,$b);
	}

	function Quadruple($n) {
		return DAbstractIgnores_Quadruple($this->_cPtr,$n);
	}

	protected function OverloadedProtectedMethod() {
		return DAbstractIgnores_OverloadedProtectedMethod($this->_cPtr);
	}

	function __construct($res=null) {
		if (is_resource($res) && get_resource_type($res) === '_p_DAbstractIgnores') {
			$this->_cPtr=$res;
			return;
		}
		if (get_class($this) === 'DAbstractIgnores') {
			$_this = null;
		} else {
			$_this = $this;
		}
		$this->_cPtr=new_DAbstractIgnores($_this);
	}
}

abstract class DTemplateAbstractIgnoresInt {
	public $_cPtr=null;
	protected $_pData=array();

	function __set($var,$value) {
		if ($var === 'thisown') return swig_director_ignore_alter_newobject($this->_cPtr,$value);
		$this->_pData[$var] = $value;
	}

	function __isset($var) {
		if ($var === 'thisown') return true;
		return array_key_exists($var, $this->_pData);
	}

	function __get($var) {
		if ($var === 'thisown') return swig_director_ignore_get_newobject($this->_cPtr);
		return $this->_pData[$var];
	}

	function OverloadedMethod($b) {
		return DTemplateAbstractIgnoresInt_OverloadedMethod($this->_cPtr,$b);
	}

	function Quadruple($n) {
		return DTemplateAbstractIgnoresInt_Quadruple($this->_cPtr,$n);
	}

	protected function OverloadedProtectedMethod() {
		return DTemplateAbstractIgnoresInt_OverloadedProtectedMethod($this->_cPtr);
	}

	function __construct($res=null) {
		if (is_resource($res) && get_resource_type($res) === '_p_DTemplateAbstractIgnoresT_int_t') {
			$this->_cPtr=$res;
			return;
		}
		if (get_class($this) === 'DTemplateAbstractIgnoresInt') {
			$_this = null;
		} else {
			$_this = $this;
		}
		$this->_cPtr=new_DTemplateAbstractIgnoresInt($_this);
	}
}

class DIgnoreConstructor {
	public $_cPtr=null;
	protected $_pData=array();

	function __set($var,$value) {
		if ($var === 'thisown') return swig_director_ignore_alter_newobject($this->_cPtr,$value);
		$this->_pData[$var] = $value;
	}

	function __isset($var) {
		if ($var === 'thisown') return true;
		return array_key_exists($var, $this->_pData);
	}

	function __get($var) {
		if ($var === 'thisown') return swig_director_ignore_get_newobject($this->_cPtr);
		return $this->_pData[$var];
	}

	function __construct($s,$i) {
		if (is_resource($s) && get_resource_type($s) === '_p_DIgnoreConstructor') {
			$this->_cPtr=$s;
			return;
		}
		if (get_class($this) === 'DIgnoreConstructor') {
			$_this = null;
		} else {
			$_this = $this;
		}
		$this->_cPtr=new_DIgnoreConstructor($_this, $s,$i);
	}
}

class DIgnoreOnlyConstructor {
	public $_cPtr=null;
	protected $_pData=array();

	function __set($var,$value) {
		if ($var === 'thisown') return swig_director_ignore_alter_newobject($this->_cPtr,$value);
		$this->_pData[$var] = $value;
	}

	function __isset($var) {
		if ($var === 'thisown') return true;
		return array_key_exists($var, $this->_pData);
	}

	function __get($var) {
		if ($var === 'thisown') return swig_director_ignore_get_newobject($this->_cPtr);
		return $this->_pData[$var];
	}
	function __construct($h) {
		$this->_cPtr=$h;
	}
}


?>
