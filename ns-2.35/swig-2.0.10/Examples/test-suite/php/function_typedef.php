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
if (!extension_loaded('function_typedef')) {
  if (strtolower(substr(PHP_OS, 0, 3)) === 'win') {
    if (!dl('php_function_typedef.dll')) return;
  } else {
    // PHP_SHLIB_SUFFIX gives 'dylib' on MacOS X but modules are 'so'.
    if (PHP_SHLIB_SUFFIX === 'dylib') {
      if (!dl('function_typedef.so')) return;
    } else {
      if (!dl('function_typedef.'.PHP_SHLIB_SUFFIX)) return;
    }
  }
}



abstract class function_typedef {
	static function do_binop1($f,$x,$y) {
		return do_binop1($f,$x,$y);
	}

	static function do_binop2($f,$x,$y) {
		return do_binop2($f,$x,$y);
	}

	static function do_binop3($f,$x,$y) {
		return do_binop3($f,$x,$y);
	}
}

/* PHP Proxy Classes */

?>