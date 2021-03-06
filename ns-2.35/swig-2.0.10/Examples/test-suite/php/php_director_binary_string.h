/* ----------------------------------------------------------------------------
 * This file was automatically generated by SWIG (http://www.swig.org).
 * Version 2.0.10
 * 
 * This file is not intended to be easily readable and contains a number of 
 * coding conventions designed to improve portability and efficiency. Do not make
 * changes to this file unless you know what you are doing--modify the SWIG 
 * interface file instead. 
 * ----------------------------------------------------------------------------- */

#ifndef PHP_DIRECTOR_BINARY_STRING_H
#define PHP_DIRECTOR_BINARY_STRING_H

extern zend_module_entry director_binary_string_module_entry;
#define phpext_director_binary_string_ptr &director_binary_string_module_entry

#ifdef PHP_WIN32
# define PHP_DIRECTOR_BINARY_STRING_API __declspec(dllexport)
#else
# define PHP_DIRECTOR_BINARY_STRING_API
#endif

#ifdef ZTS
#include "TSRM.h"
#endif

PHP_MINIT_FUNCTION(director_binary_string);
PHP_MSHUTDOWN_FUNCTION(director_binary_string);
PHP_RINIT_FUNCTION(director_binary_string);
PHP_RSHUTDOWN_FUNCTION(director_binary_string);
PHP_MINFO_FUNCTION(director_binary_string);

ZEND_NAMED_FUNCTION(_wrap_Callback_run);
ZEND_NAMED_FUNCTION(_wrap_new_Callback);
ZEND_NAMED_FUNCTION(_wrap_new_Caller);
ZEND_NAMED_FUNCTION(_wrap_Caller_delCallback);
ZEND_NAMED_FUNCTION(_wrap_Caller_setCallback);
ZEND_NAMED_FUNCTION(_wrap_Caller_call);
ZEND_NAMED_FUNCTION(_wrap_Caller_call_null);
#endif /* PHP_DIRECTOR_BINARY_STRING_H */
