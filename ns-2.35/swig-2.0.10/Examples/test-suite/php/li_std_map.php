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
if (!extension_loaded('li_std_map')) {
  if (strtolower(substr(PHP_OS, 0, 3)) === 'win') {
    if (!dl('php_li_std_map.dll')) return;
  } else {
    // PHP_SHLIB_SUFFIX gives 'dylib' on MacOS X but modules are 'so'.
    if (PHP_SHLIB_SUFFIX === 'dylib') {
      if (!dl('li_std_map.so')) return;
    } else {
      if (!dl('li_std_map.'.PHP_SHLIB_SUFFIX)) return;
    }
  }
}



abstract class li_std_map {
	static function valueAverage($m) {
		return valueAverage($m);
	}

	static function stringifyKeys($m) {
		return stringifyKeys($m);
	}

	static function p_identa($p) {
		$r=p_identa($p);
		if (is_resource($r)) {
			$c=substr(get_resource_type($r), (strpos(get_resource_type($r), '__') ? strpos(get_resource_type($r), '__') + 2 : 3));
			if (class_exists($c)) return new $c($r);
			return new pairA($r);
		}
		return $r;
	}

	static function m_identa($v) {
		$r=m_identa($v);
		if (is_resource($r)) {
			$c=substr(get_resource_type($r), (strpos(get_resource_type($r), '__') ? strpos(get_resource_type($r), '__') + 2 : 3));
			if (class_exists($c)) return new $c($r);
			return new mapA($r);
		}
		return $r;
	}
}

/* PHP Proxy Classes */
class map {
	public $_cPtr=null;
	protected $_pData=array();

	function __set($var,$value) {
		if ($var === 'val') return map_val_set($this->_cPtr,$value);
		if ($var === 'thisown') return swig_li_std_map_alter_newobject($this->_cPtr,$value);
		$this->_pData[$var] = $value;
	}

	function __isset($var) {
		if (function_exists('map_'.$var.'_set')) return true;
		if ($var === 'thisown') return true;
		return array_key_exists($var, $this->_pData);
	}

	function __get($var) {
		if ($var === 'val') return map_val_get($this->_cPtr);
		if ($var === 'thisown') return swig_li_std_map_get_newobject($this->_cPtr);
		return $this->_pData[$var];
	}

	function __construct($x) {
		if (is_resource($x) && get_resource_type($x) === '_p_another__map') {
			$this->_cPtr=$x;
			return;
		}
		$this->_cPtr=new_map($x);
	}
}

class IntIntMap {
	public $_cPtr=null;
	protected $_pData=array();

	function __set($var,$value) {
		if ($var === 'thisown') return swig_li_std_map_alter_newobject($this->_cPtr,$value);
		$this->_pData[$var] = $value;
	}

	function __isset($var) {
		if ($var === 'thisown') return true;
		return array_key_exists($var, $this->_pData);
	}

	function __get($var) {
		if ($var === 'thisown') return swig_li_std_map_get_newobject($this->_cPtr);
		return $this->_pData[$var];
	}

	function __construct($arg1=null) {
		if (is_resource($arg1) && get_resource_type($arg1) === '_p_std__mapT_int_int_t') {
			$this->_cPtr=$arg1;
			return;
		}
		switch (func_num_args()) {
		case 0: $this->_cPtr=new_IntIntMap(); break;
		default: $this->_cPtr=new_IntIntMap($arg1);
		}
	}

	function size() {
		return IntIntMap_size($this->_cPtr);
	}

	function clear() {
		IntIntMap_clear($this->_cPtr);
	}

	function get($key) {
		return IntIntMap_get($this->_cPtr,$key);
	}

	function set($key,$x) {
		IntIntMap_set($this->_cPtr,$key,$x);
	}

	function del($key) {
		IntIntMap_del($this->_cPtr,$key);
	}

	function has_key($key) {
		return IntIntMap_has_key($this->_cPtr,$key);
	}

	function is_empty() {
		return IntIntMap_is_empty($this->_cPtr);
	}
}

class StringIntMap {
	public $_cPtr=null;
	protected $_pData=array();

	function __set($var,$value) {
		if ($var === 'thisown') return swig_li_std_map_alter_newobject($this->_cPtr,$value);
		$this->_pData[$var] = $value;
	}

	function __isset($var) {
		if ($var === 'thisown') return true;
		return array_key_exists($var, $this->_pData);
	}

	function __get($var) {
		if ($var === 'thisown') return swig_li_std_map_get_newobject($this->_cPtr);
		return $this->_pData[$var];
	}

	function __construct($arg1=null) {
		if (is_resource($arg1) && get_resource_type($arg1) === '_p_std__mapT_std__string_int_t') {
			$this->_cPtr=$arg1;
			return;
		}
		switch (func_num_args()) {
		case 0: $this->_cPtr=new_StringIntMap(); break;
		default: $this->_cPtr=new_StringIntMap($arg1);
		}
	}

	function size() {
		return StringIntMap_size($this->_cPtr);
	}

	function clear() {
		StringIntMap_clear($this->_cPtr);
	}

	function get($key) {
		return StringIntMap_get($this->_cPtr,$key);
	}

	function set($key,$x) {
		StringIntMap_set($this->_cPtr,$key,$x);
	}

	function del($key) {
		StringIntMap_del($this->_cPtr,$key);
	}

	function has_key($key) {
		return StringIntMap_has_key($this->_cPtr,$key);
	}

	function is_empty() {
		return StringIntMap_is_empty($this->_cPtr);
	}
}

class Struct {
	public $_cPtr=null;
	protected $_pData=array();

	function __set($var,$value) {
		if ($var === 'num') return Struct_num_set($this->_cPtr,$value);
		if ($var === 'thisown') return swig_li_std_map_alter_newobject($this->_cPtr,$value);
		$this->_pData[$var] = $value;
	}

	function __isset($var) {
		if (function_exists('Struct_'.$var.'_set')) return true;
		if ($var === 'thisown') return true;
		return array_key_exists($var, $this->_pData);
	}

	function __get($var) {
		if ($var === 'num') return Struct_num_get($this->_cPtr);
		if ($var === 'thisown') return swig_li_std_map_get_newobject($this->_cPtr);
		return $this->_pData[$var];
	}

	function __construct($d=null) {
		if (is_resource($d) && get_resource_type($d) === '_p_Struct') {
			$this->_cPtr=$d;
			return;
		}
		switch (func_num_args()) {
		case 0: $this->_cPtr=new_Struct(); break;
		default: $this->_cPtr=new_Struct($d);
		}
	}
}

class IntIntPtrMap {
	public $_cPtr=null;
	protected $_pData=array();

	function __set($var,$value) {
		if ($var === 'thisown') return swig_li_std_map_alter_newobject($this->_cPtr,$value);
		$this->_pData[$var] = $value;
	}

	function __isset($var) {
		if ($var === 'thisown') return true;
		return array_key_exists($var, $this->_pData);
	}

	function __get($var) {
		if ($var === 'thisown') return swig_li_std_map_get_newobject($this->_cPtr);
		return $this->_pData[$var];
	}

	function __construct($arg1=null) {
		if (is_resource($arg1) && get_resource_type($arg1) === '_p_std__mapT_int_int_p_t') {
			$this->_cPtr=$arg1;
			return;
		}
		switch (func_num_args()) {
		case 0: $this->_cPtr=new_IntIntPtrMap(); break;
		default: $this->_cPtr=new_IntIntPtrMap($arg1);
		}
	}

	function size() {
		return IntIntPtrMap_size($this->_cPtr);
	}

	function clear() {
		IntIntPtrMap_clear($this->_cPtr);
	}

	function get($key) {
		return IntIntPtrMap_get($this->_cPtr,$key);
	}

	function set($key,$x) {
		IntIntPtrMap_set($this->_cPtr,$key,$x);
	}

	function del($key) {
		IntIntPtrMap_del($this->_cPtr,$key);
	}

	function has_key($key) {
		return IntIntPtrMap_has_key($this->_cPtr,$key);
	}

	function is_empty() {
		return IntIntPtrMap_is_empty($this->_cPtr);
	}
}

class IntConstIntPtrMap {
	public $_cPtr=null;
	protected $_pData=array();

	function __set($var,$value) {
		if ($var === 'thisown') return swig_li_std_map_alter_newobject($this->_cPtr,$value);
		$this->_pData[$var] = $value;
	}

	function __isset($var) {
		if ($var === 'thisown') return true;
		return array_key_exists($var, $this->_pData);
	}

	function __get($var) {
		if ($var === 'thisown') return swig_li_std_map_get_newobject($this->_cPtr);
		return $this->_pData[$var];
	}

	function __construct($arg1=null) {
		if (is_resource($arg1) && get_resource_type($arg1) === '_p_std__mapT_int_int_const_p_t') {
			$this->_cPtr=$arg1;
			return;
		}
		switch (func_num_args()) {
		case 0: $this->_cPtr=new_IntConstIntPtrMap(); break;
		default: $this->_cPtr=new_IntConstIntPtrMap($arg1);
		}
	}

	function size() {
		return IntConstIntPtrMap_size($this->_cPtr);
	}

	function clear() {
		IntConstIntPtrMap_clear($this->_cPtr);
	}

	function get($key) {
		return IntConstIntPtrMap_get($this->_cPtr,$key);
	}

	function set($key,$x) {
		IntConstIntPtrMap_set($this->_cPtr,$key,$x);
	}

	function del($key) {
		IntConstIntPtrMap_del($this->_cPtr,$key);
	}

	function has_key($key) {
		return IntConstIntPtrMap_has_key($this->_cPtr,$key);
	}

	function is_empty() {
		return IntConstIntPtrMap_is_empty($this->_cPtr);
	}
}

class IntStructMap {
	public $_cPtr=null;
	protected $_pData=array();

	function __set($var,$value) {
		if ($var === 'thisown') return swig_li_std_map_alter_newobject($this->_cPtr,$value);
		$this->_pData[$var] = $value;
	}

	function __isset($var) {
		if ($var === 'thisown') return true;
		return array_key_exists($var, $this->_pData);
	}

	function __get($var) {
		if ($var === 'thisown') return swig_li_std_map_get_newobject($this->_cPtr);
		return $this->_pData[$var];
	}

	function __construct($arg1=null) {
		if (is_resource($arg1) && get_resource_type($arg1) === '_p_std__mapT_int_Struct_t') {
			$this->_cPtr=$arg1;
			return;
		}
		switch (func_num_args()) {
		case 0: $this->_cPtr=new_IntStructMap(); break;
		default: $this->_cPtr=new_IntStructMap($arg1);
		}
	}

	function size() {
		return IntStructMap_size($this->_cPtr);
	}

	function clear() {
		IntStructMap_clear($this->_cPtr);
	}

	function get($key) {
		$r=IntStructMap_get($this->_cPtr,$key);
		if (is_resource($r)) {
			$c=substr(get_resource_type($r), (strpos(get_resource_type($r), '__') ? strpos(get_resource_type($r), '__') + 2 : 3));
			if (class_exists($c)) return new $c($r);
			return new Struct($r);
		}
		return $r;
	}

	function set($key,$x) {
		IntStructMap_set($this->_cPtr,$key,$x);
	}

	function del($key) {
		IntStructMap_del($this->_cPtr,$key);
	}

	function has_key($key) {
		return IntStructMap_has_key($this->_cPtr,$key);
	}

	function is_empty() {
		return IntStructMap_is_empty($this->_cPtr);
	}
}

class IntStructPtrMap {
	public $_cPtr=null;
	protected $_pData=array();

	function __set($var,$value) {
		if ($var === 'thisown') return swig_li_std_map_alter_newobject($this->_cPtr,$value);
		$this->_pData[$var] = $value;
	}

	function __isset($var) {
		if ($var === 'thisown') return true;
		return array_key_exists($var, $this->_pData);
	}

	function __get($var) {
		if ($var === 'thisown') return swig_li_std_map_get_newobject($this->_cPtr);
		return $this->_pData[$var];
	}

	function __construct($arg1=null) {
		if (is_resource($arg1) && get_resource_type($arg1) === '_p_std__mapT_int_Struct_p_t') {
			$this->_cPtr=$arg1;
			return;
		}
		switch (func_num_args()) {
		case 0: $this->_cPtr=new_IntStructPtrMap(); break;
		default: $this->_cPtr=new_IntStructPtrMap($arg1);
		}
	}

	function size() {
		return IntStructPtrMap_size($this->_cPtr);
	}

	function clear() {
		IntStructPtrMap_clear($this->_cPtr);
	}

	function get($key) {
		$r=IntStructPtrMap_get($this->_cPtr,$key);
		if (is_resource($r)) {
			$c=substr(get_resource_type($r), (strpos(get_resource_type($r), '__') ? strpos(get_resource_type($r), '__') + 2 : 3));
			if (class_exists($c)) return new $c($r);
			return new Struct($r);
		}
		return $r;
	}

	function set($key,$x) {
		IntStructPtrMap_set($this->_cPtr,$key,$x);
	}

	function del($key) {
		IntStructPtrMap_del($this->_cPtr,$key);
	}

	function has_key($key) {
		return IntStructPtrMap_has_key($this->_cPtr,$key);
	}

	function is_empty() {
		return IntStructPtrMap_is_empty($this->_cPtr);
	}
}

class IntStructConstPtrMap {
	public $_cPtr=null;
	protected $_pData=array();

	function __set($var,$value) {
		if ($var === 'thisown') return swig_li_std_map_alter_newobject($this->_cPtr,$value);
		$this->_pData[$var] = $value;
	}

	function __isset($var) {
		if ($var === 'thisown') return true;
		return array_key_exists($var, $this->_pData);
	}

	function __get($var) {
		if ($var === 'thisown') return swig_li_std_map_get_newobject($this->_cPtr);
		return $this->_pData[$var];
	}

	function __construct($arg1=null) {
		if (is_resource($arg1) && get_resource_type($arg1) === '_p_std__mapT_int_Struct_const_p_t') {
			$this->_cPtr=$arg1;
			return;
		}
		switch (func_num_args()) {
		case 0: $this->_cPtr=new_IntStructConstPtrMap(); break;
		default: $this->_cPtr=new_IntStructConstPtrMap($arg1);
		}
	}

	function size() {
		return IntStructConstPtrMap_size($this->_cPtr);
	}

	function clear() {
		IntStructConstPtrMap_clear($this->_cPtr);
	}

	function get($key) {
		$r=IntStructConstPtrMap_get($this->_cPtr,$key);
		if (is_resource($r)) {
			$c=substr(get_resource_type($r), (strpos(get_resource_type($r), '__') ? strpos(get_resource_type($r), '__') + 2 : 3));
			if (class_exists($c)) return new $c($r);
			return new Struct($r);
		}
		return $r;
	}

	function set($key,$x) {
		IntStructConstPtrMap_set($this->_cPtr,$key,$x);
	}

	function del($key) {
		IntStructConstPtrMap_del($this->_cPtr,$key);
	}

	function has_key($key) {
		return IntStructConstPtrMap_has_key($this->_cPtr,$key);
	}

	function is_empty() {
		return IntStructConstPtrMap_is_empty($this->_cPtr);
	}
}

class StructPtrIntMap {
	public $_cPtr=null;
	protected $_pData=array();

	function __set($var,$value) {
		if ($var === 'thisown') return swig_li_std_map_alter_newobject($this->_cPtr,$value);
		$this->_pData[$var] = $value;
	}

	function __isset($var) {
		if ($var === 'thisown') return true;
		return array_key_exists($var, $this->_pData);
	}

	function __get($var) {
		if ($var === 'thisown') return swig_li_std_map_get_newobject($this->_cPtr);
		return $this->_pData[$var];
	}

	function __construct($arg1=null) {
		if (is_resource($arg1) && get_resource_type($arg1) === '_p_std__mapT_Struct_p_int_t') {
			$this->_cPtr=$arg1;
			return;
		}
		switch (func_num_args()) {
		case 0: $this->_cPtr=new_StructPtrIntMap(); break;
		default: $this->_cPtr=new_StructPtrIntMap($arg1);
		}
	}

	function size() {
		return StructPtrIntMap_size($this->_cPtr);
	}

	function clear() {
		StructPtrIntMap_clear($this->_cPtr);
	}

	function get($key) {
		return StructPtrIntMap_get($this->_cPtr,$key);
	}

	function set($key,$x) {
		StructPtrIntMap_set($this->_cPtr,$key,$x);
	}

	function del($key) {
		StructPtrIntMap_del($this->_cPtr,$key);
	}

	function has_key($key) {
		return StructPtrIntMap_has_key($this->_cPtr,$key);
	}

	function is_empty() {
		return StructPtrIntMap_is_empty($this->_cPtr);
	}
}

class StructIntMap {
	public $_cPtr=null;
	protected $_pData=array();

	function __set($var,$value) {
		if ($var === 'thisown') return swig_li_std_map_alter_newobject($this->_cPtr,$value);
		$this->_pData[$var] = $value;
	}

	function __isset($var) {
		if ($var === 'thisown') return true;
		return array_key_exists($var, $this->_pData);
	}

	function __get($var) {
		if ($var === 'thisown') return swig_li_std_map_get_newobject($this->_cPtr);
		return $this->_pData[$var];
	}

	function __construct($arg1=null) {
		if (is_resource($arg1) && get_resource_type($arg1) === '_p_std__mapT_Struct_int_t') {
			$this->_cPtr=$arg1;
			return;
		}
		switch (func_num_args()) {
		case 0: $this->_cPtr=new_StructIntMap(); break;
		default: $this->_cPtr=new_StructIntMap($arg1);
		}
	}

	function size() {
		return StructIntMap_size($this->_cPtr);
	}

	function clear() {
		StructIntMap_clear($this->_cPtr);
	}

	function get($key) {
		return StructIntMap_get($this->_cPtr,$key);
	}

	function set($key,$x) {
		StructIntMap_set($this->_cPtr,$key,$x);
	}

	function del($key) {
		StructIntMap_del($this->_cPtr,$key);
	}

	function has_key($key) {
		return StructIntMap_has_key($this->_cPtr,$key);
	}

	function is_empty() {
		return StructIntMap_is_empty($this->_cPtr);
	}
}

class A {
	public $_cPtr=null;
	protected $_pData=array();

	function __set($var,$value) {
		if ($var === 'val') return A_val_set($this->_cPtr,$value);
		if ($var === 'thisown') return swig_li_std_map_alter_newobject($this->_cPtr,$value);
		$this->_pData[$var] = $value;
	}

	function __isset($var) {
		if (function_exists('A_'.$var.'_set')) return true;
		if ($var === 'thisown') return true;
		return array_key_exists($var, $this->_pData);
	}

	function __get($var) {
		if ($var === 'val') return A_val_get($this->_cPtr);
		if ($var === 'thisown') return swig_li_std_map_get_newobject($this->_cPtr);
		return $this->_pData[$var];
	}

	function __construct($v=0) {
		if (is_resource($v) && get_resource_type($v) === '_p_A') {
			$this->_cPtr=$v;
			return;
		}
		$this->_cPtr=new_A($v);
	}
}

class pairii {
	public $_cPtr=null;
	protected $_pData=array();

	function __set($var,$value) {
		if ($var === 'first') return pairii_first_set($this->_cPtr,$value);
		if ($var === 'second') return pairii_second_set($this->_cPtr,$value);
		if ($var === 'thisown') return swig_li_std_map_alter_newobject($this->_cPtr,$value);
		$this->_pData[$var] = $value;
	}

	function __isset($var) {
		if (function_exists('pairii_'.$var.'_set')) return true;
		if ($var === 'thisown') return true;
		return array_key_exists($var, $this->_pData);
	}

	function __get($var) {
		if ($var === 'first') return pairii_first_get($this->_cPtr);
		if ($var === 'second') return pairii_second_get($this->_cPtr);
		if ($var === 'thisown') return swig_li_std_map_get_newobject($this->_cPtr);
		return $this->_pData[$var];
	}

	function __construct($first_or_p=null,$second=null) {
		if (is_resource($first_or_p) && get_resource_type($first_or_p) === '_p_std__pairT_int_int_t') {
			$this->_cPtr=$first_or_p;
			return;
		}
		switch (func_num_args()) {
		case 0: $this->_cPtr=new_pairii(); break;
		case 1: $this->_cPtr=new_pairii($first_or_p); break;
		default: $this->_cPtr=new_pairii($first_or_p,$second);
		}
	}
}

class pairAA {
	public $_cPtr=null;
	protected $_pData=array();

	function __set($var,$value) {
		if ($var === 'first') return pairAA_first_set($this->_cPtr,$value);
		if ($var === 'second') return pairAA_second_set($this->_cPtr,$value);
		if ($var === 'thisown') return swig_li_std_map_alter_newobject($this->_cPtr,$value);
		$this->_pData[$var] = $value;
	}

	function __isset($var) {
		if (function_exists('pairAA_'.$var.'_set')) return true;
		if ($var === 'thisown') return true;
		return array_key_exists($var, $this->_pData);
	}

	function __get($var) {
		if ($var === 'second') return new A(pairAA_second_get($this->_cPtr));
		if ($var === 'first') return pairAA_first_get($this->_cPtr);
		if ($var === 'thisown') return swig_li_std_map_get_newobject($this->_cPtr);
		return $this->_pData[$var];
	}

	function __construct($first_or_p=null,$second=null) {
		if (is_resource($first_or_p) && get_resource_type($first_or_p) === '_p_std__pairT_int_A_t') {
			$this->_cPtr=$first_or_p;
			return;
		}
		switch (func_num_args()) {
		case 0: $this->_cPtr=new_pairAA(); break;
		case 1: $this->_cPtr=new_pairAA($first_or_p); break;
		default: $this->_cPtr=new_pairAA($first_or_p,$second);
		}
	}
}

class pairA {
	public $_cPtr=null;
	protected $_pData=array();

	function __set($var,$value) {
		if ($var === 'first') return pairA_first_set($this->_cPtr,$value);
		if ($var === 'second') return pairA_second_set($this->_cPtr,$value);
		if ($var === 'thisown') return swig_li_std_map_alter_newobject($this->_cPtr,$value);
		$this->_pData[$var] = $value;
	}

	function __isset($var) {
		if (function_exists('pairA_'.$var.'_set')) return true;
		if ($var === 'thisown') return true;
		return array_key_exists($var, $this->_pData);
	}

	function __get($var) {
		if ($var === 'second') return new A(pairA_second_get($this->_cPtr));
		if ($var === 'first') return pairA_first_get($this->_cPtr);
		if ($var === 'thisown') return swig_li_std_map_get_newobject($this->_cPtr);
		return $this->_pData[$var];
	}

	function __construct($first_or_p=null,$second=null) {
		if (is_resource($first_or_p) && get_resource_type($first_or_p) === '_p_std__pairT_int_A_p_t') {
			$this->_cPtr=$first_or_p;
			return;
		}
		switch (func_num_args()) {
		case 0: $this->_cPtr=new_pairA(); break;
		case 1: $this->_cPtr=new_pairA($first_or_p); break;
		default: $this->_cPtr=new_pairA($first_or_p,$second);
		}
	}
}

class mapA {
	public $_cPtr=null;
	protected $_pData=array();

	function __set($var,$value) {
		if ($var === 'thisown') return swig_li_std_map_alter_newobject($this->_cPtr,$value);
		$this->_pData[$var] = $value;
	}

	function __isset($var) {
		if ($var === 'thisown') return true;
		return array_key_exists($var, $this->_pData);
	}

	function __get($var) {
		if ($var === 'thisown') return swig_li_std_map_get_newobject($this->_cPtr);
		return $this->_pData[$var];
	}

	function __construct($arg1=null) {
		if (is_resource($arg1) && get_resource_type($arg1) === '_p_std__mapT_int_A_p_t') {
			$this->_cPtr=$arg1;
			return;
		}
		switch (func_num_args()) {
		case 0: $this->_cPtr=new_mapA(); break;
		default: $this->_cPtr=new_mapA($arg1);
		}
	}

	function size() {
		return mapA_size($this->_cPtr);
	}

	function clear() {
		mapA_clear($this->_cPtr);
	}

	function get($key) {
		$r=mapA_get($this->_cPtr,$key);
		if (is_resource($r)) {
			$c=substr(get_resource_type($r), (strpos(get_resource_type($r), '__') ? strpos(get_resource_type($r), '__') + 2 : 3));
			if (class_exists($c)) return new $c($r);
			return new A($r);
		}
		return $r;
	}

	function set($key,$x) {
		mapA_set($this->_cPtr,$key,$x);
	}

	function del($key) {
		mapA_del($this->_cPtr,$key);
	}

	function has_key($key) {
		return mapA_has_key($this->_cPtr,$key);
	}

	function is_empty() {
		return mapA_is_empty($this->_cPtr);
	}
}

class paircA1 {
	public $_cPtr=null;
	protected $_pData=array();

	function __set($var,$value) {
		if ($var === 'second') return paircA1_second_set($this->_cPtr,$value);
		if ($var === 'thisown') return swig_li_std_map_alter_newobject($this->_cPtr,$value);
		$this->_pData[$var] = $value;
	}

	function __isset($var) {
		if (function_exists('paircA1_'.$var.'_set')) return true;
		if ($var === 'thisown') return true;
		return array_key_exists($var, $this->_pData);
	}

	function __get($var) {
		if ($var === 'second') return new A(paircA1_second_get($this->_cPtr));
		if ($var === 'first') return paircA1_first_get($this->_cPtr);
		if ($var === 'thisown') return swig_li_std_map_get_newobject($this->_cPtr);
		return $this->_pData[$var];
	}

	function __construct($first_or_p=null,$second=null) {
		if (is_resource($first_or_p) && get_resource_type($first_or_p) === '_p_std__pairT_int_const_A_p_t') {
			$this->_cPtr=$first_or_p;
			return;
		}
		switch (func_num_args()) {
		case 0: $this->_cPtr=new_paircA1(); break;
		case 1: $this->_cPtr=new_paircA1($first_or_p); break;
		default: $this->_cPtr=new_paircA1($first_or_p,$second);
		}
	}
}

class paircA2 {
	public $_cPtr=null;
	protected $_pData=array();

	function __set($var,$value) {
		if ($var === 'second') return paircA2_second_set($this->_cPtr,$value);
		if ($var === 'thisown') return swig_li_std_map_alter_newobject($this->_cPtr,$value);
		$this->_pData[$var] = $value;
	}

	function __isset($var) {
		if (function_exists('paircA2_'.$var.'_set')) return true;
		if ($var === 'thisown') return true;
		return array_key_exists($var, $this->_pData);
	}

	function __get($var) {
		if ($var === 'second') return new A(paircA2_second_get($this->_cPtr));
		if ($var === 'first') return paircA2_first_get($this->_cPtr);
		if ($var === 'thisown') return swig_li_std_map_get_newobject($this->_cPtr);
		return $this->_pData[$var];
	}

	function __construct($first_or_p=null,$second=null) {
		if (is_resource($first_or_p) && get_resource_type($first_or_p) === '_p_std__pairT_int_const_A_const_p_t') {
			$this->_cPtr=$first_or_p;
			return;
		}
		switch (func_num_args()) {
		case 0: $this->_cPtr=new_paircA2(); break;
		case 1: $this->_cPtr=new_paircA2($first_or_p); break;
		default: $this->_cPtr=new_paircA2($first_or_p,$second);
		}
	}
}

class pairiiA {
	public $_cPtr=null;
	protected $_pData=array();

	function __set($var,$value) {
		if ($var === 'first') return pairiiA_first_set($this->_cPtr,$value);
		if ($var === 'second') return pairiiA_second_set($this->_cPtr,$value);
		if ($var === 'thisown') return swig_li_std_map_alter_newobject($this->_cPtr,$value);
		$this->_pData[$var] = $value;
	}

	function __isset($var) {
		if (function_exists('pairiiA_'.$var.'_set')) return true;
		if ($var === 'thisown') return true;
		return array_key_exists($var, $this->_pData);
	}

	function __get($var) {
		if ($var === 'second') return new pairA(pairiiA_second_get($this->_cPtr));
		if ($var === 'first') return pairiiA_first_get($this->_cPtr);
		if ($var === 'thisown') return swig_li_std_map_get_newobject($this->_cPtr);
		return $this->_pData[$var];
	}

	function __construct($first_or_p=null,$second=null) {
		if (is_resource($first_or_p) && get_resource_type($first_or_p) === '_p_std__pairT_int_std__pairT_int_A_p_t_t') {
			$this->_cPtr=$first_or_p;
			return;
		}
		switch (func_num_args()) {
		case 0: $this->_cPtr=new_pairiiA(); break;
		case 1: $this->_cPtr=new_pairiiA($first_or_p); break;
		default: $this->_cPtr=new_pairiiA($first_or_p,$second);
		}
	}
}

class pairiiAc {
	public $_cPtr=null;
	protected $_pData=array();

	function __set($var,$value) {
		if ($var === 'first') return pairiiAc_first_set($this->_cPtr,$value);
		if ($var === 'thisown') return swig_li_std_map_alter_newobject($this->_cPtr,$value);
		$this->_pData[$var] = $value;
	}

	function __isset($var) {
		if (function_exists('pairiiAc_'.$var.'_set')) return true;
		if ($var === 'thisown') return true;
		return array_key_exists($var, $this->_pData);
	}

	function __get($var) {
		if ($var === 'second') return new pairA(pairiiAc_second_get($this->_cPtr));
		if ($var === 'first') return pairiiAc_first_get($this->_cPtr);
		if ($var === 'thisown') return swig_li_std_map_get_newobject($this->_cPtr);
		return $this->_pData[$var];
	}

	function __construct($first_or_p=null,$second=null) {
		if (is_resource($first_or_p) && get_resource_type($first_or_p) === '_p_std__pairT_int_std__pairT_int_A_p_t_const_t') {
			$this->_cPtr=$first_or_p;
			return;
		}
		switch (func_num_args()) {
		case 0: $this->_cPtr=new_pairiiAc(); break;
		case 1: $this->_cPtr=new_pairiiAc($first_or_p); break;
		default: $this->_cPtr=new_pairiiAc($first_or_p,$second);
		}
	}
}


?>
