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
if (!extension_loaded('extend_typedef_class')) {
  if (strtolower(substr(PHP_OS, 0, 3)) === 'win') {
    if (!dl('php_extend_typedef_class.dll')) return;
  } else {
    // PHP_SHLIB_SUFFIX gives 'dylib' on MacOS X but modules are 'so'.
    if (PHP_SHLIB_SUFFIX === 'dylib') {
      if (!dl('extend_typedef_class.so')) return;
    } else {
      if (!dl('extend_typedef_class.'.PHP_SHLIB_SUFFIX)) return;
    }
  }
}



/* PHP Proxy Classes */
class AClass {
	public $_cPtr=null;
	protected $_pData=array();

	function __set($var,$value) {
		if ($var === 'membervar') return AClass_membervar_set($this->_cPtr,$value);
		if ($var === 'thisown') return swig_extend_typedef_class_alter_newobject($this->_cPtr,$value);
		$this->_pData[$var] = $value;
	}

	function __isset($var) {
		if (function_exists('AClass_'.$var.'_set')) return true;
		if ($var === 'thisown') return true;
		return array_key_exists($var, $this->_pData);
	}

	function __get($var) {
		if ($var === 'membervar') return AClass_membervar_get($this->_cPtr);
		if ($var === 'thisown') return swig_extend_typedef_class_get_newobject($this->_cPtr);
		return $this->_pData[$var];
	}

	function getvar() {
		return AClass_getvar($this->_cPtr);
	}

	function __construct($res=null) {
		if (is_resource($res) && get_resource_type($res) === '_p_tagAClass') {
			$this->_cPtr=$res;
			return;
		}
		$this->_cPtr=new_AClass();
	}
}

class BClass {
	public $_cPtr=null;
	protected $_pData=array();

	function __set($var,$value) {
		if ($var === 'membervar') return BClass_membervar_set($this->_cPtr,$value);
		if ($var === 'thisown') return swig_extend_typedef_class_alter_newobject($this->_cPtr,$value);
		$this->_pData[$var] = $value;
	}

	function __isset($var) {
		if (function_exists('BClass_'.$var.'_set')) return true;
		if ($var === 'thisown') return true;
		return array_key_exists($var, $this->_pData);
	}

	function __get($var) {
		if ($var === 'membervar') return BClass_membervar_get($this->_cPtr);
		if ($var === 'thisown') return swig_extend_typedef_class_get_newobject($this->_cPtr);
		return $this->_pData[$var];
	}

	function getvar() {
		return BClass_getvar($this->_cPtr);
	}

	function __construct($res=null) {
		if (is_resource($res) && get_resource_type($res) === '_p_BClass') {
			$this->_cPtr=$res;
			return;
		}
		$this->_cPtr=new_BClass();
	}
}

class CClass {
	public $_cPtr=null;
	protected $_pData=array();

	function __set($var,$value) {
		if ($var === 'membervar') return CClass_membervar_set($this->_cPtr,$value);
		if ($var === 'thisown') return swig_extend_typedef_class_alter_newobject($this->_cPtr,$value);
		$this->_pData[$var] = $value;
	}

	function __isset($var) {
		if (function_exists('CClass_'.$var.'_set')) return true;
		if ($var === 'thisown') return true;
		return array_key_exists($var, $this->_pData);
	}

	function __get($var) {
		if ($var === 'membervar') return CClass_membervar_get($this->_cPtr);
		if ($var === 'thisown') return swig_extend_typedef_class_get_newobject($this->_cPtr);
		return $this->_pData[$var];
	}

	function getvar() {
		return CClass_getvar($this->_cPtr);
	}

	function __construct($res=null) {
		if (is_resource($res) && get_resource_type($res) === '_p_tagCClass') {
			$this->_cPtr=$res;
			return;
		}
		$this->_cPtr=new_CClass();
	}
}

class DClass {
	public $_cPtr=null;
	protected $_pData=array();

	function __set($var,$value) {
		if ($var === 'membervar') return DClass_membervar_set($this->_cPtr,$value);
		if ($var === 'thisown') return swig_extend_typedef_class_alter_newobject($this->_cPtr,$value);
		$this->_pData[$var] = $value;
	}

	function __isset($var) {
		if (function_exists('DClass_'.$var.'_set')) return true;
		if ($var === 'thisown') return true;
		return array_key_exists($var, $this->_pData);
	}

	function __get($var) {
		if ($var === 'membervar') return DClass_membervar_get($this->_cPtr);
		if ($var === 'thisown') return swig_extend_typedef_class_get_newobject($this->_cPtr);
		return $this->_pData[$var];
	}

	function getvar() {
		return DClass_getvar($this->_cPtr);
	}

	function __construct($res=null) {
		if (is_resource($res) && get_resource_type($res) === '_p_DClass') {
			$this->_cPtr=$res;
			return;
		}
		$this->_cPtr=new_DClass();
	}
}

class AStruct {
	public $_cPtr=null;
	protected $_pData=array();

	function __set($var,$value) {
		if ($var === 'membervar') return AStruct_membervar_set($this->_cPtr,$value);
		if ($var === 'thisown') return swig_extend_typedef_class_alter_newobject($this->_cPtr,$value);
		$this->_pData[$var] = $value;
	}

	function __isset($var) {
		if (function_exists('AStruct_'.$var.'_set')) return true;
		if ($var === 'thisown') return true;
		return array_key_exists($var, $this->_pData);
	}

	function __get($var) {
		if ($var === 'membervar') return AStruct_membervar_get($this->_cPtr);
		if ($var === 'thisown') return swig_extend_typedef_class_get_newobject($this->_cPtr);
		return $this->_pData[$var];
	}

	function getvar() {
		return AStruct_getvar($this->_cPtr);
	}

	function __construct($res=null) {
		if (is_resource($res) && get_resource_type($res) === '_p_Space__tagAStruct') {
			$this->_cPtr=$res;
			return;
		}
		$this->_cPtr=new_AStruct();
	}
}

class BStruct {
	public $_cPtr=null;
	protected $_pData=array();

	function __set($var,$value) {
		if ($var === 'membervar') return BStruct_membervar_set($this->_cPtr,$value);
		if ($var === 'thisown') return swig_extend_typedef_class_alter_newobject($this->_cPtr,$value);
		$this->_pData[$var] = $value;
	}

	function __isset($var) {
		if (function_exists('BStruct_'.$var.'_set')) return true;
		if ($var === 'thisown') return true;
		return array_key_exists($var, $this->_pData);
	}

	function __get($var) {
		if ($var === 'membervar') return BStruct_membervar_get($this->_cPtr);
		if ($var === 'thisown') return swig_extend_typedef_class_get_newobject($this->_cPtr);
		return $this->_pData[$var];
	}

	function getvar() {
		return BStruct_getvar($this->_cPtr);
	}

	function __construct($res=null) {
		if (is_resource($res) && get_resource_type($res) === '_p_Space__BStruct') {
			$this->_cPtr=$res;
			return;
		}
		$this->_cPtr=new_BStruct();
	}
}

class CStruct {
	public $_cPtr=null;
	protected $_pData=array();

	function __set($var,$value) {
		if ($var === 'membervar') return CStruct_membervar_set($this->_cPtr,$value);
		if ($var === 'thisown') return swig_extend_typedef_class_alter_newobject($this->_cPtr,$value);
		$this->_pData[$var] = $value;
	}

	function __isset($var) {
		if (function_exists('CStruct_'.$var.'_set')) return true;
		if ($var === 'thisown') return true;
		return array_key_exists($var, $this->_pData);
	}

	function __get($var) {
		if ($var === 'membervar') return CStruct_membervar_get($this->_cPtr);
		if ($var === 'thisown') return swig_extend_typedef_class_get_newobject($this->_cPtr);
		return $this->_pData[$var];
	}

	function getvar() {
		return CStruct_getvar($this->_cPtr);
	}

	function __construct($res=null) {
		if (is_resource($res) && get_resource_type($res) === '_p_Space__tagCStruct') {
			$this->_cPtr=$res;
			return;
		}
		$this->_cPtr=new_CStruct();
	}
}

class DStruct {
	public $_cPtr=null;
	protected $_pData=array();

	function __set($var,$value) {
		if ($var === 'membervar') return DStruct_membervar_set($this->_cPtr,$value);
		if ($var === 'thisown') return swig_extend_typedef_class_alter_newobject($this->_cPtr,$value);
		$this->_pData[$var] = $value;
	}

	function __isset($var) {
		if (function_exists('DStruct_'.$var.'_set')) return true;
		if ($var === 'thisown') return true;
		return array_key_exists($var, $this->_pData);
	}

	function __get($var) {
		if ($var === 'membervar') return DStruct_membervar_get($this->_cPtr);
		if ($var === 'thisown') return swig_extend_typedef_class_get_newobject($this->_cPtr);
		return $this->_pData[$var];
	}

	function getvar() {
		return DStruct_getvar($this->_cPtr);
	}

	function __construct($res=null) {
		if (is_resource($res) && get_resource_type($res) === '_p_Space__DStruct') {
			$this->_cPtr=$res;
			return;
		}
		$this->_cPtr=new_DStruct();
	}
}


?>
