/* ----------------------------------------------------------------------------
 * This file was automatically generated by SWIG (http://www.swig.org).
 * Version 2.0.10
 * 
 * This file is not intended to be easily readable and contains a number of 
 * coding conventions designed to improve portability and efficiency. Do not make
 * changes to this file unless you know what you are doing--modify the SWIG 
 * interface file instead. 
 * ----------------------------------------------------------------------------- */

#ifndef PHP_PRIVATE_ASSIGN_H
#define PHP_PRIVATE_ASSIGN_H

extern zend_module_entry private_assign_module_entry;
#define phpext_private_assign_ptr &private_assign_module_entry

#ifdef PHP_WIN32
# define PHP_PRIVATE_ASSIGN_API __declspec(dllexport)
#else
# define PHP_PRIVATE_ASSIGN_API
#endif

#ifdef ZTS
#include "TSRM.h"
#endif

PHP_MINIT_FUNCTION(private_assign);
PHP_MSHUTDOWN_FUNCTION(private_assign);
PHP_RINIT_FUNCTION(private_assign);
PHP_RSHUTDOWN_FUNCTION(private_assign);
PHP_MINFO_FUNCTION(private_assign);

ZEND_NAMED_FUNCTION(_wrap_Foo_bar);
ZEND_NAMED_FUNCTION(_wrap_new_Foo);
ZEND_NAMED_FUNCTION(_wrap_blah);
ZEND_NAMED_FUNCTION(_wrap_new_Bar);
#endif /* PHP_PRIVATE_ASSIGN_H */
