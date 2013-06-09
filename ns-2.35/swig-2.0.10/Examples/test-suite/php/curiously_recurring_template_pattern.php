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
if (!extension_loaded('curiously_recurring_template_pattern')) {
  if (strtolower(substr(PHP_OS, 0, 3)) === 'win') {
    if (!dl('php_curiously_recurring_template_pattern.dll')) return;
  } else {
    // PHP_SHLIB_SUFFIX gives 'dylib' on MacOS X but modules are 'so'.
    if (PHP_SHLIB_SUFFIX === 'dylib') {
      if (!dl('curiously_recurring_template_pattern.so')) return;
    } else {
      if (!dl('curiously_recurring_template_pattern.'.PHP_SHLIB_SUFFIX)) return;
    }
  }
}



/* PHP Proxy Classes */
class basederived {
	public $_cPtr=null;
	protected $_pData=array();

	function __set($var,$value) {
		if ($var === 'thisown') return swig_curiously_recurring_template_pattern_alter_newobject($this->_cPtr,$value);
		$this->_pData[$var] = $value;
	}

	function __isset($var) {
		if ($var === 'thisown') return true;
		return array_key_exists($var, $this->_pData);
	}

	function __get($var) {
		if ($var === 'thisown') return swig_curiously_recurring_template_pattern_get_newobject($this->_cPtr);
		return $this->_pData[$var];
	}

	function __construct($res=null) {
		if (is_resource($res) && get_resource_type($res) === '_p_BaseT_Derived_t') {
			$this->_cPtr=$res;
			return;
		}
		$this->_cPtr=new_basederived();
	}

	function getBase1Param() {
		return basederived_getBase1Param($this->_cPtr);
	}

	function setBase1Param($value) {
		$r=basederived_setBase1Param($this->_cPtr,$value);
		if (is_resource($r)) {
			$c=substr(get_resource_type($r), (strpos(get_resource_type($r), '__') ? strpos(get_resource_type($r), '__') + 2 : 3));
			if (class_exists($c)) return new $c($r);
			return new Derived($r);
		}
		return $r;
	}

	function getBase2Param() {
		return basederived_getBase2Param($this->_cPtr);
	}

	function setBase2Param($value) {
		$r=basederived_setBase2Param($this->_cPtr,$value);
		if (is_resource($r)) {
			$c=substr(get_resource_type($r), (strpos(get_resource_type($r), '__') ? strpos(get_resource_type($r), '__') + 2 : 3));
			if (class_exists($c)) return new $c($r);
			return new Derived($r);
		}
		return $r;
	}
}

class Derived extends basederived {
	public $_cPtr=null;

	function __set($var,$value) {
		if ($var === 'thisown') return swig_curiously_recurring_template_pattern_alter_newobject($this->_cPtr,$value);
		basederived::__set($var,$value);
	}

	function __isset($var) {
		if ($var === 'thisown') return true;
		return basederived::__isset($var);
	}

	function __get($var) {
		if ($var === 'thisown') return swig_curiously_recurring_template_pattern_get_newobject($this->_cPtr);
		return basederived::__get($var);
	}

	function __construct($res=null) {
		if (is_resource($res) && get_resource_type($res) === '_p_Derived') {
			$this->_cPtr=$res;
			return;
		}
		$this->_cPtr=new_Derived();
	}

	function getDerived1Param() {
		return Derived_getDerived1Param($this->_cPtr);
	}

	function setDerived1Param($value) {
		$r=Derived_setDerived1Param($this->_cPtr,$value);
		if (is_resource($r)) {
			$c=substr(get_resource_type($r), (strpos(get_resource_type($r), '__') ? strpos(get_resource_type($r), '__') + 2 : 3));
			if (class_exists($c)) return new $c($r);
			return new Derived($r);
		}
		return $r;
	}

	function getDerived2Param() {
		return Derived_getDerived2Param($this->_cPtr);
	}

	function setDerived2Param($value) {
		$r=Derived_setDerived2Param($this->_cPtr,$value);
		if (is_resource($r)) {
			$c=substr(get_resource_type($r), (strpos(get_resource_type($r), '__') ? strpos(get_resource_type($r), '__') + 2 : 3));
			if (class_exists($c)) return new $c($r);
			return new Derived($r);
		}
		return $r;
	}
}


?>