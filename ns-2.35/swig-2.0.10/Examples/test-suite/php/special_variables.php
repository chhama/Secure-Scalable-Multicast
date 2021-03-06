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
if (!extension_loaded('special_variables')) {
  if (strtolower(substr(PHP_OS, 0, 3)) === 'win') {
    if (!dl('php_special_variables.dll')) return;
  } else {
    // PHP_SHLIB_SUFFIX gives 'dylib' on MacOS X but modules are 'so'.
    if (PHP_SHLIB_SUFFIX === 'dylib') {
      if (!dl('special_variables.so')) return;
    } else {
      if (!dl('special_variables.'.PHP_SHLIB_SUFFIX)) return;
    }
  }
}



abstract class special_variables {
	static function testmethod($i) {
		testmethod($i);
	}

	static function ExceptionVars($i,$j) {
		return ExceptionVars($i,$j);
	}

	static function overloadedmethod($j=null) {
		switch (func_num_args()) {
		case 0: $r=overloadedmethod(); break;
		default: $r=overloadedmethod($j);
		}
		return $r;
	}

	static function declaration_set($declaration) {
		declaration_set($declaration);
	}

	static function declaration_get() {
		return declaration_get();
	}

	static function globtemplate($t) {
		globtemplate($t);
	}

	static function director_testmethod($i) {
		director_testmethod($i);
	}
}

/* PHP Proxy Classes */
class KKK {
	public $_cPtr=null;
	protected $_pData=array();

	function __set($var,$value) {
		if ($var === 'thisown') return swig_special_variables_alter_newobject($this->_cPtr,$value);
		$this->_pData[$var] = $value;
	}

	function __isset($var) {
		if ($var === 'thisown') return true;
		return array_key_exists($var, $this->_pData);
	}

	function __get($var) {
		if ($var === 'thisown') return swig_special_variables_get_newobject($this->_cPtr);
		return $this->_pData[$var];
	}

	function testmethod($i) {
		KKK_testmethod($this->_cPtr,$i);
	}

	static function teststaticmethod($i) {
		KKK_teststaticmethod($i);
	}

	function __construct($res=null) {
		if (is_resource($res) && get_resource_type($res) === '_p_KKK') {
			$this->_cPtr=$res;
			return;
		}
		$this->_cPtr=new_KKK();
	}
}

class ABC {
	public $_cPtr=null;
	protected $_pData=array();

	function __set($var,$value) {
		if ($var === 'thisown') return swig_special_variables_alter_newobject($this->_cPtr,$value);
		$this->_pData[$var] = $value;
	}

	function __isset($var) {
		if ($var === 'thisown') return true;
		return array_key_exists($var, $this->_pData);
	}

	function __get($var) {
		if ($var === 'thisown') return swig_special_variables_get_newobject($this->_cPtr);
		return $this->_pData[$var];
	}

	function __construct($a=null,$b=null) {
		if (is_resource($a) && get_resource_type($a) === '_p_SpaceNamespace__ABC') {
			$this->_cPtr=$a;
			return;
		}
		switch (func_num_args()) {
		case 0: $this->_cPtr=new_ABC(); break;
		case 1: $this->_cPtr=new_ABC($a); break;
		default: $this->_cPtr=new_ABC($a,$b);
		}
	}

	static function staticmethod($x,$b) {
		return ABC_staticmethod($x,$b);
	}

	function instancemethod($x,$b=false) {
		return ABC_instancemethod($this->_cPtr,$x,$b);
	}

	function constmethod($x) {
		return ABC_constmethod($this->_cPtr,$x);
	}
}

class TemplateABC {
	public $_cPtr=null;
	protected $_pData=array();

	function __set($var,$value) {
		if ($var === 'thisown') return swig_special_variables_alter_newobject($this->_cPtr,$value);
		$this->_pData[$var] = $value;
	}

	function __isset($var) {
		if ($var === 'thisown') return true;
		return array_key_exists($var, $this->_pData);
	}

	function __get($var) {
		if ($var === 'thisown') return swig_special_variables_get_newobject($this->_cPtr);
		return $this->_pData[$var];
	}

	function tmethod($t) {
		return TemplateABC_tmethod($this->_cPtr,$t);
	}

	function __construct($res=null) {
		if (is_resource($res) && get_resource_type($res) === '_p_SpaceNamespace__TemplateT_SpaceNamespace__ABC_t') {
			$this->_cPtr=$res;
			return;
		}
		$this->_cPtr=new_TemplateABC();
	}
}

class DirectorTest {
	public $_cPtr=null;
	protected $_pData=array();

	function __set($var,$value) {
		if ($var === 'thisown') return swig_special_variables_alter_newobject($this->_cPtr,$value);
		$this->_pData[$var] = $value;
	}

	function __isset($var) {
		if ($var === 'thisown') return true;
		return array_key_exists($var, $this->_pData);
	}

	function __get($var) {
		if ($var === 'thisown') return swig_special_variables_get_newobject($this->_cPtr);
		return $this->_pData[$var];
	}

	function director_testmethod($i) {
		DirectorTest_director_testmethod($this->_cPtr,$i);
	}

	function __construct($res=null) {
		if (is_resource($res) && get_resource_type($res) === '_p_DirectorTest') {
			$this->_cPtr=$res;
			return;
		}
		if (get_class($this) === 'DirectorTest') {
			$_this = null;
		} else {
			$_this = $this;
		}
		$this->_cPtr=new_DirectorTest($_this);
	}
}

class DEFNewName extends ABC {
	public $_cPtr=null;

	function __set($var,$value) {
		if ($var === 'thisown') return swig_special_variables_alter_newobject($this->_cPtr,$value);
		ABC::__set($var,$value);
	}

	function __isset($var) {
		if ($var === 'thisown') return true;
		return ABC::__isset($var);
	}

	function __get($var) {
		if ($var === 'thisown') return swig_special_variables_get_newobject($this->_cPtr);
		return ABC::__get($var);
	}

	function instance_def() {
		DEFNewName_instance_def($this->_cPtr);
	}

	static function static_def() {
		DEFNewName_static_def();
	}

	function __construct($res=null) {
		if (is_resource($res) && get_resource_type($res) === '_p_SpaceNamespace__DEF') {
			$this->_cPtr=$res;
			return;
		}
		$this->_cPtr=new_DEFNewName();
	}
}


?>
