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
if (!extension_loaded('struct_initialization')) {
  if (strtolower(substr(PHP_OS, 0, 3)) === 'win') {
    if (!dl('php_struct_initialization.dll')) return;
  } else {
    // PHP_SHLIB_SUFFIX gives 'dylib' on MacOS X but modules are 'so'.
    if (PHP_SHLIB_SUFFIX === 'dylib') {
      if (!dl('struct_initialization.so')) return;
    } else {
      if (!dl('struct_initialization.'.PHP_SHLIB_SUFFIX)) return;
    }
  }
}



abstract class struct_initialization {
	static function instanceA1_set($instanceA1) {
		instanceA1_set($instanceA1);
	}

	static function instanceA1_get() {
		$r=instanceA1_get();
		if (is_resource($r)) {
			$c=substr(get_resource_type($r), (strpos(get_resource_type($r), '__') ? strpos(get_resource_type($r), '__') + 2 : 3));
			if (class_exists($c)) return new $c($r);
			return new StructA($r);
		}
		return $r;
	}

	static function instanceB1_set($instanceB1) {
		instanceB1_set($instanceB1);
	}

	static function instanceB1_get() {
		$r=instanceB1_get();
		if (is_resource($r)) {
			$c=substr(get_resource_type($r), (strpos(get_resource_type($r), '__') ? strpos(get_resource_type($r), '__') + 2 : 3));
			if (class_exists($c)) return new $c($r);
			return new StructB($r);
		}
		return $r;
	}

	static function instanceB2_set($instanceB2) {
		instanceB2_set($instanceB2);
	}

	static function instanceB2_get() {
		$r=instanceB2_get();
		if (is_resource($r)) {
			$c=substr(get_resource_type($r), (strpos(get_resource_type($r), '__') ? strpos(get_resource_type($r), '__') + 2 : 3));
			if (class_exists($c)) return new $c($r);
			return new StructB($r);
		}
		return $r;
	}

	static function instanceB3_set($instanceB3) {
		instanceB3_set($instanceB3);
	}

	static function instanceB3_get() {
		$r=instanceB3_get();
		if (is_resource($r)) {
			$c=substr(get_resource_type($r), (strpos(get_resource_type($r), '__') ? strpos(get_resource_type($r), '__') + 2 : 3));
			if (class_exists($c)) return new $c($r);
			return new StructB($r);
		}
		return $r;
	}

	static function instanceC1_set($instanceC1) {
		instanceC1_set($instanceC1);
	}

	static function instanceC1_get() {
		$r=instanceC1_get();
		if (is_resource($r)) {
			$c=substr(get_resource_type($r), (strpos(get_resource_type($r), '__') ? strpos(get_resource_type($r), '__') + 2 : 3));
			if (class_exists($c)) return new $c($r);
			return new StructC($r);
		}
		return $r;
	}

	static function instanceD1_set($instanceD1) {
		instanceD1_set($instanceD1);
	}

	static function instanceD1_get() {
		$r=instanceD1_get();
		if (is_resource($r)) {
			$c=substr(get_resource_type($r), (strpos(get_resource_type($r), '__') ? strpos(get_resource_type($r), '__') + 2 : 3));
			if (class_exists($c)) return new $c($r);
			return new StructD($r);
		}
		return $r;
	}

	static function instanceD2_set($instanceD2) {
		instanceD2_set($instanceD2);
	}

	static function instanceD2_get() {
		$r=instanceD2_get();
		if (is_resource($r)) {
			$c=substr(get_resource_type($r), (strpos(get_resource_type($r), '__') ? strpos(get_resource_type($r), '__') + 2 : 3));
			if (class_exists($c)) return new $c($r);
			return new StructD($r);
		}
		return $r;
	}

	static function instanceD3_set($instanceD3) {
		instanceD3_set($instanceD3);
	}

	static function instanceD3_get() {
		$r=instanceD3_get();
		if (is_resource($r)) {
			$c=substr(get_resource_type($r), (strpos(get_resource_type($r), '__') ? strpos(get_resource_type($r), '__') + 2 : 3));
			if (class_exists($c)) return new $c($r);
			return new StructD($r);
		}
		return $r;
	}

	static function instanceE1_set($instanceE1) {
		instanceE1_set($instanceE1);
	}

	static function instanceE1_get() {
		$r=instanceE1_get();
		if (is_resource($r)) {
			$c=substr(get_resource_type($r), (strpos(get_resource_type($r), '__') ? strpos(get_resource_type($r), '__') + 2 : 3));
			if (class_exists($c)) return new $c($r);
			return new StructE($r);
		}
		return $r;
	}

	static function instanceF1_set($instanceF1) {
		instanceF1_set($instanceF1);
	}

	static function instanceF1_get() {
		$r=instanceF1_get();
		if (is_resource($r)) {
			$c=substr(get_resource_type($r), (strpos(get_resource_type($r), '__') ? strpos(get_resource_type($r), '__') + 2 : 3));
			if (class_exists($c)) return new $c($r);
			return new StructF($r);
		}
		return $r;
	}

	static function instanceF2_set($instanceF2) {
		instanceF2_set($instanceF2);
	}

	static function instanceF2_get() {
		$r=instanceF2_get();
		if (is_resource($r)) {
			$c=substr(get_resource_type($r), (strpos(get_resource_type($r), '__') ? strpos(get_resource_type($r), '__') + 2 : 3));
			if (class_exists($c)) return new $c($r);
			return new StructF($r);
		}
		return $r;
	}

	static function instanceF3_set($instanceF3) {
		instanceF3_set($instanceF3);
	}

	static function instanceF3_get() {
		$r=instanceF3_get();
		if (is_resource($r)) {
			$c=substr(get_resource_type($r), (strpos(get_resource_type($r), '__') ? strpos(get_resource_type($r), '__') + 2 : 3));
			if (class_exists($c)) return new $c($r);
			return new StructF($r);
		}
		return $r;
	}
}

/* PHP Proxy Classes */
class StructA {
	public $_cPtr=null;
	protected $_pData=array();

	function __set($var,$value) {
		if ($var === 'x') return StructA_x_set($this->_cPtr,$value);
		if ($var === 'thisown') return swig_struct_initialization_alter_newobject($this->_cPtr,$value);
		$this->_pData[$var] = $value;
	}

	function __isset($var) {
		if (function_exists('StructA_'.$var.'_set')) return true;
		if ($var === 'thisown') return true;
		return array_key_exists($var, $this->_pData);
	}

	function __get($var) {
		if ($var === 'x') return StructA_x_get($this->_cPtr);
		if ($var === 'thisown') return swig_struct_initialization_get_newobject($this->_cPtr);
		return $this->_pData[$var];
	}

	function __construct($res=null) {
		if (is_resource($res) && get_resource_type($res) === '_p_StructA') {
			$this->_cPtr=$res;
			return;
		}
		$this->_cPtr=new_StructA();
	}
}

class StructB {
	public $_cPtr=null;
	protected $_pData=array();

	function __set($var,$value) {
		if ($var === 'x') return StructB_x_set($this->_cPtr,$value);
		if ($var === 'thisown') return swig_struct_initialization_alter_newobject($this->_cPtr,$value);
		$this->_pData[$var] = $value;
	}

	function __isset($var) {
		if (function_exists('StructB_'.$var.'_set')) return true;
		if ($var === 'thisown') return true;
		return array_key_exists($var, $this->_pData);
	}

	function __get($var) {
		if ($var === 'x') return StructB_x_get($this->_cPtr);
		if ($var === 'thisown') return swig_struct_initialization_get_newobject($this->_cPtr);
		return $this->_pData[$var];
	}

	function __construct($res=null) {
		if (is_resource($res) && get_resource_type($res) === '_p_StructB') {
			$this->_cPtr=$res;
			return;
		}
		$this->_cPtr=new_StructB();
	}
}

class StructC {
	public $_cPtr=null;
	protected $_pData=array();

	function __set($var,$value) {
		if ($var === 'x') return StructC_x_set($this->_cPtr,$value);
		if ($var === 'thisown') return swig_struct_initialization_alter_newobject($this->_cPtr,$value);
		$this->_pData[$var] = $value;
	}

	function __isset($var) {
		if (function_exists('StructC_'.$var.'_set')) return true;
		if ($var === 'thisown') return true;
		return array_key_exists($var, $this->_pData);
	}

	function __get($var) {
		if ($var === 'x') return StructC_x_get($this->_cPtr);
		if ($var === 'thisown') return swig_struct_initialization_get_newobject($this->_cPtr);
		return $this->_pData[$var];
	}

	function __construct($res=null) {
		if (is_resource($res) && get_resource_type($res) === '_p_StructC') {
			$this->_cPtr=$res;
			return;
		}
		$this->_cPtr=new_StructC();
	}
}

class StructD {
	public $_cPtr=null;
	protected $_pData=array();

	function __set($var,$value) {
		if ($var === 'x') return StructD_x_set($this->_cPtr,$value);
		if ($var === 'thisown') return swig_struct_initialization_alter_newobject($this->_cPtr,$value);
		$this->_pData[$var] = $value;
	}

	function __isset($var) {
		if (function_exists('StructD_'.$var.'_set')) return true;
		if ($var === 'thisown') return true;
		return array_key_exists($var, $this->_pData);
	}

	function __get($var) {
		if ($var === 'x') return StructD_x_get($this->_cPtr);
		if ($var === 'thisown') return swig_struct_initialization_get_newobject($this->_cPtr);
		return $this->_pData[$var];
	}

	function __construct($res=null) {
		if (is_resource($res) && get_resource_type($res) === '_p_StructD') {
			$this->_cPtr=$res;
			return;
		}
		$this->_cPtr=new_StructD();
	}
}

class StructE {
	public $_cPtr=null;
	protected $_pData=array();

	function __set($var,$value) {
		if ($var === 'x') return StructE_x_set($this->_cPtr,$value);
		if ($var === 'thisown') return swig_struct_initialization_alter_newobject($this->_cPtr,$value);
		$this->_pData[$var] = $value;
	}

	function __isset($var) {
		if (function_exists('StructE_'.$var.'_set')) return true;
		if ($var === 'thisown') return true;
		return array_key_exists($var, $this->_pData);
	}

	function __get($var) {
		if ($var === 'x') return StructE_x_get($this->_cPtr);
		if ($var === 'thisown') return swig_struct_initialization_get_newobject($this->_cPtr);
		return $this->_pData[$var];
	}

	function __construct($res=null) {
		if (is_resource($res) && get_resource_type($res) === '_p_StructE') {
			$this->_cPtr=$res;
			return;
		}
		$this->_cPtr=new_StructE();
	}
}

class StructF {
	public $_cPtr=null;
	protected $_pData=array();

	function __set($var,$value) {
		if ($var === 'x') return StructF_x_set($this->_cPtr,$value);
		if ($var === 'thisown') return swig_struct_initialization_alter_newobject($this->_cPtr,$value);
		$this->_pData[$var] = $value;
	}

	function __isset($var) {
		if (function_exists('StructF_'.$var.'_set')) return true;
		if ($var === 'thisown') return true;
		return array_key_exists($var, $this->_pData);
	}

	function __get($var) {
		if ($var === 'x') return StructF_x_get($this->_cPtr);
		if ($var === 'thisown') return swig_struct_initialization_get_newobject($this->_cPtr);
		return $this->_pData[$var];
	}

	function __construct($res=null) {
		if (is_resource($res) && get_resource_type($res) === '_p_StructF') {
			$this->_cPtr=$res;
			return;
		}
		$this->_cPtr=new_StructF();
	}
}


?>
