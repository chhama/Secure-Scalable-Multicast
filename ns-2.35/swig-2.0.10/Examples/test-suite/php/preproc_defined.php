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
if (!extension_loaded('preproc_defined')) {
  if (strtolower(substr(PHP_OS, 0, 3)) === 'win') {
    if (!dl('php_preproc_defined.dll')) return;
  } else {
    // PHP_SHLIB_SUFFIX gives 'dylib' on MacOS X but modules are 'so'.
    if (PHP_SHLIB_SUFFIX === 'dylib') {
      if (!dl('preproc_defined.so')) return;
    } else {
      if (!dl('preproc_defined.'.PHP_SHLIB_SUFFIX)) return;
    }
  }
}



abstract class preproc_defined {
	static function call_checking() {
		return call_checking();
	}

	static function thing($arg1) {
		thing($arg1);
	}

	static function stuff($arg1) {
		stuff($arg1);
	}

	static function bumpf($arg1) {
		bumpf($arg1);
	}
}

/* PHP Proxy Classes */
class Defined {
	public $_cPtr=null;
	protected $_pData=array();

	function __set($var,$value) {
		if ($var === 'defined') return Defined_defined_set($this->_cPtr,$value);
		if ($var === 'thisown') return swig_preproc_defined_alter_newobject($this->_cPtr,$value);
		$this->_pData[$var] = $value;
	}

	function __isset($var) {
		if (function_exists('Defined_'.$var.'_set')) return true;
		if ($var === 'thisown') return true;
		return array_key_exists($var, $this->_pData);
	}

	function __get($var) {
		if ($var === 'defined') return Defined_defined_get($this->_cPtr);
		if ($var === 'thisown') return swig_preproc_defined_get_newobject($this->_cPtr);
		return $this->_pData[$var];
	}

	function __construct($res=null) {
		if (is_resource($res) && get_resource_type($res) === '_p_Defined') {
			$this->_cPtr=$res;
			return;
		}
		$this->_cPtr=new_Defined();
	}
}


?>
