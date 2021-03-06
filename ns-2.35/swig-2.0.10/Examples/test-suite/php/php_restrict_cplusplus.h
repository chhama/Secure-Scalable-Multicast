/* ----------------------------------------------------------------------------
 * This file was automatically generated by SWIG (http://www.swig.org).
 * Version 2.0.10
 * 
 * This file is not intended to be easily readable and contains a number of 
 * coding conventions designed to improve portability and efficiency. Do not make
 * changes to this file unless you know what you are doing--modify the SWIG 
 * interface file instead. 
 * ----------------------------------------------------------------------------- */

#ifndef PHP_RESTRICT_CPLUSPLUS_H
#define PHP_RESTRICT_CPLUSPLUS_H

extern zend_module_entry restrict_cplusplus_module_entry;
#define phpext_restrict_cplusplus_ptr &restrict_cplusplus_module_entry

#ifdef PHP_WIN32
# define PHP_RESTRICT_CPLUSPLUS_API __declspec(dllexport)
#else
# define PHP_RESTRICT_CPLUSPLUS_API
#endif

#ifdef ZTS
#include "TSRM.h"
#endif

PHP_MINIT_FUNCTION(restrict_cplusplus);
PHP_MSHUTDOWN_FUNCTION(restrict_cplusplus);
PHP_RINIT_FUNCTION(restrict_cplusplus);
PHP_RSHUTDOWN_FUNCTION(restrict_cplusplus);
PHP_MINFO_FUNCTION(restrict_cplusplus);

ZEND_NAMED_FUNCTION(_wrap_Foo_restrict_set);
ZEND_NAMED_FUNCTION(_wrap_Foo_restrict_get);
ZEND_NAMED_FUNCTION(_wrap_new_Foo);
#endif /* PHP_RESTRICT_CPLUSPLUS_H */
