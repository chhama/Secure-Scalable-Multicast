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
if (!extension_loaded('long_long')) {
  if (strtolower(substr(PHP_OS, 0, 3)) === 'win') {
    if (!dl('php_long_long.dll')) return;
  } else {
    // PHP_SHLIB_SUFFIX gives 'dylib' on MacOS X but modules are 'so'.
    if (PHP_SHLIB_SUFFIX === 'dylib') {
      if (!dl('long_long.so')) return;
    } else {
      if (!dl('long_long.'.PHP_SHLIB_SUFFIX)) return;
    }
  }
}



abstract class long_long {
	static function foo1($x) {
		foo1($x);
	}

	static function foo2($x) {
		foo2($x);
	}

	static function foo3($x) {
		foo3($x);
	}

	static function foo4($x) {
		foo4($x);
	}

	static function foo5($x) {
		foo5($x);
	}

	static function foo6($x) {
		foo6($x);
	}

	static function bar1() {
		return bar1();
	}

	static function bar2() {
		return bar2();
	}

	static function bar3() {
		return bar3();
	}

	static function bar4() {
		return bar4();
	}

	static function bar5() {
		return bar5();
	}

	static function bar6() {
		return bar6();
	}

	static function ll_set($ll) {
		ll_set($ll);
	}

	static function ll_get() {
		return ll_get();
	}

	static function ull_set($ull) {
		ull_set($ull);
	}

	static function ull_get() {
		return ull_get();
	}

	const lconst1 = lconst1;

	const lconst2 = lconst2;

	const lconst3 = lconst3;

	const lconst4 = lconst4;

	const lconst5 = lconst5;

	const lconst6 = lconst6;
}

/* PHP Proxy Classes */

?>
