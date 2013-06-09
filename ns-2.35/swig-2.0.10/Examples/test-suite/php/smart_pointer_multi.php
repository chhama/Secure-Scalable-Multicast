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
if (!extension_loaded('smart_pointer_multi')) {
  if (strtolower(substr(PHP_OS, 0, 3)) === 'win') {
    if (!dl('php_smart_pointer_multi.dll')) return;
  } else {
    // PHP_SHLIB_SUFFIX gives 'dylib' on MacOS X but modules are 'so'.
    if (PHP_SHLIB_SUFFIX === 'dylib') {
      if (!dl('smart_pointer_multi.so')) return;
    } else {
      if (!dl('smart_pointer_multi.'.PHP_SHLIB_SUFFIX)) return;
    }
  }
}



/* PHP Proxy Classes */
class Foo {
	public $_cPtr=null;
	protected $_pData=array();

	function __set($var,$value) {
		if ($var === 'x') return Foo_x_set($this->_cPtr,$value);
		if ($var === 'thisown') return swig_smart_pointer_multi_alter_newobject($this->_cPtr,$value);
		$this->_pData[$var] = $value;
	}

	function __isset($var) {
		if (function_exists('Foo_'.$var.'_set')) return true;
		if ($var === 'thisown') return true;
		return array_key_exists($var, $this->_pData);
	}

	function __get($var) {
		if ($var === 'x') return Foo_x_get($this->_cPtr);
		if ($var === 'thisown') return swig_smart_pointer_multi_get_newobject($this->_cPtr);
		return $this->_pData[$var];
	}

	function getx() {
		return Foo_getx($this->_cPtr);
	}

	function __construct($res=null) {
		if (is_resource($res) && get_resource_type($res) === '_p_Foo') {
			$this->_cPtr=$res;
			return;
		}
		$this->_cPtr=new_Foo();
	}
}

class Bar {
	public $_cPtr=null;
	protected $_pData=array();

	function __set($var,$value) {
		if ($var === 'x') return Bar_x_set($this->_cPtr,$value);
		if ($var === 'thisown') return swig_smart_pointer_multi_alter_newobject($this->_cPtr,$value);
		$this->_pData[$var] = $value;
	}

	function __isset($var) {
		if (function_exists('Bar_'.$var.'_set')) return true;
		if ($var === 'thisown') return true;
		return array_key_exists($var, $this->_pData);
	}

	function __get($var) {
		if ($var === 'x') return Bar_x_get($this->_cPtr);
		if ($var === 'thisown') return swig_smart_pointer_multi_get_newobject($this->_cPtr);
		return $this->_pData[$var];
	}

	function __construct($f) {
		if (is_resource($f) && get_resource_type($f) === '_p_Bar') {
			$this->_cPtr=$f;
			return;
		}
		$this->_cPtr=new_Bar($f);
	}

	function __deref__() {
		$r=Bar___deref__($this->_cPtr);
		if (is_resource($r)) {
			$c=substr(get_resource_type($r), (strpos(get_resource_type($r), '__') ? strpos(get_resource_type($r), '__') + 2 : 3));
			if (class_exists($c)) return new $c($r);
			return new Foo($r);
		}
		return $r;
	}

	function getx() {
		return Bar_getx($this->_cPtr);
	}
}

class Spam {
	public $_cPtr=null;
	protected $_pData=array();

	function __set($var,$value) {
		if ($var === 'x') return Spam_x_set($this->_cPtr,$value);
		if ($var === 'thisown') return swig_smart_pointer_multi_alter_newobject($this->_cPtr,$value);
		$this->_pData[$var] = $value;
	}

	function __isset($var) {
		if (function_exists('Spam_'.$var.'_set')) return true;
		if ($var === 'thisown') return true;
		return array_key_exists($var, $this->_pData);
	}

	function __get($var) {
		if ($var === 'x') return Spam_x_get($this->_cPtr);
		if ($var === 'thisown') return swig_smart_pointer_multi_get_newobject($this->_cPtr);
		return $this->_pData[$var];
	}

	function __construct($b) {
		if (is_resource($b) && get_resource_type($b) === '_p_Spam') {
			$this->_cPtr=$b;
			return;
		}
		$this->_cPtr=new_Spam($b);
	}

	function __deref__() {
		$r=Spam___deref__($this->_cPtr);
		if (is_resource($r)) {
			$c=substr(get_resource_type($r), (strpos(get_resource_type($r), '__') ? strpos(get_resource_type($r), '__') + 2 : 3));
			if (class_exists($c)) return new $c($r);
			return new Bar($r);
		}
		return $r;
	}

	function getx() {
		return Spam_getx($this->_cPtr);
	}
}

class Grok {
	public $_cPtr=null;
	protected $_pData=array();

	function __set($var,$value) {
		if ($var === 'x') return Grok_x_set($this->_cPtr,$value);
		if ($var === 'thisown') return swig_smart_pointer_multi_alter_newobject($this->_cPtr,$value);
		$this->_pData[$var] = $value;
	}

	function __isset($var) {
		if (function_exists('Grok_'.$var.'_set')) return true;
		if ($var === 'thisown') return true;
		return array_key_exists($var, $this->_pData);
	}

	function __get($var) {
		if ($var === 'x') return Grok_x_get($this->_cPtr);
		if ($var === 'thisown') return swig_smart_pointer_multi_get_newobject($this->_cPtr);
		return $this->_pData[$var];
	}

	function __construct($b) {
		if (is_resource($b) && get_resource_type($b) === '_p_Grok') {
			$this->_cPtr=$b;
			return;
		}
		$this->_cPtr=new_Grok($b);
	}

	function __deref__() {
		$r=Grok___deref__($this->_cPtr);
		if (is_resource($r)) {
			$c=substr(get_resource_type($r), (strpos(get_resource_type($r), '__') ? strpos(get_resource_type($r), '__') + 2 : 3));
			if (class_exists($c)) return new $c($r);
			return new Bar($r);
		}
		return $r;
	}

	function getx() {
		return Grok_getx($this->_cPtr);
	}
}


?>
