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
if (!extension_loaded('global_namespace')) {
  if (strtolower(substr(PHP_OS, 0, 3)) === 'win') {
    if (!dl('php_global_namespace.dll')) return;
  } else {
    // PHP_SHLIB_SUFFIX gives 'dylib' on MacOS X but modules are 'so'.
    if (PHP_SHLIB_SUFFIX === 'dylib') {
      if (!dl('global_namespace.so')) return;
    } else {
      if (!dl('global_namespace.'.PHP_SHLIB_SUFFIX)) return;
    }
  }
}



abstract class global_namespace {
	const anenum1 = 0;

	const anenum2 = 0;

	const anenum3 = 0;

	const theenum1 = 0;

	const theenum2 = 0;

	const theenum3 = 0;

	static function getKlass1A() {
		$r=getKlass1A();
		if (is_resource($r)) {
			$c=substr(get_resource_type($r), (strpos(get_resource_type($r), '__') ? strpos(get_resource_type($r), '__') + 2 : 3));
			if (class_exists($c)) return new $c($r);
			return new Klass1($r);
		}
		return $r;
	}

	static function getKlass1B() {
		$r=getKlass1B();
		if (is_resource($r)) {
			$c=substr(get_resource_type($r), (strpos(get_resource_type($r), '__') ? strpos(get_resource_type($r), '__') + 2 : 3));
			if (class_exists($c)) return new $c($r);
			return new Klass1($r);
		}
		return $r;
	}

	static function getKlass2A() {
		$r=getKlass2A();
		if (is_resource($r)) {
			$c=substr(get_resource_type($r), (strpos(get_resource_type($r), '__') ? strpos(get_resource_type($r), '__') + 2 : 3));
			if (class_exists($c)) return new $c($r);
			return new Klass2($r);
		}
		return $r;
	}

	static function getKlass2B() {
		$r=getKlass2B();
		if (is_resource($r)) {
			$c=substr(get_resource_type($r), (strpos(get_resource_type($r), '__') ? strpos(get_resource_type($r), '__') + 2 : 3));
			if (class_exists($c)) return new $c($r);
			return new Klass2($r);
		}
		return $r;
	}

	static function getKlass3A() {
		$r=getKlass3A();
		if (is_resource($r)) {
			$c=substr(get_resource_type($r), (strpos(get_resource_type($r), '__') ? strpos(get_resource_type($r), '__') + 2 : 3));
			if (class_exists($c)) return new $c($r);
			return new Klass3($r);
		}
		return $r;
	}

	static function getKlass3B() {
		$r=getKlass3B();
		if (is_resource($r)) {
			$c=substr(get_resource_type($r), (strpos(get_resource_type($r), '__') ? strpos(get_resource_type($r), '__') + 2 : 3));
			if (class_exists($c)) return new $c($r);
			return new Klass3($r);
		}
		return $r;
	}

	static function getKlass4A() {
		$r=getKlass4A();
		if (is_resource($r)) {
			$c=substr(get_resource_type($r), (strpos(get_resource_type($r), '__') ? strpos(get_resource_type($r), '__') + 2 : 3));
			if (class_exists($c)) return new $c($r);
			return new Klass4($r);
		}
		return $r;
	}

	static function getKlass4B() {
		$r=getKlass4B();
		if (is_resource($r)) {
			$c=substr(get_resource_type($r), (strpos(get_resource_type($r), '__') ? strpos(get_resource_type($r), '__') + 2 : 3));
			if (class_exists($c)) return new $c($r);
			return new Klass4($r);
		}
		return $r;
	}

	static function getKlass5A() {
		$r=getKlass5A();
		if (is_resource($r)) {
			$c=substr(get_resource_type($r), (strpos(get_resource_type($r), '__') ? strpos(get_resource_type($r), '__') + 2 : 3));
			if (class_exists($c)) return new $c($r);
			return new Klass5($r);
		}
		return $r;
	}

	static function getKlass5B() {
		$r=getKlass5B();
		if (is_resource($r)) {
			$c=substr(get_resource_type($r), (strpos(get_resource_type($r), '__') ? strpos(get_resource_type($r), '__') + 2 : 3));
			if (class_exists($c)) return new $c($r);
			return new Klass5($r);
		}
		return $r;
	}

	static function getKlass6A() {
		$r=getKlass6A();
		if (is_resource($r)) {
			$c=substr(get_resource_type($r), (strpos(get_resource_type($r), '__') ? strpos(get_resource_type($r), '__') + 2 : 3));
			if (class_exists($c)) return new $c($r);
			return new Klass6($r);
		}
		return $r;
	}

	static function getKlass6B() {
		$r=getKlass6B();
		if (is_resource($r)) {
			$c=substr(get_resource_type($r), (strpos(get_resource_type($r), '__') ? strpos(get_resource_type($r), '__') + 2 : 3));
			if (class_exists($c)) return new $c($r);
			return new Klass6($r);
		}
		return $r;
	}

	static function getKlass7A() {
		$r=getKlass7A();
		if (is_resource($r)) {
			$c=substr(get_resource_type($r), (strpos(get_resource_type($r), '__') ? strpos(get_resource_type($r), '__') + 2 : 3));
			if (class_exists($c)) return new $c($r);
			return new Klass7($r);
		}
		return $r;
	}

	static function getKlass7B() {
		$r=getKlass7B();
		if (is_resource($r)) {
			$c=substr(get_resource_type($r), (strpos(get_resource_type($r), '__') ? strpos(get_resource_type($r), '__') + 2 : 3));
			if (class_exists($c)) return new $c($r);
			return new Klass7($r);
		}
		return $r;
	}
}

/* PHP Proxy Classes */
class Klass1 {
	public $_cPtr=null;
	protected $_pData=array();

	function __set($var,$value) {
		if ($var === 'thisown') return swig_global_namespace_alter_newobject($this->_cPtr,$value);
		$this->_pData[$var] = $value;
	}

	function __isset($var) {
		if ($var === 'thisown') return true;
		return array_key_exists($var, $this->_pData);
	}

	function __get($var) {
		if ($var === 'thisown') return swig_global_namespace_get_newobject($this->_cPtr);
		return $this->_pData[$var];
	}

	function __construct($res=null) {
		if (is_resource($res) && get_resource_type($res) === '_p_Klass1') {
			$this->_cPtr=$res;
			return;
		}
		$this->_cPtr=new_Klass1();
	}
}

class Klass2 {
	public $_cPtr=null;
	protected $_pData=array();

	function __set($var,$value) {
		if ($var === 'thisown') return swig_global_namespace_alter_newobject($this->_cPtr,$value);
		$this->_pData[$var] = $value;
	}

	function __isset($var) {
		if ($var === 'thisown') return true;
		return array_key_exists($var, $this->_pData);
	}

	function __get($var) {
		if ($var === 'thisown') return swig_global_namespace_get_newobject($this->_cPtr);
		return $this->_pData[$var];
	}

	function __construct($res=null) {
		if (is_resource($res) && get_resource_type($res) === '_p_Klass2') {
			$this->_cPtr=$res;
			return;
		}
		$this->_cPtr=new_Klass2();
	}
}

class Klass3 {
	public $_cPtr=null;
	protected $_pData=array();

	function __set($var,$value) {
		if ($var === 'thisown') return swig_global_namespace_alter_newobject($this->_cPtr,$value);
		$this->_pData[$var] = $value;
	}

	function __isset($var) {
		if ($var === 'thisown') return true;
		return array_key_exists($var, $this->_pData);
	}

	function __get($var) {
		if ($var === 'thisown') return swig_global_namespace_get_newobject($this->_cPtr);
		return $this->_pData[$var];
	}

	function __construct($res=null) {
		if (is_resource($res) && get_resource_type($res) === '_p_Klass3') {
			$this->_cPtr=$res;
			return;
		}
		$this->_cPtr=new_Klass3();
	}
}

class Klass4 {
	public $_cPtr=null;
	protected $_pData=array();

	function __set($var,$value) {
		if ($var === 'thisown') return swig_global_namespace_alter_newobject($this->_cPtr,$value);
		$this->_pData[$var] = $value;
	}

	function __isset($var) {
		if ($var === 'thisown') return true;
		return array_key_exists($var, $this->_pData);
	}

	function __get($var) {
		if ($var === 'thisown') return swig_global_namespace_get_newobject($this->_cPtr);
		return $this->_pData[$var];
	}

	function __construct($res=null) {
		if (is_resource($res) && get_resource_type($res) === '_p_Klass4') {
			$this->_cPtr=$res;
			return;
		}
		$this->_cPtr=new_Klass4();
	}
}

class Klass5 {
	public $_cPtr=null;
	protected $_pData=array();

	function __set($var,$value) {
		if ($var === 'thisown') return swig_global_namespace_alter_newobject($this->_cPtr,$value);
		$this->_pData[$var] = $value;
	}

	function __isset($var) {
		if ($var === 'thisown') return true;
		return array_key_exists($var, $this->_pData);
	}

	function __get($var) {
		if ($var === 'thisown') return swig_global_namespace_get_newobject($this->_cPtr);
		return $this->_pData[$var];
	}

	function __construct($res=null) {
		if (is_resource($res) && get_resource_type($res) === '_p_Klass5') {
			$this->_cPtr=$res;
			return;
		}
		$this->_cPtr=new_Klass5();
	}
}

class Klass6 {
	public $_cPtr=null;
	protected $_pData=array();

	function __set($var,$value) {
		if ($var === 'thisown') return swig_global_namespace_alter_newobject($this->_cPtr,$value);
		$this->_pData[$var] = $value;
	}

	function __isset($var) {
		if ($var === 'thisown') return true;
		return array_key_exists($var, $this->_pData);
	}

	function __get($var) {
		if ($var === 'thisown') return swig_global_namespace_get_newobject($this->_cPtr);
		return $this->_pData[$var];
	}

	function __construct($res=null) {
		if (is_resource($res) && get_resource_type($res) === '_p_Klass6') {
			$this->_cPtr=$res;
			return;
		}
		$this->_cPtr=new_Klass6();
	}
}

class Klass7 {
	public $_cPtr=null;
	protected $_pData=array();

	function __set($var,$value) {
		if ($var === 'thisown') return swig_global_namespace_alter_newobject($this->_cPtr,$value);
		$this->_pData[$var] = $value;
	}

	function __isset($var) {
		if ($var === 'thisown') return true;
		return array_key_exists($var, $this->_pData);
	}

	function __get($var) {
		if ($var === 'thisown') return swig_global_namespace_get_newobject($this->_cPtr);
		return $this->_pData[$var];
	}

	function __construct($res=null) {
		if (is_resource($res) && get_resource_type($res) === '_p_Klass7') {
			$this->_cPtr=$res;
			return;
		}
		$this->_cPtr=new_Klass7();
	}
}

class KlassMethods {
	public $_cPtr=null;
	protected $_pData=array();

	function __set($var,$value) {
		if ($var === 'thisown') return swig_global_namespace_alter_newobject($this->_cPtr,$value);
		$this->_pData[$var] = $value;
	}

	function __isset($var) {
		if ($var === 'thisown') return true;
		return array_key_exists($var, $this->_pData);
	}

	function __get($var) {
		if ($var === 'thisown') return swig_global_namespace_get_newobject($this->_cPtr);
		return $this->_pData[$var];
	}

	static function methodA($v,$cv,$cp,$p,$cr,$r_,$pr) {
		KlassMethods_methodA($v,$cv,$cp,$p,$cr,$r_,$pr);
	}

	static function methodB($v,$cv,$cp,$p,$cr,$r_,$pr) {
		KlassMethods_methodB($v,$cv,$cp,$p,$cr,$r_,$pr);
	}

	function __construct($res=null) {
		if (is_resource($res) && get_resource_type($res) === '_p_KlassMethods') {
			$this->_cPtr=$res;
			return;
		}
		$this->_cPtr=new_KlassMethods();
	}
}

class XYZ1 {
	public $_cPtr=null;
	protected $_pData=array();

	function __set($var,$value) {
		if ($var === 'thisown') return swig_global_namespace_alter_newobject($this->_cPtr,$value);
		$this->_pData[$var] = $value;
	}

	function __isset($var) {
		if ($var === 'thisown') return true;
		return array_key_exists($var, $this->_pData);
	}

	function __get($var) {
		if ($var === 'thisown') return swig_global_namespace_get_newobject($this->_cPtr);
		return $this->_pData[$var];
	}

	function __construct($res=null) {
		if (is_resource($res) && get_resource_type($res) === '_p_Space__XYZ1') {
			$this->_cPtr=$res;
			return;
		}
		$this->_cPtr=new_XYZ1();
	}
}

class XYZ2 {
	public $_cPtr=null;
	protected $_pData=array();

	function __set($var,$value) {
		if ($var === 'thisown') return swig_global_namespace_alter_newobject($this->_cPtr,$value);
		$this->_pData[$var] = $value;
	}

	function __isset($var) {
		if ($var === 'thisown') return true;
		return array_key_exists($var, $this->_pData);
	}

	function __get($var) {
		if ($var === 'thisown') return swig_global_namespace_get_newobject($this->_cPtr);
		return $this->_pData[$var];
	}

	function __construct($res=null) {
		if (is_resource($res) && get_resource_type($res) === '_p_Space__XYZ2') {
			$this->_cPtr=$res;
			return;
		}
		$this->_cPtr=new_XYZ2();
	}
}

class XYZ3 {
	public $_cPtr=null;
	protected $_pData=array();

	function __set($var,$value) {
		if ($var === 'thisown') return swig_global_namespace_alter_newobject($this->_cPtr,$value);
		$this->_pData[$var] = $value;
	}

	function __isset($var) {
		if ($var === 'thisown') return true;
		return array_key_exists($var, $this->_pData);
	}

	function __get($var) {
		if ($var === 'thisown') return swig_global_namespace_get_newobject($this->_cPtr);
		return $this->_pData[$var];
	}

	function __construct($res=null) {
		if (is_resource($res) && get_resource_type($res) === '_p_Space__XYZ3') {
			$this->_cPtr=$res;
			return;
		}
		$this->_cPtr=new_XYZ3();
	}
}

class XYZ4 {
	public $_cPtr=null;
	protected $_pData=array();

	function __set($var,$value) {
		if ($var === 'thisown') return swig_global_namespace_alter_newobject($this->_cPtr,$value);
		$this->_pData[$var] = $value;
	}

	function __isset($var) {
		if ($var === 'thisown') return true;
		return array_key_exists($var, $this->_pData);
	}

	function __get($var) {
		if ($var === 'thisown') return swig_global_namespace_get_newobject($this->_cPtr);
		return $this->_pData[$var];
	}

	function __construct($res=null) {
		if (is_resource($res) && get_resource_type($res) === '_p_Space__XYZ4') {
			$this->_cPtr=$res;
			return;
		}
		$this->_cPtr=new_XYZ4();
	}
}

class XYZ5 {
	public $_cPtr=null;
	protected $_pData=array();

	function __set($var,$value) {
		if ($var === 'thisown') return swig_global_namespace_alter_newobject($this->_cPtr,$value);
		$this->_pData[$var] = $value;
	}

	function __isset($var) {
		if ($var === 'thisown') return true;
		return array_key_exists($var, $this->_pData);
	}

	function __get($var) {
		if ($var === 'thisown') return swig_global_namespace_get_newobject($this->_cPtr);
		return $this->_pData[$var];
	}

	function __construct($res=null) {
		if (is_resource($res) && get_resource_type($res) === '_p_Space__XYZ5') {
			$this->_cPtr=$res;
			return;
		}
		$this->_cPtr=new_XYZ5();
	}
}

class XYZ6 {
	public $_cPtr=null;
	protected $_pData=array();

	function __set($var,$value) {
		if ($var === 'thisown') return swig_global_namespace_alter_newobject($this->_cPtr,$value);
		$this->_pData[$var] = $value;
	}

	function __isset($var) {
		if ($var === 'thisown') return true;
		return array_key_exists($var, $this->_pData);
	}

	function __get($var) {
		if ($var === 'thisown') return swig_global_namespace_get_newobject($this->_cPtr);
		return $this->_pData[$var];
	}

	function __construct($res=null) {
		if (is_resource($res) && get_resource_type($res) === '_p_Space__XYZ6') {
			$this->_cPtr=$res;
			return;
		}
		$this->_cPtr=new_XYZ6();
	}
}

class XYZ7 {
	public $_cPtr=null;
	protected $_pData=array();

	function __set($var,$value) {
		if ($var === 'thisown') return swig_global_namespace_alter_newobject($this->_cPtr,$value);
		$this->_pData[$var] = $value;
	}

	function __isset($var) {
		if ($var === 'thisown') return true;
		return array_key_exists($var, $this->_pData);
	}

	function __get($var) {
		if ($var === 'thisown') return swig_global_namespace_get_newobject($this->_cPtr);
		return $this->_pData[$var];
	}

	function __construct($res=null) {
		if (is_resource($res) && get_resource_type($res) === '_p_Space__XYZ7') {
			$this->_cPtr=$res;
			return;
		}
		$this->_cPtr=new_XYZ7();
	}
}

class XYZMethods {
	public $_cPtr=null;
	protected $_pData=array();

	function __set($var,$value) {
		if ($var === 'thisown') return swig_global_namespace_alter_newobject($this->_cPtr,$value);
		$this->_pData[$var] = $value;
	}

	function __isset($var) {
		if ($var === 'thisown') return true;
		return array_key_exists($var, $this->_pData);
	}

	function __get($var) {
		if ($var === 'thisown') return swig_global_namespace_get_newobject($this->_cPtr);
		return $this->_pData[$var];
	}

	static function methodA($v,$cv,$cp,$p,$cr,$r_,$pr) {
		XYZMethods_methodA($v,$cv,$cp,$p,$cr,$r_,$pr);
	}

	static function methodB($v,$cv,$cp,$p,$cr,$r_,$pr) {
		XYZMethods_methodB($v,$cv,$cp,$p,$cr,$r_,$pr);
	}

	function __construct($res=null) {
		if (is_resource($res) && get_resource_type($res) === '_p_XYZMethods') {
			$this->_cPtr=$res;
			return;
		}
		$this->_cPtr=new_XYZMethods();
	}
}

class AnEnumMethods {
	public $_cPtr=null;
	protected $_pData=array();

	function __set($var,$value) {
		if ($var === 'thisown') return swig_global_namespace_alter_newobject($this->_cPtr,$value);
		$this->_pData[$var] = $value;
	}

	function __isset($var) {
		if ($var === 'thisown') return true;
		return array_key_exists($var, $this->_pData);
	}

	function __get($var) {
		if ($var === 'thisown') return swig_global_namespace_get_newobject($this->_cPtr);
		return $this->_pData[$var];
	}

	static function methodA($v,$cv,$cr) {
		AnEnumMethods_methodA($v,$cv,$cr);
	}

	static function methodB($v,$cv,$cr) {
		AnEnumMethods_methodB($v,$cv,$cr);
	}

	function __construct($res=null) {
		if (is_resource($res) && get_resource_type($res) === '_p_AnEnumMethods') {
			$this->_cPtr=$res;
			return;
		}
		$this->_cPtr=new_AnEnumMethods();
	}
}

class TheEnumMethods {
	public $_cPtr=null;
	protected $_pData=array();

	function __set($var,$value) {
		if ($var === 'thisown') return swig_global_namespace_alter_newobject($this->_cPtr,$value);
		$this->_pData[$var] = $value;
	}

	function __isset($var) {
		if ($var === 'thisown') return true;
		return array_key_exists($var, $this->_pData);
	}

	function __get($var) {
		if ($var === 'thisown') return swig_global_namespace_get_newobject($this->_cPtr);
		return $this->_pData[$var];
	}

	static function methodA($v,$cv,$cr) {
		TheEnumMethods_methodA($v,$cv,$cr);
	}

	static function methodB($v,$cv,$cr) {
		TheEnumMethods_methodB($v,$cv,$cr);
	}

	function __construct($res=null) {
		if (is_resource($res) && get_resource_type($res) === '_p_Space__TheEnumMethods') {
			$this->_cPtr=$res;
			return;
		}
		$this->_cPtr=new_TheEnumMethods();
	}
}


?>
