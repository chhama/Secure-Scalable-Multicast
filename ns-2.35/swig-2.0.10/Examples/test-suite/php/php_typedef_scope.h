/* ----------------------------------------------------------------------------
 * This file was automatically generated by SWIG (http://www.swig.org).
 * Version 2.0.10
 * 
 * This file is not intended to be easily readable and contains a number of 
 * coding conventions designed to improve portability and efficiency. Do not make
 * changes to this file unless you know what you are doing--modify the SWIG 
 * interface file instead. 
 * ----------------------------------------------------------------------------- */

#ifndef PHP_TYPEDEF_SCOPE_H
#define PHP_TYPEDEF_SCOPE_H

extern zend_module_entry typedef_scope_module_entry;
#define phpext_typedef_scope_ptr &typedef_scope_module_entry

#ifdef PHP_WIN32
# define PHP_TYPEDEF_SCOPE_API __declspec(dllexport)
#else
# define PHP_TYPEDEF_SCOPE_API
#endif

#ifdef ZTS
#include "TSRM.h"
#endif

PHP_MINIT_FUNCTION(typedef_scope);
PHP_MSHUTDOWN_FUNCTION(typedef_scope);
PHP_RINIT_FUNCTION(typedef_scope);
PHP_RSHUTDOWN_FUNCTION(typedef_scope);
PHP_MINFO_FUNCTION(typedef_scope);

ZEND_NAMED_FUNCTION(_wrap_Bar_test1);
ZEND_NAMED_FUNCTION(_wrap_Bar_test2);
ZEND_NAMED_FUNCTION(_wrap_new_Bar);
ZEND_NAMED_FUNCTION(_wrap_new_Foo);
ZEND_NAMED_FUNCTION(_wrap_new_CBaz);
#endif /* PHP_TYPEDEF_SCOPE_H */
