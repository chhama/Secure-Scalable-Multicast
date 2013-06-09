/* ----------------------------------------------------------------------------
 * This file was automatically generated by SWIG (http://www.swig.org).
 * Version 2.0.10
 * 
 * This file is not intended to be easily readable and contains a number of 
 * coding conventions designed to improve portability and efficiency. Do not make
 * changes to this file unless you know what you are doing--modify the SWIG 
 * interface file instead. 
 * ----------------------------------------------------------------------------- */

#ifndef PHP_CASTS_H
#define PHP_CASTS_H

extern zend_module_entry casts_module_entry;
#define phpext_casts_ptr &casts_module_entry

#ifdef PHP_WIN32
# define PHP_CASTS_API __declspec(dllexport)
#else
# define PHP_CASTS_API
#endif

#ifdef ZTS
#include "TSRM.h"
#endif

PHP_MINIT_FUNCTION(casts);
PHP_MSHUTDOWN_FUNCTION(casts);
PHP_RINIT_FUNCTION(casts);
PHP_RSHUTDOWN_FUNCTION(casts);
PHP_MINFO_FUNCTION(casts);

ZEND_NAMED_FUNCTION(_wrap_new_A);
ZEND_NAMED_FUNCTION(_wrap_A_hello);
ZEND_NAMED_FUNCTION(_wrap_new_B);
#endif /* PHP_CASTS_H */
