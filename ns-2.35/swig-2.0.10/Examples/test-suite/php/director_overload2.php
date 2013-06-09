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
if (!extension_loaded('director_overload2')) {
  if (strtolower(substr(PHP_OS, 0, 3)) === 'win') {
    if (!dl('php_director_overload2.dll')) return;
  } else {
    // PHP_SHLIB_SUFFIX gives 'dylib' on MacOS X but modules are 'so'.
    if (PHP_SHLIB_SUFFIX === 'dylib') {
      if (!dl('director_overload2.so')) return;
    } else {
      if (!dl('director_overload2.'.PHP_SHLIB_SUFFIX)) return;
    }
  }
}



/* PHP Proxy Classes */
class OverloadBase {
	public $_cPtr=null;
	protected $_pData=array();

	function __set($var,$value) {
		if ($var === 'thisown') return swig_director_overload2_alter_newobject($this->_cPtr,$value);
		$this->_pData[$var] = $value;
	}

	function __isset($var) {
		if ($var === 'thisown') return true;
		return array_key_exists($var, $this->_pData);
	}

	function __get($var) {
		if ($var === 'thisown') return swig_director_overload2_get_newobject($this->_cPtr);
		return $this->_pData[$var];
	}

	function mmm() {
		OverloadBase_mmm($this->_cPtr);
	}

	function nnn($vvv=null) {
		switch (func_num_args()) {
		case 0: OverloadBase_nnn($this->_cPtr); break;
		default: OverloadBase_nnn($this->_cPtr,$vvv);
		}
	}

	function __construct($res=null) {
		if (is_resource($res) && get_resource_type($res) === '_p_OverloadBase') {
			$this->_cPtr=$res;
			return;
		}
		if (get_class($this) === 'OverloadBase') {
			$_this = null;
		} else {
			$_this = $this;
		}
		$this->_cPtr=new_OverloadBase($_this);
	}
}

class OverloadDerived1 extends OverloadBase {
	public $_cPtr=null;

	function __set($var,$value) {
		if ($var === 'thisown') return swig_director_overload2_alter_newobject($this->_cPtr,$value);
		OverloadBase::__set($var,$value);
	}

	function __isset($var) {
		if ($var === 'thisown') return true;
		return OverloadBase::__isset($var);
	}

	function __get($var) {
		if ($var === 'thisown') return swig_director_overload2_get_newobject($this->_cPtr);
		return OverloadBase::__get($var);
	}

	function nnn($vvv) {
		OverloadDerived1_nnn($this->_cPtr,$vvv);
	}

	function __construct($res=null) {
		if (is_resource($res) && get_resource_type($res) === '_p_OverloadDerived1') {
			$this->_cPtr=$res;
			return;
		}
		if (get_class($this) === 'OverloadDerived1') {
			$_this = null;
		} else {
			$_this = $this;
		}
		$this->_cPtr=new_OverloadDerived1($_this);
	}
}

class OverloadDerived2 extends OverloadBase {
	public $_cPtr=null;

	function __set($var,$value) {
		if ($var === 'thisown') return swig_director_overload2_alter_newobject($this->_cPtr,$value);
		OverloadBase::__set($var,$value);
	}

	function __isset($var) {
		if ($var === 'thisown') return true;
		return OverloadBase::__isset($var);
	}

	function __get($var) {
		if ($var === 'thisown') return swig_director_overload2_get_newobject($this->_cPtr);
		return OverloadBase::__get($var);
	}

	function nnn() {
		OverloadDerived2_nnn($this->_cPtr);
	}

	function __construct($res=null) {
		if (is_resource($res) && get_resource_type($res) === '_p_OverloadDerived2') {
			$this->_cPtr=$res;
			return;
		}
		if (get_class($this) === 'OverloadDerived2') {
			$_this = null;
		} else {
			$_this = $this;
		}
		$this->_cPtr=new_OverloadDerived2($_this);
	}
}


?>