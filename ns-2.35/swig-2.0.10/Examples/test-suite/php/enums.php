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
if (!extension_loaded('enums')) {
  if (strtolower(substr(PHP_OS, 0, 3)) === 'win') {
    if (!dl('php_enums.dll')) return;
  } else {
    // PHP_SHLIB_SUFFIX gives 'dylib' on MacOS X but modules are 'so'.
    if (PHP_SHLIB_SUFFIX === 'dylib') {
      if (!dl('enums.so')) return;
    } else {
      if (!dl('enums.'.PHP_SHLIB_SUFFIX)) return;
    }
  }
}



abstract class enums {
	const CSP_ITERATION_FWD = 0;

	const CSP_ITERATION_BWD = 11;

	const ABCDE = 0;

	const FGHJI = 1;

	static function bar1($x) {
		bar1($x);
	}

	static function bar2($x) {
		bar2($x);
	}

	static function bar3($x) {
		bar3($x);
	}

	const boo = 0;

	const hoo = 5;

	const globalinstance1 = 0;

	const globalinstance2 = globalinstance2;

	const globalinstance3 = 30;

	static function GlobalInstance_set($GlobalInstance) {
		GlobalInstance_set($GlobalInstance);
	}

	static function GlobalInstance_get() {
		return GlobalInstance_get();
	}

	const AnonEnum1 = 0;

	const AnonEnum2 = 100;

	const BAR1 = 0;

	const BAR2 = BAR2;

	const Phoo = +50;

	const Char = Char;

	const goodness = 0;

	const gracious = gracious;

	const me = me;

	static function enumInstance_set($enumInstance) {
		enumInstance_set($enumInstance);
	}

	static function enumInstance_get() {
		return enumInstance_get();
	}

	const slap = 10;

	const mine = mine;

	const thigh = thigh;

	static function Slap_set($Slap) {
		Slap_set($Slap);
	}

	static function Slap_get() {
		return Slap_get();
	}

	static function Mine_set($Mine) {
		Mine_set($Mine);
	}

	static function Mine_get() {
		return Mine_get();
	}

	static function Thigh_set($Thigh) {
		Thigh_set($Thigh);
	}

	static function Thigh_get() {
		return Thigh_get();
	}

	static function pThigh_set($pThigh) {
		pThigh_set($pThigh);
	}

	static function pThigh_get() {
		return pThigh_get();
	}

	static function arrayContainYourself_set($arrayContainYourself) {
		arrayContainYourself_set($arrayContainYourself);
	}

	static function arrayContainYourself_get() {
		return arrayContainYourself_get();
	}
}

/* PHP Proxy Classes */
class Foo {
	public $_cPtr=null;
	protected $_pData=array();

	function __set($var,$value) {
		if ($var === 'e') return Foo_e_set($this->_cPtr,$value);
		if ($var === 'thisown') return swig_enums_alter_newobject($this->_cPtr,$value);
		$this->_pData[$var] = $value;
	}

	function __isset($var) {
		if (function_exists('Foo_'.$var.'_set')) return true;
		if ($var === 'thisown') return true;
		return array_key_exists($var, $this->_pData);
	}

	function __get($var) {
		if ($var === 'e') return Foo_e_get($this->_cPtr);
		if ($var === 'thisown') return swig_enums_get_newobject($this->_cPtr);
		return $this->_pData[$var];
	}

	function __construct($res=null) {
		if (is_resource($res) && get_resource_type($res) === '_p__Foo') {
			$this->_cPtr=$res;
			return;
		}
		$this->_cPtr=new_Foo();
	}
}

class iFoo {
	public $_cPtr=null;
	protected $_pData=array();

	function __set($var,$value) {
		if ($var === 'e') return iFoo_e_set($this->_cPtr,$value);
		if ($var === 'thisown') return swig_enums_alter_newobject($this->_cPtr,$value);
		$this->_pData[$var] = $value;
	}

	function __isset($var) {
		if (function_exists('iFoo_'.$var.'_set')) return true;
		if ($var === 'thisown') return true;
		return array_key_exists($var, $this->_pData);
	}

	function __get($var) {
		if ($var === 'e') return iFoo_e_get($this->_cPtr);
		if ($var === 'thisown') return swig_enums_get_newobject($this->_cPtr);
		return $this->_pData[$var];
	}

	function __construct($res=null) {
		if (is_resource($res) && get_resource_type($res) === '_p__iFoo') {
			$this->_cPtr=$res;
			return;
		}
		$this->_cPtr=new_iFoo();
	}
}


?>
