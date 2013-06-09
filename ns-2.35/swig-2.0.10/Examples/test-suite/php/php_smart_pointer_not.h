/* ----------------------------------------------------------------------------
 * This file was automatically generated by SWIG (http://www.swig.org).
 * Version 2.0.10
 * 
 * This file is not intended to be easily readable and contains a number of 
 * coding conventions designed to improve portability and efficiency. Do not make
 * changes to this file unless you know what you are doing--modify the SWIG 
 * interface file instead. 
 * ----------------------------------------------------------------------------- */

#ifndef PHP_SMART_POINTER_NOT_H
#define PHP_SMART_POINTER_NOT_H

extern zend_module_entry smart_pointer_not_module_entry;
#define phpext_smart_pointer_not_ptr &smart_pointer_not_module_entry

#ifdef PHP_WIN32
# define PHP_SMART_POINTER_NOT_API __declspec(dllexport)
#else
# define PHP_SMART_POINTER_NOT_API
#endif

#ifdef ZTS
#include "TSRM.h"
#endif

PHP_MINIT_FUNCTION(smart_pointer_not);
PHP_MSHUTDOWN_FUNCTION(smart_pointer_not);
PHP_RINIT_FUNCTION(smart_pointer_not);
PHP_RSHUTDOWN_FUNCTION(smart_pointer_not);
PHP_MINFO_FUNCTION(smart_pointer_not);

ZEND_NAMED_FUNCTION(_wrap_Foo_x_set);
ZEND_NAMED_FUNCTION(_wrap_Foo_x_get);
ZEND_NAMED_FUNCTION(_wrap_Foo_getx);
ZEND_NAMED_FUNCTION(_wrap_new_Foo);
ZEND_NAMED_FUNCTION(_wrap_new_Bar);
ZEND_NAMED_FUNCTION(_wrap_Bar___deref__);
ZEND_NAMED_FUNCTION(_wrap_new_Spam);
ZEND_NAMED_FUNCTION(_wrap_Spam___deref__);
ZEND_NAMED_FUNCTION(_wrap_new_Grok);
ZEND_NAMED_FUNCTION(_wrap_Grok___deref__);
#endif /* PHP_SMART_POINTER_NOT_H */
