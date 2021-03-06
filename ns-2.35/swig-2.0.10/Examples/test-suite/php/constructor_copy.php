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
if (!extension_loaded('constructor_copy')) {
  if (strtolower(substr(PHP_OS, 0, 3)) === 'win') {
    if (!dl('php_constructor_copy.dll')) return;
  } else {
    // PHP_SHLIB_SUFFIX gives 'dylib' on MacOS X but modules are 'so'.
    if (PHP_SHLIB_SUFFIX === 'dylib') {
      if (!dl('constructor_copy.so')) return;
    } else {
      if (!dl('constructor_copy.'.PHP_SHLIB_SUFFIX)) return;
    }
  }
}



/* PHP Proxy Classes */
class Foo1 {
	public $_cPtr=null;
	protected $_pData=array();

	function __set($var,$value) {
		if ($var === 'x') return Foo1_x_set($this->_cPtr,$value);
		if ($var === 'thisown') return swig_constructor_copy_alter_newobject($this->_cPtr,$value);
		$this->_pData[$var] = $value;
	}

	function __isset($var) {
		if (function_exists('Foo1_'.$var.'_set')) return true;
		if ($var === 'thisown') return true;
		return array_key_exists($var, $this->_pData);
	}

	function __get($var) {
		if ($var === 'x') return Foo1_x_get($this->_cPtr);
		if ($var === 'thisown') return swig_constructor_copy_get_newobject($this->_cPtr);
		return $this->_pData[$var];
	}

	function __construct($_x_or_other=null) {
		if (is_resource($_x_or_other) && get_resource_type($_x_or_other) === '_p_Foo1') {
			$this->_cPtr=$_x_or_other;
			return;
		}
		switch (func_num_args()) {
		case 0: $this->_cPtr=new_Foo1(); break;
		default: $this->_cPtr=new_Foo1($_x_or_other);
		}
	}
}

class Foo2 {
	public $_cPtr=null;
	protected $_pData=array();

	function __set($var,$value) {
		if ($var === 'thisown') return swig_constructor_copy_alter_newobject($this->_cPtr,$value);
		$this->_pData[$var] = $value;
	}

	function __isset($var) {
		if ($var === 'thisown') return true;
		return array_key_exists($var, $this->_pData);
	}

	function __get($var) {
		if ($var === 'thisown') return swig_constructor_copy_get_newobject($this->_cPtr);
		return $this->_pData[$var];
	}

	function __construct($other=null) {
		if (is_resource($other) && get_resource_type($other) === '_p_Foo2') {
			$this->_cPtr=$other;
			return;
		}
		switch (func_num_args()) {
		case 0: $this->_cPtr=new_Foo2(); break;
		default: $this->_cPtr=new_Foo2($other);
		}
	}
}

class Foo3 {
	public $_cPtr=null;
	protected $_pData=array();

	function __set($var,$value) {
		if ($var === 'thisown') return swig_constructor_copy_alter_newobject($this->_cPtr,$value);
		$this->_pData[$var] = $value;
	}

	function __isset($var) {
		if ($var === 'thisown') return true;
		return array_key_exists($var, $this->_pData);
	}

	function __get($var) {
		if ($var === 'thisown') return swig_constructor_copy_get_newobject($this->_cPtr);
		return $this->_pData[$var];
	}

	function __construct($arg1=null) {
		if (is_resource($arg1) && get_resource_type($arg1) === '_p_Foo3') {
			$this->_cPtr=$arg1;
			return;
		}
		switch (func_num_args()) {
		case 0: $this->_cPtr=new_Foo3(); break;
		default: $this->_cPtr=new_Foo3($arg1);
		}
	}
}

class Foo4 {
	public $_cPtr=null;
	protected $_pData=array();

	function __set($var,$value) {
		if ($var === 'thisown') return swig_constructor_copy_alter_newobject($this->_cPtr,$value);
		$this->_pData[$var] = $value;
	}

	function __isset($var) {
		if ($var === 'thisown') return true;
		return array_key_exists($var, $this->_pData);
	}

	function __get($var) {
		if ($var === 'thisown') return swig_constructor_copy_get_newobject($this->_cPtr);
		return $this->_pData[$var];
	}

	function __construct($res=null) {
		if (is_resource($res) && get_resource_type($res) === '_p_Foo4') {
			$this->_cPtr=$res;
			return;
		}
		$this->_cPtr=new_Foo4();
	}
}

class Foo4a {
	public $_cPtr=null;
	protected $_pData=array();

	function __set($var,$value) {
		if ($var === 'thisown') return swig_constructor_copy_alter_newobject($this->_cPtr,$value);
		$this->_pData[$var] = $value;
	}

	function __isset($var) {
		if ($var === 'thisown') return true;
		return array_key_exists($var, $this->_pData);
	}

	function __get($var) {
		if ($var === 'thisown') return swig_constructor_copy_get_newobject($this->_cPtr);
		return $this->_pData[$var];
	}

	function __construct($res=null) {
		if (is_resource($res) && get_resource_type($res) === '_p_Foo4a') {
			$this->_cPtr=$res;
			return;
		}
		$this->_cPtr=new_Foo4a();
	}
}

class Foo5 extends Foo4 {
	public $_cPtr=null;

	function __set($var,$value) {
		if ($var === 'thisown') return swig_constructor_copy_alter_newobject($this->_cPtr,$value);
		Foo4::__set($var,$value);
	}

	function __isset($var) {
		if ($var === 'thisown') return true;
		return Foo4::__isset($var);
	}

	function __get($var) {
		if ($var === 'thisown') return swig_constructor_copy_get_newobject($this->_cPtr);
		return Foo4::__get($var);
	}

	function __construct($other=null) {
		if (is_resource($other) && get_resource_type($other) === '_p_Foo5') {
			$this->_cPtr=$other;
			return;
		}
		switch (func_num_args()) {
		case 0: $this->_cPtr=new_Foo5(); break;
		default: $this->_cPtr=new_Foo5($other);
		}
	}
}

class Foo6 extends Foo4 {
	public $_cPtr=null;

	function __set($var,$value) {
		if ($var === 'thisown') return swig_constructor_copy_alter_newobject($this->_cPtr,$value);
		Foo4::__set($var,$value);
	}

	function __isset($var) {
		if ($var === 'thisown') return true;
		return Foo4::__isset($var);
	}

	function __get($var) {
		if ($var === 'thisown') return swig_constructor_copy_get_newobject($this->_cPtr);
		return Foo4::__get($var);
	}

	function __construct($f) {
		if (is_resource($f) && get_resource_type($f) === '_p_Foo6') {
			$this->_cPtr=$f;
			return;
		}
		$this->_cPtr=new_Foo6($f);
	}
}

class Foo7 extends Foo5 {
	public $_cPtr=null;

	function __set($var,$value) {
		if ($var === 'thisown') return swig_constructor_copy_alter_newobject($this->_cPtr,$value);
		Foo5::__set($var,$value);
	}

	function __isset($var) {
		if ($var === 'thisown') return true;
		return Foo5::__isset($var);
	}

	function __get($var) {
		if ($var === 'thisown') return swig_constructor_copy_get_newobject($this->_cPtr);
		return Foo5::__get($var);
	}

	function __construct($other=null) {
		if (is_resource($other) && get_resource_type($other) === '_p_Foo7') {
			$this->_cPtr=$other;
			return;
		}
		switch (func_num_args()) {
		case 0: $this->_cPtr=new_Foo7(); break;
		default: $this->_cPtr=new_Foo7($other);
		}
	}
}

class Foo8 {
	public $_cPtr=null;
	protected $_pData=array();

	function __set($var,$value) {
		if ($var === 'thisown') return swig_constructor_copy_alter_newobject($this->_cPtr,$value);
		$this->_pData[$var] = $value;
	}

	function __isset($var) {
		if ($var === 'thisown') return true;
		return array_key_exists($var, $this->_pData);
	}

	function __get($var) {
		if ($var === 'thisown') return swig_constructor_copy_get_newobject($this->_cPtr);
		return $this->_pData[$var];
	}

	function __construct($res=null) {
		if (is_resource($res) && get_resource_type($res) === '_p_Foo8') {
			$this->_cPtr=$res;
			return;
		}
		$this->_cPtr=new_Foo8();
	}
}

class Bari {
	public $_cPtr=null;
	protected $_pData=array();

	function __set($var,$value) {
		if ($var === 'x') return Bari_x_set($this->_cPtr,$value);
		if ($var === 'thisown') return swig_constructor_copy_alter_newobject($this->_cPtr,$value);
		$this->_pData[$var] = $value;
	}

	function __isset($var) {
		if (function_exists('Bari_'.$var.'_set')) return true;
		if ($var === 'thisown') return true;
		return array_key_exists($var, $this->_pData);
	}

	function __get($var) {
		if ($var === 'x') return Bari_x_get($this->_cPtr);
		if ($var === 'thisown') return swig_constructor_copy_get_newobject($this->_cPtr);
		return $this->_pData[$var];
	}

	function __construct($_x_or_other=null) {
		if (is_resource($_x_or_other) && get_resource_type($_x_or_other) === '_p_BarT_int_t') {
			$this->_cPtr=$_x_or_other;
			return;
		}
		switch (func_num_args()) {
		case 0: $this->_cPtr=new_Bari(); break;
		default: $this->_cPtr=new_Bari($_x_or_other);
		}
	}
}

class Bard {
	public $_cPtr=null;
	protected $_pData=array();

	function __set($var,$value) {
		if ($var === 'x') return Bard_x_set($this->_cPtr,$value);
		if ($var === 'thisown') return swig_constructor_copy_alter_newobject($this->_cPtr,$value);
		$this->_pData[$var] = $value;
	}

	function __isset($var) {
		if (function_exists('Bard_'.$var.'_set')) return true;
		if ($var === 'thisown') return true;
		return array_key_exists($var, $this->_pData);
	}

	function __get($var) {
		if ($var === 'x') return Bard_x_get($this->_cPtr);
		if ($var === 'thisown') return swig_constructor_copy_get_newobject($this->_cPtr);
		return $this->_pData[$var];
	}

	function __construct($_x=0) {
		if (is_resource($_x) && get_resource_type($_x) === '_p_BarT_double_t') {
			$this->_cPtr=$_x;
			return;
		}
		$this->_cPtr=new_Bard($_x);
	}
}

class ABC_Libor_ModelUtils {
	public $_cPtr=null;
	protected $_pData=array();

	function __set($var,$value) {
		if ($var === 'thisown') return swig_constructor_copy_alter_newobject($this->_cPtr,$value);
		$this->_pData[$var] = $value;
	}

	function __isset($var) {
		if ($var === 'thisown') return true;
		return array_key_exists($var, $this->_pData);
	}

	function __get($var) {
		if ($var === 'thisown') return swig_constructor_copy_get_newobject($this->_cPtr);
		return $this->_pData[$var];
	}

	function __construct($other=null) {
		if (is_resource($other) && get_resource_type($other) === '_p_ABC_Nam__ABC_Libor__ModelUtils') {
			$this->_cPtr=$other;
			return;
		}
		switch (func_num_args()) {
		case 0: $this->_cPtr=new_ABC_Libor_ModelUtils(); break;
		default: $this->_cPtr=new_ABC_Libor_ModelUtils($other);
		}
	}
}

class ModelUtils_i {
	public $_cPtr=null;
	protected $_pData=array();

	function __set($var,$value) {
		if ($var === 'thisown') return swig_constructor_copy_alter_newobject($this->_cPtr,$value);
		$this->_pData[$var] = $value;
	}

	function __isset($var) {
		if ($var === 'thisown') return true;
		return array_key_exists($var, $this->_pData);
	}

	function __get($var) {
		if ($var === 'thisown') return swig_constructor_copy_get_newobject($this->_cPtr);
		return $this->_pData[$var];
	}

	function __construct($other=null) {
		if (is_resource($other) && get_resource_type($other) === '_p_ABC_Nam__ABC_Libor__ModelUtils_TT_int_t') {
			$this->_cPtr=$other;
			return;
		}
		switch (func_num_args()) {
		case 0: $this->_cPtr=new_ModelUtils_i(); break;
		default: $this->_cPtr=new_ModelUtils_i($other);
		}
	}
}

class Space1Space2_TotalReturnSwap {
	public $_cPtr=null;
	protected $_pData=array();

	function __set($var,$value) {
		if ($var === 'thisown') return swig_constructor_copy_alter_newobject($this->_cPtr,$value);
		$this->_pData[$var] = $value;
	}

	function __isset($var) {
		if ($var === 'thisown') return true;
		return array_key_exists($var, $this->_pData);
	}

	function __get($var) {
		if ($var === 'thisown') return swig_constructor_copy_get_newobject($this->_cPtr);
		return $this->_pData[$var];
	}

	function __construct($other=null) {
		if (is_resource($other) && get_resource_type($other) === '_p_Space1__Space2__TotalReturnSwap') {
			$this->_cPtr=$other;
			return;
		}
		switch (func_num_args()) {
		case 0: $this->_cPtr=new_Space1Space2_TotalReturnSwap(); break;
		default: $this->_cPtr=new_Space1Space2_TotalReturnSwap($other);
		}
	}
}

class Total_i {
	public $_cPtr=null;
	protected $_pData=array();

	function __set($var,$value) {
		if ($var === 'thisown') return swig_constructor_copy_alter_newobject($this->_cPtr,$value);
		$this->_pData[$var] = $value;
	}

	function __isset($var) {
		if ($var === 'thisown') return true;
		return array_key_exists($var, $this->_pData);
	}

	function __get($var) {
		if ($var === 'thisown') return swig_constructor_copy_get_newobject($this->_cPtr);
		return $this->_pData[$var];
	}

	function __construct($other=null) {
		if (is_resource($other) && get_resource_type($other) === '_p_Space1__Space2__TotalReturnSwap_TT_int_t') {
			$this->_cPtr=$other;
			return;
		}
		switch (func_num_args()) {
		case 0: $this->_cPtr=new_Total_i(); break;
		default: $this->_cPtr=new_Total_i($other);
		}
	}
}


?>
