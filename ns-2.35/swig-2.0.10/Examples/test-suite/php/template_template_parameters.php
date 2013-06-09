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
if (!extension_loaded('template_template_parameters')) {
  if (strtolower(substr(PHP_OS, 0, 3)) === 'win') {
    if (!dl('php_template_template_parameters.dll')) return;
  } else {
    // PHP_SHLIB_SUFFIX gives 'dylib' on MacOS X but modules are 'so'.
    if (PHP_SHLIB_SUFFIX === 'dylib') {
      if (!dl('template_template_parameters.so')) return;
    } else {
      if (!dl('template_template_parameters.'.PHP_SHLIB_SUFFIX)) return;
    }
  }
}



abstract class template_template_parameters {
	static function TestInstantiations() {
		TestInstantiations();
	}
}

/* PHP Proxy Classes */
class ListImplFastBool {
	public $_cPtr=null;
	protected $_pData=array();

	function __set($var,$value) {
		if ($var === 'thisown') return swig_template_template_parameters_alter_newobject($this->_cPtr,$value);
		$this->_pData[$var] = $value;
	}

	function __isset($var) {
		if ($var === 'thisown') return true;
		return array_key_exists($var, $this->_pData);
	}

	function __get($var) {
		if ($var === 'thisown') return swig_template_template_parameters_get_newobject($this->_cPtr);
		return $this->_pData[$var];
	}

	function __construct($res=null) {
		if (is_resource($res) && get_resource_type($res) === '_p_list_impl_tT_bool_pfc__array_tT_bool_pfc__alloc_fast_t_t') {
			$this->_cPtr=$res;
			return;
		}
		$this->_cPtr=new_ListImplFastBool();
	}
}

class ListFastBool extends ListImplFastBool {
	public $_cPtr=null;

	function __set($var,$value) {
		if ($var === 'item') return ListFastBool_item_set($this->_cPtr,$value);
		if ($var === 'thisown') return swig_template_template_parameters_alter_newobject($this->_cPtr,$value);
		ListImplFastBool::__set($var,$value);
	}

	function __isset($var) {
		if (function_exists('ListFastBool_'.$var.'_set')) return true;
		if ($var === 'thisown') return true;
		return ListImplFastBool::__isset($var);
	}

	function __get($var) {
		if ($var === 'item') return ListFastBool_item_get($this->_cPtr);
		if ($var === 'thisown') return swig_template_template_parameters_get_newobject($this->_cPtr);
		return ListImplFastBool::__get($var);
	}

	function xx() {
		ListFastBool_xx($this->_cPtr);
	}

	function __construct($res=null) {
		if (is_resource($res) && get_resource_type($res) === '_p_list_tT_bool_pfc__alloc_fast_t') {
			$this->_cPtr=$res;
			return;
		}
		$this->_cPtr=new_ListFastBool();
	}
}

class ListImplFastDouble {
	public $_cPtr=null;
	protected $_pData=array();

	function __set($var,$value) {
		if ($var === 'thisown') return swig_template_template_parameters_alter_newobject($this->_cPtr,$value);
		$this->_pData[$var] = $value;
	}

	function __isset($var) {
		if ($var === 'thisown') return true;
		return array_key_exists($var, $this->_pData);
	}

	function __get($var) {
		if ($var === 'thisown') return swig_template_template_parameters_get_newobject($this->_cPtr);
		return $this->_pData[$var];
	}

	function __construct($res=null) {
		if (is_resource($res) && get_resource_type($res) === '_p_list_impl_tT_double_pfc__array_tT_double_pfc__alloc_fast_t_t') {
			$this->_cPtr=$res;
			return;
		}
		$this->_cPtr=new_ListImplFastDouble();
	}
}

class ListDefaultDouble extends ListImplFastDouble {
	public $_cPtr=null;

	function __set($var,$value) {
		if ($var === 'item') return ListDefaultDouble_item_set($this->_cPtr,$value);
		if ($var === 'thisown') return swig_template_template_parameters_alter_newobject($this->_cPtr,$value);
		ListImplFastDouble::__set($var,$value);
	}

	function __isset($var) {
		if (function_exists('ListDefaultDouble_'.$var.'_set')) return true;
		if ($var === 'thisown') return true;
		return ListImplFastDouble::__isset($var);
	}

	function __get($var) {
		if ($var === 'item') return ListDefaultDouble_item_get($this->_cPtr);
		if ($var === 'thisown') return swig_template_template_parameters_get_newobject($this->_cPtr);
		return ListImplFastDouble::__get($var);
	}

	function xx() {
		ListDefaultDouble_xx($this->_cPtr);
	}

	function __construct($res=null) {
		if (is_resource($res) && get_resource_type($res) === '_p_list_tT_double_pfc__alloc_fast_t') {
			$this->_cPtr=$res;
			return;
		}
		$this->_cPtr=new_ListDefaultDouble();
	}
}


?>
