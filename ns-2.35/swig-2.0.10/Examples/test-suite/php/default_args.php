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
if (!extension_loaded('default_args')) {
  if (strtolower(substr(PHP_OS, 0, 3)) === 'win') {
    if (!dl('php_default_args.dll')) return;
  } else {
    // PHP_SHLIB_SUFFIX gives 'dylib' on MacOS X but modules are 'so'.
    if (PHP_SHLIB_SUFFIX === 'dylib') {
      if (!dl('default_args.so')) return;
    } else {
      if (!dl('default_args.'.PHP_SHLIB_SUFFIX)) return;
    }
  }
}



abstract class default_args {
	static function anonymous($arg1=7771) {
		return anonymous($arg1);
	}

	static function booltest($x=true) {
		return booltest($x);
	}

	const BITTER = 0;

	const SWEET = SWEET;

	static function casts1($m=null) {
		switch (func_num_args()) {
		case 0: $r=casts1(); break;
		default: $r=casts1($m);
		}
		return $r;
	}

	static function casts2($m="Hello") {
		return casts2($m);
	}

	static function chartest1($c_=null) {
		switch (func_num_args()) {
		case 0: $r=chartest1(); break;
		default: $r=chartest1($c_);
		}
		return $r;
	}

	static function chartest2($c_=null) {
		switch (func_num_args()) {
		case 0: $r=chartest2(); break;
		default: $r=chartest2($c_);
		}
		return $r;
	}

	const NoType = 0;

	static function dummy($aType=null) {
		switch (func_num_args()) {
		case 0: dummy(); break;
		default: dummy($aType);
		}
	}

	static function CONST_NUM_set($CONST_NUM) {
		CONST_NUM_set($CONST_NUM);
	}

	static function CONST_NUM_get() {
		return CONST_NUM_get();
	}

	static function afunction($i=null) {
		switch (func_num_args()) {
		case 0: $r=afunction(); break;
		default: $r=afunction($i);
		}
		return $r;
	}

	static function reftest1($x=null) {
		switch (func_num_args()) {
		case 0: $r=reftest1(); break;
		default: $r=reftest1($x);
		}
		return $r;
	}

	static function reftest2($x=null) {
		switch (func_num_args()) {
		case 0: $r=reftest2(); break;
		default: $r=reftest2($x);
		}
		return $r;
	}

	static function chops($type) {
		return chops($type);
	}

	const Val1 = 0;

	const Val2 = Val2;

	static function exceptionspec($a=-1) {
		exceptionspec($a);
	}

	static function constructorcall($k=null) {
		switch (func_num_args()) {
		case 0: $r=constructorcall(); break;
		default: $r=constructorcall($k);
		}
		if (is_resource($r)) {
			$c=substr(get_resource_type($r), (strpos(get_resource_type($r), '__') ? strpos(get_resource_type($r), '__') + 2 : 3));
			if (class_exists($c)) return new $c($r);
			return new Klass($r);
		}
		return $r;
	}

	static function cfunc1($x,$p=1.0) {
		return cfunc1($x,$p);
	}

	static function cfunc2($x,$p=2.0) {
		return cfunc2($x,$p);
	}

	static function cfunc3($x,$p=3.0) {
		return cfunc3($x,$p);
	}
}

/* PHP Proxy Classes */
class EnumClass {
	public $_cPtr=null;
	protected $_pData=array();

	function __set($var,$value) {
		if ($var === 'thisown') return swig_default_args_alter_newobject($this->_cPtr,$value);
		$this->_pData[$var] = $value;
	}

	function __isset($var) {
		if ($var === 'thisown') return true;
		return array_key_exists($var, $this->_pData);
	}

	function __get($var) {
		if ($var === 'thisown') return swig_default_args_get_newobject($this->_cPtr);
		return $this->_pData[$var];
	}

	const FAST = 0;

	const SLOW = EnumClass_SLOW;

	function blah($s=null,$f=null) {
		switch (func_num_args()) {
		case 0: $r=EnumClass_blah($this->_cPtr); break;
		case 1: $r=EnumClass_blah($this->_cPtr,$s); break;
		default: $r=EnumClass_blah($this->_cPtr,$s,$f);
		}
		return $r;
	}

	function __construct($res=null) {
		if (is_resource($res) && get_resource_type($res) === '_p_EnumClass') {
			$this->_cPtr=$res;
			return;
		}
		$this->_cPtr=new_EnumClass();
	}
}

class Tree {
	public $_cPtr=null;
	protected $_pData=array();

	function __set($var,$value) {
		if ($var === 'thisown') return swig_default_args_alter_newobject($this->_cPtr,$value);
		$this->_pData[$var] = $value;
	}

	function __isset($var) {
		if ($var === 'thisown') return true;
		return array_key_exists($var, $this->_pData);
	}

	function __get($var) {
		if ($var === 'thisown') return swig_default_args_get_newobject($this->_cPtr);
		return $this->_pData[$var];
	}

	const Oak = 0;

	const Fir = Tree_Fir;

	const Cedar = Tree_Cedar;

	function chops($type) {
		Tree_chops($this->_cPtr,$type);
	}

	function test($x=null) {
		switch (func_num_args()) {
		case 0: Tree_test($this->_cPtr); break;
		default: Tree_test($this->_cPtr,$x);
		}
	}

	function __construct($res=null) {
		if (is_resource($res) && get_resource_type($res) === '_p_Tree') {
			$this->_cPtr=$res;
			return;
		}
		$this->_cPtr=new_Tree();
	}
}

class Foo {
	public $_cPtr=null;
	protected $_pData=array();

	function __set($var,$value) {
		if ($var === 'thisown') return swig_default_args_alter_newobject($this->_cPtr,$value);
		$this->_pData[$var] = $value;
	}

	function __isset($var) {
		if ($var === 'thisown') return true;
		return array_key_exists($var, $this->_pData);
	}

	function __get($var) {
		if ($var === 'thisown') return swig_default_args_get_newobject($this->_cPtr);
		return $this->_pData[$var];
	}

	static function bar2() {
		if (func_num_args()) {
			Foo_bar2_set(func_get_arg(0));
			return;
		}

		return Foo_bar2_get();
	}

	static function spam() {
		if (func_num_args()) {
			Foo_spam_set(func_get_arg(0));
			return;
		}

		return Foo_spam_get();
	}

	function __construct($res=null) {
		if (is_resource($res) && get_resource_type($res) === '_p_Foo') {
			$this->_cPtr=$res;
			return;
		}
		$this->_cPtr=new_Foo();
	}

	function method1($x=null) {
		switch (func_num_args()) {
		case 0: Foo_method1($this->_cPtr); break;
		default: Foo_method1($this->_cPtr,$x);
		}
	}

	function method2($x=null) {
		switch (func_num_args()) {
		case 0: Foo_method2($this->_cPtr); break;
		default: Foo_method2($this->_cPtr,$x);
		}
	}

	function newname($x=1234) {
		Foo_newname($this->_cPtr,$x);
	}

	function renamed3arg($x=1234,$d=123.4) {
		Foo_renamed3arg($this->_cPtr,$x,$d);
	}

	function renamed2arg($x=1234) {
		Foo_renamed2arg($this->_cPtr,$x);
	}

	function renamed1arg() {
		Foo_renamed1arg($this->_cPtr);
	}
}

class MyClass1 {
	public $_cPtr=null;
	protected $_pData=array();

	function __set($var,$value) {
		if ($var === 'thisown') return swig_default_args_alter_newobject($this->_cPtr,$value);
		$this->_pData[$var] = $value;
	}

	function __isset($var) {
		if ($var === 'thisown') return true;
		return array_key_exists($var, $this->_pData);
	}

	function __get($var) {
		if ($var === 'thisown') return swig_default_args_get_newobject($this->_cPtr);
		return $this->_pData[$var];
	}

	function __construct($myType) {
		if (is_resource($myType) && get_resource_type($myType) === '_p_MyClass1') {
			$this->_cPtr=$myType;
			return;
		}
		$this->_cPtr=new_MyClass1($myType);
	}
}

class MyClass2 {
	public $_cPtr=null;
	protected $_pData=array();

	function __set($var,$value) {
		if ($var === 'thisown') return swig_default_args_alter_newobject($this->_cPtr,$value);
		$this->_pData[$var] = $value;
	}

	function __isset($var) {
		if ($var === 'thisown') return true;
		return array_key_exists($var, $this->_pData);
	}

	function __get($var) {
		if ($var === 'thisown') return swig_default_args_get_newobject($this->_cPtr);
		return $this->_pData[$var];
	}

	function set($cl1=null) {
		switch (func_num_args()) {
		case 0: MyClass2_set($this->_cPtr); break;
		default: MyClass2_set($this->_cPtr,$cl1);
		}
	}

	function set2($cl1=null) {
		switch (func_num_args()) {
		case 0: MyClass2_set2($this->_cPtr); break;
		default: MyClass2_set2($this->_cPtr,$cl1);
		}
	}

	function __construct($res=null) {
		if (is_resource($res) && get_resource_type($res) === '_p_MyClass2') {
			$this->_cPtr=$res;
			return;
		}
		$this->_cPtr=new_MyClass2();
	}
}

class Except {
	public $_cPtr=null;
	protected $_pData=array();

	function __set($var,$value) {
		if ($var === 'thisown') return swig_default_args_alter_newobject($this->_cPtr,$value);
		$this->_pData[$var] = $value;
	}

	function __isset($var) {
		if ($var === 'thisown') return true;
		return array_key_exists($var, $this->_pData);
	}

	function __get($var) {
		if ($var === 'thisown') return swig_default_args_get_newobject($this->_cPtr);
		return $this->_pData[$var];
	}

	function __construct($throwException,$a=-1) {
		if (is_resource($throwException) && get_resource_type($throwException) === '_p_Except') {
			$this->_cPtr=$throwException;
			return;
		}
		$this->_cPtr=new_Except($throwException,$a);
	}

	function exspec($a=0) {
		Except_exspec($this->_cPtr,$a);
	}
}

class Statics {
	public $_cPtr=null;
	protected $_pData=array();

	function __set($var,$value) {
		if ($var === 'thisown') return swig_default_args_alter_newobject($this->_cPtr,$value);
		$this->_pData[$var] = $value;
	}

	function __isset($var) {
		if ($var === 'thisown') return true;
		return array_key_exists($var, $this->_pData);
	}

	function __get($var) {
		if ($var === 'thisown') return swig_default_args_get_newobject($this->_cPtr);
		return $this->_pData[$var];
	}

	static function staticmethod($a=10,$b=20,$c_=30) {
		return Statics_staticmethod($a,$b,$c_);
	}

	function __construct($res=null) {
		if (is_resource($res) && get_resource_type($res) === '_p_SpaceName__Statics') {
			$this->_cPtr=$res;
			return;
		}
		$this->_cPtr=new_Statics();
	}
}

class Tricky {
	public $_cPtr=null;
	protected $_pData=array();

	function __set($var,$value) {
		if ($var === 'thisown') return swig_default_args_alter_newobject($this->_cPtr,$value);
		$this->_pData[$var] = $value;
	}

	function __isset($var) {
		if ($var === 'thisown') return true;
		return array_key_exists($var, $this->_pData);
	}

	function __get($var) {
		if ($var === 'thisown') return swig_default_args_get_newobject($this->_cPtr);
		return $this->_pData[$var];
	}

	function privatedefault($val=null) {
		switch (func_num_args()) {
		case 0: $r=Tricky_privatedefault($this->_cPtr); break;
		default: $r=Tricky_privatedefault($this->_cPtr,$val);
		}
		return $r;
	}

	function protectedint($val=null) {
		switch (func_num_args()) {
		case 0: $r=Tricky_protectedint($this->_cPtr); break;
		default: $r=Tricky_protectedint($this->_cPtr,$val);
		}
		return $r;
	}

	function protecteddouble($val=null) {
		switch (func_num_args()) {
		case 0: $r=Tricky_protecteddouble($this->_cPtr); break;
		default: $r=Tricky_protecteddouble($this->_cPtr,$val);
		}
		return $r;
	}

	function functiondefault($val=null) {
		switch (func_num_args()) {
		case 0: $r=Tricky_functiondefault($this->_cPtr); break;
		default: $r=Tricky_functiondefault($this->_cPtr,$val);
		}
		return $r;
	}

	function contrived($c_=null) {
		switch (func_num_args()) {
		case 0: $r=Tricky_contrived($this->_cPtr); break;
		default: $r=Tricky_contrived($this->_cPtr,$c_);
		}
		return $r;
	}

	function __construct($res=null) {
		if (is_resource($res) && get_resource_type($res) === '_p_Tricky') {
			$this->_cPtr=$res;
			return;
		}
		$this->_cPtr=new_Tricky();
	}
}

class Klass {
	public $_cPtr=null;
	protected $_pData=array();

	function __set($var,$value) {
		if ($var === 'val') return Klass_val_set($this->_cPtr,$value);
		if ($var === 'thisown') return swig_default_args_alter_newobject($this->_cPtr,$value);
		$this->_pData[$var] = $value;
	}

	function __isset($var) {
		if (function_exists('Klass_'.$var.'_set')) return true;
		if ($var === 'thisown') return true;
		return array_key_exists($var, $this->_pData);
	}

	function __get($var) {
		if ($var === 'val') return Klass_val_get($this->_cPtr);
		if ($var === 'thisown') return swig_default_args_get_newobject($this->_cPtr);
		return $this->_pData[$var];
	}

	function __construct($val=-1) {
		if (is_resource($val) && get_resource_type($val) === '_p_Space__Klass') {
			$this->_cPtr=$val;
			return;
		}
		$this->_cPtr=new_Klass($val);
	}
}

class ConstMethods {
	public $_cPtr=null;
	protected $_pData=array();

	function __set($var,$value) {
		if ($var === 'thisown') return swig_default_args_alter_newobject($this->_cPtr,$value);
		$this->_pData[$var] = $value;
	}

	function __isset($var) {
		if ($var === 'thisown') return true;
		return array_key_exists($var, $this->_pData);
	}

	function __get($var) {
		if ($var === 'thisown') return swig_default_args_get_newobject($this->_cPtr);
		return $this->_pData[$var];
	}

	function coo($d=0.0) {
		return ConstMethods_coo($this->_cPtr,$d);
	}

	function __construct($res=null) {
		if (is_resource($res) && get_resource_type($res) === '_p_ConstMethods') {
			$this->_cPtr=$res;
			return;
		}
		$this->_cPtr=new_ConstMethods();
	}
}

class Pointf {
	public $_cPtr=null;
	protected $_pData=array();

	function __set($var,$value) {
		if ($var === 'x') return Pointf_x_set($this->_cPtr,$value);
		if ($var === 'y') return Pointf_y_set($this->_cPtr,$value);
		if ($var === 'thisown') return swig_default_args_alter_newobject($this->_cPtr,$value);
		$this->_pData[$var] = $value;
	}

	function __isset($var) {
		if (function_exists('Pointf_'.$var.'_set')) return true;
		if ($var === 'thisown') return true;
		return array_key_exists($var, $this->_pData);
	}

	function __get($var) {
		if ($var === 'x') return Pointf_x_get($this->_cPtr);
		if ($var === 'y') return Pointf_y_get($this->_cPtr);
		if ($var === 'thisown') return swig_default_args_get_newobject($this->_cPtr);
		return $this->_pData[$var];
	}

	function __construct($res=null) {
		if (is_resource($res) && get_resource_type($res) === '_p_Pointf') {
			$this->_cPtr=$res;
			return;
		}
		$this->_cPtr=new_Pointf();
	}
}


?>
