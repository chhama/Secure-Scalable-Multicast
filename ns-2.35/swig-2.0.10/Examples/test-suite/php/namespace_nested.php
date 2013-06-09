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
if (!extension_loaded('namespace_nested')) {
  if (strtolower(substr(PHP_OS, 0, 3)) === 'win') {
    if (!dl('php_namespace_nested.dll')) return;
  } else {
    // PHP_SHLIB_SUFFIX gives 'dylib' on MacOS X but modules are 'so'.
    if (PHP_SHLIB_SUFFIX === 'dylib') {
      if (!dl('namespace_nested.so')) return;
    } else {
      if (!dl('namespace_nested.'.PHP_SHLIB_SUFFIX)) return;
    }
  }
}



/* PHP Proxy Classes */
class hi0 {
	public $_cPtr=null;
	protected $_pData=array();

	function __set($var,$value) {
		if ($var === 'thisown') return swig_namespace_nested_alter_newobject($this->_cPtr,$value);
		$this->_pData[$var] = $value;
	}

	function __isset($var) {
		if ($var === 'thisown') return true;
		return array_key_exists($var, $this->_pData);
	}

	function __get($var) {
		if ($var === 'thisown') return swig_namespace_nested_get_newobject($this->_cPtr);
		return $this->_pData[$var];
	}

	function __construct($res=null) {
		if (is_resource($res) && get_resource_type($res) === '_p_hello__hi__hi0') {
			$this->_cPtr=$res;
			return;
		}
		$this->_cPtr=new_hi0();
	}
}

class Hi_hi0 extends hi0 {
	public $_cPtr=null;

	function __set($var,$value) {
		if ($var === 'thisown') return swig_namespace_nested_alter_newobject($this->_cPtr,$value);
		hi0::__set($var,$value);
	}

	function __isset($var) {
		if ($var === 'thisown') return true;
		return hi0::__isset($var);
	}

	function __get($var) {
		if ($var === 'thisown') return swig_namespace_nested_get_newobject($this->_cPtr);
		return hi0::__get($var);
	}

	function __construct($res=null) {
		if (is_resource($res) && get_resource_type($res) === '_p_hello__HiT_hello__hi__hi0_t') {
			$this->_cPtr=$res;
			return;
		}
		$this->_cPtr=new_Hi_hi0();
	}
}

class hi1_hi0 extends Hi_hi0 {
	public $_cPtr=null;

	function __set($var,$value) {
		if ($var === 'thisown') return swig_namespace_nested_alter_newobject($this->_cPtr,$value);
		Hi_hi0::__set($var,$value);
	}

	function __isset($var) {
		if ($var === 'thisown') return true;
		return Hi_hi0::__isset($var);
	}

	function __get($var) {
		if ($var === 'thisown') return swig_namespace_nested_get_newobject($this->_cPtr);
		return Hi_hi0::__get($var);
	}

	function __construct($res=null) {
		if (is_resource($res) && get_resource_type($res) === '_p_oss__hi1T_hello__HiT_hello__hi__hi0_t_t') {
			$this->_cPtr=$res;
			return;
		}
		$this->_cPtr=new_hi1_hi0();
	}
}

class MyFoo {
	public $_cPtr=null;
	protected $_pData=array();

	function __set($var,$value) {
		if ($var === 'thisown') return swig_namespace_nested_alter_newobject($this->_cPtr,$value);
		$this->_pData[$var] = $value;
	}

	function __isset($var) {
		if ($var === 'thisown') return true;
		return array_key_exists($var, $this->_pData);
	}

	function __get($var) {
		if ($var === 'thisown') return swig_namespace_nested_get_newobject($this->_cPtr);
		return $this->_pData[$var];
	}

	function __construct($res=null) {
		if (is_resource($res) && get_resource_type($res) === '_p_geos__algorithm__Foo') {
			$this->_cPtr=$res;
			return;
		}
		$this->_cPtr=new_MyFoo();
	}
}

class Bar {
	public $_cPtr=null;
	protected $_pData=array();

	function __set($var,$value) {
		if ($var === 'thisown') return swig_namespace_nested_alter_newobject($this->_cPtr,$value);
		$this->_pData[$var] = $value;
	}

	function __isset($var) {
		if ($var === 'thisown') return true;
		return array_key_exists($var, $this->_pData);
	}

	function __get($var) {
		if ($var === 'thisown') return swig_namespace_nested_get_newobject($this->_cPtr);
		return $this->_pData[$var];
	}

	function __construct($res=null) {
		if (is_resource($res) && get_resource_type($res) === '_p_geos__planargraph__algorithm__Bar') {
			$this->_cPtr=$res;
			return;
		}
		$this->_cPtr=new_Bar();
	}
}

class Foo {
	public $_cPtr=null;
	protected $_pData=array();

	function __set($var,$value) {
		if ($var === 'thisown') return swig_namespace_nested_alter_newobject($this->_cPtr,$value);
		$this->_pData[$var] = $value;
	}

	function __isset($var) {
		if ($var === 'thisown') return true;
		return array_key_exists($var, $this->_pData);
	}

	function __get($var) {
		if ($var === 'thisown') return swig_namespace_nested_get_newobject($this->_cPtr);
		return $this->_pData[$var];
	}

	function __construct($res=null) {
		if (is_resource($res) && get_resource_type($res) === '_p_geos__planargraph__algorithm__Foo') {
			$this->_cPtr=$res;
			return;
		}
		$this->_cPtr=new_Foo();
	}
}

class ConnectedSubgraphFinder extends Foo {
	public $_cPtr=null;

	function __set($var,$value) {
		if ($var === 'thisown') return swig_namespace_nested_alter_newobject($this->_cPtr,$value);
		Foo::__set($var,$value);
	}

	function __isset($var) {
		if ($var === 'thisown') return true;
		return Foo::__isset($var);
	}

	function __get($var) {
		if ($var === 'thisown') return swig_namespace_nested_get_newobject($this->_cPtr);
		return Foo::__get($var);
	}

	function __construct($arg1) {
		if (is_resource($arg1) && get_resource_type($arg1) === '_p_geos__planargraph__algorithm__ConnectedSubgraphFinder') {
			$this->_cPtr=$arg1;
			return;
		}
		$this->_cPtr=new_ConnectedSubgraphFinder($arg1);
	}
}


?>
