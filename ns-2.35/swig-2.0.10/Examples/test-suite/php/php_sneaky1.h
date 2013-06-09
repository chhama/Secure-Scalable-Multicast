/* ----------------------------------------------------------------------------
 * This file was automatically generated by SWIG (http://www.swig.org).
 * Version 2.0.10
 * 
 * This file is not intended to be easily readable and contains a number of 
 * coding conventions designed to improve portability and efficiency. Do not make
 * changes to this file unless you know what you are doing--modify the SWIG 
 * interface file instead. 
 * ----------------------------------------------------------------------------- */

#ifndef PHP_SNEAKY1_H
#define PHP_SNEAKY1_H

extern zend_module_entry sneaky1_module_entry;
#define phpext_sneaky1_ptr &sneaky1_module_entry

#ifdef PHP_WIN32
# define PHP_SNEAKY1_API __declspec(dllexport)
#else
# define PHP_SNEAKY1_API
#endif

#ifdef ZTS
#include "TSRM.h"
#endif

PHP_MINIT_FUNCTION(sneaky1);
PHP_MSHUTDOWN_FUNCTION(sneaky1);
PHP_RINIT_FUNCTION(sneaky1);
PHP_RSHUTDOWN_FUNCTION(sneaky1);
PHP_MINFO_FUNCTION(sneaky1);

ZEND_NAMED_FUNCTION(_wrap_add);
ZEND_NAMED_FUNCTION(_wrap_subtract);
ZEND_NAMED_FUNCTION(_wrap_mul);
ZEND_NAMED_FUNCTION(_wrap_divide);
#endif /* PHP_SNEAKY1_H */
