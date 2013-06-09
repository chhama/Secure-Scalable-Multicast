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
if (!extension_loaded('template_default_arg')) {
  if (strtolower(substr(PHP_OS, 0, 3)) === 'win') {
    if (!dl('php_template_default_arg.dll')) return;
  } else {
    // PHP_SHLIB_SUFFIX gives 'dylib' on MacOS X but modules are 'so'.
    if (PHP_SHLIB_SUFFIX === 'dylib') {
      if (!dl('template_default_arg.so')) return;
    } else {
      if (!dl('template_default_arg.'.PHP_SHLIB_SUFFIX)) return;
    }
  }
}



abstract class template_default_arg {
	static function foob($h=null) {
		switch (func_num_args()) {
		case 0: $r=foob(); break;
		default: $r=foob($h);
		}
		return $r;
	}

	static function ott($t_or_msg_or_h=null,$u_or_t=null,$u=null) {
		switch (func_num_args()) {
		case 0: $r=ott(); break;
		case 1: $r=ott($t_or_msg_or_h); break;
		case 2: $r=ott($t_or_msg_or_h,$u_or_t); break;
		default: $r=ott($t_or_msg_or_h,$u_or_t,$u);
		}
		return $r;
	}

	static function ottint($h,$t=0) {
		return ottint($h,$t);
	}

	static function ottstring($h,$t=null) {
		switch (func_num_args()) {
		case 1: $r=ottstring($h); break;
		default: $r=ottstring($h,$t);
		}
		return $r;
	}

	static function nsott($t_or_msg_or_h=null,$u_or_t=null,$u=null) {
		switch (func_num_args()) {
		case 0: $r=nsott(); break;
		case 1: $r=nsott($t_or_msg_or_h); break;
		case 2: $r=nsott($t_or_msg_or_h,$u_or_t); break;
		default: $r=nsott($t_or_msg_or_h,$u_or_t,$u);
		}
		return $r;
	}

	static function nsottint($h,$t=0) {
		return nsottint($h,$t);
	}

	static function nsottstring($h,$t=null) {
		switch (func_num_args()) {
		case 1: $r=nsottstring($h); break;
		default: $r=nsottstring($h,$t);
		}
		return $r;
	}
}

/* PHP Proxy Classes */
class Foo_int {
	public $_cPtr=null;
	protected $_pData=array();

	function __set($var,$value) {
		if ($var === 'thisown') return swig_template_default_arg_alter_newobject($this->_cPtr,$value);
		$this->_pData[$var] = $value;
	}

	function __isset($var) {
		if ($var === 'thisown') return true;
		return array_key_exists($var, $this->_pData);
	}

	function __get($var) {
		if ($var === 'thisown') return swig_template_default_arg_get_newobject($this->_cPtr);
		return $this->_pData[$var];
	}

	function __construct($n=null) {
		if (is_resource($n) && get_resource_type($n) === '_p_FooT_int_t') {
			$this->_cPtr=$n;
			return;
		}
		switch (func_num_args()) {
		case 0: $this->_cPtr=new_Foo_int(); break;
		default: $this->_cPtr=new_Foo_int($n);
		}
	}
}

class Hello_int {
	public $_cPtr=null;
	protected $_pData=array();

	function __set($var,$value) {
		if ($var === 'thisown') return swig_template_default_arg_alter_newobject($this->_cPtr,$value);
		$this->_pData[$var] = $value;
	}

	function __isset($var) {
		if ($var === 'thisown') return true;
		return array_key_exists($var, $this->_pData);
	}

	function __get($var) {
		if ($var === 'thisown') return swig_template_default_arg_get_newobject($this->_cPtr);
		return $this->_pData[$var];
	}

	function __construct($n=null) {
		if (is_resource($n) && get_resource_type($n) === '_p_HelloT_int_t') {
			$this->_cPtr=$n;
			return;
		}
		switch (func_num_args()) {
		case 0: $this->_cPtr=new_Hello_int(); break;
		default: $this->_cPtr=new_Hello_int($n);
		}
	}

	const hi = 0;

	const hello = Hello_int_hello;

	function foo($h=null) {
		switch (func_num_args()) {
		case 0: Hello_int_foo($this->_cPtr); break;
		default: Hello_int_foo($this->_cPtr,$h);
		}
	}
}

class X_int {
	public $_cPtr=null;
	protected $_pData=array();

	function __set($var,$value) {
		if ($var === 'thisown') return swig_template_default_arg_alter_newobject($this->_cPtr,$value);
		$this->_pData[$var] = $value;
	}

	function __isset($var) {
		if ($var === 'thisown') return true;
		return array_key_exists($var, $this->_pData);
	}

	function __get($var) {
		if ($var === 'thisown') return swig_template_default_arg_get_newobject($this->_cPtr);
		return $this->_pData[$var];
	}

	function __construct($t_or_a=null,$t=null) {
		if (is_resource($t_or_a) && get_resource_type($t_or_a) === '_p_XT_int_t') {
			$this->_cPtr=$t_or_a;
			return;
		}
		switch (func_num_args()) {
		case 0: $this->_cPtr=new_X_int(); break;
		case 1: $this->_cPtr=new_X_int($t_or_a); break;
		default: $this->_cPtr=new_X_int($t_or_a,$t);
		}
	}

	function meth($a_or_t=null,$t=null) {
		switch (func_num_args()) {
		case 0: $r=X_int_meth($this->_cPtr); break;
		case 1: $r=X_int_meth($this->_cPtr,$a_or_t); break;
		default: $r=X_int_meth($this->_cPtr,$a_or_t,$t);
		}
		return $r;
	}
}

class X_longlong {
	public $_cPtr=null;
	protected $_pData=array();

	function __set($var,$value) {
		if ($var === 'thisown') return swig_template_default_arg_alter_newobject($this->_cPtr,$value);
		$this->_pData[$var] = $value;
	}

	function __isset($var) {
		if ($var === 'thisown') return true;
		return array_key_exists($var, $this->_pData);
	}

	function __get($var) {
		if ($var === 'thisown') return swig_template_default_arg_get_newobject($this->_cPtr);
		return $this->_pData[$var];
	}

	function __construct($t_or_a=null,$t=null) {
		if (is_resource($t_or_a) && get_resource_type($t_or_a) === '_p_XT_long_long_t') {
			$this->_cPtr=$t_or_a;
			return;
		}
		switch (func_num_args()) {
		case 0: $this->_cPtr=new_X_longlong(); break;
		case 1: $this->_cPtr=new_X_longlong($t_or_a); break;
		default: $this->_cPtr=new_X_longlong($t_or_a,$t);
		}
	}

	function meth($a_or_t=null,$t=null) {
		switch (func_num_args()) {
		case 0: $r=X_longlong_meth($this->_cPtr); break;
		case 1: $r=X_longlong_meth($this->_cPtr,$a_or_t); break;
		default: $r=X_longlong_meth($this->_cPtr,$a_or_t,$t);
		}
		return $r;
	}
}

class X_unsigned {
	public $_cPtr=null;
	protected $_pData=array();

	function __set($var,$value) {
		if ($var === 'thisown') return swig_template_default_arg_alter_newobject($this->_cPtr,$value);
		$this->_pData[$var] = $value;
	}

	function __isset($var) {
		if ($var === 'thisown') return true;
		return array_key_exists($var, $this->_pData);
	}

	function __get($var) {
		if ($var === 'thisown') return swig_template_default_arg_get_newobject($this->_cPtr);
		return $this->_pData[$var];
	}

	function __construct($t_or_a=null,$t=null) {
		if (is_resource($t_or_a) && get_resource_type($t_or_a) === '_p_XT_unsigned_int_t') {
			$this->_cPtr=$t_or_a;
			return;
		}
		switch (func_num_args()) {
		case 0: $this->_cPtr=new_X_unsigned(); break;
		case 1: $this->_cPtr=new_X_unsigned($t_or_a); break;
		default: $this->_cPtr=new_X_unsigned($t_or_a,$t);
		}
	}

	function meth($a_or_t=null,$t=null) {
		switch (func_num_args()) {
		case 0: $r=X_unsigned_meth($this->_cPtr); break;
		case 1: $r=X_unsigned_meth($this->_cPtr,$a_or_t); break;
		default: $r=X_unsigned_meth($this->_cPtr,$a_or_t,$t);
		}
		return $r;
	}
}

class Y_unsigned {
	public $_cPtr=null;
	protected $_pData=array();

	function __set($var,$value) {
		if ($var === 'thisown') return swig_template_default_arg_alter_newobject($this->_cPtr,$value);
		$this->_pData[$var] = $value;
	}

	function __isset($var) {
		if ($var === 'thisown') return true;
		return array_key_exists($var, $this->_pData);
	}

	function __get($var) {
		if ($var === 'thisown') return swig_template_default_arg_get_newobject($this->_cPtr);
		return $this->_pData[$var];
	}

	function meth($a_or_t=null,$t=null) {
		switch (func_num_args()) {
		case 0: $r=Y_unsigned_meth($this->_cPtr); break;
		case 1: $r=Y_unsigned_meth($this->_cPtr,$a_or_t); break;
		default: $r=Y_unsigned_meth($this->_cPtr,$a_or_t,$t);
		}
		return $r;
	}

	function __construct($res=null) {
		if (is_resource($res) && get_resource_type($res) === '_p_YT_unsigned_int_t') {
			$this->_cPtr=$res;
			return;
		}
		$this->_cPtr=new_Y_unsigned();
	}
}

class X_hello_unsigned {
	public $_cPtr=null;
	protected $_pData=array();

	function __set($var,$value) {
		if ($var === 'thisown') return swig_template_default_arg_alter_newobject($this->_cPtr,$value);
		$this->_pData[$var] = $value;
	}

	function __isset($var) {
		if ($var === 'thisown') return true;
		return array_key_exists($var, $this->_pData);
	}

	function __get($var) {
		if ($var === 'thisown') return swig_template_default_arg_get_newobject($this->_cPtr);
		return $this->_pData[$var];
	}

	function __construct($t_or_a=null,$t=null) {
		if (is_resource($t_or_a) && get_resource_type($t_or_a) === '_p_XT_HelloT_int_t_t') {
			$this->_cPtr=$t_or_a;
			return;
		}
		switch (func_num_args()) {
		case 0: $this->_cPtr=new_X_hello_unsigned(); break;
		case 1: $this->_cPtr=new_X_hello_unsigned($t_or_a); break;
		default: $this->_cPtr=new_X_hello_unsigned($t_or_a,$t);
		}
	}

	function meth($a_or_t=null,$t=null) {
		switch (func_num_args()) {
		case 0: $r=X_hello_unsigned_meth($this->_cPtr); break;
		case 1: $r=X_hello_unsigned_meth($this->_cPtr,$a_or_t); break;
		default: $r=X_hello_unsigned_meth($this->_cPtr,$a_or_t,$t);
		}
		if (!is_resource($r)) return $r;
		switch (get_resource_type($r)) {
		case '_p_HelloT_int_t': return new Hello_int($r);
		case '_p_HelloT_int_t': return new Hello_int($r);
		default: return new Hello_int($r);
		}
	}
}

class Y_hello_unsigned {
	public $_cPtr=null;
	protected $_pData=array();

	function __set($var,$value) {
		if ($var === 'thisown') return swig_template_default_arg_alter_newobject($this->_cPtr,$value);
		$this->_pData[$var] = $value;
	}

	function __isset($var) {
		if ($var === 'thisown') return true;
		return array_key_exists($var, $this->_pData);
	}

	function __get($var) {
		if ($var === 'thisown') return swig_template_default_arg_get_newobject($this->_cPtr);
		return $this->_pData[$var];
	}

	function meth($a_or_t=null,$t=null) {
		switch (func_num_args()) {
		case 0: $r=Y_hello_unsigned_meth($this->_cPtr); break;
		case 1: $r=Y_hello_unsigned_meth($this->_cPtr,$a_or_t); break;
		default: $r=Y_hello_unsigned_meth($this->_cPtr,$a_or_t,$t);
		}
		if (!is_resource($r)) return $r;
		switch (get_resource_type($r)) {
		case '_p_HelloT_int_t': return new Hello_int($r);
		case '_p_HelloT_int_t': return new Hello_int($r);
		default: return new Hello_int($r);
		}
	}

	function __construct($res=null) {
		if (is_resource($res) && get_resource_type($res) === '_p_YT_HelloT_int_t_t') {
			$this->_cPtr=$res;
			return;
		}
		$this->_cPtr=new_Y_hello_unsigned();
	}
}

class X_Foo_Foo_int {
	public $_cPtr=null;
	protected $_pData=array();

	function __set($var,$value) {
		if ($var === 'thisown') return swig_template_default_arg_alter_newobject($this->_cPtr,$value);
		$this->_pData[$var] = $value;
	}

	function __isset($var) {
		if ($var === 'thisown') return true;
		return array_key_exists($var, $this->_pData);
	}

	function __get($var) {
		if ($var === 'thisown') return swig_template_default_arg_get_newobject($this->_cPtr);
		return $this->_pData[$var];
	}

	function __construct($t_or_a=null,$t=null) {
		if (is_resource($t_or_a) && get_resource_type($t_or_a) === '_p_XT_FooT_FooT_int_t_t_t') {
			$this->_cPtr=$t_or_a;
			return;
		}
		switch (func_num_args()) {
		case 0: $this->_cPtr=new_X_Foo_Foo_int(); break;
		case 1: $this->_cPtr=new_X_Foo_Foo_int($t_or_a); break;
		default: $this->_cPtr=new_X_Foo_Foo_int($t_or_a,$t);
		}
	}

	function meth($a_or_t=null,$t=null) {
		switch (func_num_args()) {
		case 0: $r=X_Foo_Foo_int_meth($this->_cPtr); break;
		case 1: $r=X_Foo_Foo_int_meth($this->_cPtr,$a_or_t); break;
		default: $r=X_Foo_Foo_int_meth($this->_cPtr,$a_or_t,$t);
		}
		return $r;
	}
}

class Z_8 {
	public $_cPtr=null;
	protected $_pData=array();

	function __set($var,$value) {
		if ($var === 'thisown') return swig_template_default_arg_alter_newobject($this->_cPtr,$value);
		$this->_pData[$var] = $value;
	}

	function __isset($var) {
		if ($var === 'thisown') return true;
		return array_key_exists($var, $this->_pData);
	}

	function __get($var) {
		if ($var === 'thisown') return swig_template_default_arg_get_newobject($this->_cPtr);
		return $this->_pData[$var];
	}

	function __construct($t_or_a=null,$t=null) {
		if (is_resource($t_or_a) && get_resource_type($t_or_a) === '_p_ZT_8_t') {
			$this->_cPtr=$t_or_a;
			return;
		}
		switch (func_num_args()) {
		case 0: $this->_cPtr=new_Z_8(); break;
		case 1: $this->_cPtr=new_Z_8($t_or_a); break;
		default: $this->_cPtr=new_Z_8($t_or_a,$t);
		}
	}
}

class Foo_Z_8 {
	public $_cPtr=null;
	protected $_pData=array();

	function __set($var,$value) {
		if ($var === 'thisown') return swig_template_default_arg_alter_newobject($this->_cPtr,$value);
		$this->_pData[$var] = $value;
	}

	function __isset($var) {
		if ($var === 'thisown') return true;
		return array_key_exists($var, $this->_pData);
	}

	function __get($var) {
		if ($var === 'thisown') return swig_template_default_arg_get_newobject($this->_cPtr);
		return $this->_pData[$var];
	}

	function __construct($n=null) {
		if (is_resource($n) && get_resource_type($n) === '_p_FooT_ZT_8_t_t') {
			$this->_cPtr=$n;
			return;
		}
		switch (func_num_args()) {
		case 0: $this->_cPtr=new_Foo_Z_8(); break;
		default: $this->_cPtr=new_Foo_Z_8($n);
		}
	}
}

class X_Foo_Z_8 {
	public $_cPtr=null;
	protected $_pData=array();

	function __set($var,$value) {
		if ($var === 'thisown') return swig_template_default_arg_alter_newobject($this->_cPtr,$value);
		$this->_pData[$var] = $value;
	}

	function __isset($var) {
		if ($var === 'thisown') return true;
		return array_key_exists($var, $this->_pData);
	}

	function __get($var) {
		if ($var === 'thisown') return swig_template_default_arg_get_newobject($this->_cPtr);
		return $this->_pData[$var];
	}

	function __construct($t_or_a=null,$t=null) {
		if (is_resource($t_or_a) && get_resource_type($t_or_a) === '_p_XT_FooT_ZT_8_t_t_t') {
			$this->_cPtr=$t_or_a;
			return;
		}
		switch (func_num_args()) {
		case 0: $this->_cPtr=new_X_Foo_Z_8(); break;
		case 1: $this->_cPtr=new_X_Foo_Z_8($t_or_a); break;
		default: $this->_cPtr=new_X_Foo_Z_8($t_or_a,$t);
		}
	}

	function meth($a_or_t=null,$t=null) {
		switch (func_num_args()) {
		case 0: $r=X_Foo_Z_8_meth($this->_cPtr); break;
		case 1: $r=X_Foo_Z_8_meth($this->_cPtr,$a_or_t); break;
		default: $r=X_Foo_Z_8_meth($this->_cPtr,$a_or_t,$t);
		}
		if (!is_resource($r)) return $r;
		switch (get_resource_type($r)) {
		case '_p_FooT_ZT_8_t_t': return new Foo_Z_8($r);
		case '_p_FooT_ZT_8_t_t': return new Foo_Z_8($r);
		default: return new Foo_Z_8($r);
		}
	}
}

class Bar extends Hello_int {
	public $_cPtr=null;

	function __set($var,$value) {
		if ($var === 'thisown') return swig_template_default_arg_alter_newobject($this->_cPtr,$value);
		Hello_int::__set($var,$value);
	}

	function __isset($var) {
		if ($var === 'thisown') return true;
		return Hello_int::__isset($var);
	}

	function __get($var) {
		if ($var === 'thisown') return swig_template_default_arg_get_newobject($this->_cPtr);
		return Hello_int::__get($var);
	}

	function __construct($n) {
		if (is_resource($n) && get_resource_type($n) === '_p_Bar') {
			$this->_cPtr=$n;
			return;
		}
		$this->_cPtr=new_Bar($n);
	}
}


?>
