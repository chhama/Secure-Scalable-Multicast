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
if (!extension_loaded('special_variable_macros')) {
  if (strtolower(substr(PHP_OS, 0, 3)) === 'win') {
    if (!dl('php_special_variable_macros.dll')) return;
  } else {
    // PHP_SHLIB_SUFFIX gives 'dylib' on MacOS X but modules are 'so'.
    if (PHP_SHLIB_SUFFIX === 'dylib') {
      if (!dl('special_variable_macros.so')) return;
    } else {
      if (!dl('special_variable_macros.'.PHP_SHLIB_SUFFIX)) return;
    }
  }
}



abstract class special_variable_macros {
	static function testFred($fred) {
		return testFred($fred);
	}

	static function testJack($jack) {
		return testJack($jack);
	}

	static function testJill($jill) {
		return testJill($jill);
	}

	static function testMary($mary) {
		return testMary($mary);
	}

	static function testJames($james) {
		return testJames($james);
	}

	static function testJim($jim) {
		return testJim($jim);
	}

	static function testJohn($john) {
		return testJohn($john);
	}
}

/* PHP Proxy Classes */
class Name {
	public $_cPtr=null;
	protected $_pData=array();

	function __set($var,$value) {
		if ($var === 'thisown') return swig_special_variable_macros_alter_newobject($this->_cPtr,$value);
		$this->_pData[$var] = $value;
	}

	function __isset($var) {
		if ($var === 'thisown') return true;
		return array_key_exists($var, $this->_pData);
	}

	function __get($var) {
		if ($var === 'thisown') return swig_special_variable_macros_get_newobject($this->_cPtr);
		return $this->_pData[$var];
	}

	function __construct($n_or_x=null) {
		if (is_resource($n_or_x) && get_resource_type($n_or_x) === '_p_Name') {
			$this->_cPtr=$n_or_x;
			return;
		}
		switch (func_num_args()) {
		case 0: $this->_cPtr=new_Name(); break;
		default: $this->_cPtr=new_Name($n_or_x);
		}
	}

	function getName() {
		return Name_getName($this->_cPtr);
	}

	function getNamePtr() {
		$r=Name_getNamePtr($this->_cPtr);
		if (is_resource($r)) {
			$c=substr(get_resource_type($r), (strpos(get_resource_type($r), '__') ? strpos(get_resource_type($r), '__') + 2 : 3));
			if (class_exists($c)) return new $c($r);
			return new Name($r);
		}
		return $r;
	}
}

class NameWrap {
	public $_cPtr=null;
	protected $_pData=array();

	function __set($var,$value) {
		if ($var === 'thisown') return swig_special_variable_macros_alter_newobject($this->_cPtr,$value);
		$this->_pData[$var] = $value;
	}

	function __isset($var) {
		if ($var === 'thisown') return true;
		return array_key_exists($var, $this->_pData);
	}

	function __get($var) {
		if ($var === 'thisown') return swig_special_variable_macros_get_newobject($this->_cPtr);
		return $this->_pData[$var];
	}

	function __construct($n="casternone") {
		if (is_resource($n) && get_resource_type($n) === '_p_NameWrap') {
			$this->_cPtr=$n;
			return;
		}
		$this->_cPtr=new_NameWrap($n);
	}

	function getNamePtr() {
		$r=NameWrap_getNamePtr($this->_cPtr);
		if (is_resource($r)) {
			$c=substr(get_resource_type($r), (strpos(get_resource_type($r), '__') ? strpos(get_resource_type($r), '__') + 2 : 3));
			if (class_exists($c)) return new $c($r);
			return new Name($r);
		}
		return $r;
	}
}

class PairIntBool {
	public $_cPtr=null;
	protected $_pData=array();

	function __set($var,$value) {
		if ($var === 'first') return PairIntBool_first_set($this->_cPtr,$value);
		if ($var === 'second') return PairIntBool_second_set($this->_cPtr,$value);
		if ($var === 'thisown') return swig_special_variable_macros_alter_newobject($this->_cPtr,$value);
		$this->_pData[$var] = $value;
	}

	function __isset($var) {
		if (function_exists('PairIntBool_'.$var.'_set')) return true;
		if ($var === 'thisown') return true;
		return array_key_exists($var, $this->_pData);
	}

	function __get($var) {
		if ($var === 'first') return PairIntBool_first_get($this->_cPtr);
		if ($var === 'second') return PairIntBool_second_get($this->_cPtr);
		if ($var === 'thisown') return swig_special_variable_macros_get_newobject($this->_cPtr);
		return $this->_pData[$var];
	}

	function __construct($f=null,$s=null) {
		if (is_resource($f) && get_resource_type($f) === '_p_Space__PairT_int_bool_t') {
			$this->_cPtr=$f;
			return;
		}
		switch (func_num_args()) {
		case 0: $this->_cPtr=new_PairIntBool(); break;
		case 1: $this->_cPtr=new_PairIntBool($f); break;
		default: $this->_cPtr=new_PairIntBool($f,$s);
		}
	}
}

class NewName {
	public $_cPtr=null;
	protected $_pData=array();

	function __set($var,$value) {
		if ($var === 'thisown') return swig_special_variable_macros_alter_newobject($this->_cPtr,$value);
		$this->_pData[$var] = $value;
	}

	function __isset($var) {
		if ($var === 'thisown') return true;
		return array_key_exists($var, $this->_pData);
	}

	function __get($var) {
		if ($var === 'thisown') return swig_special_variable_macros_get_newobject($this->_cPtr);
		return $this->_pData[$var];
	}

	function __construct($n) {
		if (is_resource($n) && get_resource_type($n) === '_p_Space__RenameMe') {
			$this->_cPtr=$n;
			return;
		}
		$this->_cPtr=new_NewName($n);
	}

	function getStoredName() {
		$r=NewName_getStoredName($this->_cPtr);
		if (is_resource($r)) {
			$c=substr(get_resource_type($r), (strpos(get_resource_type($r), '__') ? strpos(get_resource_type($r), '__') + 2 : 3));
			if (class_exists($c)) return new $c($r);
			return new Name($r);
		}
		return $r;
	}
}


?>
