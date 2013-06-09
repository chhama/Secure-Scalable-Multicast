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
if (!extension_loaded('array_member')) {
  if (strtolower(substr(PHP_OS, 0, 3)) === 'win') {
    if (!dl('php_array_member.dll')) return;
  } else {
    // PHP_SHLIB_SUFFIX gives 'dylib' on MacOS X but modules are 'so'.
    if (PHP_SHLIB_SUFFIX === 'dylib') {
      if (!dl('array_member.so')) return;
    } else {
      if (!dl('array_member.'.PHP_SHLIB_SUFFIX)) return;
    }
  }
}



abstract class array_member {
	static function global_data_set($global_data) {
		global_data_set($global_data);
	}

	static function global_data_get() {
		return global_data_get();
	}

	static function set_value($x,$i,$v) {
		set_value($x,$i,$v);
	}

	static function get_value($x,$i) {
		return get_value($x,$i);
	}

	const BUFF_LEN = BUFF_LEN;
}

/* PHP Proxy Classes */
class Foo {
	public $_cPtr=null;
	protected $_pData=array();

	function __set($var,$value) {
		if ($var === 'data') return Foo_data_set($this->_cPtr,$value);
		if ($var === 'text') return Foo_text_set($this->_cPtr,$value);
		if ($var === 'thisown') return swig_array_member_alter_newobject($this->_cPtr,$value);
		$this->_pData[$var] = $value;
	}

	function __isset($var) {
		if (function_exists('Foo_'.$var.'_set')) return true;
		if ($var === 'thisown') return true;
		return array_key_exists($var, $this->_pData);
	}

	function __get($var) {
		if ($var === 'data') return Foo_data_get($this->_cPtr);
		if ($var === 'text') return Foo_text_get($this->_cPtr);
		if ($var === 'thisown') return swig_array_member_get_newobject($this->_cPtr);
		return $this->_pData[$var];
	}

	function __construct($res=null) {
		if (is_resource($res) && get_resource_type($res) === '_p_Foo') {
			$this->_cPtr=$res;
			return;
		}
		$this->_cPtr=new_Foo();
	}
}

class Material {
	public $_cPtr=null;
	protected $_pData=array();

	function __set($var,$value) {
		if ($var === 'thisown') return swig_array_member_alter_newobject($this->_cPtr,$value);
		$this->_pData[$var] = $value;
	}

	function __isset($var) {
		if ($var === 'thisown') return true;
		return array_key_exists($var, $this->_pData);
	}

	function __get($var) {
		if ($var === 'thisown') return swig_array_member_get_newobject($this->_cPtr);
		return $this->_pData[$var];
	}

	function __construct($res=null) {
		if (is_resource($res) && get_resource_type($res) === '_p_Material') {
			$this->_cPtr=$res;
			return;
		}
		$this->_cPtr=new_Material();
	}
}

class RayPacketData {
	public $_cPtr=null;
	protected $_pData=array();

	function __set($var,$value) {
		$func = 'RayPacketData_'.$var.'_set';
		if (function_exists($func)) return call_user_func($func,$this->_cPtr,$value);
		if ($var === 'thisown') return swig_array_member_alter_newobject($this->_cPtr,$value);
		$this->_pData[$var] = $value;
	}

	function __isset($var) {
		if (function_exists('RayPacketData_'.$var.'_set')) return true;
		if ($var === 'thisown') return true;
		return array_key_exists($var, $this->_pData);
	}

	function __get($var) {
		if ($var === 'hitMat_val') return new Material(RayPacketData_hitMat_val_get($this->_cPtr));
		$func = 'RayPacketData_'.$var.'_get';
		if (function_exists($func)) return call_user_func($func,$this->_cPtr);
		if ($var === 'thisown') return swig_array_member_get_newobject($this->_cPtr);
		return $this->_pData[$var];
	}

	const Size = 32;

	function __construct($res=null) {
		if (is_resource($res) && get_resource_type($res) === '_p_RayPacketData') {
			$this->_cPtr=$res;
			return;
		}
		$this->_cPtr=new_RayPacketData();
	}
}

class MyBuff {
	public $_cPtr=null;
	protected $_pData=array();

	function __set($var,$value) {
		if ($var === 'i') return MyBuff_i_set($this->_cPtr,$value);
		if ($var === 'x') return MyBuff_x_set($this->_cPtr,$value);
		if ($var === 'thisown') return swig_array_member_alter_newobject($this->_cPtr,$value);
		$this->_pData[$var] = $value;
	}

	function __isset($var) {
		if (function_exists('MyBuff_'.$var.'_set')) return true;
		if ($var === 'thisown') return true;
		return array_key_exists($var, $this->_pData);
	}

	function __get($var) {
		if ($var === 'i') return MyBuff_i_get($this->_cPtr);
		if ($var === 'x') return MyBuff_x_get($this->_cPtr);
		if ($var === 'thisown') return swig_array_member_get_newobject($this->_cPtr);
		return $this->_pData[$var];
	}

	function __construct($res=null) {
		if (is_resource($res) && get_resource_type($res) === '_p__m') {
			$this->_cPtr=$res;
			return;
		}
		$this->_cPtr=new_MyBuff();
	}
}

class MySBuff {
	public $_cPtr=null;
	protected $_pData=array();

	function __set($var,$value) {
		if ($var === 'i') return MySBuff_i_set($this->_cPtr,$value);
		if ($var === 'x') return MySBuff_x_set($this->_cPtr,$value);
		if ($var === 'thisown') return swig_array_member_alter_newobject($this->_cPtr,$value);
		$this->_pData[$var] = $value;
	}

	function __isset($var) {
		if (function_exists('MySBuff_'.$var.'_set')) return true;
		if ($var === 'thisown') return true;
		return array_key_exists($var, $this->_pData);
	}

	function __get($var) {
		if ($var === 'i') return MySBuff_i_get($this->_cPtr);
		if ($var === 'x') return MySBuff_x_get($this->_cPtr);
		if ($var === 'thisown') return swig_array_member_get_newobject($this->_cPtr);
		return $this->_pData[$var];
	}

	function __construct($res=null) {
		if (is_resource($res) && get_resource_type($res) === '_p__sm') {
			$this->_cPtr=$res;
			return;
		}
		$this->_cPtr=new_MySBuff();
	}
}


?>