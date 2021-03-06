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
if (!extension_loaded('allprotected')) {
  if (strtolower(substr(PHP_OS, 0, 3)) === 'win') {
    if (!dl('php_allprotected.dll')) return;
  } else {
    // PHP_SHLIB_SUFFIX gives 'dylib' on MacOS X but modules are 'so'.
    if (PHP_SHLIB_SUFFIX === 'dylib') {
      if (!dl('allprotected.so')) return;
    } else {
      if (!dl('allprotected.'.PHP_SHLIB_SUFFIX)) return;
    }
  }
}



/* PHP Proxy Classes */
class Klass {
	public $_cPtr=null;
	protected $_pData=array();

	function __set($var,$value) {
		if ($var === 'thisown') return swig_allprotected_alter_newobject($this->_cPtr,$value);
		$this->_pData[$var] = $value;
	}

	function __isset($var) {
		if ($var === 'thisown') return true;
		return array_key_exists($var, $this->_pData);
	}

	function __get($var) {
		if ($var === 'thisown') return swig_allprotected_get_newobject($this->_cPtr);
		return $this->_pData[$var];
	}

	function __construct($n) {
		if (is_resource($n) && get_resource_type($n) === '_p_Klass') {
			$this->_cPtr=$n;
			return;
		}
		$this->_cPtr=new_Klass($n);
	}

	function getName() {
		return Klass_getName($this->_cPtr);
	}
}

class PublicBase {
	public $_cPtr=null;
	protected $_pData=array();

	function __set($var,$value) {
		$func = 'PublicBase_'.$var.'_set';
		if (function_exists($func)) return call_user_func($func,$this->_cPtr,$value);
		if ($var === 'thisown') return swig_allprotected_alter_newobject($this->_cPtr,$value);
		$this->_pData[$var] = $value;
	}

	function __isset($var) {
		if (function_exists('PublicBase_'.$var.'_set')) return true;
		if ($var === 'thisown') return true;
		return array_key_exists($var, $this->_pData);
	}

	function __get($var) {
		$func = 'PublicBase_'.$var.'_get';
		if (function_exists($func)) return call_user_func($func,$this->_cPtr);
		if ($var === 'thisown') return swig_allprotected_get_newobject($this->_cPtr);
		return $this->_pData[$var];
	}

	const EnumVal1 = 0;

	const EnumVal2 = PublicBase_EnumVal2;

	function __construct($s) {
		if (is_resource($s) && get_resource_type($s) === '_p_PublicBase') {
			$this->_cPtr=$s;
			return;
		}
		if (get_class($this) === 'PublicBase') {
			$_this = null;
		} else {
			$_this = $this;
		}
		$this->_cPtr=new_PublicBase($_this, $s);
	}

	function virtualMethod() {
		return PublicBase_virtualMethod($this->_cPtr);
	}

	function instanceMethod($k) {
		$r=PublicBase_instanceMethod($this->_cPtr,$k);
		if (is_resource($r)) {
			$c=substr(get_resource_type($r), (strpos(get_resource_type($r), '__') ? strpos(get_resource_type($r), '__') + 2 : 3));
			if (class_exists($c)) return new $c($r);
			return new Klass($r);
		}
		return $r;
	}

	function instanceOverloaded($k,$name=null) {
		switch (func_num_args()) {
		case 1: $this->_cPtr=PublicBase_instanceOverloaded($this->_cPtr,$k); break;
		default: $this->_cPtr=PublicBase_instanceOverloaded($this->_cPtr,$k,$name);
		}
		if (!is_resource($r)) return $r;
		switch (get_resource_type($r)) {
		case '_p_Klass': return new Klass($r);
		default: return new Klass($r);
		}
	}

	static function staticMethod($k) {
		$r=PublicBase_staticMethod($k);
		if (is_resource($r)) {
			$c=substr(get_resource_type($r), (strpos(get_resource_type($r), '__') ? strpos(get_resource_type($r), '__') + 2 : 3));
			if (class_exists($c)) return new $c($r);
			return new Klass($r);
		}
		return $r;
	}

	static function staticOverloaded($k,$name=null) {
		switch (func_num_args()) {
		case 1: $this->_cPtr=PublicBase_staticOverloaded($k); break;
		default: $this->_cPtr=PublicBase_staticOverloaded($k,$name);
		}
		if (!is_resource($r)) return $r;
		switch (get_resource_type($r)) {
		case '_p_Klass': return new Klass($r);
		default: return new Klass($r);
		}
	}

	static function staticMemberVariable() {
		if (func_num_args()) {
			PublicBase_staticMemberVariable_set(func_get_arg(0));
			return;
		}

		return PublicBase_staticMemberVariable_get();
	}

	const staticConstMemberVariable = PublicBase_staticConstMemberVariable;
}

class ProtectedBase {
	public $_cPtr=null;
	protected $_pData=array();

	function __set($var,$value) {
		$func = 'ProtectedBase_'.$var.'_set';
		if (function_exists($func)) return call_user_func($func,$this->_cPtr,$value);
		if ($var === 'thisown') return swig_allprotected_alter_newobject($this->_cPtr,$value);
		$this->_pData[$var] = $value;
	}

	function __isset($var) {
		if (function_exists('ProtectedBase_'.$var.'_set')) return true;
		if ($var === 'thisown') return true;
		return array_key_exists($var, $this->_pData);
	}

	function __get($var) {
		$func = 'ProtectedBase_'.$var.'_get';
		if (function_exists($func)) return call_user_func($func,$this->_cPtr);
		if ($var === 'thisown') return swig_allprotected_get_newobject($this->_cPtr);
		return $this->_pData[$var];
	}

	const EnumVal1 = 0;

	const EnumVal2 = ProtectedBase_EnumVal2;

	function getName() {
		return ProtectedBase_getName($this->_cPtr);
	}

	protected function __construct($s) {
		if (is_resource($s) && get_resource_type($s) === '_p_ProtectedBase') {
			$this->_cPtr=$s;
			return;
		}
		if (get_class($this) === 'ProtectedBase') {
			$_this = null;
		} else {
			$_this = $this;
		}
		$this->_cPtr=new_ProtectedBase($_this, $s);
	}

	protected function virtualMethod() {
		return ProtectedBase_virtualMethod($this->_cPtr);
	}

	protected function instanceMethod($k) {
		$r=ProtectedBase_instanceMethod($this->_cPtr,$k);
		if (is_resource($r)) {
			$c=substr(get_resource_type($r), (strpos(get_resource_type($r), '__') ? strpos(get_resource_type($r), '__') + 2 : 3));
			if (class_exists($c)) return new $c($r);
			return new Klass($r);
		}
		return $r;
	}

	protected function instanceOverloaded($k,$name=null) {
		switch (func_num_args()) {
		case 1: $this->_cPtr=ProtectedBase_instanceOverloaded($this->_cPtr,$k); break;
		default: $this->_cPtr=ProtectedBase_instanceOverloaded($this->_cPtr,$k,$name);
		}
		if (!is_resource($r)) return $r;
		switch (get_resource_type($r)) {
		case '_p_Klass': return new Klass($r);
		default: return new Klass($r);
		}
	}

	static function staticMethod($k) {
		$r=ProtectedBase_staticMethod($k);
		if (is_resource($r)) {
			$c=substr(get_resource_type($r), (strpos(get_resource_type($r), '__') ? strpos(get_resource_type($r), '__') + 2 : 3));
			if (class_exists($c)) return new $c($r);
			return new Klass($r);
		}
		return $r;
	}

	static function staticOverloaded($k,$name=null) {
		switch (func_num_args()) {
		case 1: $this->_cPtr=ProtectedBase_staticOverloaded($k); break;
		default: $this->_cPtr=ProtectedBase_staticOverloaded($k,$name);
		}
		if (!is_resource($r)) return $r;
		switch (get_resource_type($r)) {
		case '_p_Klass': return new Klass($r);
		default: return new Klass($r);
		}
	}

	static function staticMemberVariable() {
		if (func_num_args()) {
			ProtectedBase_staticMemberVariable_set(func_get_arg(0));
			return;
		}

		return ProtectedBase_staticMemberVariable_get();
	}

	const staticConstMemberVariable = ProtectedBase_staticConstMemberVariable;
}


?>
