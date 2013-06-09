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
if (!extension_loaded('smart_pointer_templatevariables')) {
  if (strtolower(substr(PHP_OS, 0, 3)) === 'win') {
    if (!dl('php_smart_pointer_templatevariables.dll')) return;
  } else {
    // PHP_SHLIB_SUFFIX gives 'dylib' on MacOS X but modules are 'so'.
    if (PHP_SHLIB_SUFFIX === 'dylib') {
      if (!dl('smart_pointer_templatevariables.so')) return;
    } else {
      if (!dl('smart_pointer_templatevariables.'.PHP_SHLIB_SUFFIX)) return;
    }
  }
}



abstract class smart_pointer_templatevariables {
	static function create($id,$xyz) {
		$r=create($id,$xyz);
		if (is_resource($r)) {
			$c=substr(get_resource_type($r), (strpos(get_resource_type($r), '__') ? strpos(get_resource_type($r), '__') + 2 : 3));
			if (class_exists($c)) return new $c($r);
			return new DiffImContainer_D($r);
		}
		return $r;
	}
}

/* PHP Proxy Classes */
class BasicString {
	public $_cPtr=null;
	protected $_pData=array();

	function __set($var,$value) {
		if ($var === 'npos') return BasicString_npos_set($this->_cPtr,$value);
		if ($var === 'thisown') return swig_smart_pointer_templatevariables_alter_newobject($this->_cPtr,$value);
		$this->_pData[$var] = $value;
	}

	function __isset($var) {
		if (function_exists('BasicString_'.$var.'_set')) return true;
		if ($var === 'thisown') return true;
		return array_key_exists($var, $this->_pData);
	}

	function __get($var) {
		if ($var === 'npos') return BasicString_npos_get($this->_cPtr);
		if ($var === 'thisown') return swig_smart_pointer_templatevariables_get_newobject($this->_cPtr);
		return $this->_pData[$var];
	}

	function __construct($res=null) {
		if (is_resource($res) && get_resource_type($res) === '_p_basic_stringT_char_t') {
			$this->_cPtr=$res;
			return;
		}
		$this->_cPtr=new_BasicString();
	}
}

class DiffImContainer_D {
	public $_cPtr=null;
	protected $_pData=array();

	function __set($var,$value) {
		if ($var === 'id') return DiffImContainer_D_id_set($this->_cPtr,$value);
		if ($var === 'thisown') return swig_smart_pointer_templatevariables_alter_newobject($this->_cPtr,$value);
		$this->_pData[$var] = $value;
	}

	function __isset($var) {
		if (function_exists('DiffImContainer_D_'.$var.'_set')) return true;
		if ($var === 'thisown') return true;
		return array_key_exists($var, $this->_pData);
	}

	function __get($var) {
		if ($var === 'id') return DiffImContainer_D_id_get($this->_cPtr);
		if ($var === 'thisown') return swig_smart_pointer_templatevariables_get_newobject($this->_cPtr);
		return $this->_pData[$var];
	}

	function __construct($res=null) {
		if (is_resource($res) && get_resource_type($res) === '_p_DiffImContainerT_double_t') {
			$this->_cPtr=$res;
			return;
		}
		$this->_cPtr=new_DiffImContainer_D();
	}
}

class DiffImContainerPtr_D {
	public $_cPtr=null;
	protected $_pData=array();

	function __set($var,$value) {
		if ($var === 'id') return DiffImContainerPtr_D_id_set($this->_cPtr,$value);
		if ($var === 'thisown') return swig_smart_pointer_templatevariables_alter_newobject($this->_cPtr,$value);
		$this->_pData[$var] = $value;
	}

	function __isset($var) {
		if (function_exists('DiffImContainerPtr_D_'.$var.'_set')) return true;
		if ($var === 'thisown') return true;
		return array_key_exists($var, $this->_pData);
	}

	function __get($var) {
		if ($var === 'id') return DiffImContainerPtr_D_id_get($this->_cPtr);
		if ($var === 'thisown') return swig_smart_pointer_templatevariables_get_newobject($this->_cPtr);
		return $this->_pData[$var];
	}

	function __construct($p=null) {
		if (is_resource($p) && get_resource_type($p) === '_p_PtrT_DiffImContainerT_double_t_t') {
			$this->_cPtr=$p;
			return;
		}
		$this->_cPtr=new_DiffImContainerPtr_D($p);
	}

	function __deref__() {
		$r=DiffImContainerPtr_D___deref__($this->_cPtr);
		if (is_resource($r)) {
			$c=substr(get_resource_type($r), (strpos(get_resource_type($r), '__') ? strpos(get_resource_type($r), '__') + 2 : 3));
			if (class_exists($c)) return new $c($r);
			return new DiffImContainer_D($r);
		}
		return $r;
	}
}


?>
