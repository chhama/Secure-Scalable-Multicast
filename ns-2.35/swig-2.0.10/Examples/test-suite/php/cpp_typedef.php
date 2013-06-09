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
if (!extension_loaded('cpp_typedef')) {
  if (strtolower(substr(PHP_OS, 0, 3)) === 'win') {
    if (!dl('php_cpp_typedef.dll')) return;
  } else {
    // PHP_SHLIB_SUFFIX gives 'dylib' on MacOS X but modules are 'so'.
    if (PHP_SHLIB_SUFFIX === 'dylib') {
      if (!dl('cpp_typedef.so')) return;
    } else {
      if (!dl('cpp_typedef.'.PHP_SHLIB_SUFFIX)) return;
    }
  }
}



/* PHP Proxy Classes */
class Foo {
	public $_cPtr=null;
	protected $_pData=array();

	function __set($var,$value) {
		if ($var === 'thisown') return swig_cpp_typedef_alter_newobject($this->_cPtr,$value);
		$this->_pData[$var] = $value;
	}

	function __isset($var) {
		if ($var === 'thisown') return true;
		return array_key_exists($var, $this->_pData);
	}

	function __get($var) {
		if ($var === 'thisown') return swig_cpp_typedef_get_newobject($this->_cPtr);
		return $this->_pData[$var];
	}

	function bar() {
		return Foo_bar($this->_cPtr);
	}

	static function sbar() {
		return Foo_sbar();
	}

	function __construct($res=null) {
		if (is_resource($res) && get_resource_type($res) === '_p_Foo') {
			$this->_cPtr=$res;
			return;
		}
		$this->_cPtr=new_Foo();
	}
}

class UnnamedStruct {
	public $_cPtr=null;
	protected $_pData=array();

	function __set($var,$value) {
		if ($var === 'something') return UnnamedStruct_something_set($this->_cPtr,$value);
		if ($var === 'thisown') return swig_cpp_typedef_alter_newobject($this->_cPtr,$value);
		$this->_pData[$var] = $value;
	}

	function __isset($var) {
		if (function_exists('UnnamedStruct_'.$var.'_set')) return true;
		if ($var === 'thisown') return true;
		return array_key_exists($var, $this->_pData);
	}

	function __get($var) {
		if ($var === 'something') return UnnamedStruct_something_get($this->_cPtr);
		if ($var === 'thisown') return swig_cpp_typedef_get_newobject($this->_cPtr);
		return $this->_pData[$var];
	}

	function m() {
		UnnamedStruct_m($this->_cPtr);
	}

	function __construct($res=null) {
		if (is_resource($res) && get_resource_type($res) === '_p_UnnamedStruct') {
			$this->_cPtr=$res;
			return;
		}
		$this->_cPtr=new_UnnamedStruct();
	}
}

class TypedefNamedStruct {
	public $_cPtr=null;
	protected $_pData=array();

	function __set($var,$value) {
		if ($var === 'something') return TypedefNamedStruct_something_set($this->_cPtr,$value);
		if ($var === 'thisown') return swig_cpp_typedef_alter_newobject($this->_cPtr,$value);
		$this->_pData[$var] = $value;
	}

	function __isset($var) {
		if (function_exists('TypedefNamedStruct_'.$var.'_set')) return true;
		if ($var === 'thisown') return true;
		return array_key_exists($var, $this->_pData);
	}

	function __get($var) {
		if ($var === 'something') return TypedefNamedStruct_something_get($this->_cPtr);
		if ($var === 'thisown') return swig_cpp_typedef_get_newobject($this->_cPtr);
		return $this->_pData[$var];
	}

	function m() {
		TypedefNamedStruct_m($this->_cPtr);
	}

	function __construct($res=null) {
		if (is_resource($res) && get_resource_type($res) === '_p_NamedStruct') {
			$this->_cPtr=$res;
			return;
		}
		$this->_cPtr=new_TypedefNamedStruct();
	}
}

class Test {
	public $_cPtr=null;
	protected $_pData=array();

	function __set($var,$value) {
		if ($var === 'thisown') return swig_cpp_typedef_alter_newobject($this->_cPtr,$value);
		$this->_pData[$var] = $value;
	}

	function __isset($var) {
		if ($var === 'thisown') return true;
		return array_key_exists($var, $this->_pData);
	}

	function __get($var) {
		if ($var === 'thisown') return swig_cpp_typedef_get_newobject($this->_cPtr);
		return $this->_pData[$var];
	}

	function test1($a) {
		$r=Test_test1($this->_cPtr,$a);
		if (is_resource($r)) {
			$c=substr(get_resource_type($r), (strpos(get_resource_type($r), '__') ? strpos(get_resource_type($r), '__') + 2 : 3));
			if (class_exists($c)) return new $c($r);
			return new UnnamedStruct($r);
		}
		return $r;
	}

	function test2($a) {
		$r=Test_test2($this->_cPtr,$a);
		if (is_resource($r)) {
			$c=substr(get_resource_type($r), (strpos(get_resource_type($r), '__') ? strpos(get_resource_type($r), '__') + 2 : 3));
			if (class_exists($c)) return new $c($r);
			return new TypedefNamedStruct($r);
		}
		return $r;
	}

	function test3($a) {
		$r=Test_test3($this->_cPtr,$a);
		if (is_resource($r)) {
			$c=substr(get_resource_type($r), (strpos(get_resource_type($r), '__') ? strpos(get_resource_type($r), '__') + 2 : 3));
			if (class_exists($c)) return new $c($r);
			return new TypedefNamedStruct($r);
		}
		return $r;
	}

	function test4($a) {
		$r=Test_test4($this->_cPtr,$a);
		if (is_resource($r)) {
			$c=substr(get_resource_type($r), (strpos(get_resource_type($r), '__') ? strpos(get_resource_type($r), '__') + 2 : 3));
			if (class_exists($c)) return new $c($r);
			return new TypedefNamedStruct($r);
		}
		return $r;
	}

	function __construct($res=null) {
		if (is_resource($res) && get_resource_type($res) === '_p_Test') {
			$this->_cPtr=$res;
			return;
		}
		$this->_cPtr=new_Test();
	}
}


?>