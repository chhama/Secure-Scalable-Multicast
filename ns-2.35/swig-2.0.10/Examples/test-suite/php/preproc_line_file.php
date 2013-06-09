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
if (!extension_loaded('preproc_line_file')) {
  if (strtolower(substr(PHP_OS, 0, 3)) === 'win') {
    if (!dl('php_preproc_line_file.dll')) return;
  } else {
    // PHP_SHLIB_SUFFIX gives 'dylib' on MacOS X but modules are 'so'.
    if (PHP_SHLIB_SUFFIX === 'dylib') {
      if (!dl('preproc_line_file.so')) return;
    } else {
      if (!dl('preproc_line_file.'.PHP_SHLIB_SUFFIX)) return;
    }
  }
}



abstract class preproc_line_file {
	const MYLINE = MYLINE;

	const MYLINE_ADJUSTED = MYLINE_ADJUSTED;

	const MYFILE = MYFILE;

	const MYFILE_ADJUSTED = MYFILE_ADJUSTED;

	const MY_STRINGNUM_A = MY_STRINGNUM_A;

	const MY_STRINGNUM_B = MY_STRINGNUM_B;

	static function thing27_get() {
		return thing27_get();
	}

	static function thing28_get() {
		return thing28_get();
	}

	const MYLINE2 = MYLINE2;

	const INLINE_FILE = INLINE_FILE;

	const INLINE_LINE = INLINE_LINE;
}

/* PHP Proxy Classes */
class SillyStruct {
	public $_cPtr=null;
	protected $_pData=array();

	function __set($var,$value) {
		if ($var === 'num') return SillyStruct_num_set($this->_cPtr,$value);
		if ($var === 'thisown') return swig_preproc_line_file_alter_newobject($this->_cPtr,$value);
		$this->_pData[$var] = $value;
	}

	function __isset($var) {
		if (function_exists('SillyStruct_'.$var.'_set')) return true;
		if ($var === 'thisown') return true;
		return array_key_exists($var, $this->_pData);
	}

	function __get($var) {
		if ($var === 'num') return SillyStruct_num_get($this->_cPtr);
		if ($var === 'thisown') return swig_preproc_line_file_get_newobject($this->_cPtr);
		return $this->_pData[$var];
	}

	function __construct($res=null) {
		if (is_resource($res) && get_resource_type($res) === '_p_SillyStruct') {
			$this->_cPtr=$res;
			return;
		}
		$this->_cPtr=new_SillyStruct();
	}
}

class SillyMacroClass {
	public $_cPtr=null;
	protected $_pData=array();

	function __set($var,$value) {
		if ($var === 'num') return SillyMacroClass_num_set($this->_cPtr,$value);
		if ($var === 'thisown') return swig_preproc_line_file_alter_newobject($this->_cPtr,$value);
		$this->_pData[$var] = $value;
	}

	function __isset($var) {
		if (function_exists('SillyMacroClass_'.$var.'_set')) return true;
		if ($var === 'thisown') return true;
		return array_key_exists($var, $this->_pData);
	}

	function __get($var) {
		if ($var === 'num') return SillyMacroClass_num_get($this->_cPtr);
		if ($var === 'thisown') return swig_preproc_line_file_get_newobject($this->_cPtr);
		return $this->_pData[$var];
	}

	function __construct($res=null) {
		if (is_resource($res) && get_resource_type($res) === '_p_SillyMacroClass') {
			$this->_cPtr=$res;
			return;
		}
		$this->_cPtr=new_SillyMacroClass();
	}
}

class SillyMultipleMacroStruct {
	public $_cPtr=null;
	protected $_pData=array();

	function __set($var,$value) {
		if ($var === 'num') return SillyMultipleMacroStruct_num_set($this->_cPtr,$value);
		if ($var === 'thisown') return swig_preproc_line_file_alter_newobject($this->_cPtr,$value);
		$this->_pData[$var] = $value;
	}

	function __isset($var) {
		if (function_exists('SillyMultipleMacroStruct_'.$var.'_set')) return true;
		if ($var === 'thisown') return true;
		return array_key_exists($var, $this->_pData);
	}

	function __get($var) {
		if ($var === 'num') return SillyMultipleMacroStruct_num_get($this->_cPtr);
		if ($var === 'thisown') return swig_preproc_line_file_get_newobject($this->_cPtr);
		return $this->_pData[$var];
	}

	function __construct($res=null) {
		if (is_resource($res) && get_resource_type($res) === '_p_SillyMultipleMacroStruct') {
			$this->_cPtr=$res;
			return;
		}
		$this->_cPtr=new_SillyMultipleMacroStruct();
	}
}

class Slash {
	public $_cPtr=null;
	protected $_pData=array();

	function __set($var,$value) {
		if ($var === 'num') return Slash_num_set($this->_cPtr,$value);
		if ($var === 'thisown') return swig_preproc_line_file_alter_newobject($this->_cPtr,$value);
		$this->_pData[$var] = $value;
	}

	function __isset($var) {
		if (function_exists('Slash_'.$var.'_set')) return true;
		if ($var === 'thisown') return true;
		return array_key_exists($var, $this->_pData);
	}

	function __get($var) {
		if ($var === 'num') return Slash_num_get($this->_cPtr);
		if ($var === 'thisown') return swig_preproc_line_file_get_newobject($this->_cPtr);
		return $this->_pData[$var];
	}

	function __construct($res=null) {
		if (is_resource($res) && get_resource_type($res) === '_p_Slash') {
			$this->_cPtr=$res;
			return;
		}
		$this->_cPtr=new_Slash();
	}
}


?>