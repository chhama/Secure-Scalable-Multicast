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
if (!extension_loaded('conversion_ns_template')) {
  if (strtolower(substr(PHP_OS, 0, 3)) === 'win') {
    if (!dl('php_conversion_ns_template.dll')) return;
  } else {
    // PHP_SHLIB_SUFFIX gives 'dylib' on MacOS X but modules are 'so'.
    if (PHP_SHLIB_SUFFIX === 'dylib') {
      if (!dl('conversion_ns_template.so')) return;
    } else {
      if (!dl('conversion_ns_template.'.PHP_SHLIB_SUFFIX)) return;
    }
  }
}



abstract class conversion_ns_template {
	const One = 0;

	const Two = Two;
}

/* PHP Proxy Classes */
class Hi {
	public $_cPtr=null;
	protected $_pData=array();

	function __set($var,$value) {
		if ($var === 'thisown') return swig_conversion_ns_template_alter_newobject($this->_cPtr,$value);
		$this->_pData[$var] = $value;
	}

	function __isset($var) {
		if ($var === 'thisown') return true;
		return array_key_exists($var, $this->_pData);
	}

	function __get($var) {
		if ($var === 'thisown') return swig_conversion_ns_template_get_newobject($this->_cPtr);
		return $this->_pData[$var];
	}

	function create($arg1) {
		if (is_resource($arg1) && get_resource_type($arg1) === '_p_oss__Hi') {
			$this->_cPtr=$arg1;
			return;
		}
		return new Hi(new_create($arg1));
	}
}

class Foo_One {
	public $_cPtr=null;
	protected $_pData=array();

	function __set($var,$value) {
		if ($var === 'thisown') return swig_conversion_ns_template_alter_newobject($this->_cPtr,$value);
		$this->_pData[$var] = $value;
	}

	function __isset($var) {
		if ($var === 'thisown') return true;
		return array_key_exists($var, $this->_pData);
	}

	function __get($var) {
		if ($var === 'thisown') return swig_conversion_ns_template_get_newobject($this->_cPtr);
		return $this->_pData[$var];
	}

	function __construct($res=null) {
		if (is_resource($res) && get_resource_type($res) === '_p_oss__FooT_oss__One_t') {
			$this->_cPtr=$res;
			return;
		}
		$this->_cPtr=new_Foo_One();
	}
}

class Bar_One {
	public $_cPtr=null;
	protected $_pData=array();

	function __set($var,$value) {
		if ($var === 'thisown') return swig_conversion_ns_template_alter_newobject($this->_cPtr,$value);
		$this->_pData[$var] = $value;
	}

	function __isset($var) {
		if ($var === 'thisown') return true;
		return array_key_exists($var, $this->_pData);
	}

	function __get($var) {
		if ($var === 'thisown') return swig_conversion_ns_template_get_newobject($this->_cPtr);
		return $this->_pData[$var];
	}

	function Bar_create($arg1) {
		if (is_resource($arg1) && get_resource_type($arg1) === '_p_oss__BarT_oss__One_t') {
			$this->_cPtr=$arg1;
			return;
		}
		return new Bar_One(new_Bar_create($arg1));
	}

	function hello1() {
		return Bar_One_hello1($this->_cPtr);
	}

	function hello2() {
		$r=Bar_One_hello2($this->_cPtr);
		if (is_resource($r)) {
			$c=substr(get_resource_type($r), (strpos(get_resource_type($r), '__') ? strpos(get_resource_type($r), '__') + 2 : 3));
			if (class_exists($c)) return new $c($r);
			return new Foo_One($r);
		}
		return $r;
	}
}


?>
