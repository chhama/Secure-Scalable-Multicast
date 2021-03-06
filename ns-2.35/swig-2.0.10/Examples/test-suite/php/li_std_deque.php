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
if (!extension_loaded('li_std_deque')) {
  if (strtolower(substr(PHP_OS, 0, 3)) === 'win') {
    if (!dl('php_li_std_deque.dll')) return;
  } else {
    // PHP_SHLIB_SUFFIX gives 'dylib' on MacOS X but modules are 'so'.
    if (PHP_SHLIB_SUFFIX === 'dylib') {
      if (!dl('li_std_deque.so')) return;
    } else {
      if (!dl('li_std_deque.'.PHP_SHLIB_SUFFIX)) return;
    }
  }
}



abstract class li_std_deque {
	static function average($v) {
		return average($v);
	}

	static function half($v) {
		$r=half($v);
		if (is_resource($r)) {
			$c=substr(get_resource_type($r), (strpos(get_resource_type($r), '__') ? strpos(get_resource_type($r), '__') + 2 : 3));
			if (class_exists($c)) return new $c($r);
			return new RealDeque($r);
		}
		return $r;
	}

	static function halve_in_place($v) {
		halve_in_place($v);
	}
}

/* PHP Proxy Classes */
class IntDeque {
	public $_cPtr=null;
	protected $_pData=array();

	function __set($var,$value) {
		if ($var === 'thisown') return swig_li_std_deque_alter_newobject($this->_cPtr,$value);
		$this->_pData[$var] = $value;
	}

	function __isset($var) {
		if ($var === 'thisown') return true;
		return array_key_exists($var, $this->_pData);
	}

	function __get($var) {
		if ($var === 'thisown') return swig_li_std_deque_get_newobject($this->_cPtr);
		return $this->_pData[$var];
	}

	function is_empty() {
		return IntDeque_is_empty($this->_cPtr);
	}

	function __construct($size=null,$value=null) {
		if (is_resource($size) && get_resource_type($size) === '_p_std__dequeT_int_t') {
			$this->_cPtr=$size;
			return;
		}
		switch (func_num_args()) {
		case 0: $this->_cPtr=new_IntDeque(); break;
		case 1: $this->_cPtr=new_IntDeque($size); break;
		default: $this->_cPtr=new_IntDeque($size,$value);
		}
	}

	function assign($n,$value) {
		IntDeque_assign($this->_cPtr,$n,$value);
	}

	function swap($x) {
		IntDeque_swap($this->_cPtr,$x);
	}

	function size() {
		return IntDeque_size($this->_cPtr);
	}

	function max_size() {
		return IntDeque_max_size($this->_cPtr);
	}

	function resize($n,$c_=null) {
		switch (func_num_args()) {
		case 1: IntDeque_resize($this->_cPtr,$n); break;
		default: IntDeque_resize($this->_cPtr,$n,$c_);
		}
	}

	function front() {
		return IntDeque_front($this->_cPtr);
	}

	function back() {
		return IntDeque_back($this->_cPtr);
	}

	function push_front($x) {
		IntDeque_push_front($this->_cPtr,$x);
	}

	function push_back($x) {
		IntDeque_push_back($this->_cPtr,$x);
	}

	function pop_front() {
		IntDeque_pop_front($this->_cPtr);
	}

	function pop_back() {
		IntDeque_pop_back($this->_cPtr);
	}

	function clear() {
		IntDeque_clear($this->_cPtr);
	}

	function getitem($i) {
		return IntDeque_getitem($this->_cPtr,$i);
	}

	function setitem($i,$x) {
		IntDeque_setitem($this->_cPtr,$i,$x);
	}

	function delitem($i) {
		IntDeque_delitem($this->_cPtr,$i);
	}

	function getslice($i,$j) {
		$r=IntDeque_getslice($this->_cPtr,$i,$j);
		if (is_resource($r)) {
			$c=substr(get_resource_type($r), (strpos(get_resource_type($r), '__') ? strpos(get_resource_type($r), '__') + 2 : 3));
			if (class_exists($c)) return new $c($r);
			return new IntDeque($r);
		}
		return $r;
	}

	function setslice($i,$j,$v) {
		IntDeque_setslice($this->_cPtr,$i,$j,$v);
	}

	function delslice($i,$j) {
		IntDeque_delslice($this->_cPtr,$i,$j);
	}
}

class DoubleDeque {
	public $_cPtr=null;
	protected $_pData=array();

	function __set($var,$value) {
		if ($var === 'thisown') return swig_li_std_deque_alter_newobject($this->_cPtr,$value);
		$this->_pData[$var] = $value;
	}

	function __isset($var) {
		if ($var === 'thisown') return true;
		return array_key_exists($var, $this->_pData);
	}

	function __get($var) {
		if ($var === 'thisown') return swig_li_std_deque_get_newobject($this->_cPtr);
		return $this->_pData[$var];
	}

	function is_empty() {
		return DoubleDeque_is_empty($this->_cPtr);
	}

	function __construct($size=null,$value=null) {
		if (is_resource($size) && get_resource_type($size) === '_p_std__dequeT_double_t') {
			$this->_cPtr=$size;
			return;
		}
		switch (func_num_args()) {
		case 0: $this->_cPtr=new_DoubleDeque(); break;
		case 1: $this->_cPtr=new_DoubleDeque($size); break;
		default: $this->_cPtr=new_DoubleDeque($size,$value);
		}
	}

	function assign($n,$value) {
		DoubleDeque_assign($this->_cPtr,$n,$value);
	}

	function swap($x) {
		DoubleDeque_swap($this->_cPtr,$x);
	}

	function size() {
		return DoubleDeque_size($this->_cPtr);
	}

	function max_size() {
		return DoubleDeque_max_size($this->_cPtr);
	}

	function resize($n,$c_=null) {
		switch (func_num_args()) {
		case 1: DoubleDeque_resize($this->_cPtr,$n); break;
		default: DoubleDeque_resize($this->_cPtr,$n,$c_);
		}
	}

	function front() {
		return DoubleDeque_front($this->_cPtr);
	}

	function back() {
		return DoubleDeque_back($this->_cPtr);
	}

	function push_front($x) {
		DoubleDeque_push_front($this->_cPtr,$x);
	}

	function push_back($x) {
		DoubleDeque_push_back($this->_cPtr,$x);
	}

	function pop_front() {
		DoubleDeque_pop_front($this->_cPtr);
	}

	function pop_back() {
		DoubleDeque_pop_back($this->_cPtr);
	}

	function clear() {
		DoubleDeque_clear($this->_cPtr);
	}

	function getitem($i) {
		return DoubleDeque_getitem($this->_cPtr,$i);
	}

	function setitem($i,$x) {
		DoubleDeque_setitem($this->_cPtr,$i,$x);
	}

	function delitem($i) {
		DoubleDeque_delitem($this->_cPtr,$i);
	}

	function getslice($i,$j) {
		$r=DoubleDeque_getslice($this->_cPtr,$i,$j);
		if (is_resource($r)) {
			$c=substr(get_resource_type($r), (strpos(get_resource_type($r), '__') ? strpos(get_resource_type($r), '__') + 2 : 3));
			if (class_exists($c)) return new $c($r);
			return new DoubleDeque($r);
		}
		return $r;
	}

	function setslice($i,$j,$v) {
		DoubleDeque_setslice($this->_cPtr,$i,$j,$v);
	}

	function delslice($i,$j) {
		DoubleDeque_delslice($this->_cPtr,$i,$j);
	}
}

class RealDeque {
	public $_cPtr=null;
	protected $_pData=array();

	function __set($var,$value) {
		if ($var === 'thisown') return swig_li_std_deque_alter_newobject($this->_cPtr,$value);
		$this->_pData[$var] = $value;
	}

	function __isset($var) {
		if ($var === 'thisown') return true;
		return array_key_exists($var, $this->_pData);
	}

	function __get($var) {
		if ($var === 'thisown') return swig_li_std_deque_get_newobject($this->_cPtr);
		return $this->_pData[$var];
	}

	function is_empty() {
		return RealDeque_is_empty($this->_cPtr);
	}

	function __construct($size=null,$value=null) {
		if (is_resource($size) && get_resource_type($size) === '_p_std__dequeT_float_t') {
			$this->_cPtr=$size;
			return;
		}
		switch (func_num_args()) {
		case 0: $this->_cPtr=new_RealDeque(); break;
		case 1: $this->_cPtr=new_RealDeque($size); break;
		default: $this->_cPtr=new_RealDeque($size,$value);
		}
	}

	function assign($n,$value) {
		RealDeque_assign($this->_cPtr,$n,$value);
	}

	function swap($x) {
		RealDeque_swap($this->_cPtr,$x);
	}

	function size() {
		return RealDeque_size($this->_cPtr);
	}

	function max_size() {
		return RealDeque_max_size($this->_cPtr);
	}

	function resize($n,$c_=null) {
		switch (func_num_args()) {
		case 1: RealDeque_resize($this->_cPtr,$n); break;
		default: RealDeque_resize($this->_cPtr,$n,$c_);
		}
	}

	function front() {
		return RealDeque_front($this->_cPtr);
	}

	function back() {
		return RealDeque_back($this->_cPtr);
	}

	function push_front($x) {
		RealDeque_push_front($this->_cPtr,$x);
	}

	function push_back($x) {
		RealDeque_push_back($this->_cPtr,$x);
	}

	function pop_front() {
		RealDeque_pop_front($this->_cPtr);
	}

	function pop_back() {
		RealDeque_pop_back($this->_cPtr);
	}

	function clear() {
		RealDeque_clear($this->_cPtr);
	}

	function getitem($i) {
		return RealDeque_getitem($this->_cPtr,$i);
	}

	function setitem($i,$x) {
		RealDeque_setitem($this->_cPtr,$i,$x);
	}

	function delitem($i) {
		RealDeque_delitem($this->_cPtr,$i);
	}

	function getslice($i,$j) {
		$r=RealDeque_getslice($this->_cPtr,$i,$j);
		if (is_resource($r)) {
			$c=substr(get_resource_type($r), (strpos(get_resource_type($r), '__') ? strpos(get_resource_type($r), '__') + 2 : 3));
			if (class_exists($c)) return new $c($r);
			return new RealDeque($r);
		}
		return $r;
	}

	function setslice($i,$j,$v) {
		RealDeque_setslice($this->_cPtr,$i,$j,$v);
	}

	function delslice($i,$j) {
		RealDeque_delslice($this->_cPtr,$i,$j);
	}
}


?>
