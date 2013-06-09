/* ----------------------------------------------------------------------------
 * This file was automatically generated by SWIG (http://www.swig.org).
 * Version 2.0.10
 * 
 * This file is not intended to be easily readable and contains a number of 
 * coding conventions designed to improve portability and efficiency. Do not make
 * changes to this file unless you know what you are doing--modify the SWIG 
 * interface file instead. 
 * ----------------------------------------------------------------------------- */

#ifndef PHP_NAMESPACE_TYPEMAP_H
#define PHP_NAMESPACE_TYPEMAP_H

extern zend_module_entry namespace_typemap_module_entry;
#define phpext_namespace_typemap_ptr &namespace_typemap_module_entry

#ifdef PHP_WIN32
# define PHP_NAMESPACE_TYPEMAP_API __declspec(dllexport)
#else
# define PHP_NAMESPACE_TYPEMAP_API
#endif

#ifdef ZTS
#include "TSRM.h"
#endif

PHP_MINIT_FUNCTION(namespace_typemap);
PHP_MSHUTDOWN_FUNCTION(namespace_typemap);
PHP_RINIT_FUNCTION(namespace_typemap);
PHP_RSHUTDOWN_FUNCTION(namespace_typemap);
PHP_MINFO_FUNCTION(namespace_typemap);

ZEND_NAMED_FUNCTION(_wrap_stest1);
ZEND_NAMED_FUNCTION(_wrap_ctest1);
ZEND_NAMED_FUNCTION(_wrap_stest2);
ZEND_NAMED_FUNCTION(_wrap_ctest2);
ZEND_NAMED_FUNCTION(_wrap_stest3);
ZEND_NAMED_FUNCTION(_wrap_ctest3);
ZEND_NAMED_FUNCTION(_wrap_stest4);
ZEND_NAMED_FUNCTION(_wrap_ctest4);
ZEND_NAMED_FUNCTION(_wrap_stest5);
ZEND_NAMED_FUNCTION(_wrap_ctest5);
ZEND_NAMED_FUNCTION(_wrap_stest6);
ZEND_NAMED_FUNCTION(_wrap_ctest6);
ZEND_NAMED_FUNCTION(_wrap_stest7);
ZEND_NAMED_FUNCTION(_wrap_ctest7);
ZEND_NAMED_FUNCTION(_wrap_stest8);
ZEND_NAMED_FUNCTION(_wrap_ctest8);
ZEND_NAMED_FUNCTION(_wrap_stest9);
ZEND_NAMED_FUNCTION(_wrap_ctest9);
ZEND_NAMED_FUNCTION(_wrap_stest10);
ZEND_NAMED_FUNCTION(_wrap_ctest10);
ZEND_NAMED_FUNCTION(_wrap_stest11);
ZEND_NAMED_FUNCTION(_wrap_ctest11);
ZEND_NAMED_FUNCTION(_wrap_stest12);
ZEND_NAMED_FUNCTION(_wrap_ctest12);
ZEND_NAMED_FUNCTION(_wrap_ttest1);
#endif /* PHP_NAMESPACE_TYPEMAP_H */
