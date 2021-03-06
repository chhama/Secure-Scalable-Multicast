/* ----------------------------------------------------------------------------
 * This file was automatically generated by SWIG (http://www.swig.org).
 * Version 2.0.10
 * 
 * This file is not intended to be easily readable and contains a number of 
 * coding conventions designed to improve portability and efficiency. Do not make
 * changes to this file unless you know what you are doing--modify the SWIG 
 * interface file instead. 
 * ----------------------------------------------------------------------------- */

#ifndef PHP_LONG_LONG_H
#define PHP_LONG_LONG_H

extern zend_module_entry long_long_module_entry;
#define phpext_long_long_ptr &long_long_module_entry

#ifdef PHP_WIN32
# define PHP_LONG_LONG_API __declspec(dllexport)
#else
# define PHP_LONG_LONG_API
#endif

#ifdef ZTS
#include "TSRM.h"
#endif

PHP_MINIT_FUNCTION(long_long);
PHP_MSHUTDOWN_FUNCTION(long_long);
PHP_RINIT_FUNCTION(long_long);
PHP_RSHUTDOWN_FUNCTION(long_long);
PHP_MINFO_FUNCTION(long_long);

ZEND_NAMED_FUNCTION(_wrap_foo1);
ZEND_NAMED_FUNCTION(_wrap_foo2);
ZEND_NAMED_FUNCTION(_wrap_foo3);
ZEND_NAMED_FUNCTION(_wrap_foo4);
ZEND_NAMED_FUNCTION(_wrap_foo5);
ZEND_NAMED_FUNCTION(_wrap_foo6);
ZEND_NAMED_FUNCTION(_wrap_bar1);
ZEND_NAMED_FUNCTION(_wrap_bar2);
ZEND_NAMED_FUNCTION(_wrap_bar3);
ZEND_NAMED_FUNCTION(_wrap_bar4);
ZEND_NAMED_FUNCTION(_wrap_bar5);
ZEND_NAMED_FUNCTION(_wrap_bar6);
ZEND_NAMED_FUNCTION(_wrap_ll_set);
ZEND_NAMED_FUNCTION(_wrap_ll_get);
ZEND_NAMED_FUNCTION(_wrap_ull_set);
ZEND_NAMED_FUNCTION(_wrap_ull_get);
#endif /* PHP_LONG_LONG_H */
