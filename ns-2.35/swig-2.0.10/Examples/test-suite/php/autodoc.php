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
if (!extension_loaded('autodoc')) {
  if (strtolower(substr(PHP_OS, 0, 3)) === 'win') {
    if (!dl('php_autodoc.dll')) return;
  } else {
    // PHP_SHLIB_SUFFIX gives 'dylib' on MacOS X but modules are 'so'.
    if (PHP_SHLIB_SUFFIX === 'dylib') {
      if (!dl('autodoc.so')) return;
    } else {
      if (!dl('autodoc.'.PHP_SHLIB_SUFFIX)) return;
    }
  }
}



abstract class autodoc {
	const hi = 0;

	const hello = hello;

	static function funk($e,$arg2,$c_,$d) {
		return funk($e,$arg2,$c_,$d);
	}

	static function funkdefaults($e,$arg2,$c_,$d,$f=2.0) {
		return funkdefaults($e,$arg2,$c_,$d,$f);
	}

	static function func_input($INPUT) {
		return func_input($INPUT);
	}

	static function func_output() {
		return func_output();
	}

	static function func_inout($INOUT) {
		return func_inout($INOUT);
	}

	const FUNC_CB_CALLBACK = FUNC_CB_CALLBACK;

	static function func_cb($c_,$d) {
		return func_cb($c_,$d);
	}

	static function banana($a,$b,$c_,$d) {
		banana($a,$b,$c_,$d);
	}
}

/* PHP Proxy Classes */
class A {
	public $_cPtr=null;
	protected $_pData=array();

	function __set($var,$value) {
		$func = 'A_'.$var.'_set';
		if (function_exists($func)) return call_user_func($func,$this->_cPtr,$value);
		if ($var === 'thisown') return swig_autodoc_alter_newobject($this->_cPtr,$value);
		$this->_pData[$var] = $value;
	}

	function __isset($var) {
		if (function_exists('A_'.$var.'_set')) return true;
		if ($var === 'thisown') return true;
		return array_key_exists($var, $this->_pData);
	}

	function __get($var) {
		$func = 'A_'.$var.'_get';
		if (function_exists($func)) return call_user_func($func,$this->_cPtr);
		if ($var === 'thisown') return swig_autodoc_get_newobject($this->_cPtr);
		return $this->_pData[$var];
	}

	function __construct($a,$b,$h) {
		if (is_resource($a) && get_resource_type($a) === '_p_A') {
			$this->_cPtr=$a;
			return;
		}
		$this->_cPtr=new_A($a,$b,$h);
	}

	function funk($a) {
		return A_funk($this->_cPtr,$a);
	}

	function func0($arg1,$c_) {
		return A_func0($this->_cPtr,$arg1,$c_);
	}

	function func1($arg1,$c_) {
		return A_func1($this->_cPtr,$arg1,$c_);
	}

	function func2($arg1,$c_) {
		return A_func2($this->_cPtr,$arg1,$c_);
	}

	function func3($arg1,$c_) {
		return A_func3($this->_cPtr,$arg1,$c_);
	}

	function func0default($e,$arg2,$c_,$f=2.0) {
		return A_func0default($this->_cPtr,$e,$arg2,$c_,$f);
	}

	function func1default($e,$arg2,$c_,$f=2.0) {
		return A_func1default($this->_cPtr,$e,$arg2,$c_,$f);
	}

	function func2default($e,$arg2,$c_,$f=2.0) {
		return A_func2default($this->_cPtr,$e,$arg2,$c_,$f);
	}

	function func3default($e,$arg2,$c_,$f=2.0) {
		return A_func3default($this->_cPtr,$e,$arg2,$c_,$f);
	}

	static function func0static($e,$arg2,$c_,$f=2.0) {
		return A_func0static($e,$arg2,$c_,$f);
	}

	static function func1static($e,$arg2,$c_,$f=2.0) {
		return A_func1static($e,$arg2,$c_,$f);
	}

	static function func2static($e,$arg2,$c_,$f=2.0) {
		return A_func2static($e,$arg2,$c_,$f);
	}

	static function func3static($e,$arg2,$c_,$f=2.0) {
		return A_func3static($e,$arg2,$c_,$f);
	}
}

class B {
	public $_cPtr=null;
	protected $_pData=array();

	function __set($var,$value) {
		if ($var === 'thisown') return swig_autodoc_alter_newobject($this->_cPtr,$value);
		$this->_pData[$var] = $value;
	}

	function __isset($var) {
		if ($var === 'thisown') return true;
		return array_key_exists($var, $this->_pData);
	}

	function __get($var) {
		if ($var === 'thisown') return swig_autodoc_get_newobject($this->_cPtr);
		return $this->_pData[$var];
	}

	function __construct($a,$b,$h) {
		if (is_resource($a) && get_resource_type($a) === '_p_B') {
			$this->_cPtr=$a;
			return;
		}
		$this->_cPtr=new_B($a,$b,$h);
	}

	function funk($c_,$d) {
		return B_funk($this->_cPtr,$c_,$d);
	}
}

class C {
	public $_cPtr=null;
	protected $_pData=array();

	function __set($var,$value) {
		if ($var === 'thisown') return swig_autodoc_alter_newobject($this->_cPtr,$value);
		$this->_pData[$var] = $value;
	}

	function __isset($var) {
		if ($var === 'thisown') return true;
		return array_key_exists($var, $this->_pData);
	}

	function __get($var) {
		if ($var === 'thisown') return swig_autodoc_get_newobject($this->_cPtr);
		return $this->_pData[$var];
	}

	function __construct($a,$b,$h) {
		if (is_resource($a) && get_resource_type($a) === '_p_C') {
			$this->_cPtr=$a;
			return;
		}
		$this->_cPtr=new_C($a,$b,$h);
	}
}

class D {
	public $_cPtr=null;
	protected $_pData=array();

	function __set($var,$value) {
		if ($var === 'thisown') return swig_autodoc_alter_newobject($this->_cPtr,$value);
		$this->_pData[$var] = $value;
	}

	function __isset($var) {
		if ($var === 'thisown') return true;
		return array_key_exists($var, $this->_pData);
	}

	function __get($var) {
		if ($var === 'thisown') return swig_autodoc_get_newobject($this->_cPtr);
		return $this->_pData[$var];
	}

	function __construct($a,$b,$h) {
		if (is_resource($a) && get_resource_type($a) === '_p_D') {
			$this->_cPtr=$a;
			return;
		}
		$this->_cPtr=new_D($a,$b,$h);
	}
}

class E {
	public $_cPtr=null;
	protected $_pData=array();

	function __set($var,$value) {
		if ($var === 'thisown') return swig_autodoc_alter_newobject($this->_cPtr,$value);
		$this->_pData[$var] = $value;
	}

	function __isset($var) {
		if ($var === 'thisown') return true;
		return array_key_exists($var, $this->_pData);
	}

	function __get($var) {
		if ($var === 'thisown') return swig_autodoc_get_newobject($this->_cPtr);
		return $this->_pData[$var];
	}

	function __construct($a,$b,$h) {
		if (is_resource($a) && get_resource_type($a) === '_p_E') {
			$this->_cPtr=$a;
			return;
		}
		$this->_cPtr=new_E($a,$b,$h);
	}
}

class F {
	public $_cPtr=null;
	protected $_pData=array();

	function __set($var,$value) {
		if ($var === 'thisown') return swig_autodoc_alter_newobject($this->_cPtr,$value);
		$this->_pData[$var] = $value;
	}

	function __isset($var) {
		if ($var === 'thisown') return true;
		return array_key_exists($var, $this->_pData);
	}

	function __get($var) {
		if ($var === 'thisown') return swig_autodoc_get_newobject($this->_cPtr);
		return $this->_pData[$var];
	}

	function __construct($a,$b,$h) {
		if (is_resource($a) && get_resource_type($a) === '_p_F') {
			$this->_cPtr=$a;
			return;
		}
		$this->_cPtr=new_F($a,$b,$h);
	}
}

class S {
	public $_cPtr=null;
	protected $_pData=array();

	function __set($var,$value) {
		if ($var === 'b') return S_b_set($this->_cPtr,$value);
		if ($var === 'a') return S_a_set($this->_cPtr,$value);
		if ($var === 'thisown') return swig_autodoc_alter_newobject($this->_cPtr,$value);
		$this->_pData[$var] = $value;
	}

	function __isset($var) {
		if (function_exists('S_'.$var.'_set')) return true;
		if ($var === 'thisown') return true;
		return array_key_exists($var, $this->_pData);
	}

	function __get($var) {
		if ($var === 'b') return S_b_get($this->_cPtr);
		if ($var === 'a') return S_a_get($this->_cPtr);
		if ($var === 'thisown') return swig_autodoc_get_newobject($this->_cPtr);
		return $this->_pData[$var];
	}

	function __construct($res=null) {
		if (is_resource($res) && get_resource_type($res) === '_p_tagS') {
			$this->_cPtr=$res;
			return;
		}
		$this->_cPtr=new_S();
	}
}


?>
