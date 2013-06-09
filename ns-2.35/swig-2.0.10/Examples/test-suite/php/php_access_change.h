/* ----------------------------------------------------------------------------
 * This file was automatically generated by SWIG (http://www.swig.org).
 * Version 2.0.10
 * 
 * This file is not intended to be easily readable and contains a number of 
 * coding conventions designed to improve portability and efficiency. Do not make
 * changes to this file unless you know what you are doing--modify the SWIG 
 * interface file instead. 
 * ----------------------------------------------------------------------------- */

#ifndef PHP_ACCESS_CHANGE_H
#define PHP_ACCESS_CHANGE_H

extern zend_module_entry access_change_module_entry;
#define phpext_access_change_ptr &access_change_module_entry

#ifdef PHP_WIN32
# define PHP_ACCESS_CHANGE_API __declspec(dllexport)
#else
# define PHP_ACCESS_CHANGE_API
#endif

#ifdef ZTS
#include "TSRM.h"
#endif

PHP_MINIT_FUNCTION(access_change);
PHP_MSHUTDOWN_FUNCTION(access_change);
PHP_RINIT_FUNCTION(access_change);
PHP_RSHUTDOWN_FUNCTION(access_change);
PHP_MINFO_FUNCTION(access_change);

ZEND_NAMED_FUNCTION(_wrap_BaseInt_PublicProtectedPublic1);
ZEND_NAMED_FUNCTION(_wrap_BaseInt_PublicProtectedPublic2);
ZEND_NAMED_FUNCTION(_wrap_BaseInt_PublicProtectedPublic3);
ZEND_NAMED_FUNCTION(_wrap_BaseInt_PublicProtectedPublic4);
ZEND_NAMED_FUNCTION(_wrap_new_BaseInt);
ZEND_NAMED_FUNCTION(_wrap_DerivedInt_WasProtected1);
ZEND_NAMED_FUNCTION(_wrap_DerivedInt_WasProtected2);
ZEND_NAMED_FUNCTION(_wrap_DerivedInt_WasProtected3);
ZEND_NAMED_FUNCTION(_wrap_DerivedInt_WasProtected4);
ZEND_NAMED_FUNCTION(_wrap_new_DerivedInt);
ZEND_NAMED_FUNCTION(_wrap_BottomInt_WasProtected1);
ZEND_NAMED_FUNCTION(_wrap_BottomInt_WasProtected2);
ZEND_NAMED_FUNCTION(_wrap_BottomInt_WasProtected3);
ZEND_NAMED_FUNCTION(_wrap_BottomInt_WasProtected4);
ZEND_NAMED_FUNCTION(_wrap_BottomInt_PublicProtectedPublic1);
ZEND_NAMED_FUNCTION(_wrap_BottomInt_PublicProtectedPublic2);
ZEND_NAMED_FUNCTION(_wrap_BottomInt_PublicProtectedPublic3);
ZEND_NAMED_FUNCTION(_wrap_BottomInt_PublicProtectedPublic4);
ZEND_NAMED_FUNCTION(_wrap_new_BottomInt);
#endif /* PHP_ACCESS_CHANGE_H */
