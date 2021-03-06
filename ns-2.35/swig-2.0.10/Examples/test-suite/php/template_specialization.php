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
if (!extension_loaded('template_specialization')) {
  if (strtolower(substr(PHP_OS, 0, 3)) === 'win') {
    if (!dl('php_template_specialization.dll')) return;
  } else {
    // PHP_SHLIB_SUFFIX gives 'dylib' on MacOS X but modules are 'so'.
    if (PHP_SHLIB_SUFFIX === 'dylib') {
      if (!dl('template_specialization.so')) return;
    } else {
      if (!dl('template_specialization.'.PHP_SHLIB_SUFFIX)) return;
    }
  }
}



/* PHP Proxy Classes */
class UnaryFunction_double {
	public $_cPtr=null;
	protected $_pData=array();

	function __set($var,$value) {
		if ($var === 'thisown') return swig_template_specialization_alter_newobject($this->_cPtr,$value);
		$this->_pData[$var] = $value;
	}

	function __isset($var) {
		if ($var === 'thisown') return true;
		return array_key_exists($var, $this->_pData);
	}

	function __get($var) {
		if ($var === 'thisown') return swig_template_specialization_get_newobject($this->_cPtr);
		return $this->_pData[$var];
	}

	function negate() {
		$r=UnaryFunction_double_negate($this->_cPtr);
		if (is_resource($r)) {
			$c=substr(get_resource_type($r), (strpos(get_resource_type($r), '__') ? strpos(get_resource_type($r), '__') + 2 : 3));
			if (class_exists($c)) return new $c($r);
			return new UnaryFunction_double($r);
		}
		return $r;
	}

	function __construct($res=null) {
		if (is_resource($res) && get_resource_type($res) === '_p_vfncs__UnaryFunctionT_double_t') {
			$this->_cPtr=$res;
			return;
		}
		$this->_cPtr=new_UnaryFunction_double();
	}
}

class UnaryFunction_bool {
	public $_cPtr=null;
	protected $_pData=array();

	function __set($var,$value) {
		if ($var === 'thisown') return swig_template_specialization_alter_newobject($this->_cPtr,$value);
		$this->_pData[$var] = $value;
	}

	function __isset($var) {
		if ($var === 'thisown') return true;
		return array_key_exists($var, $this->_pData);
	}

	function __get($var) {
		if ($var === 'thisown') return swig_template_specialization_get_newobject($this->_cPtr);
		return $this->_pData[$var];
	}

	function not1() {
		$r=UnaryFunction_bool_not1($this->_cPtr);
		if (is_resource($r)) {
			$c=substr(get_resource_type($r), (strpos(get_resource_type($r), '__') ? strpos(get_resource_type($r), '__') + 2 : 3));
			if (class_exists($c)) return new $c($r);
			return new UnaryFunction_bool($r);
		}
		return $r;
	}

	function foo($arg1) {
		UnaryFunction_bool_foo($this->_cPtr,$arg1);
	}

	function __construct($res=null) {
		if (is_resource($res) && get_resource_type($res) === '_p_vfncs__UnaryFunctionT_bool_t') {
			$this->_cPtr=$res;
			return;
		}
		$this->_cPtr=new_UnaryFunction_bool();
	}
}


?>
