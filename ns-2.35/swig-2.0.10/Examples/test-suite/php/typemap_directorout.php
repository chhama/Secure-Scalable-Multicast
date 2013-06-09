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
if (!extension_loaded('typemap_directorout')) {
  if (strtolower(substr(PHP_OS, 0, 3)) === 'win') {
    if (!dl('php_typemap_directorout.dll')) return;
  } else {
    // PHP_SHLIB_SUFFIX gives 'dylib' on MacOS X but modules are 'so'.
    if (PHP_SHLIB_SUFFIX === 'dylib') {
      if (!dl('typemap_directorout.so')) return;
    } else {
      if (!dl('typemap_directorout.'.PHP_SHLIB_SUFFIX)) return;
    }
  }
}



/* PHP Proxy Classes */
class Class1 {
	public $_cPtr=null;
	protected $_pData=array();

	function __set($var,$value) {
		if ($var === 'thisown') return swig_typemap_directorout_alter_newobject($this->_cPtr,$value);
		$this->_pData[$var] = $value;
	}

	function __isset($var) {
		if ($var === 'thisown') return true;
		return array_key_exists($var, $this->_pData);
	}

	function __get($var) {
		if ($var === 'thisown') return swig_typemap_directorout_get_newobject($this->_cPtr);
		return $this->_pData[$var];
	}

	function __construct($res=null) {
		if (is_resource($res) && get_resource_type($res) === '_p_Class1') {
			$this->_cPtr=$res;
			return;
		}
		if (get_class($this) === 'Class1') {
			$_this = null;
		} else {
			$_this = $this;
		}
		$this->_cPtr=new_Class1($_this);
	}

	function foo1() {
		return Class1_foo1($this->_cPtr);
	}

	function foo2($parm1=null) {
		switch (func_num_args()) {
		case 0: $this->_cPtr=Class1_foo2($this->_cPtr); break;
		default: $this->_cPtr=Class1_foo2($this->_cPtr,$parm1);
		}
		return $r;
	}
}


?>
