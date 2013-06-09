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
if (!extension_loaded('immutable_values')) {
  if (strtolower(substr(PHP_OS, 0, 3)) === 'win') {
    if (!dl('php_immutable_values.dll')) return;
  } else {
    // PHP_SHLIB_SUFFIX gives 'dylib' on MacOS X but modules are 'so'.
    if (PHP_SHLIB_SUFFIX === 'dylib') {
      if (!dl('immutable_values.so')) return;
    } else {
      if (!dl('immutable_values.'.PHP_SHLIB_SUFFIX)) return;
    }
  }
}



abstract class immutable_values {
	const ABC = ABC;

	const Zero = 0;

	const One = One;

	const Two = Two;

	const XYZ = XYZ;

	const Tre = 3;

	const Duo = 2;

	const Uno = 1;
}

/* PHP Proxy Classes */

?>
