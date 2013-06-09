/* ----------------------------------------------------------------------------
 * This file was automatically generated by SWIG (http://www.swig.org).
 * Version 2.0.10
 * 
 * This file is not intended to be easily readable and contains a number of 
 * coding conventions designed to improve portability and efficiency. Do not make
 * changes to this file unless you know what you are doing--modify the SWIG 
 * interface file instead. 
 * ----------------------------------------------------------------------------- */

#ifndef PHP_ARRAYREF_H
#define PHP_ARRAYREF_H

extern zend_module_entry arrayref_module_entry;
#define phpext_arrayref_ptr &arrayref_module_entry

#ifdef PHP_WIN32
# define PHP_ARRAYREF_API __declspec(dllexport)
#else
# define PHP_ARRAYREF_API
#endif

#ifdef ZTS
#include "TSRM.h"
#endif

PHP_MINIT_FUNCTION(arrayref);
PHP_MSHUTDOWN_FUNCTION(arrayref);
PHP_RINIT_FUNCTION(arrayref);
PHP_RSHUTDOWN_FUNCTION(arrayref);
PHP_MINFO_FUNCTION(arrayref);

ZEND_NAMED_FUNCTION(_wrap_foo);
ZEND_NAMED_FUNCTION(_wrap_bar);
#endif /* PHP_ARRAYREF_H */
