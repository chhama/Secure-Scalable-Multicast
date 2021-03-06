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
if (!extension_loaded('li_constraints')) {
  if (strtolower(substr(PHP_OS, 0, 3)) === 'win') {
    if (!dl('php_li_constraints.dll')) return;
  } else {
    // PHP_SHLIB_SUFFIX gives 'dylib' on MacOS X but modules are 'so'.
    if (PHP_SHLIB_SUFFIX === 'dylib') {
      if (!dl('li_constraints.so')) return;
    } else {
      if (!dl('li_constraints.'.PHP_SHLIB_SUFFIX)) return;
    }
  }
}



abstract class li_constraints {
	static function test_nonnegative($NONNEGATIVE) {
		test_nonnegative($NONNEGATIVE);
	}

	static function test_nonpositive($NONPOSITIVE) {
		test_nonpositive($NONPOSITIVE);
	}

	static function test_positive($POSITIVE) {
		test_positive($POSITIVE);
	}

	static function test_negative($POSITIVE) {
		test_negative($POSITIVE);
	}

	static function test_nonzero($NONZERO) {
		test_nonzero($NONZERO);
	}

	static function test_nonnull($NONNULL) {
		test_nonnull($NONNULL);
	}
}

/* PHP Proxy Classes */

?>
