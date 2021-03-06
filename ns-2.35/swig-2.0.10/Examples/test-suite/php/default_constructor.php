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
if (!extension_loaded('default_constructor')) {
  if (strtolower(substr(PHP_OS, 0, 3)) === 'win') {
    if (!dl('php_default_constructor.dll')) return;
  } else {
    // PHP_SHLIB_SUFFIX gives 'dylib' on MacOS X but modules are 'so'.
    if (PHP_SHLIB_SUFFIX === 'dylib') {
      if (!dl('default_constructor.so')) return;
    } else {
      if (!dl('default_constructor.'.PHP_SHLIB_SUFFIX)) return;
    }
  }
}



abstract class default_constructor {
	static function bar($arg1) {
		bar($arg1);
	}
}

/* PHP Proxy Classes */
class A {
	public $_cPtr=null;
	protected $_pData=array();

	function __set($var,$value) {
		if ($var === 'thisown') return swig_default_constructor_alter_newobject($this->_cPtr,$value);
		$this->_pData[$var] = $value;
	}

	function __isset($var) {
		if ($var === 'thisown') return true;
		return array_key_exists($var, $this->_pData);
	}

	function __get($var) {
		if ($var === 'thisown') return swig_default_constructor_get_newobject($this->_cPtr);
		return $this->_pData[$var];
	}

	function __construct($res=null) {
		if (is_resource($res) && get_resource_type($res) === '_p_A') {
			$this->_cPtr=$res;
			return;
		}
		$this->_cPtr=new_A();
	}
}

class AA extends A {
	public $_cPtr=null;

	function __set($var,$value) {
		if ($var === 'thisown') return swig_default_constructor_alter_newobject($this->_cPtr,$value);
		A::__set($var,$value);
	}

	function __isset($var) {
		if ($var === 'thisown') return true;
		return A::__isset($var);
	}

	function __get($var) {
		if ($var === 'thisown') return swig_default_constructor_get_newobject($this->_cPtr);
		return A::__get($var);
	}

	function __construct($res=null) {
		if (is_resource($res) && get_resource_type($res) === '_p_AA') {
			$this->_cPtr=$res;
			return;
		}
		$this->_cPtr=new_AA();
	}
}

class B {
	public $_cPtr=null;
	protected $_pData=array();

	function __set($var,$value) {
		if ($var === 'thisown') return swig_default_constructor_alter_newobject($this->_cPtr,$value);
		$this->_pData[$var] = $value;
	}

	function __isset($var) {
		if ($var === 'thisown') return true;
		return array_key_exists($var, $this->_pData);
	}

	function __get($var) {
		if ($var === 'thisown') return swig_default_constructor_get_newobject($this->_cPtr);
		return $this->_pData[$var];
	}

	function __construct($x,$y) {
		if (is_resource($x) && get_resource_type($x) === '_p_B') {
			$this->_cPtr=$x;
			return;
		}
		$this->_cPtr=new_B($x,$y);
	}
}

class BB extends B {
	public $_cPtr=null;

	function __set($var,$value) {
		if ($var === 'thisown') return swig_default_constructor_alter_newobject($this->_cPtr,$value);
		B::__set($var,$value);
	}

	function __isset($var) {
		if ($var === 'thisown') return true;
		return B::__isset($var);
	}

	function __get($var) {
		if ($var === 'thisown') return swig_default_constructor_get_newobject($this->_cPtr);
		return B::__get($var);
	}
	function __construct($h) {
		$this->_cPtr=$h;
	}
}

class C {
	public $_cPtr=null;
	protected $_pData=array();

	function __set($var,$value) {
		if ($var === 'thisown') return swig_default_constructor_alter_newobject($this->_cPtr,$value);
		$this->_pData[$var] = $value;
	}

	function __isset($var) {
		if ($var === 'thisown') return true;
		return array_key_exists($var, $this->_pData);
	}

	function __get($var) {
		if ($var === 'thisown') return swig_default_constructor_get_newobject($this->_cPtr);
		return $this->_pData[$var];
	}
	function __construct($h) {
		$this->_cPtr=$h;
	}
}

class CC extends C {
	public $_cPtr=null;

	function __set($var,$value) {
		if ($var === 'thisown') return swig_default_constructor_alter_newobject($this->_cPtr,$value);
		C::__set($var,$value);
	}

	function __isset($var) {
		if ($var === 'thisown') return true;
		return C::__isset($var);
	}

	function __get($var) {
		if ($var === 'thisown') return swig_default_constructor_get_newobject($this->_cPtr);
		return C::__get($var);
	}

	function __construct($res=null) {
		if (is_resource($res) && get_resource_type($res) === '_p_CC') {
			$this->_cPtr=$res;
			return;
		}
		$this->_cPtr=new_CC();
	}
}

class D {
	public $_cPtr=null;
	protected $_pData=array();

	function __set($var,$value) {
		if ($var === 'thisown') return swig_default_constructor_alter_newobject($this->_cPtr,$value);
		$this->_pData[$var] = $value;
	}

	function __isset($var) {
		if ($var === 'thisown') return true;
		return array_key_exists($var, $this->_pData);
	}

	function __get($var) {
		if ($var === 'thisown') return swig_default_constructor_get_newobject($this->_cPtr);
		return $this->_pData[$var];
	}
	function __construct($h) {
		$this->_cPtr=$h;
	}

	function foo() {
		D_foo($this->_cPtr);
	}
}

class DD extends D {
	public $_cPtr=null;

	function __set($var,$value) {
		if ($var === 'thisown') return swig_default_constructor_alter_newobject($this->_cPtr,$value);
		D::__set($var,$value);
	}

	function __isset($var) {
		if ($var === 'thisown') return true;
		return D::__isset($var);
	}

	function __get($var) {
		if ($var === 'thisown') return swig_default_constructor_get_newobject($this->_cPtr);
		return D::__get($var);
	}
	function __construct($h) {
		$this->_cPtr=$h;
	}
}

class AD extends A {
	public $_cPtr=null;

	function __set($var,$value) {
		if ($var === 'thisown') return swig_default_constructor_alter_newobject($this->_cPtr,$value);
		A::__set($var,$value);
	}

	function __isset($var) {
		if ($var === 'thisown') return true;
		return A::__isset($var);
	}

	function __get($var) {
		if ($var === 'thisown') return swig_default_constructor_get_newobject($this->_cPtr);
		return A::__get($var);
	}
	function __construct($h) {
		$this->_cPtr=$h;
	}
}

class E {
	public $_cPtr=null;
	protected $_pData=array();

	function __set($var,$value) {
		if ($var === 'thisown') return swig_default_constructor_alter_newobject($this->_cPtr,$value);
		$this->_pData[$var] = $value;
	}

	function __isset($var) {
		if ($var === 'thisown') return true;
		return array_key_exists($var, $this->_pData);
	}

	function __get($var) {
		if ($var === 'thisown') return swig_default_constructor_get_newobject($this->_cPtr);
		return $this->_pData[$var];
	}

	function __construct($x=0,$y=0) {
		if (is_resource($x) && get_resource_type($x) === '_p_E') {
			$this->_cPtr=$x;
			return;
		}
		$this->_cPtr=new_E($x,$y);
	}
}

class EE extends E {
	public $_cPtr=null;

	function __set($var,$value) {
		if ($var === 'thisown') return swig_default_constructor_alter_newobject($this->_cPtr,$value);
		E::__set($var,$value);
	}

	function __isset($var) {
		if ($var === 'thisown') return true;
		return E::__isset($var);
	}

	function __get($var) {
		if ($var === 'thisown') return swig_default_constructor_get_newobject($this->_cPtr);
		return E::__get($var);
	}

	function __construct($res=null) {
		if (is_resource($res) && get_resource_type($res) === '_p_EE') {
			$this->_cPtr=$res;
			return;
		}
		$this->_cPtr=new_EE();
	}
}

class EB extends E {
	public $_cPtr=null;

	function __set($var,$value) {
		if ($var === 'thisown') return swig_default_constructor_alter_newobject($this->_cPtr,$value);
		E::__set($var,$value);
	}

	function __isset($var) {
		if ($var === 'thisown') return true;
		return E::__isset($var);
	}

	function __get($var) {
		if ($var === 'thisown') return swig_default_constructor_get_newobject($this->_cPtr);
		return E::__get($var);
	}
	function __construct($h) {
		$this->_cPtr=$h;
	}
}

class F {
	public $_cPtr=null;
	protected $_pData=array();

	function __set($var,$value) {
		if ($var === 'thisown') return swig_default_constructor_alter_newobject($this->_cPtr,$value);
		$this->_pData[$var] = $value;
	}

	function __isset($var) {
		if ($var === 'thisown') return true;
		return array_key_exists($var, $this->_pData);
	}

	function __get($var) {
		if ($var === 'thisown') return swig_default_constructor_get_newobject($this->_cPtr);
		return $this->_pData[$var];
	}

	function foo($arg1,$arg2) {
		F_foo($this->_cPtr,$arg1,$arg2);
	}

	function destroy() {
		F_destroy($this->_cPtr);
	}

	function __construct($res=null) {
		if (is_resource($res) && get_resource_type($res) === '_p_F') {
			$this->_cPtr=$res;
			return;
		}
		$this->_cPtr=new_F();
	}
}

class FFF extends F {
	public $_cPtr=null;

	function __set($var,$value) {
		if ($var === 'thisown') return swig_default_constructor_alter_newobject($this->_cPtr,$value);
		F::__set($var,$value);
	}

	function __isset($var) {
		if ($var === 'thisown') return true;
		return F::__isset($var);
	}

	function __get($var) {
		if ($var === 'thisown') return swig_default_constructor_get_newobject($this->_cPtr);
		return F::__get($var);
	}

	function __construct($res=null) {
		if (is_resource($res) && get_resource_type($res) === '_p_FFF') {
			$this->_cPtr=$res;
			return;
		}
		$this->_cPtr=new_FFF();
	}
}

class G {
	public $_cPtr=null;
	protected $_pData=array();

	function __set($var,$value) {
		if ($var === 'thisown') return swig_default_constructor_alter_newobject($this->_cPtr,$value);
		$this->_pData[$var] = $value;
	}

	function __isset($var) {
		if ($var === 'thisown') return true;
		return array_key_exists($var, $this->_pData);
	}

	function __get($var) {
		if ($var === 'thisown') return swig_default_constructor_get_newobject($this->_cPtr);
		return $this->_pData[$var];
	}

	static function destroy($g) {
		G_destroy($g);
	}

	function __construct($res=null) {
		if (is_resource($res) && get_resource_type($res) === '_p_G') {
			$this->_cPtr=$res;
			return;
		}
		$this->_cPtr=new_G();
	}
}

class GG extends G {
	public $_cPtr=null;

	function __set($var,$value) {
		if ($var === 'thisown') return swig_default_constructor_alter_newobject($this->_cPtr,$value);
		G::__set($var,$value);
	}

	function __isset($var) {
		if ($var === 'thisown') return true;
		return G::__isset($var);
	}

	function __get($var) {
		if ($var === 'thisown') return swig_default_constructor_get_newobject($this->_cPtr);
		return G::__get($var);
	}

	function __construct($res=null) {
		if (is_resource($res) && get_resource_type($res) === '_p_GG') {
			$this->_cPtr=$res;
			return;
		}
		$this->_cPtr=new_GG();
	}
}

class HH {
	public $_cPtr=null;
	protected $_pData=array();

	function __set($var,$value) {
		if ($var === 'thisown') return swig_default_constructor_alter_newobject($this->_cPtr,$value);
		$this->_pData[$var] = $value;
	}

	function __isset($var) {
		if ($var === 'thisown') return true;
		return array_key_exists($var, $this->_pData);
	}

	function __get($var) {
		if ($var === 'thisown') return swig_default_constructor_get_newobject($this->_cPtr);
		return $this->_pData[$var];
	}

	function __construct($i,$j) {
		if (is_resource($i) && get_resource_type($i) === '_p_HH_TT_int_t') {
			$this->_cPtr=$i;
			return;
		}
		$this->_cPtr=new_HH($i,$j);
	}
}

class OSRSpatialReferenceShadow {
	public $_cPtr=null;
	protected $_pData=array();

	function __set($var,$value) {
		if ($var === 'thisown') return swig_default_constructor_alter_newobject($this->_cPtr,$value);
		$this->_pData[$var] = $value;
	}

	function __isset($var) {
		if ($var === 'thisown') return true;
		return array_key_exists($var, $this->_pData);
	}

	function __get($var) {
		if ($var === 'thisown') return swig_default_constructor_get_newobject($this->_cPtr);
		return $this->_pData[$var];
	}

	function __construct($wkt="") {
		if (is_resource($wkt) && get_resource_type($wkt) === '_p_void') {
			$this->_cPtr=$wkt;
			return;
		}
		$this->_cPtr=new_OSRSpatialReferenceShadow($wkt);
	}
}


?>
