/* ----------------------------------------------------------------------------
 * This file was automatically generated by SWIG (http://www.swig.org).
 * Version 2.0.10
 * 
 * This file is not intended to be easily readable and contains a number of 
 * coding conventions designed to improve portability and efficiency. Do not make
 * changes to this file unless you know what you are doing--modify the SWIG 
 * interface file instead. 
 * ----------------------------------------------------------------------------- */

#ifndef PHP_CPP_STATIC_H
#define PHP_CPP_STATIC_H

extern zend_module_entry cpp_static_module_entry;
#define phpext_cpp_static_ptr &cpp_static_module_entry

#ifdef PHP_WIN32
# define PHP_CPP_STATIC_API __declspec(dllexport)
#else
# define PHP_CPP_STATIC_API
#endif

#ifdef ZTS
#include "TSRM.h"
#endif

PHP_MINIT_FUNCTION(cpp_static);
PHP_MSHUTDOWN_FUNCTION(cpp_static);
PHP_RINIT_FUNCTION(cpp_static);
PHP_RSHUTDOWN_FUNCTION(cpp_static);
PHP_MINFO_FUNCTION(cpp_static);

ZEND_NAMED_FUNCTION(_wrap_StaticMemberTest_static_int_set);
ZEND_NAMED_FUNCTION(_wrap_StaticMemberTest_static_int_get);
ZEND_NAMED_FUNCTION(_wrap_new_StaticMemberTest);
ZEND_NAMED_FUNCTION(_wrap_StaticFunctionTest_static_func);
ZEND_NAMED_FUNCTION(_wrap_StaticFunctionTest_static_func_2);
ZEND_NAMED_FUNCTION(_wrap_StaticFunctionTest_static_func_3);
ZEND_NAMED_FUNCTION(_wrap_new_StaticFunctionTest);
#endif /* PHP_CPP_STATIC_H */
