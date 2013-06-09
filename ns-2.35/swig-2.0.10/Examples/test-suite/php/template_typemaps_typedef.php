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
if (!extension_loaded('template_typemaps_typedef')) {
  if (strtolower(substr(PHP_OS, 0, 3)) === 'win') {
    if (!dl('php_template_typemaps_typedef.dll')) return;
  } else {
    // PHP_SHLIB_SUFFIX gives 'dylib' on MacOS X but modules are 'so'.
    if (PHP_SHLIB_SUFFIX === 'dylib') {
      if (!dl('template_typemaps_typedef.so')) return;
    } else {
      if (!dl('template_typemaps_typedef.'.PHP_SHLIB_SUFFIX)) return;
    }
  }
}



abstract class template_typemaps_typedef {
	static function typedef_test1($pp) {
		$r=typedef_test1($pp);
		if (is_resource($r)) {
			$c=substr(get_resource_type($r), (strpos(get_resource_type($r), '__') ? strpos(get_resource_type($r), '__') + 2 : 3));
			if (class_exists($c)) return new $c($r);
			return new A($r);
		}
		return $r;
	}

	static function typedef_test2($pp) {
		$r=typedef_test2($pp);
		if (is_resource($r)) {
			$c=substr(get_resource_type($r), (strpos(get_resource_type($r), '__') ? strpos(get_resource_type($r), '__') + 2 : 3));
			if (class_exists($c)) return new $c($r);
			return new A($r);
		}
		return $r;
	}

	static function typedef_test3($pp) {
		$r=typedef_test3($pp);
		if (is_resource($r)) {
			$c=substr(get_resource_type($r), (strpos(get_resource_type($r), '__') ? strpos(get_resource_type($r), '__') + 2 : 3));
			if (class_exists($c)) return new $c($r);
			return new A($r);
		}
		return $r;
	}

	static function typedef_test4($pp) {
		$r=typedef_test4($pp);
		if (is_resource($r)) {
			$c=substr(get_resource_type($r), (strpos(get_resource_type($r), '__') ? strpos(get_resource_type($r), '__') + 2 : 3));
			if (class_exists($c)) return new $c($r);
			return new A($r);
		}
		return $r;
	}

	static function typedef_test5($pp) {
		$r=typedef_test5($pp);
		if (is_resource($r)) {
			$c=substr(get_resource_type($r), (strpos(get_resource_type($r), '__') ? strpos(get_resource_type($r), '__') + 2 : 3));
			if (class_exists($c)) return new $c($r);
			return new A($r);
		}
		return $r;
	}

	static function typedef_test6($pp) {
		$r=typedef_test6($pp);
		if (is_resource($r)) {
			$c=substr(get_resource_type($r), (strpos(get_resource_type($r), '__') ? strpos(get_resource_type($r), '__') + 2 : 3));
			if (class_exists($c)) return new $c($r);
			return new A($r);
		}
		return $r;
	}
}

/* PHP Proxy Classes */
class A {
	public $_cPtr=null;
	protected $_pData=array();

	function __set($var,$value) {
		if ($var === 'val') return A_val_set($this->_cPtr,$value);
		if ($var === 'thisown') return swig_template_typemaps_typedef_alter_newobject($this->_cPtr,$value);
		$this->_pData[$var] = $value;
	}

	function __isset($var) {
		if (function_exists('A_'.$var.'_set')) return true;
		if ($var === 'thisown') return true;
		return array_key_exists($var, $this->_pData);
	}

	function __get($var) {
		if ($var === 'val') return A_val_get($this->_cPtr);
		if ($var === 'thisown') return swig_template_typemaps_typedef_get_newobject($this->_cPtr);
		return $this->_pData[$var];
	}

	function __construct($v=0) {
		if (is_resource($v) && get_resource_type($v) === '_p_A') {
			$this->_cPtr=$v;
			return;
		}
		$this->_cPtr=new_A($v);
	}
}

class PairIntA {
	public $_cPtr=null;
	protected $_pData=array();

	function __set($var,$value) {
		if ($var === 'first') return PairIntA_first_set($this->_cPtr,$value);
		if ($var === 'second') return PairIntA_second_set($this->_cPtr,$value);
		if ($var === 'thisown') return swig_template_typemaps_typedef_alter_newobject($this->_cPtr,$value);
		$this->_pData[$var] = $value;
	}

	function __isset($var) {
		if (function_exists('PairIntA_'.$var.'_set')) return true;
		if ($var === 'thisown') return true;
		return array_key_exists($var, $this->_pData);
	}

	function __get($var) {
		if ($var === 'second') return new A(PairIntA_second_get($this->_cPtr));
		if ($var === 'first') return PairIntA_first_get($this->_cPtr);
		if ($var === 'thisown') return swig_template_typemaps_typedef_get_newobject($this->_cPtr);
		return $this->_pData[$var];
	}

	function __construct($res=null) {
		if (is_resource($res) && get_resource_type($res) === '_p_Standard__PairT_int_A_t') {
			$this->_cPtr=$res;
			return;
		}
		$this->_cPtr=new_PairIntA();
	}
}

class MultimapIntA {
	public $_cPtr=null;
	protected $_pData=array();

	function __set($var,$value) {
		if ($var === 'thisown') return swig_template_typemaps_typedef_alter_newobject($this->_cPtr,$value);
		$this->_pData[$var] = $value;
	}

	function __isset($var) {
		if ($var === 'thisown') return true;
		return array_key_exists($var, $this->_pData);
	}

	function __get($var) {
		if ($var === 'thisown') return swig_template_typemaps_typedef_get_newobject($this->_cPtr);
		return $this->_pData[$var];
	}

	function typemap_test($pii1) {
		$r=MultimapIntA_typemap_test($this->_cPtr,$pii1);
		if (is_resource($r)) {
			$c=substr(get_resource_type($r), (strpos(get_resource_type($r), '__') ? strpos(get_resource_type($r), '__') + 2 : 3));
			if (class_exists($c)) return new $c($r);
			return new A($r);
		}
		return $r;
	}

	function make_dummy_pair() {
		return MultimapIntA_make_dummy_pair($this->_cPtr);
	}

	function __construct($res=null) {
		if (is_resource($res) && get_resource_type($res) === '_p_Standard__MultimapT_int_A_int_t') {
			$this->_cPtr=$res;
			return;
		}
		$this->_cPtr=new_MultimapIntA();
	}
}

class PairAInt {
	public $_cPtr=null;
	protected $_pData=array();

	function __set($var,$value) {
		if ($var === 'first') return PairAInt_first_set($this->_cPtr,$value);
		if ($var === 'second') return PairAInt_second_set($this->_cPtr,$value);
		if ($var === 'thisown') return swig_template_typemaps_typedef_alter_newobject($this->_cPtr,$value);
		$this->_pData[$var] = $value;
	}

	function __isset($var) {
		if (function_exists('PairAInt_'.$var.'_set')) return true;
		if ($var === 'thisown') return true;
		return array_key_exists($var, $this->_pData);
	}

	function __get($var) {
		if ($var === 'first') return new A(PairAInt_first_get($this->_cPtr));
		if ($var === 'second') return PairAInt_second_get($this->_cPtr);
		if ($var === 'thisown') return swig_template_typemaps_typedef_get_newobject($this->_cPtr);
		return $this->_pData[$var];
	}

	function __construct($res=null) {
		if (is_resource($res) && get_resource_type($res) === '_p_Standard__PairT_A_int_t') {
			$this->_cPtr=$res;
			return;
		}
		$this->_cPtr=new_PairAInt();
	}
}

class MultimapAInt {
	public $_cPtr=null;
	protected $_pData=array();

	function __set($var,$value) {
		if ($var === 'thisown') return swig_template_typemaps_typedef_alter_newobject($this->_cPtr,$value);
		$this->_pData[$var] = $value;
	}

	function __isset($var) {
		if ($var === 'thisown') return true;
		return array_key_exists($var, $this->_pData);
	}

	function __get($var) {
		if ($var === 'thisown') return swig_template_typemaps_typedef_get_newobject($this->_cPtr);
		return $this->_pData[$var];
	}

	function typemap_test($pii2) {
		return MultimapAInt_typemap_test($this->_cPtr,$pii2);
	}

	function make_dummy_pair() {
		return MultimapAInt_make_dummy_pair($this->_cPtr);
	}

	function __construct($res=null) {
		if (is_resource($res) && get_resource_type($res) === '_p_Standard__MultimapT_A_int_int_t') {
			$this->_cPtr=$res;
			return;
		}
		$this->_cPtr=new_MultimapAInt();
	}
}


?>
