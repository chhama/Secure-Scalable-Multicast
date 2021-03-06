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
if (!extension_loaded('keyword_rename')) {
  if (strtolower(substr(PHP_OS, 0, 3)) === 'win') {
    if (!dl('php_keyword_rename.dll')) return;
  } else {
    // PHP_SHLIB_SUFFIX gives 'dylib' on MacOS X but modules are 'so'.
    if (PHP_SHLIB_SUFFIX === 'dylib') {
      if (!dl('keyword_rename.so')) return;
    } else {
      if (!dl('keyword_rename.'.PHP_SHLIB_SUFFIX)) return;
    }
  }
}



abstract class keyword_rename {
	static function in($except) {
		return in($except);
	}

	static function except($in) {
		return except($in);
	}

	static function pass($in) {
		return pass($in);
	}

	static function tie($die) {
		return tie($die);
	}

	static function c_use($next) {
		return c_use($next);
	}

	static function c_implements($native) {
		return c_implements($native);
	}

	static function synchronized($final) {
		return synchronized($final);
	}

	static function string($out) {
		return string($out);
	}

	static function go($defer) {
		return go($defer);
	}

	static function chan($fallthrough) {
		return chan($fallthrough);
	}
}

/* PHP Proxy Classes */
class sealed {
	public $_cPtr=null;
	protected $_pData=array();

	function __set($var,$value) {
		if ($var === 'i') return sealed_i_set($this->_cPtr,$value);
		if ($var === 'thisown') return swig_keyword_rename_alter_newobject($this->_cPtr,$value);
		$this->_pData[$var] = $value;
	}

	function __isset($var) {
		if (function_exists('sealed_'.$var.'_set')) return true;
		if ($var === 'thisown') return true;
		return array_key_exists($var, $this->_pData);
	}

	function __get($var) {
		if ($var === 'i') return sealed_i_get($this->_cPtr);
		if ($var === 'thisown') return swig_keyword_rename_get_newobject($this->_cPtr);
		return $this->_pData[$var];
	}

	function __construct($res=null) {
		if (is_resource($res) && get_resource_type($res) === '_p_sealed') {
			$this->_cPtr=$res;
			return;
		}
		$this->_cPtr=new_sealed();
	}
}


?>
