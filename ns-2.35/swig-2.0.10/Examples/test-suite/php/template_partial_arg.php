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
if (!extension_loaded('template_partial_arg')) {
  if (strtolower(substr(PHP_OS, 0, 3)) === 'win') {
    if (!dl('php_template_partial_arg.dll')) return;
  } else {
    // PHP_SHLIB_SUFFIX gives 'dylib' on MacOS X but modules are 'so'.
    if (PHP_SHLIB_SUFFIX === 'dylib') {
      if (!dl('template_partial_arg.so')) return;
    } else {
      if (!dl('template_partial_arg.'.PHP_SHLIB_SUFFIX)) return;
    }
  }
}



/* PHP Proxy Classes */
class Bar {
	public $_cPtr=null;
	protected $_pData=array();

	function __set($var,$value) {
		if ($var === 'thisown') return swig_template_partial_arg_alter_newobject($this->_cPtr,$value);
		$this->_pData[$var] = $value;
	}

	function __isset($var) {
		if ($var === 'thisown') return true;
		return array_key_exists($var, $this->_pData);
	}

	function __get($var) {
		if ($var === 'thisown') return swig_template_partial_arg_get_newobject($this->_cPtr);
		return $this->_pData[$var];
	}

	function __construct($res=null) {
		if (is_resource($res) && get_resource_type($res) === '_p_Bar') {
			$this->_cPtr=$res;
			return;
		}
		$this->_cPtr=new_Bar();
	}
}

class Foo1 {
	public $_cPtr=null;
	protected $_pData=array();

	function __set($var,$value) {
		if ($var === 'thisown') return swig_template_partial_arg_alter_newobject($this->_cPtr,$value);
		$this->_pData[$var] = $value;
	}

	function __isset($var) {
		if ($var === 'thisown') return true;
		return array_key_exists($var, $this->_pData);
	}

	function __get($var) {
		if ($var === 'thisown') return swig_template_partial_arg_get_newobject($this->_cPtr);
		return $this->_pData[$var];
	}

	function bar() {
		$r=Foo1_bar($this->_cPtr);
		if (is_resource($r)) {
			$c=substr(get_resource_type($r), (strpos(get_resource_type($r), '__') ? strpos(get_resource_type($r), '__') + 2 : 3));
			if (class_exists($c)) return new $c($r);
			return new Bar($r);
		}
		return $r;
	}

	function baz() {
		$r=Foo1_baz($this->_cPtr);
		if (is_resource($r)) {
			$c=substr(get_resource_type($r), (strpos(get_resource_type($r), '__') ? strpos(get_resource_type($r), '__') + 2 : 3));
			if (class_exists($c)) return new $c($r);
			return new Bar($r);
		}
		return $r;
	}

	function __construct($res=null) {
		if (is_resource($res) && get_resource_type($res) === '_p_FooT_Bar_t') {
			$this->_cPtr=$res;
			return;
		}
		$this->_cPtr=new_Foo1();
	}
}

class Foo2 {
	public $_cPtr=null;
	protected $_pData=array();

	function __set($var,$value) {
		if ($var === 'thisown') return swig_template_partial_arg_alter_newobject($this->_cPtr,$value);
		$this->_pData[$var] = $value;
	}

	function __isset($var) {
		if ($var === 'thisown') return true;
		return array_key_exists($var, $this->_pData);
	}

	function __get($var) {
		if ($var === 'thisown') return swig_template_partial_arg_get_newobject($this->_cPtr);
		return $this->_pData[$var];
	}

	function bar() {
		$r=Foo2_bar($this->_cPtr);
		if (is_resource($r)) {
			$c=substr(get_resource_type($r), (strpos(get_resource_type($r), '__') ? strpos(get_resource_type($r), '__') + 2 : 3));
			if (class_exists($c)) return new $c($r);
			return new Bar($r);
		}
		return $r;
	}

	function baz() {
		$r=Foo2_baz($this->_cPtr);
		if (is_resource($r)) {
			$c=substr(get_resource_type($r), (strpos(get_resource_type($r), '__') ? strpos(get_resource_type($r), '__') + 2 : 3));
			if (class_exists($c)) return new $c($r);
			return new Bar($r);
		}
		return $r;
	}

	function __construct($res=null) {
		if (is_resource($res) && get_resource_type($res) === '_p_FooT_Bar_p_t') {
			$this->_cPtr=$res;
			return;
		}
		$this->_cPtr=new_Foo2();
	}
}


?>
