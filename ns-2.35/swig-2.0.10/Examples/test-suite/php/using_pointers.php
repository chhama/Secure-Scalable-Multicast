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
if (!extension_loaded('using_pointers')) {
  if (strtolower(substr(PHP_OS, 0, 3)) === 'win') {
    if (!dl('php_using_pointers.dll')) return;
  } else {
    // PHP_SHLIB_SUFFIX gives 'dylib' on MacOS X but modules are 'so'.
    if (PHP_SHLIB_SUFFIX === 'dylib') {
      if (!dl('using_pointers.so')) return;
    } else {
      if (!dl('using_pointers.'.PHP_SHLIB_SUFFIX)) return;
    }
  }
}



/* PHP Proxy Classes */
class Foo {
	public $_cPtr=null;
	protected $_pData=array();

	function __set($var,$value) {
		if ($var === 'x') return Foo_x_set($this->_cPtr,$value);
		if ($var === 'thisown') return swig_using_pointers_alter_newobject($this->_cPtr,$value);
		$this->_pData[$var] = $value;
	}

	function __isset($var) {
		if (function_exists('Foo_'.$var.'_set')) return true;
		if ($var === 'thisown') return true;
		return array_key_exists($var, $this->_pData);
	}

	function __get($var) {
		if ($var === 'x') return Foo_x_get($this->_cPtr);
		if ($var === 'thisown') return swig_using_pointers_get_newobject($this->_cPtr);
		return $this->_pData[$var];
	}

	function blah() {
		$r=Foo_blah($this->_cPtr);
		if (is_resource($r)) {
			$c=substr(get_resource_type($r), (strpos(get_resource_type($r), '__') ? strpos(get_resource_type($r), '__') + 2 : 3));
			if (class_exists($c)) return new $c($r);
			return new Foo($r);
		}
		return $r;
	}

	function exception_spec($what_to_throw) {
		$r=Foo_exception_spec($this->_cPtr,$what_to_throw);
		if (is_resource($r)) {
			$c=substr(get_resource_type($r), (strpos(get_resource_type($r), '__') ? strpos(get_resource_type($r), '__') + 2 : 3));
			if (class_exists($c)) return new $c($r);
			return new Foo($r);
		}
		return $r;
	}

	function __construct($res=null) {
		if (is_resource($res) && get_resource_type($res) === '_p_Foo') {
			$this->_cPtr=$res;
			return;
		}
		$this->_cPtr=new_Foo();
	}
}

class FooBar extends Foo {
	public $_cPtr=null;

	function __set($var,$value) {
		if ($var === 'x') return FooBar_x_set($this->_cPtr,$value);
		if ($var === 'thisown') return swig_using_pointers_alter_newobject($this->_cPtr,$value);
		Foo::__set($var,$value);
	}

	function __isset($var) {
		if (function_exists('FooBar_'.$var.'_set')) return true;
		if ($var === 'thisown') return true;
		return Foo::__isset($var);
	}

	function __get($var) {
		if ($var === 'x') return FooBar_x_get($this->_cPtr);
		if ($var === 'thisown') return swig_using_pointers_get_newobject($this->_cPtr);
		return Foo::__get($var);
	}

	function blah() {
		$r=FooBar_blah($this->_cPtr);
		if (is_resource($r)) {
			$c=substr(get_resource_type($r), (strpos(get_resource_type($r), '__') ? strpos(get_resource_type($r), '__') + 2 : 3));
			if (class_exists($c)) return new $c($r);
			return new Foo($r);
		}
		return $r;
	}

	function exception_spec($what_to_throw) {
		$r=FooBar_exception_spec($this->_cPtr,$what_to_throw);
		if (is_resource($r)) {
			$c=substr(get_resource_type($r), (strpos(get_resource_type($r), '__') ? strpos(get_resource_type($r), '__') + 2 : 3));
			if (class_exists($c)) return new $c($r);
			return new Foo($r);
		}
		return $r;
	}

	function __construct($res=null) {
		if (is_resource($res) && get_resource_type($res) === '_p_FooBar') {
			$this->_cPtr=$res;
			return;
		}
		$this->_cPtr=new_FooBar();
	}
}


?>
