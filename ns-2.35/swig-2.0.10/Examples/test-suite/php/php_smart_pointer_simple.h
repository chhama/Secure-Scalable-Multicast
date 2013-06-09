/* ----------------------------------------------------------------------------
 * This file was automatically generated by SWIG (http://www.swig.org).
 * Version 2.0.10
 * 
 * This file is not intended to be easily readable and contains a number of 
 * coding conventions designed to improve portability and efficiency. Do not make
 * changes to this file unless you know what you are doing--modify the SWIG 
 * interface file instead. 
 * ----------------------------------------------------------------------------- */

#ifndef PHP_SMART_POINTER_SIMPLE_H
#define PHP_SMART_POINTER_SIMPLE_H

extern zend_module_entry smart_pointer_simple_module_entry;
#define phpext_smart_pointer_simple_ptr &smart_pointer_simple_module_entry

#ifdef PHP_WIN32
# define PHP_SMART_POINTER_SIMPLE_API __declspec(dllexport)
#else
# define PHP_SMART_POINTER_SIMPLE_API
#endif

#ifdef ZTS
#include "TSRM.h"
#endif

PHP_MINIT_FUNCTION(smart_pointer_simple);
PHP_MSHUTDOWN_FUNCTION(smart_pointer_simple);
PHP_RINIT_FUNCTION(smart_pointer_simple);
PHP_RSHUTDOWN_FUNCTION(smart_pointer_simple);
PHP_MINFO_FUNCTION(smart_pointer_simple);

ZEND_NAMED_FUNCTION(_wrap_Foo_x_set);
ZEND_NAMED_FUNCTION(_wrap_Foo_x_get);
ZEND_NAMED_FUNCTION(_wrap_Foo_getx);
ZEND_NAMED_FUNCTION(_wrap_new_Foo);
ZEND_NAMED_FUNCTION(_wrap_new_Bar);
ZEND_NAMED_FUNCTION(_wrap_Bar___deref__);
ZEND_NAMED_FUNCTION(_wrap_Bar_x_set);
ZEND_NAMED_FUNCTION(_wrap_Bar_x_get);
ZEND_NAMED_FUNCTION(_wrap_Bar_getx);
#endif /* PHP_SMART_POINTER_SIMPLE_H */
