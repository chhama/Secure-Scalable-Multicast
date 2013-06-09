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
if (!extension_loaded('default_arg_values')) {
  if (strtolower(substr(PHP_OS, 0, 3)) === 'win') {
    if (!dl('php_default_arg_values.dll')) return;
  } else {
    // PHP_SHLIB_SUFFIX gives 'dylib' on MacOS X but modules are 'so'.
    if (PHP_SHLIB_SUFFIX === 'dylib') {
      if (!dl('default_arg_values.so')) return;
    } else {
      if (!dl('default_arg_values.'.PHP_SHLIB_SUFFIX)) return;
    }
  }
}



abstract class default_arg_values {
	static function createPtr($v) {
		return createPtr($v);
	}
}

/* PHP Proxy Classes */
class Display {
	public $_cPtr=null;
	protected $_pData=array();

	function __set($var,$value) {
		if ($var === 'thisown') return swig_default_arg_values_alter_newobject($this->_cPtr,$value);
		$this->_pData[$var] = $value;
	}

	function __isset($var) {
		if ($var === 'thisown') return true;
		return array_key_exists($var, $this->_pData);
	}

	function __get($var) {
		if ($var === 'thisown') return swig_default_arg_values_get_newobject($this->_cPtr);
		return $this->_pData[$var];
	}

	function draw1($v=null) {
		switch (func_num_args()) {
		case 0: $r=Display_draw1($this->_cPtr); break;
		default: $r=Display_draw1($this->_cPtr,$v);
		}
		return $r;
	}

	function draw2($v=null) {
		return Display_draw2($this->_cPtr,$v);
	}

	function __construct($res=null) {
		if (is_resource($res) && get_resource_type($res) === '_p_Display') {
			$this->_cPtr=$res;
			return;
		}
		$this->_cPtr=new_Display();
	}
}


?>