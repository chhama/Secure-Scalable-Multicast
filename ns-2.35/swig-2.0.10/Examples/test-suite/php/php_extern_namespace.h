/* ----------------------------------------------------------------------------
 * This file was automatically generated by SWIG (http://www.swig.org).
 * Version 2.0.10
 * 
 * This file is not intended to be easily readable and contains a number of 
 * coding conventions designed to improve portability and efficiency. Do not make
 * changes to this file unless you know what you are doing--modify the SWIG 
 * interface file instead. 
 * ----------------------------------------------------------------------------- */

#ifndef PHP_EXTERN_NAMESPACE_H
#define PHP_EXTERN_NAMESPACE_H

extern zend_module_entry extern_namespace_module_entry;
#define phpext_extern_namespace_ptr &extern_namespace_module_entry

#ifdef PHP_WIN32
# define PHP_EXTERN_NAMESPACE_API __declspec(dllexport)
#else
# define PHP_EXTERN_NAMESPACE_API
#endif

#ifdef ZTS
#include "TSRM.h"
#endif

PHP_MINIT_FUNCTION(extern_namespace);
PHP_MSHUTDOWN_FUNCTION(extern_namespace);
PHP_RINIT_FUNCTION(extern_namespace);
PHP_RSHUTDOWN_FUNCTION(extern_namespace);
PHP_MINFO_FUNCTION(extern_namespace);

ZEND_NAMED_FUNCTION(_wrap_bar);
ZEND_NAMED_FUNCTION(_wrap_foobar);
#endif /* PHP_EXTERN_NAMESPACE_H */
