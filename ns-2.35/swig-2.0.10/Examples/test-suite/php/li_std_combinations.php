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
if (!extension_loaded('li_std_combinations')) {
  if (strtolower(substr(PHP_OS, 0, 3)) === 'win') {
    if (!dl('php_li_std_combinations.dll')) return;
  } else {
    // PHP_SHLIB_SUFFIX gives 'dylib' on MacOS X but modules are 'so'.
    if (PHP_SHLIB_SUFFIX === 'dylib') {
      if (!dl('li_std_combinations.so')) return;
    } else {
      if (!dl('li_std_combinations.'.PHP_SHLIB_SUFFIX)) return;
    }
  }
}



/* PHP Proxy Classes */
class VectorInt {
	public $_cPtr=null;
	protected $_pData=array();

	function __set($var,$value) {
		if ($var === 'thisown') return swig_li_std_combinations_alter_newobject($this->_cPtr,$value);
		$this->_pData[$var] = $value;
	}

	function __isset($var) {
		if ($var === 'thisown') return true;
		return array_key_exists($var, $this->_pData);
	}

	function __get($var) {
		if ($var === 'thisown') return swig_li_std_combinations_get_newobject($this->_cPtr);
		return $this->_pData[$var];
	}

	function __construct($n=null) {
		if (is_resource($n) && get_resource_type($n) === '_p_std__vectorT_int_t') {
			$this->_cPtr=$n;
			return;
		}
		switch (func_num_args()) {
		case 0: $this->_cPtr=new_VectorInt(); break;
		default: $this->_cPtr=new_VectorInt($n);
		}
	}

	function size() {
		return VectorInt_size($this->_cPtr);
	}

	function capacity() {
		return VectorInt_capacity($this->_cPtr);
	}

	function reserve($n) {
		VectorInt_reserve($this->_cPtr,$n);
	}

	function clear() {
		VectorInt_clear($this->_cPtr);
	}

	function push($x) {
		VectorInt_push($this->_cPtr,$x);
	}

	function is_empty() {
		return VectorInt_is_empty($this->_cPtr);
	}

	function pop() {
		return VectorInt_pop($this->_cPtr);
	}

	function get($i) {
		return VectorInt_get($this->_cPtr,$i);
	}

	function set($i,$val) {
		VectorInt_set($this->_cPtr,$i,$val);
	}
}

class VectorString {
	public $_cPtr=null;
	protected $_pData=array();

	function __set($var,$value) {
		if ($var === 'thisown') return swig_li_std_combinations_alter_newobject($this->_cPtr,$value);
		$this->_pData[$var] = $value;
	}

	function __isset($var) {
		if ($var === 'thisown') return true;
		return array_key_exists($var, $this->_pData);
	}

	function __get($var) {
		if ($var === 'thisown') return swig_li_std_combinations_get_newobject($this->_cPtr);
		return $this->_pData[$var];
	}

	function __construct($n=null) {
		if (is_resource($n) && get_resource_type($n) === '_p_std__vectorT_std__string_t') {
			$this->_cPtr=$n;
			return;
		}
		switch (func_num_args()) {
		case 0: $this->_cPtr=new_VectorString(); break;
		default: $this->_cPtr=new_VectorString($n);
		}
	}

	function size() {
		return VectorString_size($this->_cPtr);
	}

	function capacity() {
		return VectorString_capacity($this->_cPtr);
	}

	function reserve($n) {
		VectorString_reserve($this->_cPtr,$n);
	}

	function clear() {
		VectorString_clear($this->_cPtr);
	}

	function push($x) {
		VectorString_push($this->_cPtr,$x);
	}

	function is_empty() {
		return VectorString_is_empty($this->_cPtr);
	}

	function pop() {
		return VectorString_pop($this->_cPtr);
	}

	function get($i) {
		return VectorString_get($this->_cPtr,$i);
	}

	function set($i,$val) {
		VectorString_set($this->_cPtr,$i,$val);
	}
}

class PairIntString {
	public $_cPtr=null;
	protected $_pData=array();

	function __set($var,$value) {
		if ($var === 'first') return PairIntString_first_set($this->_cPtr,$value);
		if ($var === 'second') return PairIntString_second_set($this->_cPtr,$value);
		if ($var === 'thisown') return swig_li_std_combinations_alter_newobject($this->_cPtr,$value);
		$this->_pData[$var] = $value;
	}

	function __isset($var) {
		if (function_exists('PairIntString_'.$var.'_set')) return true;
		if ($var === 'thisown') return true;
		return array_key_exists($var, $this->_pData);
	}

	function __get($var) {
		if ($var === 'first') return PairIntString_first_get($this->_cPtr);
		if ($var === 'second') return PairIntString_second_get($this->_cPtr);
		if ($var === 'thisown') return swig_li_std_combinations_get_newobject($this->_cPtr);
		return $this->_pData[$var];
	}

	function __construct($first_or_p=null,$second=null) {
		if (is_resource($first_or_p) && get_resource_type($first_or_p) === '_p_std__pairT_int_std__string_t') {
			$this->_cPtr=$first_or_p;
			return;
		}
		switch (func_num_args()) {
		case 0: $this->_cPtr=new_PairIntString(); break;
		case 1: $this->_cPtr=new_PairIntString($first_or_p); break;
		default: $this->_cPtr=new_PairIntString($first_or_p,$second);
		}
	}
}

class VectorPairIntString {
	public $_cPtr=null;
	protected $_pData=array();

	function __set($var,$value) {
		if ($var === 'thisown') return swig_li_std_combinations_alter_newobject($this->_cPtr,$value);
		$this->_pData[$var] = $value;
	}

	function __isset($var) {
		if ($var === 'thisown') return true;
		return array_key_exists($var, $this->_pData);
	}

	function __get($var) {
		if ($var === 'thisown') return swig_li_std_combinations_get_newobject($this->_cPtr);
		return $this->_pData[$var];
	}

	function __construct($n=null) {
		if (is_resource($n) && get_resource_type($n) === '_p_std__vectorT_std__pairT_int_std__string_t_t') {
			$this->_cPtr=$n;
			return;
		}
		switch (func_num_args()) {
		case 0: $this->_cPtr=new_VectorPairIntString(); break;
		default: $this->_cPtr=new_VectorPairIntString($n);
		}
	}

	function size() {
		return VectorPairIntString_size($this->_cPtr);
	}

	function capacity() {
		return VectorPairIntString_capacity($this->_cPtr);
	}

	function reserve($n) {
		VectorPairIntString_reserve($this->_cPtr,$n);
	}

	function clear() {
		VectorPairIntString_clear($this->_cPtr);
	}

	function push($x) {
		VectorPairIntString_push($this->_cPtr,$x);
	}

	function is_empty() {
		return VectorPairIntString_is_empty($this->_cPtr);
	}

	function pop() {
		$r=VectorPairIntString_pop($this->_cPtr);
		if (is_resource($r)) {
			$c=substr(get_resource_type($r), (strpos(get_resource_type($r), '__') ? strpos(get_resource_type($r), '__') + 2 : 3));
			if (class_exists($c)) return new $c($r);
			return new PairIntString($r);
		}
		return $r;
	}

	function get($i) {
		$r=VectorPairIntString_get($this->_cPtr,$i);
		if (is_resource($r)) {
			$c=substr(get_resource_type($r), (strpos(get_resource_type($r), '__') ? strpos(get_resource_type($r), '__') + 2 : 3));
			if (class_exists($c)) return new $c($r);
			return new PairIntString($r);
		}
		return $r;
	}

	function set($i,$val) {
		VectorPairIntString_set($this->_cPtr,$i,$val);
	}
}

class PairIntVectorString {
	public $_cPtr=null;
	protected $_pData=array();

	function __set($var,$value) {
		if ($var === 'first') return PairIntVectorString_first_set($this->_cPtr,$value);
		if ($var === 'second') return PairIntVectorString_second_set($this->_cPtr,$value);
		if ($var === 'thisown') return swig_li_std_combinations_alter_newobject($this->_cPtr,$value);
		$this->_pData[$var] = $value;
	}

	function __isset($var) {
		if (function_exists('PairIntVectorString_'.$var.'_set')) return true;
		if ($var === 'thisown') return true;
		return array_key_exists($var, $this->_pData);
	}

	function __get($var) {
		if ($var === 'second') return new VectorString(PairIntVectorString_second_get($this->_cPtr));
		if ($var === 'first') return PairIntVectorString_first_get($this->_cPtr);
		if ($var === 'thisown') return swig_li_std_combinations_get_newobject($this->_cPtr);
		return $this->_pData[$var];
	}

	function __construct($first_or_p=null,$second=null) {
		if (is_resource($first_or_p) && get_resource_type($first_or_p) === '_p_std__pairT_int_std__vectorT_std__string_t_t') {
			$this->_cPtr=$first_or_p;
			return;
		}
		switch (func_num_args()) {
		case 0: $this->_cPtr=new_PairIntVectorString(); break;
		case 1: $this->_cPtr=new_PairIntVectorString($first_or_p); break;
		default: $this->_cPtr=new_PairIntVectorString($first_or_p,$second);
		}
	}
}

class VectorVectorString {
	public $_cPtr=null;
	protected $_pData=array();

	function __set($var,$value) {
		if ($var === 'thisown') return swig_li_std_combinations_alter_newobject($this->_cPtr,$value);
		$this->_pData[$var] = $value;
	}

	function __isset($var) {
		if ($var === 'thisown') return true;
		return array_key_exists($var, $this->_pData);
	}

	function __get($var) {
		if ($var === 'thisown') return swig_li_std_combinations_get_newobject($this->_cPtr);
		return $this->_pData[$var];
	}

	function __construct($n=null) {
		if (is_resource($n) && get_resource_type($n) === '_p_std__vectorT_std__vectorT_std__string_t_t') {
			$this->_cPtr=$n;
			return;
		}
		switch (func_num_args()) {
		case 0: $this->_cPtr=new_VectorVectorString(); break;
		default: $this->_cPtr=new_VectorVectorString($n);
		}
	}

	function size() {
		return VectorVectorString_size($this->_cPtr);
	}

	function capacity() {
		return VectorVectorString_capacity($this->_cPtr);
	}

	function reserve($n) {
		VectorVectorString_reserve($this->_cPtr,$n);
	}

	function clear() {
		VectorVectorString_clear($this->_cPtr);
	}

	function push($x) {
		VectorVectorString_push($this->_cPtr,$x);
	}

	function is_empty() {
		return VectorVectorString_is_empty($this->_cPtr);
	}

	function pop() {
		$r=VectorVectorString_pop($this->_cPtr);
		if (is_resource($r)) {
			$c=substr(get_resource_type($r), (strpos(get_resource_type($r), '__') ? strpos(get_resource_type($r), '__') + 2 : 3));
			if (class_exists($c)) return new $c($r);
			return new VectorString($r);
		}
		return $r;
	}

	function get($i) {
		$r=VectorVectorString_get($this->_cPtr,$i);
		if (is_resource($r)) {
			$c=substr(get_resource_type($r), (strpos(get_resource_type($r), '__') ? strpos(get_resource_type($r), '__') + 2 : 3));
			if (class_exists($c)) return new $c($r);
			return new VectorString($r);
		}
		return $r;
	}

	function set($i,$val) {
		VectorVectorString_set($this->_cPtr,$i,$val);
	}
}

class PairIntPairIntString {
	public $_cPtr=null;
	protected $_pData=array();

	function __set($var,$value) {
		if ($var === 'first') return PairIntPairIntString_first_set($this->_cPtr,$value);
		if ($var === 'second') return PairIntPairIntString_second_set($this->_cPtr,$value);
		if ($var === 'thisown') return swig_li_std_combinations_alter_newobject($this->_cPtr,$value);
		$this->_pData[$var] = $value;
	}

	function __isset($var) {
		if (function_exists('PairIntPairIntString_'.$var.'_set')) return true;
		if ($var === 'thisown') return true;
		return array_key_exists($var, $this->_pData);
	}

	function __get($var) {
		if ($var === 'second') return new PairIntString(PairIntPairIntString_second_get($this->_cPtr));
		if ($var === 'first') return PairIntPairIntString_first_get($this->_cPtr);
		if ($var === 'thisown') return swig_li_std_combinations_get_newobject($this->_cPtr);
		return $this->_pData[$var];
	}

	function __construct($first_or_p=null,$second=null) {
		if (is_resource($first_or_p) && get_resource_type($first_or_p) === '_p_std__pairT_int_std__pairT_int_std__string_t_t') {
			$this->_cPtr=$first_or_p;
			return;
		}
		switch (func_num_args()) {
		case 0: $this->_cPtr=new_PairIntPairIntString(); break;
		case 1: $this->_cPtr=new_PairIntPairIntString($first_or_p); break;
		default: $this->_cPtr=new_PairIntPairIntString($first_or_p,$second);
		}
	}
}

class PairDoubleString {
	public $_cPtr=null;
	protected $_pData=array();

	function __set($var,$value) {
		if ($var === 'first') return PairDoubleString_first_set($this->_cPtr,$value);
		if ($var === 'second') return PairDoubleString_second_set($this->_cPtr,$value);
		if ($var === 'thisown') return swig_li_std_combinations_alter_newobject($this->_cPtr,$value);
		$this->_pData[$var] = $value;
	}

	function __isset($var) {
		if (function_exists('PairDoubleString_'.$var.'_set')) return true;
		if ($var === 'thisown') return true;
		return array_key_exists($var, $this->_pData);
	}

	function __get($var) {
		if ($var === 'first') return PairDoubleString_first_get($this->_cPtr);
		if ($var === 'second') return PairDoubleString_second_get($this->_cPtr);
		if ($var === 'thisown') return swig_li_std_combinations_get_newobject($this->_cPtr);
		return $this->_pData[$var];
	}

	function __construct($first_or_p=null,$second=null) {
		if (is_resource($first_or_p) && get_resource_type($first_or_p) === '_p_std__pairT_double_std__string_t') {
			$this->_cPtr=$first_or_p;
			return;
		}
		switch (func_num_args()) {
		case 0: $this->_cPtr=new_PairDoubleString(); break;
		case 1: $this->_cPtr=new_PairDoubleString($first_or_p); break;
		default: $this->_cPtr=new_PairDoubleString($first_or_p,$second);
		}
	}
}

class VectorPairDoubleString {
	public $_cPtr=null;
	protected $_pData=array();

	function __set($var,$value) {
		if ($var === 'thisown') return swig_li_std_combinations_alter_newobject($this->_cPtr,$value);
		$this->_pData[$var] = $value;
	}

	function __isset($var) {
		if ($var === 'thisown') return true;
		return array_key_exists($var, $this->_pData);
	}

	function __get($var) {
		if ($var === 'thisown') return swig_li_std_combinations_get_newobject($this->_cPtr);
		return $this->_pData[$var];
	}

	function __construct($n=null) {
		if (is_resource($n) && get_resource_type($n) === '_p_std__vectorT_std__pairT_double_std__string_t_t') {
			$this->_cPtr=$n;
			return;
		}
		switch (func_num_args()) {
		case 0: $this->_cPtr=new_VectorPairDoubleString(); break;
		default: $this->_cPtr=new_VectorPairDoubleString($n);
		}
	}

	function size() {
		return VectorPairDoubleString_size($this->_cPtr);
	}

	function capacity() {
		return VectorPairDoubleString_capacity($this->_cPtr);
	}

	function reserve($n) {
		VectorPairDoubleString_reserve($this->_cPtr,$n);
	}

	function clear() {
		VectorPairDoubleString_clear($this->_cPtr);
	}

	function push($x) {
		VectorPairDoubleString_push($this->_cPtr,$x);
	}

	function is_empty() {
		return VectorPairDoubleString_is_empty($this->_cPtr);
	}

	function pop() {
		$r=VectorPairDoubleString_pop($this->_cPtr);
		if (is_resource($r)) {
			$c=substr(get_resource_type($r), (strpos(get_resource_type($r), '__') ? strpos(get_resource_type($r), '__') + 2 : 3));
			if (class_exists($c)) return new $c($r);
			return new PairDoubleString($r);
		}
		return $r;
	}

	function get($i) {
		$r=VectorPairDoubleString_get($this->_cPtr,$i);
		if (is_resource($r)) {
			$c=substr(get_resource_type($r), (strpos(get_resource_type($r), '__') ? strpos(get_resource_type($r), '__') + 2 : 3));
			if (class_exists($c)) return new $c($r);
			return new PairDoubleString($r);
		}
		return $r;
	}

	function set($i,$val) {
		VectorPairDoubleString_set($this->_cPtr,$i,$val);
	}
}


?>
