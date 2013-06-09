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
if (!extension_loaded('funcptr')) {
  if (strtolower(substr(PHP_OS, 0, 3)) === 'win') {
    if (!dl('php_funcptr.dll')) return;
  } else {
    // PHP_SHLIB_SUFFIX gives 'dylib' on MacOS X but modules are 'so'.
    if (PHP_SHLIB_SUFFIX === 'dylib') {
      if (!dl('funcptr.so')) return;
    } else {
      if (!dl('funcptr.'.PHP_SHLIB_SUFFIX)) return;
    }
  }
}



abstract class funcptr {
	static function distance($data,$dim,$fun,$output) {
		distance($data,$dim,$fun,$output);
	}

	static function do_op($a,$b,$op) {
		return do_op($a,$b,$op);
	}

	static function add($a,$b) {
		return add($a,$b);
	}

	static function subtract($a,$b) {
		return subtract($a,$b);
	}

	static function multiply($a,$b) {
		return multiply($a,$b);
	}

	static function nowt() {
		return nowt();
	}

	static function nowt2() {
		return nowt2();
	}

	static function mystructptr() {
		$r=mystructptr();
		if (is_resource($r)) {
			$c=substr(get_resource_type($r), (strpos(get_resource_type($r), '__') ? strpos(get_resource_type($r), '__') + 2 : 3));
			if (class_exists($c)) return new $c($r);
			return new MyStruct($r);
		}
		return $r;
	}

	static function funcvar_set($funcvar) {
		funcvar_set($funcvar);
	}

	static function funcvar_get() {
		return funcvar_get();
	}

	static function funcvar2_set($funcvar2) {
		funcvar2_set($funcvar2);
	}

	static function funcvar2_get() {
		return funcvar2_get();
	}

	static function funcvar3_set($funcvar3) {
		funcvar3_set($funcvar3);
	}

	static function funcvar3_get() {
		return funcvar3_get();
	}

	static function funcvar4_set($funcvar4) {
		funcvar4_set($funcvar4);
	}

	static function funcvar4_get() {
		return funcvar4_get();
	}

	static function funcvar5_set($funcvar5) {
		funcvar5_set($funcvar5);
	}

	static function funcvar5_get() {
		return funcvar5_get();
	}

	static function pfunc0_set($pfunc0) {
		pfunc0_set($pfunc0);
	}

	static function pfunc0_get() {
		return pfunc0_get();
	}

	static function pfuncA_set($pfuncA) {
		pfuncA_set($pfuncA);
	}

	static function pfuncA_get() {
		return pfuncA_get();
	}

	static function pfunc1_set($pfunc1) {
		pfunc1_set($pfunc1);
	}

	static function pfunc1_get() {
		return pfunc1_get();
	}

	static function pfunc2_set($pfunc2) {
		pfunc2_set($pfunc2);
	}

	static function pfunc2_get() {
		return pfunc2_get();
	}
}

/* PHP Proxy Classes */
class MyStruct {
	public $_cPtr=null;
	protected $_pData=array();

	function __set($var,$value) {
		if ($var === 'i') return MyStruct_i_set($this->_cPtr,$value);
		if ($var === 'thisown') return swig_funcptr_alter_newobject($this->_cPtr,$value);
		$this->_pData[$var] = $value;
	}

	function __isset($var) {
		if (function_exists('MyStruct_'.$var.'_set')) return true;
		if ($var === 'thisown') return true;
		return array_key_exists($var, $this->_pData);
	}

	function __get($var) {
		if ($var === 'i') return MyStruct_i_get($this->_cPtr);
		if ($var === 'thisown') return swig_funcptr_get_newobject($this->_cPtr);
		return $this->_pData[$var];
	}

	function __construct($res=null) {
		if (is_resource($res) && get_resource_type($res) === '_p_MyStruct') {
			$this->_cPtr=$res;
			return;
		}
		$this->_cPtr=new_MyStruct();
	}
}


?>
