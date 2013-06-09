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
if (!extension_loaded('pointer_reference')) {
  if (strtolower(substr(PHP_OS, 0, 3)) === 'win') {
    if (!dl('php_pointer_reference.dll')) return;
  } else {
    // PHP_SHLIB_SUFFIX gives 'dylib' on MacOS X but modules are 'so'.
    if (PHP_SHLIB_SUFFIX === 'dylib') {
      if (!dl('pointer_reference.so')) return;
    } else {
      if (!dl('pointer_reference.'.PHP_SHLIB_SUFFIX)) return;
    }
  }
}



abstract class pointer_reference {
	static function foo($XYZZY) {
		foo($XYZZY);
	}

	static function set($s) {
		set($s);
	}

	static function get() {
		$r=get();
		if (is_resource($r)) {
			$c=substr(get_resource_type($r), (strpos(get_resource_type($r), '__') ? strpos(get_resource_type($r), '__') + 2 : 3));
			if (class_exists($c)) return new $c($r);
			return new Struct($r);
		}
		return $r;
	}

	static function overloading($i_or_s) {
		return overloading($i_or_s);
	}
}

/* PHP Proxy Classes */
class Struct {
	public $_cPtr=null;
	protected $_pData=array();

	function __set($var,$value) {
		if ($var === 'value') return Struct_value_set($this->_cPtr,$value);
		if ($var === 'thisown') return swig_pointer_reference_alter_newobject($this->_cPtr,$value);
		$this->_pData[$var] = $value;
	}

	function __isset($var) {
		if (function_exists('Struct_'.$var.'_set')) return true;
		if ($var === 'thisown') return true;
		return array_key_exists($var, $this->_pData);
	}

	function __get($var) {
		if ($var === 'value') return Struct_value_get($this->_cPtr);
		if ($var === 'thisown') return swig_pointer_reference_get_newobject($this->_cPtr);
		return $this->_pData[$var];
	}

	function __construct($v) {
		if (is_resource($v) && get_resource_type($v) === '_p_Struct') {
			$this->_cPtr=$v;
			return;
		}
		$this->_cPtr=new_Struct($v);
	}

	static function instance() {
		if (func_num_args()) {
			Struct_instance_set(func_get_arg(0));
			return;
		}

		$r=Struct_instance_get();
		if (is_resource($r)) {
			$c=substr(get_resource_type($r), (strpos(get_resource_type($r), '__') ? strpos(get_resource_type($r), '__') + 2 : 3));
			if (class_exists($c)) return new $c($r);
			return new Struct($r);
		}
		return $r;
	}

	static function pInstance() {
		if (func_num_args()) {
			Struct_pInstance_set(func_get_arg(0));
			return;
		}

		$r=Struct_pInstance_get();
		if (is_resource($r)) {
			$c=substr(get_resource_type($r), (strpos(get_resource_type($r), '__') ? strpos(get_resource_type($r), '__') + 2 : 3));
			if (class_exists($c)) return new $c($r);
			return new Struct($r);
		}
		return $r;
	}
}


?>