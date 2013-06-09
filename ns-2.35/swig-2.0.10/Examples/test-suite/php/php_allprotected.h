/* ----------------------------------------------------------------------------
 * This file was automatically generated by SWIG (http://www.swig.org).
 * Version 2.0.10
 * 
 * This file is not intended to be easily readable and contains a number of 
 * coding conventions designed to improve portability and efficiency. Do not make
 * changes to this file unless you know what you are doing--modify the SWIG 
 * interface file instead. 
 * ----------------------------------------------------------------------------- */

#ifndef PHP_ALLPROTECTED_H
#define PHP_ALLPROTECTED_H

extern zend_module_entry allprotected_module_entry;
#define phpext_allprotected_ptr &allprotected_module_entry

#ifdef PHP_WIN32
# define PHP_ALLPROTECTED_API __declspec(dllexport)
#else
# define PHP_ALLPROTECTED_API
#endif

#ifdef ZTS
#include "TSRM.h"
#endif

PHP_MINIT_FUNCTION(allprotected);
PHP_MSHUTDOWN_FUNCTION(allprotected);
PHP_RINIT_FUNCTION(allprotected);
PHP_RSHUTDOWN_FUNCTION(allprotected);
PHP_MINFO_FUNCTION(allprotected);

ZEND_NAMED_FUNCTION(_wrap_new_Klass);
ZEND_NAMED_FUNCTION(_wrap_Klass_getName);
ZEND_NAMED_FUNCTION(_wrap_new_PublicBase);
ZEND_NAMED_FUNCTION(_wrap_PublicBase_virtualMethod);
ZEND_NAMED_FUNCTION(_wrap_PublicBase_instanceMethod);
ZEND_NAMED_FUNCTION(_wrap_PublicBase_instanceOverloaded);
ZEND_NAMED_FUNCTION(_wrap_PublicBase_staticMethod);
ZEND_NAMED_FUNCTION(_wrap_PublicBase_staticOverloaded);
ZEND_NAMED_FUNCTION(_wrap_PublicBase_instanceMemberVariable_set);
ZEND_NAMED_FUNCTION(_wrap_PublicBase_instanceMemberVariable_get);
ZEND_NAMED_FUNCTION(_wrap_PublicBase_staticMemberVariable_set);
ZEND_NAMED_FUNCTION(_wrap_PublicBase_staticMemberVariable_get);
ZEND_NAMED_FUNCTION(_wrap_PublicBase_anEnum_set);
ZEND_NAMED_FUNCTION(_wrap_PublicBase_anEnum_get);
ZEND_NAMED_FUNCTION(_wrap_PublicBase_stringMember_set);
ZEND_NAMED_FUNCTION(_wrap_PublicBase_stringMember_get);
ZEND_NAMED_FUNCTION(_wrap_ProtectedBase_getName);
ZEND_NAMED_FUNCTION(_wrap_new_ProtectedBase);
ZEND_NAMED_FUNCTION(_wrap_ProtectedBase_virtualMethod);
ZEND_NAMED_FUNCTION(_wrap_ProtectedBase_instanceMethod);
ZEND_NAMED_FUNCTION(_wrap_ProtectedBase_instanceOverloaded);
ZEND_NAMED_FUNCTION(_wrap_ProtectedBase_staticMethod);
ZEND_NAMED_FUNCTION(_wrap_ProtectedBase_staticOverloaded);
ZEND_NAMED_FUNCTION(_wrap_ProtectedBase_instanceMemberVariable_set);
ZEND_NAMED_FUNCTION(_wrap_ProtectedBase_instanceMemberVariable_get);
ZEND_NAMED_FUNCTION(_wrap_ProtectedBase_staticMemberVariable_set);
ZEND_NAMED_FUNCTION(_wrap_ProtectedBase_staticMemberVariable_get);
ZEND_NAMED_FUNCTION(_wrap_ProtectedBase_anEnum_set);
ZEND_NAMED_FUNCTION(_wrap_ProtectedBase_anEnum_get);
ZEND_NAMED_FUNCTION(_wrap_ProtectedBase_stringMember_set);
ZEND_NAMED_FUNCTION(_wrap_ProtectedBase_stringMember_get);
#endif /* PHP_ALLPROTECTED_H */