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
if (!extension_loaded('template_ns_enum')) {
  if (strtolower(substr(PHP_OS, 0, 3)) === 'win') {
    if (!dl('php_template_ns_enum.dll')) return;
  } else {
    // PHP_SHLIB_SUFFIX gives 'dylib' on MacOS X but modules are 'so'.
    if (PHP_SHLIB_SUFFIX === 'dylib') {
      if (!dl('template_ns_enum.so')) return;
    } else {
      if (!dl('template_ns_enum.'.PHP_SHLIB_SUFFIX)) return;
    }
  }
}



abstract class template_ns_enum {
	const Hi = 0;

	const Hola = Hola;

	static function say_hi() {
		return say_hi();
	}
}

/* PHP Proxy Classes */

?>
