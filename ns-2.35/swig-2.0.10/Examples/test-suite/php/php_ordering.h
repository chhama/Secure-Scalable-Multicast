/* ----------------------------------------------------------------------------
 * This file was automatically generated by SWIG (http://www.swig.org).
 * Version 2.0.10
 * 
 * This file is not intended to be easily readable and contains a number of 
 * coding conventions designed to improve portability and efficiency. Do not make
 * changes to this file unless you know what you are doing--modify the SWIG 
 * interface file instead. 
 * ----------------------------------------------------------------------------- */

#ifndef PHP_ORDERING_H
#define PHP_ORDERING_H

extern zend_module_entry ordering_module_entry;
#define phpext_ordering_ptr &ordering_module_entry

#ifdef PHP_WIN32
# define PHP_ORDERING_API __declspec(dllexport)
#else
# define PHP_ORDERING_API
#endif

#ifdef ZTS
#include "TSRM.h"
#endif

PHP_MINIT_FUNCTION(ordering);
PHP_MSHUTDOWN_FUNCTION(ordering);
PHP_RINIT_FUNCTION(ordering);
PHP_RSHUTDOWN_FUNCTION(ordering);
PHP_MINFO_FUNCTION(ordering);

ZEND_NAMED_FUNCTION(_wrap_Klass_variable_set);
ZEND_NAMED_FUNCTION(_wrap_Klass_variable_get);
ZEND_NAMED_FUNCTION(_wrap_new_Klass);
#endif /* PHP_ORDERING_H */