/* ----------------------------------------------------------------------------
 * This file was automatically generated by SWIG (http://www.swig.org).
 * Version 2.0.10
 * 
 * This file is not intended to be easily readable and contains a number of 
 * coding conventions designed to improve portability and efficiency. Do not make
 * changes to this file unless you know what you are doing--modify the SWIG 
 * interface file instead. 
 * ----------------------------------------------------------------------------- */

#ifndef PHP_TEMPLATE_NESTED_TYPEMAPS_H
#define PHP_TEMPLATE_NESTED_TYPEMAPS_H

extern zend_module_entry template_nested_typemaps_module_entry;
#define phpext_template_nested_typemaps_ptr &template_nested_typemaps_module_entry

#ifdef PHP_WIN32
# define PHP_TEMPLATE_NESTED_TYPEMAPS_API __declspec(dllexport)
#else
# define PHP_TEMPLATE_NESTED_TYPEMAPS_API
#endif

#ifdef ZTS
#include "TSRM.h"
#endif

PHP_MINIT_FUNCTION(template_nested_typemaps);
PHP_MSHUTDOWN_FUNCTION(template_nested_typemaps);
PHP_RINIT_FUNCTION(template_nested_typemaps);
PHP_RSHUTDOWN_FUNCTION(template_nested_typemaps);
PHP_MINFO_FUNCTION(template_nested_typemaps);

ZEND_NAMED_FUNCTION(_wrap_globalInt1);
ZEND_NAMED_FUNCTION(_wrap_globalShort1);
ZEND_NAMED_FUNCTION(_wrap_globalInt2);
ZEND_NAMED_FUNCTION(_wrap_globalShort2);
ZEND_NAMED_FUNCTION(_wrap_BreezeString_methodInt1);
ZEND_NAMED_FUNCTION(_wrap_BreezeString_methodInt2);
ZEND_NAMED_FUNCTION(_wrap_BreezeString_takeIt);
ZEND_NAMED_FUNCTION(_wrap_BreezeString_methodShort1);
ZEND_NAMED_FUNCTION(_wrap_BreezeString_methodShort2);
ZEND_NAMED_FUNCTION(_wrap_new_BreezeString);
ZEND_NAMED_FUNCTION(_wrap_globalInt3);
ZEND_NAMED_FUNCTION(_wrap_globalShort3);
#endif /* PHP_TEMPLATE_NESTED_TYPEMAPS_H */
