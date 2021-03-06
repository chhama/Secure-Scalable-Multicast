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
if (!extension_loaded('ret_by_value')) {
  if (strtolower(substr(PHP_OS, 0, 3)) === 'win') {
    if (!dl('php_ret_by_value.dll')) return;
  } else {
    // PHP_SHLIB_SUFFIX gives 'dylib' on MacOS X but modules are 'so'.
    if (PHP_SHLIB_SUFFIX === 'dylib') {
      if (!dl('ret_by_value.so')) return;
    } else {
      if (!dl('ret_by_value.'.PHP_SHLIB_SUFFIX)) return;
    }
  }
}



abstract class ret_by_value {
	static function get_test() {
		$r=get_test();
		if (is_resource($r)) {
			$c=substr(get_resource_type($r), (strpos(get_resource_type($r), '__') ? strpos(get_resource_type($r), '__') + 2 : 3));
			if (class_exists($c)) return new $c($r);
			return new test($r);
		}
		return $r;
	}
}

/* PHP Proxy Classes */
class test {
	public $_cPtr=null;
	protected $_pData=array();

	function __set($var,$value) {
		if ($var === 'myInt') return test_myInt_set($this->_cPtr,$value);
		if ($var === 'myShort') return test_myShort_set($this->_cPtr,$value);
		if ($var === 'thisown') return swig_ret_by_value_alter_newobject($this->_cPtr,$value);
		$this->_pData[$var] = $value;
	}

	function __isset($var) {
		if (function_exists('test_'.$var.'_set')) return true;
		if ($var === 'thisown') return true;
		return array_key_exists($var, $this->_pData);
	}

	function __get($var) {
		if ($var === 'myInt') return test_myInt_get($this->_cPtr);
		if ($var === 'myShort') return test_myShort_get($this->_cPtr);
		if ($var === 'thisown') return swig_ret_by_value_get_newobject($this->_cPtr);
		return $this->_pData[$var];
	}

	function __construct($res=null) {
		if (is_resource($res) && get_resource_type($res) === '_p_test') {
			$this->_cPtr=$res;
			return;
		}
		$this->_cPtr=new_test();
	}
}


?>
