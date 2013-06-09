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
if (!extension_loaded('global_vars')) {
  if (strtolower(substr(PHP_OS, 0, 3)) === 'win') {
    if (!dl('php_global_vars.dll')) return;
  } else {
    // PHP_SHLIB_SUFFIX gives 'dylib' on MacOS X but modules are 'so'.
    if (PHP_SHLIB_SUFFIX === 'dylib') {
      if (!dl('global_vars.so')) return;
    } else {
      if (!dl('global_vars.'.PHP_SHLIB_SUFFIX)) return;
    }
  }
}



abstract class global_vars {
	static function b_set($b) {
		b_set($b);
	}

	static function b_get() {
		return b_get();
	}

	static function a_set($a) {
		a_set($a);
	}

	static function a_get() {
		$r=a_get();
		if (is_resource($r)) {
			$c=substr(get_resource_type($r), (strpos(get_resource_type($r), '__') ? strpos(get_resource_type($r), '__') + 2 : 3));
			if (class_exists($c)) return new $c($r);
			return new A($r);
		}
		return $r;
	}

	static function ap_set($ap) {
		ap_set($ap);
	}

	static function ap_get() {
		$r=ap_get();
		if (is_resource($r)) {
			$c=substr(get_resource_type($r), (strpos(get_resource_type($r), '__') ? strpos(get_resource_type($r), '__') + 2 : 3));
			if (class_exists($c)) return new $c($r);
			return new A($r);
		}
		return $r;
	}

	static function cap_set($cap) {
		cap_set($cap);
	}

	static function cap_get() {
		$r=cap_get();
		if (is_resource($r)) {
			$c=substr(get_resource_type($r), (strpos(get_resource_type($r), '__') ? strpos(get_resource_type($r), '__') + 2 : 3));
			if (class_exists($c)) return new $c($r);
			return new A($r);
		}
		return $r;
	}

	static function ar_set($ar) {
		ar_set($ar);
	}

	static function ar_get() {
		$r=ar_get();
		if (is_resource($r)) {
			$c=substr(get_resource_type($r), (strpos(get_resource_type($r), '__') ? strpos(get_resource_type($r), '__') + 2 : 3));
			if (class_exists($c)) return new $c($r);
			return new A($r);
		}
		return $r;
	}

	static function x_set($x) {
		x_set($x);
	}

	static function x_get() {
		return x_get();
	}

	static function xp_set($xp) {
		xp_set($xp);
	}

	static function xp_get() {
		return xp_get();
	}

	static function c_member_set($c_member) {
		c_member_set($c_member);
	}

	static function c_member_get() {
		return c_member_get();
	}

	static function vp_set($vp) {
		vp_set($vp);
	}

	static function vp_get() {
		return vp_get();
	}

	const Hi = 0;

	const Hola = Hola;

	static function h_set($h) {
		h_set($h);
	}

	static function h_get() {
		return h_get();
	}

	static function hp_set($hp) {
		hp_set($hp);
	}

	static function hp_get() {
		return hp_get();
	}

	static function hr_set($hr) {
		hr_set($hr);
	}

	static function hr_get() {
		return hr_get();
	}
}

/* PHP Proxy Classes */
class A {
	public $_cPtr=null;
	protected $_pData=array();

	function __set($var,$value) {
		if ($var === 'x') return A_x_set($this->_cPtr,$value);
		if ($var === 'thisown') return swig_global_vars_alter_newobject($this->_cPtr,$value);
		$this->_pData[$var] = $value;
	}

	function __isset($var) {
		if (function_exists('A_'.$var.'_set')) return true;
		if ($var === 'thisown') return true;
		return array_key_exists($var, $this->_pData);
	}

	function __get($var) {
		if ($var === 'x') return A_x_get($this->_cPtr);
		if ($var === 'thisown') return swig_global_vars_get_newobject($this->_cPtr);
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


?>