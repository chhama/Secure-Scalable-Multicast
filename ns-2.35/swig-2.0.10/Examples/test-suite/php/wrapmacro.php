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
if (!extension_loaded('wrapmacro')) {
  if (strtolower(substr(PHP_OS, 0, 3)) === 'win') {
    if (!dl('php_wrapmacro.dll')) return;
  } else {
    // PHP_SHLIB_SUFFIX gives 'dylib' on MacOS X but modules are 'so'.
    if (PHP_SHLIB_SUFFIX === 'dylib') {
      if (!dl('wrapmacro.so')) return;
    } else {
      if (!dl('wrapmacro.'.PHP_SHLIB_SUFFIX)) return;
    }
  }
}



abstract class wrapmacro {
	static function GUINT16_SWAP_LE_BE_CONSTANT($val) {
		return GUINT16_SWAP_LE_BE_CONSTANT($val);
	}

	static function maximum($a,$b) {
		return maximum($a,$b);
	}
}

/* PHP Proxy Classes */

?>