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
if (!extension_loaded('director_primitives')) {
  if (strtolower(substr(PHP_OS, 0, 3)) === 'win') {
    if (!dl('php_director_primitives.dll')) return;
  } else {
    // PHP_SHLIB_SUFFIX gives 'dylib' on MacOS X but modules are 'so'.
    if (PHP_SHLIB_SUFFIX === 'dylib') {
      if (!dl('director_primitives.so')) return;
    } else {
      if (!dl('director_primitives.'.PHP_SHLIB_SUFFIX)) return;
    }
  }
}



abstract class director_primitives {
	static function PrintDebug_set($PrintDebug) {
		PrintDebug_set($PrintDebug);
	}

	static function PrintDebug_get() {
		return PrintDebug_get();
	}

	const HShadowNone = 1;

	const HShadowSoft = 2;

	const HShadowHard = 3;
}

/* PHP Proxy Classes */
class Base {
	public $_cPtr=null;
	protected $_pData=array();

	function __set($var,$value) {
		if ($var === 'thisown') return swig_director_primitives_alter_newobject($this->_cPtr,$value);
		$this->_pData[$var] = $value;
	}

	function __isset($var) {
		if ($var === 'thisown') return true;
		return array_key_exists($var, $this->_pData);
	}

	function __get($var) {
		if ($var === 'thisown') return swig_director_primitives_get_newobject($this->_cPtr);
		return $this->_pData[$var];
	}

	function __construct($dd) {
		if (is_resource($dd) && get_resource_type($dd) === '_p_Base') {
			$this->_cPtr=$dd;
			return;
		}
		if (get_class($this) === 'Base') {
			$_this = null;
		} else {
			$_this = $this;
		}
		$this->_cPtr=new_Base($_this, $dd);
	}

	function NoParmsMethod() {
		Base_NoParmsMethod($this->_cPtr);
	}

	function BoolMethod($x) {
		return Base_BoolMethod($this->_cPtr,$x);
	}

	function IntMethod($x) {
		return Base_IntMethod($this->_cPtr,$x);
	}

	function UIntMethod($x) {
		return Base_UIntMethod($this->_cPtr,$x);
	}

	function FloatMethod($x) {
		return Base_FloatMethod($this->_cPtr,$x);
	}

	function CharPtrMethod($x) {
		return Base_CharPtrMethod($this->_cPtr,$x);
	}

	function ConstCharPtrMethod($x) {
		return Base_ConstCharPtrMethod($this->_cPtr,$x);
	}

	function EnumMethod($x) {
		return Base_EnumMethod($this->_cPtr,$x);
	}

	function ManyParmsMethod($b,$i,$u,$f,$c_,$cc,$h) {
		Base_ManyParmsMethod($this->_cPtr,$b,$i,$u,$f,$c_,$cc,$h);
	}

	function NotOverriddenMethod() {
		Base_NotOverriddenMethod($this->_cPtr);
	}
}

class Derived extends Base {
	public $_cPtr=null;

	function __set($var,$value) {
		if ($var === 'thisown') return swig_director_primitives_alter_newobject($this->_cPtr,$value);
		Base::__set($var,$value);
	}

	function __isset($var) {
		if ($var === 'thisown') return true;
		return Base::__isset($var);
	}

	function __get($var) {
		if ($var === 'thisown') return swig_director_primitives_get_newobject($this->_cPtr);
		return Base::__get($var);
	}

	function __construct($dd) {
		if (is_resource($dd) && get_resource_type($dd) === '_p_Derived') {
			$this->_cPtr=$dd;
			return;
		}
		if (get_class($this) === 'Derived') {
			$_this = null;
		} else {
			$_this = $this;
		}
		$this->_cPtr=new_Derived($_this, $dd);
	}

	function NoParmsMethod() {
		Derived_NoParmsMethod($this->_cPtr);
	}

	function BoolMethod($x) {
		return Derived_BoolMethod($this->_cPtr,$x);
	}

	function IntMethod($x) {
		return Derived_IntMethod($this->_cPtr,$x);
	}

	function UIntMethod($x) {
		return Derived_UIntMethod($this->_cPtr,$x);
	}

	function FloatMethod($x) {
		return Derived_FloatMethod($this->_cPtr,$x);
	}

	function CharPtrMethod($x) {
		return Derived_CharPtrMethod($this->_cPtr,$x);
	}

	function ConstCharPtrMethod($x) {
		return Derived_ConstCharPtrMethod($this->_cPtr,$x);
	}

	function EnumMethod($x) {
		return Derived_EnumMethod($this->_cPtr,$x);
	}

	function ManyParmsMethod($b,$i,$u,$f,$c_,$cc,$h) {
		Derived_ManyParmsMethod($this->_cPtr,$b,$i,$u,$f,$c_,$cc,$h);
	}
}

class Caller {
	public $_cPtr=null;
	protected $_pData=array();

	function __set($var,$value) {
		if ($var === 'thisown') return swig_director_primitives_alter_newobject($this->_cPtr,$value);
		$this->_pData[$var] = $value;
	}

	function __isset($var) {
		if ($var === 'thisown') return true;
		return array_key_exists($var, $this->_pData);
	}

	function __get($var) {
		if ($var === 'thisown') return swig_director_primitives_get_newobject($this->_cPtr);
		return $this->_pData[$var];
	}

	function __construct($res=null) {
		if (is_resource($res) && get_resource_type($res) === '_p_Caller') {
			$this->_cPtr=$res;
			return;
		}
		$this->_cPtr=new_Caller();
	}

	function set($b) {
		Caller_set($this->_cPtr,$b);
	}

	function reset() {
		Caller_reset($this->_cPtr);
	}

	function NoParmsMethodCall() {
		Caller_NoParmsMethodCall($this->_cPtr);
	}

	function BoolMethodCall($x) {
		return Caller_BoolMethodCall($this->_cPtr,$x);
	}

	function IntMethodCall($x) {
		return Caller_IntMethodCall($this->_cPtr,$x);
	}

	function UIntMethodCall($x) {
		return Caller_UIntMethodCall($this->_cPtr,$x);
	}

	function FloatMethodCall($x) {
		return Caller_FloatMethodCall($this->_cPtr,$x);
	}

	function CharPtrMethodCall($x) {
		return Caller_CharPtrMethodCall($this->_cPtr,$x);
	}

	function ConstCharPtrMethodCall($x) {
		return Caller_ConstCharPtrMethodCall($this->_cPtr,$x);
	}

	function EnumMethodCall($x) {
		return Caller_EnumMethodCall($this->_cPtr,$x);
	}

	function ManyParmsMethodCall($b,$i,$u,$f,$c_,$cc,$h) {
		Caller_ManyParmsMethodCall($this->_cPtr,$b,$i,$u,$f,$c_,$cc,$h);
	}

	function NotOverriddenMethodCall() {
		Caller_NotOverriddenMethodCall($this->_cPtr);
	}
}


?>
