/* ----------------------------------------------------------------------------
 * This file was automatically generated by SWIG (http://www.swig.org).
 * Version 2.0.10
 * 
 * This file is not intended to be easily readable and contains a number of 
 * coding conventions designed to improve portability and efficiency. Do not make
 * changes to this file unless you know what you are doing--modify the SWIG 
 * interface file instead. 
 * ----------------------------------------------------------------------------- */

#ifndef PHP_SPECIAL_VARIABLE_MACROS_H
#define PHP_SPECIAL_VARIABLE_MACROS_H

extern zend_module_entry special_variable_macros_module_entry;
#define phpext_special_variable_macros_ptr &special_variable_macros_module_entry

#ifdef PHP_WIN32
# define PHP_SPECIAL_VARIABLE_MACROS_API __declspec(dllexport)
#else
# define PHP_SPECIAL_VARIABLE_MACROS_API
#endif

#ifdef ZTS
#include "TSRM.h"
#endif

PHP_MINIT_FUNCTION(special_variable_macros);
PHP_MSHUTDOWN_FUNCTION(special_variable_macros);
PHP_RINIT_FUNCTION(special_variable_macros);
PHP_RSHUTDOWN_FUNCTION(special_variable_macros);
PHP_MINFO_FUNCTION(special_variable_macros);

ZEND_NAMED_FUNCTION(_wrap_new_Name);
ZEND_NAMED_FUNCTION(_wrap_Name_getName);
ZEND_NAMED_FUNCTION(_wrap_Name_getNamePtr);
ZEND_NAMED_FUNCTION(_wrap_new_NameWrap);
ZEND_NAMED_FUNCTION(_wrap_NameWrap_getNamePtr);
ZEND_NAMED_FUNCTION(_wrap_testFred);
ZEND_NAMED_FUNCTION(_wrap_testJack);
ZEND_NAMED_FUNCTION(_wrap_testJill);
ZEND_NAMED_FUNCTION(_wrap_testMary);
ZEND_NAMED_FUNCTION(_wrap_testJames);
ZEND_NAMED_FUNCTION(_wrap_testJim);
ZEND_NAMED_FUNCTION(_wrap_testJohn);
ZEND_NAMED_FUNCTION(_wrap_new_PairIntBool);
ZEND_NAMED_FUNCTION(_wrap_PairIntBool_first_set);
ZEND_NAMED_FUNCTION(_wrap_PairIntBool_first_get);
ZEND_NAMED_FUNCTION(_wrap_PairIntBool_second_set);
ZEND_NAMED_FUNCTION(_wrap_PairIntBool_second_get);
ZEND_NAMED_FUNCTION(_wrap_new_NewName);
ZEND_NAMED_FUNCTION(_wrap_NewName_getStoredName);
#endif /* PHP_SPECIAL_VARIABLE_MACROS_H */