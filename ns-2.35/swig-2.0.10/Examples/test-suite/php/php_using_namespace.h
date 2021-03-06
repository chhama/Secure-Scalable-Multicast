/* ----------------------------------------------------------------------------
 * This file was automatically generated by SWIG (http://www.swig.org).
 * Version 2.0.10
 * 
 * This file is not intended to be easily readable and contains a number of 
 * coding conventions designed to improve portability and efficiency. Do not make
 * changes to this file unless you know what you are doing--modify the SWIG 
 * interface file instead. 
 * ----------------------------------------------------------------------------- */

#ifndef PHP_USING_NAMESPACE_H
#define PHP_USING_NAMESPACE_H

extern zend_module_entry using_namespace_module_entry;
#define phpext_using_namespace_ptr &using_namespace_module_entry

#ifdef PHP_WIN32
# define PHP_USING_NAMESPACE_API __declspec(dllexport)
#else
# define PHP_USING_NAMESPACE_API
#endif

#ifdef ZTS
#include "TSRM.h"
#endif

PHP_MINIT_FUNCTION(using_namespace);
PHP_MSHUTDOWN_FUNCTION(using_namespace);
PHP_RINIT_FUNCTION(using_namespace);
PHP_RSHUTDOWN_FUNCTION(using_namespace);
PHP_MINFO_FUNCTION(using_namespace);

ZEND_NAMED_FUNCTION(_wrap_new_Hello);
ZEND_NAMED_FUNCTION(_wrap_new_hi0);
ZEND_NAMED_FUNCTION(_wrap_Hi_hi0_value1);
ZEND_NAMED_FUNCTION(_wrap_Hi_hi0_value2);
ZEND_NAMED_FUNCTION(_wrap_new_Hi_hi0);
ZEND_NAMED_FUNCTION(_wrap_hi1_value1);
ZEND_NAMED_FUNCTION(_wrap_hi1_value2);
ZEND_NAMED_FUNCTION(_wrap_new_hi1);
ZEND_NAMED_FUNCTION(_wrap_X_d_set);
ZEND_NAMED_FUNCTION(_wrap_X_d_get);
ZEND_NAMED_FUNCTION(_wrap_new_X);
ZEND_NAMED_FUNCTION(_wrap_useSpaceMan);
#endif /* PHP_USING_NAMESPACE_H */
