/* ----------------------------------------------------------------------------
 * This file was automatically generated by SWIG (http://www.swig.org).
 * Version 2.0.10
 * 
 * This file is not intended to be easily readable and contains a number of 
 * coding conventions designed to improve portability and efficiency. Do not make
 * changes to this file unless you know what you are doing--modify the SWIG 
 * interface file instead. 
 * ----------------------------------------------------------------------------- */

#ifndef PHP_ENUMS_H
#define PHP_ENUMS_H

extern zend_module_entry enums_module_entry;
#define phpext_enums_ptr &enums_module_entry

#ifdef PHP_WIN32
# define PHP_ENUMS_API __declspec(dllexport)
#else
# define PHP_ENUMS_API
#endif

#ifdef ZTS
#include "TSRM.h"
#endif

PHP_MINIT_FUNCTION(enums);
PHP_MSHUTDOWN_FUNCTION(enums);
PHP_RINIT_FUNCTION(enums);
PHP_RSHUTDOWN_FUNCTION(enums);
PHP_MINFO_FUNCTION(enums);

ZEND_NAMED_FUNCTION(_wrap_bar1);
ZEND_NAMED_FUNCTION(_wrap_bar2);
ZEND_NAMED_FUNCTION(_wrap_bar3);
ZEND_NAMED_FUNCTION(_wrap_GlobalInstance_set);
ZEND_NAMED_FUNCTION(_wrap_GlobalInstance_get);
ZEND_NAMED_FUNCTION(_wrap_Foo_e_set);
ZEND_NAMED_FUNCTION(_wrap_Foo_e_get);
ZEND_NAMED_FUNCTION(_wrap_new_Foo);
ZEND_NAMED_FUNCTION(_wrap_iFoo_e_set);
ZEND_NAMED_FUNCTION(_wrap_iFoo_e_get);
ZEND_NAMED_FUNCTION(_wrap_new_iFoo);
ZEND_NAMED_FUNCTION(_wrap_enumInstance_set);
ZEND_NAMED_FUNCTION(_wrap_enumInstance_get);
ZEND_NAMED_FUNCTION(_wrap_Slap_set);
ZEND_NAMED_FUNCTION(_wrap_Slap_get);
ZEND_NAMED_FUNCTION(_wrap_Mine_set);
ZEND_NAMED_FUNCTION(_wrap_Mine_get);
ZEND_NAMED_FUNCTION(_wrap_Thigh_set);
ZEND_NAMED_FUNCTION(_wrap_Thigh_get);
ZEND_NAMED_FUNCTION(_wrap_pThigh_set);
ZEND_NAMED_FUNCTION(_wrap_pThigh_get);
ZEND_NAMED_FUNCTION(_wrap_arrayContainYourself_set);
ZEND_NAMED_FUNCTION(_wrap_arrayContainYourself_get);
#endif /* PHP_ENUMS_H */
