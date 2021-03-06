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
if (!extension_loaded('template_typedef_cplx2')) {
  if (strtolower(substr(PHP_OS, 0, 3)) === 'win') {
    if (!dl('php_template_typedef_cplx2.dll')) return;
  } else {
    // PHP_SHLIB_SUFFIX gives 'dylib' on MacOS X but modules are 'so'.
    if (PHP_SHLIB_SUFFIX === 'dylib') {
      if (!dl('template_typedef_cplx2.so')) return;
    } else {
      if (!dl('template_typedef_cplx2.'.PHP_SHLIB_SUFFIX)) return;
    }
  }
}



abstract class template_typedef_cplx2 {
	static function make_Identity_double() {
		$r=make_Identity_double();
		if (is_resource($r)) {
			$c=substr(get_resource_type($r), (strpos(get_resource_type($r), '__') ? strpos(get_resource_type($r), '__') + 2 : 3));
			if (class_exists($c)) return new $c($r);
			return new ArithUnaryFunction_double_double($r);
		}
		return $r;
	}

	static function make_Identity_complex() {
		$r=make_Identity_complex();
		if (is_resource($r)) {
			$c=substr(get_resource_type($r), (strpos(get_resource_type($r), '__') ? strpos(get_resource_type($r), '__') + 2 : 3));
			if (class_exists($c)) return new $c($r);
			return new ArithUnaryFunction_complex_complex($r);
		}
		return $r;
	}

	static function make_Multiplies_double_double_complex_complex($f,$g) {
		$r=make_Multiplies_double_double_complex_complex($f,$g);
		if (is_resource($r)) {
			$c=substr(get_resource_type($r), (strpos(get_resource_type($r), '__') ? strpos(get_resource_type($r), '__') + 2 : 3));
			if (class_exists($c)) return new $c($r);
			return new ArithUnaryFunction_double_complex($r);
		}
		return $r;
	}

	static function make_Multiplies_double_double_double_double($f,$g) {
		$r=make_Multiplies_double_double_double_double($f,$g);
		if (is_resource($r)) {
			$c=substr(get_resource_type($r), (strpos(get_resource_type($r), '__') ? strpos(get_resource_type($r), '__') + 2 : 3));
			if (class_exists($c)) return new $c($r);
			return new ArithUnaryFunction_double_double($r);
		}
		return $r;
	}

	static function make_Multiplies_complex_complex_complex_complex($f,$g) {
		$r=make_Multiplies_complex_complex_complex_complex($f,$g);
		if (is_resource($r)) {
			$c=substr(get_resource_type($r), (strpos(get_resource_type($r), '__') ? strpos(get_resource_type($r), '__') + 2 : 3));
			if (class_exists($c)) return new $c($r);
			return new ArithUnaryFunction_complex_complex($r);
		}
		return $r;
	}

	static function make_Multiplies_complex_complex_double_double($f,$g) {
		$r=make_Multiplies_complex_complex_double_double($f,$g);
		if (is_resource($r)) {
			$c=substr(get_resource_type($r), (strpos(get_resource_type($r), '__') ? strpos(get_resource_type($r), '__') + 2 : 3));
			if (class_exists($c)) return new $c($r);
			return new ArithUnaryFunction_double_complex($r);
		}
		return $r;
	}
}

/* PHP Proxy Classes */
class UnaryFunctionBase {
	public $_cPtr=null;
	protected $_pData=array();

	function __set($var,$value) {
		if ($var === 'thisown') return swig_template_typedef_cplx2_alter_newobject($this->_cPtr,$value);
		$this->_pData[$var] = $value;
	}

	function __isset($var) {
		if ($var === 'thisown') return true;
		return array_key_exists($var, $this->_pData);
	}

	function __get($var) {
		if ($var === 'thisown') return swig_template_typedef_cplx2_get_newobject($this->_cPtr);
		return $this->_pData[$var];
	}

	function get_base_value() {
		return UnaryFunctionBase_get_base_value($this->_cPtr);
	}

	function __construct($res=null) {
		if (is_resource($res) && get_resource_type($res) === '_p_vfncs__UnaryFunctionBase') {
			$this->_cPtr=$res;
			return;
		}
		$this->_cPtr=new_UnaryFunctionBase();
	}
}

class UnaryFunction_double_double extends UnaryFunctionBase {
	public $_cPtr=null;

	function __set($var,$value) {
		if ($var === 'thisown') return swig_template_typedef_cplx2_alter_newobject($this->_cPtr,$value);
		UnaryFunctionBase::__set($var,$value);
	}

	function __isset($var) {
		if ($var === 'thisown') return true;
		return UnaryFunctionBase::__isset($var);
	}

	function __get($var) {
		if ($var === 'thisown') return swig_template_typedef_cplx2_get_newobject($this->_cPtr);
		return UnaryFunctionBase::__get($var);
	}

	function get_value() {
		return UnaryFunction_double_double_get_value($this->_cPtr);
	}

	function __construct($res=null) {
		if (is_resource($res) && get_resource_type($res) === '_p_vfncs__UnaryFunctionT_double_double_t') {
			$this->_cPtr=$res;
			return;
		}
		$this->_cPtr=new_UnaryFunction_double_double();
	}
}

class ArithUnaryFunction_double_double extends UnaryFunction_double_double {
	public $_cPtr=null;

	function __set($var,$value) {
		if ($var === 'thisown') return swig_template_typedef_cplx2_alter_newobject($this->_cPtr,$value);
		UnaryFunction_double_double::__set($var,$value);
	}

	function __isset($var) {
		if ($var === 'thisown') return true;
		return UnaryFunction_double_double::__isset($var);
	}

	function __get($var) {
		if ($var === 'thisown') return swig_template_typedef_cplx2_get_newobject($this->_cPtr);
		return UnaryFunction_double_double::__get($var);
	}

	function get_arith_value() {
		return ArithUnaryFunction_double_double_get_arith_value($this->_cPtr);
	}

	function __construct($res=null) {
		if (is_resource($res) && get_resource_type($res) === '_p_vfncs__ArithUnaryFunctionT_double_double_t') {
			$this->_cPtr=$res;
			return;
		}
		$this->_cPtr=new_ArithUnaryFunction_double_double();
	}
}

class UnaryFunction_complex_complex extends UnaryFunctionBase {
	public $_cPtr=null;

	function __set($var,$value) {
		if ($var === 'thisown') return swig_template_typedef_cplx2_alter_newobject($this->_cPtr,$value);
		UnaryFunctionBase::__set($var,$value);
	}

	function __isset($var) {
		if ($var === 'thisown') return true;
		return UnaryFunctionBase::__isset($var);
	}

	function __get($var) {
		if ($var === 'thisown') return swig_template_typedef_cplx2_get_newobject($this->_cPtr);
		return UnaryFunctionBase::__get($var);
	}

	function get_value() {
		return UnaryFunction_complex_complex_get_value($this->_cPtr);
	}

	function __construct($res=null) {
		if (is_resource($res) && get_resource_type($res) === '_p_vfncs__UnaryFunctionT_std__complexT_double_t_std__complexT_double_t_t') {
			$this->_cPtr=$res;
			return;
		}
		$this->_cPtr=new_UnaryFunction_complex_complex();
	}
}

class ArithUnaryFunction_complex_complex extends UnaryFunction_complex_complex {
	public $_cPtr=null;

	function __set($var,$value) {
		if ($var === 'thisown') return swig_template_typedef_cplx2_alter_newobject($this->_cPtr,$value);
		UnaryFunction_complex_complex::__set($var,$value);
	}

	function __isset($var) {
		if ($var === 'thisown') return true;
		return UnaryFunction_complex_complex::__isset($var);
	}

	function __get($var) {
		if ($var === 'thisown') return swig_template_typedef_cplx2_get_newobject($this->_cPtr);
		return UnaryFunction_complex_complex::__get($var);
	}

	function get_arith_value() {
		return ArithUnaryFunction_complex_complex_get_arith_value($this->_cPtr);
	}

	function __construct($res=null) {
		if (is_resource($res) && get_resource_type($res) === '_p_vfncs__ArithUnaryFunctionT_std__complexT_double_t_std__complexT_double_t_t') {
			$this->_cPtr=$res;
			return;
		}
		$this->_cPtr=new_ArithUnaryFunction_complex_complex();
	}
}

class UnaryFunction_double_complex extends UnaryFunctionBase {
	public $_cPtr=null;

	function __set($var,$value) {
		if ($var === 'thisown') return swig_template_typedef_cplx2_alter_newobject($this->_cPtr,$value);
		UnaryFunctionBase::__set($var,$value);
	}

	function __isset($var) {
		if ($var === 'thisown') return true;
		return UnaryFunctionBase::__isset($var);
	}

	function __get($var) {
		if ($var === 'thisown') return swig_template_typedef_cplx2_get_newobject($this->_cPtr);
		return UnaryFunctionBase::__get($var);
	}

	function get_value() {
		return UnaryFunction_double_complex_get_value($this->_cPtr);
	}

	function __construct($res=null) {
		if (is_resource($res) && get_resource_type($res) === '_p_vfncs__UnaryFunctionT_double_std__complexT_double_t_t') {
			$this->_cPtr=$res;
			return;
		}
		$this->_cPtr=new_UnaryFunction_double_complex();
	}
}

class ArithUnaryFunction_double_complex extends UnaryFunction_double_complex {
	public $_cPtr=null;

	function __set($var,$value) {
		if ($var === 'thisown') return swig_template_typedef_cplx2_alter_newobject($this->_cPtr,$value);
		UnaryFunction_double_complex::__set($var,$value);
	}

	function __isset($var) {
		if ($var === 'thisown') return true;
		return UnaryFunction_double_complex::__isset($var);
	}

	function __get($var) {
		if ($var === 'thisown') return swig_template_typedef_cplx2_get_newobject($this->_cPtr);
		return UnaryFunction_double_complex::__get($var);
	}

	function get_arith_value() {
		return ArithUnaryFunction_double_complex_get_arith_value($this->_cPtr);
	}

	function __construct($res=null) {
		if (is_resource($res) && get_resource_type($res) === '_p_vfncs__ArithUnaryFunctionT_double_std__complexT_double_t_t') {
			$this->_cPtr=$res;
			return;
		}
		$this->_cPtr=new_ArithUnaryFunction_double_complex();
	}
}


?>
