/* ----------------------------------------------------------------------------
 * This file was automatically generated by SWIG (http://www.swig.org).
 * Version 2.0.10
 * 
 * This file is not intended to be easily readable and contains a number of 
 * coding conventions designed to improve portability and efficiency. Do not make
 * changes to this file unless you know what you are doing--modify the SWIG 
 * interface file instead. 
 * ----------------------------------------------------------------------------- */

#ifndef PHP_SIZET_H
#define PHP_SIZET_H

extern zend_module_entry sizet_module_entry;
#define phpext_sizet_ptr &sizet_module_entry

#ifdef PHP_WIN32
# define PHP_SIZET_API __declspec(dllexport)
#else
# define PHP_SIZET_API
#endif

#ifdef ZTS
#include "TSRM.h"
#endif

PHP_MINIT_FUNCTION(sizet);
PHP_MSHUTDOWN_FUNCTION(sizet);
PHP_RINIT_FUNCTION(sizet);
PHP_RSHUTDOWN_FUNCTION(sizet);
PHP_MINFO_FUNCTION(sizet);

ZEND_NAMED_FUNCTION(_wrap_test1);
ZEND_NAMED_FUNCTION(_wrap_test2);
ZEND_NAMED_FUNCTION(_wrap_test3);
ZEND_NAMED_FUNCTION(_wrap_test4);
#endif /* PHP_SIZET_H */
