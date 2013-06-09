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
if (!extension_loaded('director_enum')) {
  if (strtolower(substr(PHP_OS, 0, 3)) === 'win') {
    if (!dl('php_director_enum.dll')) return;
  } else {
    // PHP_SHLIB_SUFFIX gives 'dylib' on MacOS X but modules are 'so'.
    if (PHP_SHLIB_SUFFIX === 'dylib') {
      if (!dl('director_enum.so')) return;
    } else {
      if (!dl('director_enum.'.PHP_SHLIB_SUFFIX)) return;
    }
  }
}



abstract class director_enum {
	const hi = 0;

	const hello = hello;

	const yo = yo;

	const awright = 10;

	const SA = -1;

	const NA_ = 0;

	const EA = 1;
}

/* PHP Proxy Classes */
class Foo {
	public $_cPtr=null;
	protected $_pData=array();

	function __set($var,$value) {
		if ($var === 'thisown') return swig_director_enum_alter_newobject($this->_cPtr,$value);
		$this->_pData[$var] = $value;
	}

	function __isset($var) {
		if ($var === 'thisown') return true;
		return array_key_exists($var, $this->_pData);
	}

	function __get($var) {
		if ($var === 'thisown') return swig_director_enum_get_newobject($this->_cPtr);
		return $this->_pData[$var];
	}

	const ciao = 0;

	const aufwiedersehen = 100;

	const adios = Foo_adios;

	function say_hello($arg0) {
		return Foo_say_hello($this->_cPtr,$arg0);
	}

	function say_hi($h_or_a) {
		return Foo_say_hi($this->_cPtr,$h_or_a);
	}

	function say_bye($b) {
		return Foo_say_bye($this->_cPtr,$b);
	}

	function say_hi_ref($h) {
		return Foo_say_hi_ref($this->_cPtr,$h);
	}

	function ping($h) {
		return Foo_ping($this->_cPtr,$h);
	}

	function ping_ref($h) {
		return Foo_ping_ref($this->_cPtr,$h);
	}

	function ping_member_enum($b) {
		return Foo_ping_member_enum($this->_cPtr,$b);
	}

	function __construct($res=null) {
		if (is_resource($res) && get_resource_type($res) === '_p_EnumDirector__Foo') {
			$this->_cPtr=$res;
			return;
		}
		if (get_class($this) === 'Foo') {
			$_this = null;
		} else {
			$_this = $this;
		}
		$this->_cPtr=new_Foo($_this);
	}
}

class A {
	public $_cPtr=null;
	protected $_pData=array();

	function __set($var,$value) {
		if ($var === 'thisown') return swig_director_enum_alter_newobject($this->_cPtr,$value);
		$this->_pData[$var] = $value;
	}

	function __isset($var) {
		if ($var === 'thisown') return true;
		return array_key_exists($var, $this->_pData);
	}

	function __get($var) {
		if ($var === 'thisown') return swig_director_enum_get_newobject($this->_cPtr);
		return $this->_pData[$var];
	}

	function __construct($a,$b,$c_) {
		if (is_resource($a) && get_resource_type($a) === '_p_EnumDirector__A') {
			$this->_cPtr=$a;
			return;
		}
		if (get_class($this) === 'A') {
			$_this = null;
		} else {
			$_this = $this;
		}
		$this->_cPtr=new_A($_this, $a,$b,$c_);
	}

	function f($i=0) {
		return A_f($this->_cPtr,$i);
	}
}

class B extends A {
	public $_cPtr=null;

	function __set($var,$value) {
		if ($var === 'thisown') return swig_director_enum_alter_newobject($this->_cPtr,$value);
		A::__set($var,$value);
	}

	function __isset($var) {
		if ($var === 'thisown') return true;
		return A::__isset($var);
	}

	function __get($var) {
		if ($var === 'thisown') return swig_director_enum_get_newobject($this->_cPtr);
		return A::__get($var);
	}

	function __construct($a,$b,$c_) {
		if (is_resource($a) && get_resource_type($a) === '_p_EnumDirector__B') {
			$this->_cPtr=$a;
			return;
		}
		if (get_class($this) === 'B') {
			$_this = null;
		} else {
			$_this = $this;
		}
		$this->_cPtr=new_B($_this, $a,$b,$c_);
	}
}

class A2 {
	public $_cPtr=null;
	protected $_pData=array();

	function __set($var,$value) {
		if ($var === 'thisown') return swig_director_enum_alter_newobject($this->_cPtr,$value);
		$this->_pData[$var] = $value;
	}

	function __isset($var) {
		if ($var === 'thisown') return true;
		return array_key_exists($var, $this->_pData);
	}

	function __get($var) {
		if ($var === 'thisown') return swig_director_enum_get_newobject($this->_cPtr);
		return $this->_pData[$var];
	}

	function __construct($c_=null) {
		if (is_resource($c_) && get_resource_type($c_) === '_p_EnumDirector__A2') {
			$this->_cPtr=$c_;
			return;
		}
		if (get_class($this) === 'A2') {
			$_this = null;
		} else {
			$_this = $this;
		}
		switch (func_num_args()) {
		case 0: $this->_cPtr=new_A2($_this); break;
		default: $this->_cPtr=new_A2($_this, $c_);
		}
	}

	function f($i=0) {
		return A2_f($this->_cPtr,$i);
	}
}

class B2 extends A2 {
	public $_cPtr=null;

	function __set($var,$value) {
		if ($var === 'thisown') return swig_director_enum_alter_newobject($this->_cPtr,$value);
		A2::__set($var,$value);
	}

	function __isset($var) {
		if ($var === 'thisown') return true;
		return A2::__isset($var);
	}

	function __get($var) {
		if ($var === 'thisown') return swig_director_enum_get_newobject($this->_cPtr);
		return A2::__get($var);
	}

	function __construct($c_) {
		if (is_resource($c_) && get_resource_type($c_) === '_p_EnumDirector__B2') {
			$this->_cPtr=$c_;
			return;
		}
		if (get_class($this) === 'B2') {
			$_this = null;
		} else {
			$_this = $this;
		}
		$this->_cPtr=new_B2($_this, $c_);
	}
}


?>