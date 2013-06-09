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
if (!extension_loaded('union_parameter')) {
  if (strtolower(substr(PHP_OS, 0, 3)) === 'win') {
    if (!dl('php_union_parameter.dll')) return;
  } else {
    // PHP_SHLIB_SUFFIX gives 'dylib' on MacOS X but modules are 'so'.
    if (PHP_SHLIB_SUFFIX === 'dylib') {
      if (!dl('union_parameter.so')) return;
    } else {
      if (!dl('union_parameter.'.PHP_SHLIB_SUFFIX)) return;
    }
  }
}



abstract class union_parameter {
	static function SDL_PollEvent($ev) {
		return SDL_PollEvent($ev);
	}
}

/* PHP Proxy Classes */
class SDL_ActiveEvent {
	public $_cPtr=null;
	protected $_pData=array();

	function __set($var,$value) {
		$func = 'SDL_ActiveEvent_'.$var.'_set';
		if (function_exists($func)) return call_user_func($func,$this->_cPtr,$value);
		if ($var === 'thisown') return swig_union_parameter_alter_newobject($this->_cPtr,$value);
		$this->_pData[$var] = $value;
	}

	function __isset($var) {
		if (function_exists('SDL_ActiveEvent_'.$var.'_set')) return true;
		if ($var === 'thisown') return true;
		return array_key_exists($var, $this->_pData);
	}

	function __get($var) {
		$func = 'SDL_ActiveEvent_'.$var.'_get';
		if (function_exists($func)) return call_user_func($func,$this->_cPtr);
		if ($var === 'thisown') return swig_union_parameter_get_newobject($this->_cPtr);
		return $this->_pData[$var];
	}

	function __construct($res=null) {
		if (is_resource($res) && get_resource_type($res) === '_p_SDL_ActiveEvent') {
			$this->_cPtr=$res;
			return;
		}
		$this->_cPtr=new_SDL_ActiveEvent();
	}
}

class SDL_KeyboardEvent {
	public $_cPtr=null;
	protected $_pData=array();

	function __set($var,$value) {
		$func = 'SDL_KeyboardEvent_'.$var.'_set';
		if (function_exists($func)) return call_user_func($func,$this->_cPtr,$value);
		if ($var === 'thisown') return swig_union_parameter_alter_newobject($this->_cPtr,$value);
		$this->_pData[$var] = $value;
	}

	function __isset($var) {
		if (function_exists('SDL_KeyboardEvent_'.$var.'_set')) return true;
		if ($var === 'thisown') return true;
		return array_key_exists($var, $this->_pData);
	}

	function __get($var) {
		$func = 'SDL_KeyboardEvent_'.$var.'_get';
		if (function_exists($func)) return call_user_func($func,$this->_cPtr);
		if ($var === 'thisown') return swig_union_parameter_get_newobject($this->_cPtr);
		return $this->_pData[$var];
	}

	function __construct($res=null) {
		if (is_resource($res) && get_resource_type($res) === '_p_SDL_KeyboardEvent') {
			$this->_cPtr=$res;
			return;
		}
		$this->_cPtr=new_SDL_KeyboardEvent();
	}
}

class SDL_Event {
	public $_cPtr=null;
	protected $_pData=array();

	function __set($var,$value) {
		$func = 'SDL_Event_'.$var.'_set';
		if (function_exists($func)) return call_user_func($func,$this->_cPtr,$value);
		if ($var === 'thisown') return swig_union_parameter_alter_newobject($this->_cPtr,$value);
		$this->_pData[$var] = $value;
	}

	function __isset($var) {
		if (function_exists('SDL_Event_'.$var.'_set')) return true;
		if ($var === 'thisown') return true;
		return array_key_exists($var, $this->_pData);
	}

	function __get($var) {
		if ($var === 'active') return new SDL_ActiveEvent(SDL_Event_active_get($this->_cPtr));
		if ($var === 'key') return new SDL_KeyboardEvent(SDL_Event_key_get($this->_cPtr));
		if ($var === 'type') return SDL_Event_type_get($this->_cPtr);
		if ($var === 'thisown') return swig_union_parameter_get_newobject($this->_cPtr);
		return $this->_pData[$var];
	}

	function __construct($res=null) {
		if (is_resource($res) && get_resource_type($res) === '_p_SDL_Event') {
			$this->_cPtr=$res;
			return;
		}
		$this->_cPtr=new_SDL_Event();
	}
}


?>
