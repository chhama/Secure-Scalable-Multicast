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
if (!extension_loaded('template_enum_typedef')) {
  if (strtolower(substr(PHP_OS, 0, 3)) === 'win') {
    if (!dl('php_template_enum_typedef.dll')) return;
  } else {
    // PHP_SHLIB_SUFFIX gives 'dylib' on MacOS X but modules are 'so'.
    if (PHP_SHLIB_SUFFIX === 'dylib') {
      if (!dl('template_enum_typedef.so')) return;
    } else {
      if (!dl('template_enum_typedef.'.PHP_SHLIB_SUFFIX)) return;
    }
  }
}



abstract class template_enum_typedef {
	const UnaryPolarization = 0;

	const BinaryPolarization = BinaryPolarization;
}

/* PHP Proxy Classes */
class etraits {
	public $_cPtr=null;
	protected $_pData=array();

	function __set($var,$value) {
		if ($var === 'thisown') return swig_template_enum_typedef_alter_newobject($this->_cPtr,$value);
		$this->_pData[$var] = $value;
	}

	function __isset($var) {
		if ($var === 'thisown') return true;
		return array_key_exists($var, $this->_pData);
	}

	function __get($var) {
		if ($var === 'thisown') return swig_template_enum_typedef_get_newobject($this->_cPtr);
		return $this->_pData[$var];
	}

	const pmode = etraits_pmode;

	function __construct($res=null) {
		if (is_resource($res) && get_resource_type($res) === '_p_oss__etraits') {
			$this->_cPtr=$res;
			return;
		}
		$this->_cPtr=new_etraits();
	}
}

class Interface_UP {
	public $_cPtr=null;
	protected $_pData=array();

	function __set($var,$value) {
		if ($var === 'thisown') return swig_template_enum_typedef_alter_newobject($this->_cPtr,$value);
		$this->_pData[$var] = $value;
	}

	function __isset($var) {
		if ($var === 'thisown') return true;
		return array_key_exists($var, $this->_pData);
	}

	function __get($var) {
		if ($var === 'thisown') return swig_template_enum_typedef_get_newobject($this->_cPtr);
		return $this->_pData[$var];
	}

	function __construct($res=null) {
		if (is_resource($res) && get_resource_type($res) === '_p_oss__Interface_T_oss__UnaryPolarization_t') {
			$this->_cPtr=$res;
			return;
		}
		$this->_cPtr=new_Interface_UP();
	}
}

class Module_UP {
	public $_cPtr=null;
	protected $_pData=array();

	function __set($var,$value) {
		if ($var === 'thisown') return swig_template_enum_typedef_alter_newobject($this->_cPtr,$value);
		$this->_pData[$var] = $value;
	}

	function __isset($var) {
		if ($var === 'thisown') return true;
		return array_key_exists($var, $this->_pData);
	}

	function __get($var) {
		if ($var === 'thisown') return swig_template_enum_typedef_get_newobject($this->_cPtr);
		return $this->_pData[$var];
	}

	const P = Module_UP_P;

	function get($arg) {
		Module_UP_get($this->_cPtr,$arg);
	}

	function __construct($res=null) {
		if (is_resource($res) && get_resource_type($res) === '_p_oss__ModuleT_oss__etraits_t') {
			$this->_cPtr=$res;
			return;
		}
		$this->_cPtr=new_Module_UP();
	}
}


?>
