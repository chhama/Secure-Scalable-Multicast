/* ----------------------------------------------------------------------------
 * This file was automatically generated by SWIG (http://www.swig.org).
 * Version 2.0.10
 * 
 * This file is not intended to be easily readable and contains a number of 
 * coding conventions designed to improve portability and efficiency. Do not make
 * changes to this file unless you know what you are doing--modify the SWIG 
 * interface file instead. 
 * ----------------------------------------------------------------------------- */

#ifndef PHP_SMART_POINTER_TEMPLATE_CONST_OVERLOAD_H
#define PHP_SMART_POINTER_TEMPLATE_CONST_OVERLOAD_H

extern zend_module_entry smart_pointer_template_const_overload_module_entry;
#define phpext_smart_pointer_template_const_overload_ptr &smart_pointer_template_const_overload_module_entry

#ifdef PHP_WIN32
# define PHP_SMART_POINTER_TEMPLATE_CONST_OVERLOAD_API __declspec(dllexport)
#else
# define PHP_SMART_POINTER_TEMPLATE_CONST_OVERLOAD_API
#endif

#ifdef ZTS
#include "TSRM.h"
#endif

PHP_MINIT_FUNCTION(smart_pointer_template_const_overload);
PHP_MSHUTDOWN_FUNCTION(smart_pointer_template_const_overload);
PHP_RINIT_FUNCTION(smart_pointer_template_const_overload);
PHP_RSHUTDOWN_FUNCTION(smart_pointer_template_const_overload);
PHP_MINFO_FUNCTION(smart_pointer_template_const_overload);

ZEND_NAMED_FUNCTION(_wrap_FooImplementation_mingy);
ZEND_NAMED_FUNCTION(_wrap_FooImplementation_constmingy);
ZEND_NAMED_FUNCTION(_wrap_FooImplementation_thingy);
ZEND_NAMED_FUNCTION(_wrap_FooImplementation_svariable_set);
ZEND_NAMED_FUNCTION(_wrap_FooImplementation_svariable_get);
ZEND_NAMED_FUNCTION(_wrap_FooImplementation_constsvariable_get);
ZEND_NAMED_FUNCTION(_wrap_FooImplementation_normalvariable_set);
ZEND_NAMED_FUNCTION(_wrap_FooImplementation_normalvariable_get);
ZEND_NAMED_FUNCTION(_wrap_new_FooImplementation);
ZEND_NAMED_FUNCTION(_wrap_tester);
ZEND_NAMED_FUNCTION(_wrap_new_FooSmartPointer);
ZEND_NAMED_FUNCTION(_wrap_FooSmartPointer___deref__);
ZEND_NAMED_FUNCTION(_wrap_FooSmartPointer_mingy);
ZEND_NAMED_FUNCTION(_wrap_FooSmartPointer_constmingy);
ZEND_NAMED_FUNCTION(_wrap_FooSmartPointer_thingy);
ZEND_NAMED_FUNCTION(_wrap_FooSmartPointer_svariable_set);
ZEND_NAMED_FUNCTION(_wrap_FooSmartPointer_svariable_get);
ZEND_NAMED_FUNCTION(_wrap_FooSmartPointer_constsvariable_get);
ZEND_NAMED_FUNCTION(_wrap_FooSmartPointer_normalvariable_set);
ZEND_NAMED_FUNCTION(_wrap_FooSmartPointer_normalvariable_get);
#endif /* PHP_SMART_POINTER_TEMPLATE_CONST_OVERLOAD_H */