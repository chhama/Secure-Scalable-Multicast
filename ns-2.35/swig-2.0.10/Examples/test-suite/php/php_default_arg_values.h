/* ----------------------------------------------------------------------------
 * This file was automatically generated by SWIG (http://www.swig.org).
 * Version 2.0.10
 * 
 * This file is not intended to be easily readable and contains a number of 
 * coding conventions designed to improve portability and efficiency. Do not make
 * changes to this file unless you know what you are doing--modify the SWIG 
 * interface file instead. 
 * ----------------------------------------------------------------------------- */

#ifndef PHP_DEFAULT_ARG_VALUES_H
#define PHP_DEFAULT_ARG_VALUES_H

extern zend_module_entry default_arg_values_module_entry;
#define phpext_default_arg_values_ptr &default_arg_values_module_entry

#ifdef PHP_WIN32
# define PHP_DEFAULT_ARG_VALUES_API __declspec(dllexport)
#else
# define PHP_DEFAULT_ARG_VALUES_API
#endif

#ifdef ZTS
#include "TSRM.h"
#endif

PHP_MINIT_FUNCTION(default_arg_values);
PHP_MSHUTDOWN_FUNCTION(default_arg_values);
PHP_RINIT_FUNCTION(default_arg_values);
PHP_RSHUTDOWN_FUNCTION(default_arg_values);
PHP_MINFO_FUNCTION(default_arg_values);

ZEND_NAMED_FUNCTION(_wrap_Display_draw1);
ZEND_NAMED_FUNCTION(_wrap_Display_draw2);
ZEND_NAMED_FUNCTION(_wrap_new_Display);
ZEND_NAMED_FUNCTION(_wrap_createPtr);
#endif /* PHP_DEFAULT_ARG_VALUES_H */
