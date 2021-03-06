/* ----------------------------------------------------------------------------
 * This file was automatically generated by SWIG (http://www.swig.org).
 * Version 2.0.10
 * 
 * This file is not intended to be easily readable and contains a number of 
 * coding conventions designed to improve portability and efficiency. Do not make
 * changes to this file unless you know what you are doing--modify the SWIG 
 * interface file instead. 
 * ----------------------------------------------------------------------------- */

#ifndef PHP_EXTEND_CONSTRUCTOR_DESTRUCTOR_H
#define PHP_EXTEND_CONSTRUCTOR_DESTRUCTOR_H

extern zend_module_entry extend_constructor_destructor_module_entry;
#define phpext_extend_constructor_destructor_ptr &extend_constructor_destructor_module_entry

#ifdef PHP_WIN32
# define PHP_EXTEND_CONSTRUCTOR_DESTRUCTOR_API __declspec(dllexport)
#else
# define PHP_EXTEND_CONSTRUCTOR_DESTRUCTOR_API
#endif

#ifdef ZTS
#include "TSRM.h"
#endif

PHP_MINIT_FUNCTION(extend_constructor_destructor);
PHP_MSHUTDOWN_FUNCTION(extend_constructor_destructor);
PHP_RINIT_FUNCTION(extend_constructor_destructor);
PHP_RSHUTDOWN_FUNCTION(extend_constructor_destructor);
PHP_MINFO_FUNCTION(extend_constructor_destructor);

ZEND_NAMED_FUNCTION(_wrap_globalVar_set);
ZEND_NAMED_FUNCTION(_wrap_globalVar_get);
ZEND_NAMED_FUNCTION(_wrap_AStruct_ivar_set);
ZEND_NAMED_FUNCTION(_wrap_AStruct_ivar_get);
ZEND_NAMED_FUNCTION(_wrap_new_AStruct);
ZEND_NAMED_FUNCTION(_wrap_BStruct_ivar_set);
ZEND_NAMED_FUNCTION(_wrap_BStruct_ivar_get);
ZEND_NAMED_FUNCTION(_wrap_new_BStruct);
ZEND_NAMED_FUNCTION(_wrap_CStruct_ivar_set);
ZEND_NAMED_FUNCTION(_wrap_CStruct_ivar_get);
ZEND_NAMED_FUNCTION(_wrap_new_CStruct);
ZEND_NAMED_FUNCTION(_wrap_DStruct_ivar_set);
ZEND_NAMED_FUNCTION(_wrap_DStruct_ivar_get);
ZEND_NAMED_FUNCTION(_wrap_new_DStruct);
ZEND_NAMED_FUNCTION(_wrap_EStruct_ivar_set);
ZEND_NAMED_FUNCTION(_wrap_EStruct_ivar_get);
ZEND_NAMED_FUNCTION(_wrap_new_EStruct);
ZEND_NAMED_FUNCTION(_wrap_FStruct_ivar_set);
ZEND_NAMED_FUNCTION(_wrap_FStruct_ivar_get);
ZEND_NAMED_FUNCTION(_wrap_new_FStruct);
ZEND_NAMED_FUNCTION(_wrap_GStruct_ivar_set);
ZEND_NAMED_FUNCTION(_wrap_GStruct_ivar_get);
ZEND_NAMED_FUNCTION(_wrap_new_GStruct);
#endif /* PHP_EXTEND_CONSTRUCTOR_DESTRUCTOR_H */
