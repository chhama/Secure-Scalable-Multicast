/* ----------------------------------------------------------------------------
 * This file was automatically generated by SWIG (http://www.swig.org).
 * Version 2.0.10
 * 
 * This file is not intended to be easily readable and contains a number of 
 * coding conventions designed to improve portability and efficiency. Do not make
 * changes to this file unless you know what you are doing--modify the SWIG 
 * interface file instead. 
 * ----------------------------------------------------------------------------- */

#ifndef PHP_RENAME_SIMPLE_H
#define PHP_RENAME_SIMPLE_H

extern zend_module_entry rename_simple_module_entry;
#define phpext_rename_simple_ptr &rename_simple_module_entry

#ifdef PHP_WIN32
# define PHP_RENAME_SIMPLE_API __declspec(dllexport)
#else
# define PHP_RENAME_SIMPLE_API
#endif

#ifdef ZTS
#include "TSRM.h"
#endif

PHP_MINIT_FUNCTION(rename_simple);
PHP_MSHUTDOWN_FUNCTION(rename_simple);
PHP_RINIT_FUNCTION(rename_simple);
PHP_RSHUTDOWN_FUNCTION(rename_simple);
PHP_MINFO_FUNCTION(rename_simple);

ZEND_NAMED_FUNCTION(_wrap_new_NewStruct);
ZEND_NAMED_FUNCTION(_wrap_NewStruct_NewInstanceVariable_set);
ZEND_NAMED_FUNCTION(_wrap_NewStruct_NewInstanceVariable_get);
ZEND_NAMED_FUNCTION(_wrap_NewStruct_NewInstanceMethod);
ZEND_NAMED_FUNCTION(_wrap_NewStruct_NewStaticVariable_set);
ZEND_NAMED_FUNCTION(_wrap_NewStruct_NewStaticVariable_get);
ZEND_NAMED_FUNCTION(_wrap_NewStruct_NewStaticMethod);
ZEND_NAMED_FUNCTION(_wrap_NewFunction);
ZEND_NAMED_FUNCTION(_wrap_NewGlobalVariable_set);
ZEND_NAMED_FUNCTION(_wrap_NewGlobalVariable_get);
#endif /* PHP_RENAME_SIMPLE_H */
