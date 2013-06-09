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
if (!extension_loaded('template_specialization_defarg')) {
  if (strtolower(substr(PHP_OS, 0, 3)) === 'win') {
    if (!dl('php_template_specialization_defarg.dll')) return;
  } else {
    // PHP_SHLIB_SUFFIX gives 'dylib' on MacOS X but modules are 'so'.
    if (PHP_SHLIB_SUFFIX === 'dylib') {
      if (!dl('template_specialization_defarg.so')) return;
    } else {
      if (!dl('template_specialization_defarg.'.PHP_SHLIB_SUFFIX)) return;
    }
  }
}



/* PHP Proxy Classes */
class C_i {
	public $_cPtr=null;
	protected $_pData=array();

	function __set($var,$value) {
		if ($var === 'thisown') return swig_template_specialization_defarg_alter_newobject($this->_cPtr,$value);
		$this->_pData[$var] = $value;
	}

	function __isset($var) {
		if ($var === 'thisown') return true;
		return array_key_exists($var, $this->_pData);
	}

	function __get($var) {
		if ($var === 'thisown') return swig_template_specialization_defarg_get_newobject($this->_cPtr);
		return $this->_pData[$var];
	}

	function hi() {
		return C_i_hi($this->_cPtr);
	}

	function __construct($a) {
		if (is_resource($a) && get_resource_type($a) === '_p_CT_int_double_t') {
			$this->_cPtr=$a;
			return;
		}
		$this->_cPtr=new_C_i($a);
	}
}

class C_dd {
	public $_cPtr=null;
	protected $_pData=array();

	function __set($var,$value) {
		if ($var === 'thisown') return swig_template_specialization_defarg_alter_newobject($this->_cPtr,$value);
		$this->_pData[$var] = $value;
	}

	function __isset($var) {
		if ($var === 'thisown') return true;
		return array_key_exists($var, $this->_pData);
	}

	function __get($var) {
		if ($var === 'thisown') return swig_template_specialization_defarg_get_newobject($this->_cPtr);
		return $this->_pData[$var];
	}

	function hello() {
		return C_dd_hello($this->_cPtr);
	}

	function __construct($a) {
		if (is_resource($a) && get_resource_type($a) === '_p_CT_double_double_t') {
			$this->_cPtr=$a;
			return;
		}
		$this->_cPtr=new_C_dd($a);
	}
}

class C_d {
	public $_cPtr=null;
	protected $_pData=array();

	function __set($var,$value) {
		if ($var === 'thisown') return swig_template_specialization_defarg_alter_newobject($this->_cPtr,$value);
		$this->_pData[$var] = $value;
	}

	function __isset($var) {
		if ($var === 'thisown') return true;
		return array_key_exists($var, $this->_pData);
	}

	function __get($var) {
		if ($var === 'thisown') return swig_template_specialization_defarg_get_newobject($this->_cPtr);
		return $this->_pData[$var];
	}

	function hello() {
		return C_d_hello($this->_cPtr);
	}

	function __construct($a) {
		if (is_resource($a) && get_resource_type($a) === '_p_CT_double_double_t') {
			$this->_cPtr=$a;
			return;
		}
		$this->_cPtr=new_C_d($a);
	}
}

class D_i {
	public $_cPtr=null;
	protected $_pData=array();

	function __set($var,$value) {
		if ($var === 'thisown') return swig_template_specialization_defarg_alter_newobject($this->_cPtr,$value);
		$this->_pData[$var] = $value;
	}

	function __isset($var) {
		if ($var === 'thisown') return true;
		return array_key_exists($var, $this->_pData);
	}

	function __get($var) {
		if ($var === 'thisown') return swig_template_specialization_defarg_get_newobject($this->_cPtr);
		return $this->_pData[$var];
	}

	function __construct($arg1) {
		if (is_resource($arg1) && get_resource_type($arg1) === '_p_DT_int_double_t') {
			$this->_cPtr=$arg1;
			return;
		}
		$this->_cPtr=new_D_i($arg1);
	}
}

class D_d {
	public $_cPtr=null;
	protected $_pData=array();

	function __set($var,$value) {
		if ($var === 'thisown') return swig_template_specialization_defarg_alter_newobject($this->_cPtr,$value);
		$this->_pData[$var] = $value;
	}

	function __isset($var) {
		if ($var === 'thisown') return true;
		return array_key_exists($var, $this->_pData);
	}

	function __get($var) {
		if ($var === 'thisown') return swig_template_specialization_defarg_get_newobject($this->_cPtr);
		return $this->_pData[$var];
	}

	function __construct($res=null) {
		if (is_resource($res) && get_resource_type($res) === '_p_DT_double_double_t') {
			$this->_cPtr=$res;
			return;
		}
		$this->_cPtr=new_D_d();
	}

	function foo() {
		return D_d_foo($this->_cPtr);
	}
}

class Vector_i {
	public $_cPtr=null;
	protected $_pData=array();

	function __set($var,$value) {
		if ($var === 'thisown') return swig_template_specialization_defarg_alter_newobject($this->_cPtr,$value);
		$this->_pData[$var] = $value;
	}

	function __isset($var) {
		if ($var === 'thisown') return true;
		return array_key_exists($var, $this->_pData);
	}

	function __get($var) {
		if ($var === 'thisown') return swig_template_specialization_defarg_get_newobject($this->_cPtr);
		return $this->_pData[$var];
	}

	function __construct($arg1) {
		if (is_resource($arg1) && get_resource_type($arg1) === '_p_VectorT_int_AllocT_int_t_t') {
			$this->_cPtr=$arg1;
			return;
		}
		$this->_cPtr=new_Vector_i($arg1);
	}
}

class Vector_d {
	public $_cPtr=null;
	protected $_pData=array();

	function __set($var,$value) {
		if ($var === 'thisown') return swig_template_specialization_defarg_alter_newobject($this->_cPtr,$value);
		$this->_pData[$var] = $value;
	}

	function __isset($var) {
		if ($var === 'thisown') return true;
		return array_key_exists($var, $this->_pData);
	}

	function __get($var) {
		if ($var === 'thisown') return swig_template_specialization_defarg_get_newobject($this->_cPtr);
		return $this->_pData[$var];
	}

	function __construct($res=null) {
		if (is_resource($res) && get_resource_type($res) === '_p_VectorT_double_AllocT_double_t_t') {
			$this->_cPtr=$res;
			return;
		}
		$this->_cPtr=new_Vector_d();
	}

	function foo() {
		return Vector_d_foo($this->_cPtr);
	}
}


?>