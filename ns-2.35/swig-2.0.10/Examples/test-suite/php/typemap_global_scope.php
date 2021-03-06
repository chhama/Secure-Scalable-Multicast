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
if (!extension_loaded('typemap_global_scope')) {
  if (strtolower(substr(PHP_OS, 0, 3)) === 'win') {
    if (!dl('php_typemap_global_scope.dll')) return;
  } else {
    // PHP_SHLIB_SUFFIX gives 'dylib' on MacOS X but modules are 'so'.
    if (PHP_SHLIB_SUFFIX === 'dylib') {
      if (!dl('typemap_global_scope.so')) return;
    } else {
      if (!dl('typemap_global_scope.'.PHP_SHLIB_SUFFIX)) return;
    }
  }
}



abstract class typemap_global_scope {
	static function test1a($t,$tt) {
		test1a($t,$tt);
	}

	static function test1b($t,$tt) {
		test1b($t,$tt);
	}

	static function test2a($t,$tt) {
		test2a($t,$tt);
	}

	static function test2b($t,$tt) {
		test2b($t,$tt);
	}

	static function test3a($t,$tt) {
		test3a($t,$tt);
	}

	static function test3b($t,$tt) {
		test3b($t,$tt);
	}

	static function test3c($t,$tt) {
		test3c($t,$tt);
	}

	static function test3d($t,$tt) {
		test3d($t,$tt);
	}

	static function test3e($t,$tt) {
		test3e($t,$tt);
	}

	static function test4a($t,$tt) {
		test4a($t,$tt);
	}

	static function test4b($t,$tt) {
		test4b($t,$tt);
	}

	static function test4c($t,$tt) {
		test4c($t,$tt);
	}

	static function test4d($t,$tt) {
		test4d($t,$tt);
	}

	static function test4e($t,$tt) {
		test4e($t,$tt);
	}

	static function test_template_1a($t,$tt) {
		test_template_1a($t,$tt);
	}

	static function test_template_1b($t,$tt) {
		test_template_1b($t,$tt);
	}

	static function test_template_2a($t,$tt) {
		test_template_2a($t,$tt);
	}

	static function test_template_2b($t,$tt) {
		test_template_2b($t,$tt);
	}

	static function test_template_3a($t,$tt) {
		test_template_3a($t,$tt);
	}

	static function test_template_3b($t,$tt) {
		test_template_3b($t,$tt);
	}

	static function test_template_3c($t,$tt) {
		test_template_3c($t,$tt);
	}

	static function test_template_3d($t,$tt) {
		test_template_3d($t,$tt);
	}

	static function test_template_3e($t,$tt) {
		test_template_3e($t,$tt);
	}

	static function test_template_4a($t,$tt) {
		test_template_4a($t,$tt);
	}

	static function test_template_4b($t,$tt) {
		test_template_4b($t,$tt);
	}

	static function test_template_4c($t,$tt) {
		test_template_4c($t,$tt);
	}

	static function test_template_4d($t,$tt) {
		test_template_4d($t,$tt);
	}

	static function test_template_4e($t,$tt) {
		test_template_4e($t,$tt);
	}

	const enum_1 = 0;

	const enum_2 = 0;

	const enum_3 = 0;

	const enum_4 = 0;

	static function test_enum_1a($t,$tt) {
		test_enum_1a($t,$tt);
	}

	static function test_enum_1b($t,$tt) {
		test_enum_1b($t,$tt);
	}

	static function test_enum_2a($t,$tt) {
		test_enum_2a($t,$tt);
	}

	static function test_enum_2b($t,$tt) {
		test_enum_2b($t,$tt);
	}

	static function test_enum_3a($t,$tt) {
		test_enum_3a($t,$tt);
	}

	static function test_enum_3b($t,$tt) {
		test_enum_3b($t,$tt);
	}

	static function test_enum_3c($t,$tt) {
		test_enum_3c($t,$tt);
	}

	static function test_enum_3d($t,$tt) {
		test_enum_3d($t,$tt);
	}

	static function test_enum_3e($t,$tt) {
		test_enum_3e($t,$tt);
	}

	static function test_enum_4a($t,$tt) {
		test_enum_4a($t,$tt);
	}

	static function test_enum_4b($t,$tt) {
		test_enum_4b($t,$tt);
	}

	static function test_enum_4c($t,$tt) {
		test_enum_4c($t,$tt);
	}

	static function test_enum_4d($t,$tt) {
		test_enum_4d($t,$tt);
	}

	static function test_enum_4e($t,$tt) {
		test_enum_4e($t,$tt);
	}
}

/* PHP Proxy Classes */
class Test1 {
	public $_cPtr=null;
	protected $_pData=array();

	function __set($var,$value) {
		if ($var === 'thisown') return swig_typemap_global_scope_alter_newobject($this->_cPtr,$value);
		$this->_pData[$var] = $value;
	}

	function __isset($var) {
		if ($var === 'thisown') return true;
		return array_key_exists($var, $this->_pData);
	}

	function __get($var) {
		if ($var === 'thisown') return swig_typemap_global_scope_get_newobject($this->_cPtr);
		return $this->_pData[$var];
	}

	function __construct($res=null) {
		if (is_resource($res) && get_resource_type($res) === '_p_Test1') {
			$this->_cPtr=$res;
			return;
		}
		$this->_cPtr=new_Test1();
	}
}

class Test2 {
	public $_cPtr=null;
	protected $_pData=array();

	function __set($var,$value) {
		if ($var === 'thisown') return swig_typemap_global_scope_alter_newobject($this->_cPtr,$value);
		$this->_pData[$var] = $value;
	}

	function __isset($var) {
		if ($var === 'thisown') return true;
		return array_key_exists($var, $this->_pData);
	}

	function __get($var) {
		if ($var === 'thisown') return swig_typemap_global_scope_get_newobject($this->_cPtr);
		return $this->_pData[$var];
	}

	function __construct($res=null) {
		if (is_resource($res) && get_resource_type($res) === '_p_Test2') {
			$this->_cPtr=$res;
			return;
		}
		$this->_cPtr=new_Test2();
	}
}

class Test3 {
	public $_cPtr=null;
	protected $_pData=array();

	function __set($var,$value) {
		if ($var === 'thisown') return swig_typemap_global_scope_alter_newobject($this->_cPtr,$value);
		$this->_pData[$var] = $value;
	}

	function __isset($var) {
		if ($var === 'thisown') return true;
		return array_key_exists($var, $this->_pData);
	}

	function __get($var) {
		if ($var === 'thisown') return swig_typemap_global_scope_get_newobject($this->_cPtr);
		return $this->_pData[$var];
	}

	function __construct($res=null) {
		if (is_resource($res) && get_resource_type($res) === '_p_Space__Test3') {
			$this->_cPtr=$res;
			return;
		}
		$this->_cPtr=new_Test3();
	}
}

class Test4 {
	public $_cPtr=null;
	protected $_pData=array();

	function __set($var,$value) {
		if ($var === 'thisown') return swig_typemap_global_scope_alter_newobject($this->_cPtr,$value);
		$this->_pData[$var] = $value;
	}

	function __isset($var) {
		if ($var === 'thisown') return true;
		return array_key_exists($var, $this->_pData);
	}

	function __get($var) {
		if ($var === 'thisown') return swig_typemap_global_scope_get_newobject($this->_cPtr);
		return $this->_pData[$var];
	}

	function __construct($res=null) {
		if (is_resource($res) && get_resource_type($res) === '_p_Space__Test4') {
			$this->_cPtr=$res;
			return;
		}
		$this->_cPtr=new_Test4();
	}
}

class XX {
	public $_cPtr=null;
	protected $_pData=array();

	function __set($var,$value) {
		if ($var === 'thisown') return swig_typemap_global_scope_alter_newobject($this->_cPtr,$value);
		$this->_pData[$var] = $value;
	}

	function __isset($var) {
		if ($var === 'thisown') return true;
		return array_key_exists($var, $this->_pData);
	}

	function __get($var) {
		if ($var === 'thisown') return swig_typemap_global_scope_get_newobject($this->_cPtr);
		return $this->_pData[$var];
	}

	function __construct($res=null) {
		if (is_resource($res) && get_resource_type($res) === '_p_XX') {
			$this->_cPtr=$res;
			return;
		}
		$this->_cPtr=new_XX();
	}
}

class TemplateTest1XX {
	public $_cPtr=null;
	protected $_pData=array();

	function __set($var,$value) {
		if ($var === 'm_t') return TemplateTest1XX_m_t_set($this->_cPtr,$value);
		if ($var === 'thisown') return swig_typemap_global_scope_alter_newobject($this->_cPtr,$value);
		$this->_pData[$var] = $value;
	}

	function __isset($var) {
		if (function_exists('TemplateTest1XX_'.$var.'_set')) return true;
		if ($var === 'thisown') return true;
		return array_key_exists($var, $this->_pData);
	}

	function __get($var) {
		if ($var === 'm_t') return new XX(TemplateTest1XX_m_t_get($this->_cPtr));
		if ($var === 'thisown') return swig_typemap_global_scope_get_newobject($this->_cPtr);
		return $this->_pData[$var];
	}

	function __construct($res=null) {
		if (is_resource($res) && get_resource_type($res) === '_p_TemplateTest1T_XX_t') {
			$this->_cPtr=$res;
			return;
		}
		$this->_cPtr=new_TemplateTest1XX();
	}
}

class TemplateTest2XX {
	public $_cPtr=null;
	protected $_pData=array();

	function __set($var,$value) {
		if ($var === 'm_t') return TemplateTest2XX_m_t_set($this->_cPtr,$value);
		if ($var === 'thisown') return swig_typemap_global_scope_alter_newobject($this->_cPtr,$value);
		$this->_pData[$var] = $value;
	}

	function __isset($var) {
		if (function_exists('TemplateTest2XX_'.$var.'_set')) return true;
		if ($var === 'thisown') return true;
		return array_key_exists($var, $this->_pData);
	}

	function __get($var) {
		if ($var === 'm_t') return new XX(TemplateTest2XX_m_t_get($this->_cPtr));
		if ($var === 'thisown') return swig_typemap_global_scope_get_newobject($this->_cPtr);
		return $this->_pData[$var];
	}

	function __construct($res=null) {
		if (is_resource($res) && get_resource_type($res) === '_p_TemplateTest2T_XX_t') {
			$this->_cPtr=$res;
			return;
		}
		$this->_cPtr=new_TemplateTest2XX();
	}
}

class TemplateTest3XX {
	public $_cPtr=null;
	protected $_pData=array();

	function __set($var,$value) {
		if ($var === 'm_t') return TemplateTest3XX_m_t_set($this->_cPtr,$value);
		if ($var === 'thisown') return swig_typemap_global_scope_alter_newobject($this->_cPtr,$value);
		$this->_pData[$var] = $value;
	}

	function __isset($var) {
		if (function_exists('TemplateTest3XX_'.$var.'_set')) return true;
		if ($var === 'thisown') return true;
		return array_key_exists($var, $this->_pData);
	}

	function __get($var) {
		if ($var === 'm_t') return new XX(TemplateTest3XX_m_t_get($this->_cPtr));
		if ($var === 'thisown') return swig_typemap_global_scope_get_newobject($this->_cPtr);
		return $this->_pData[$var];
	}

	function __construct($res=null) {
		if (is_resource($res) && get_resource_type($res) === '_p_Space__TemplateTest3T_XX_t') {
			$this->_cPtr=$res;
			return;
		}
		$this->_cPtr=new_TemplateTest3XX();
	}
}

class TemplateTest4XX {
	public $_cPtr=null;
	protected $_pData=array();

	function __set($var,$value) {
		if ($var === 'm_t') return TemplateTest4XX_m_t_set($this->_cPtr,$value);
		if ($var === 'thisown') return swig_typemap_global_scope_alter_newobject($this->_cPtr,$value);
		$this->_pData[$var] = $value;
	}

	function __isset($var) {
		if (function_exists('TemplateTest4XX_'.$var.'_set')) return true;
		if ($var === 'thisown') return true;
		return array_key_exists($var, $this->_pData);
	}

	function __get($var) {
		if ($var === 'm_t') return new XX(TemplateTest4XX_m_t_get($this->_cPtr));
		if ($var === 'thisown') return swig_typemap_global_scope_get_newobject($this->_cPtr);
		return $this->_pData[$var];
	}

	function __construct($res=null) {
		if (is_resource($res) && get_resource_type($res) === '_p_Space__TemplateTest4T_XX_t') {
			$this->_cPtr=$res;
			return;
		}
		$this->_cPtr=new_TemplateTest4XX();
	}
}


?>
