/* ----------------------------------------------------------------------------
 * This file was automatically generated by SWIG (http://www.swig.org).
 * Version 2.0.10
 * 
 * This file is not intended to be easily readable and contains a number of 
 * coding conventions designed to improve portability and efficiency. Do not make
 * changes to this file unless you know what you are doing--modify the SWIG 
 * interface file instead. 
 * ----------------------------------------------------------------------------- */

#ifndef PHP_POINTER_REFERENCE_H
#define PHP_POINTER_REFERENCE_H

extern zend_module_entry pointer_reference_module_entry;
#define phpext_pointer_reference_ptr &pointer_reference_module_entry

#ifdef PHP_WIN32
# define PHP_POINTER_REFERENCE_API __declspec(dllexport)
#else
# define PHP_POINTER_REFERENCE_API
#endif

#ifdef ZTS
#include "TSRM.h"
#endif

PHP_MINIT_FUNCTION(pointer_reference);
PHP_MSHUTDOWN_FUNCTION(pointer_reference);
PHP_RINIT_FUNCTION(pointer_reference);
PHP_RSHUTDOWN_FUNCTION(pointer_reference);
PHP_MINFO_FUNCTION(pointer_reference);

ZEND_NAMED_FUNCTION(_wrap_foo);
ZEND_NAMED_FUNCTION(_wrap_Struct_value_set);
ZEND_NAMED_FUNCTION(_wrap_Struct_value_get);
ZEND_NAMED_FUNCTION(_wrap_new_Struct);
ZEND_NAMED_FUNCTION(_wrap_Struct_instance_set);
ZEND_NAMED_FUNCTION(_wrap_Struct_instance_get);
ZEND_NAMED_FUNCTION(_wrap_Struct_pInstance_set);
ZEND_NAMED_FUNCTION(_wrap_Struct_pInstance_get);
ZEND_NAMED_FUNCTION(_wrap_set);
ZEND_NAMED_FUNCTION(_wrap_get);
ZEND_NAMED_FUNCTION(_wrap_overloading);
#endif /* PHP_POINTER_REFERENCE_H */