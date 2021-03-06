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
if (!extension_loaded('grouping')) {
  if (strtolower(substr(PHP_OS, 0, 3)) === 'win') {
    if (!dl('php_grouping.dll')) return;
  } else {
    // PHP_SHLIB_SUFFIX gives 'dylib' on MacOS X but modules are 'so'.
    if (PHP_SHLIB_SUFFIX === 'dylib') {
      if (!dl('grouping.so')) return;
    } else {
      if (!dl('grouping.'.PHP_SHLIB_SUFFIX)) return;
    }
  }
}



abstract class grouping {
	static function test1($x) {
		return test1($x);
	}

	static function test2($x) {
		return test2($x);
	}

	static function test3_set($test3) {
		test3_set($test3);
	}

	static function test3_get() {
		return test3_get();
	}

	static function do_unary($x,$f) {
		return do_unary($x,$f);
	}

	static function negate($x) {
		return negate($x);
	}

	const NEGATE = NEGATE;
}

/* PHP Proxy Classes */

?>
