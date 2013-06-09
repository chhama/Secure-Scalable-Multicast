/* ----------------------------------------------------------------------------
 * This file was automatically generated by SWIG (http://www.swig.org).
 * Version 2.0.10
 * 
 * This file is not intended to be easily readable and contains a number of 
 * coding conventions designed to improve portability and efficiency. Do not make
 * changes to this file unless you know what you are doing--modify the SWIG 
 * interface file instead. 
 * ----------------------------------------------------------------------------- */

#ifndef PHP_TEMPLATE_DEFAULT_CLASS_PARMS_TYPEDEF_H
#define PHP_TEMPLATE_DEFAULT_CLASS_PARMS_TYPEDEF_H

extern zend_module_entry template_default_class_parms_typedef_module_entry;
#define phpext_template_default_class_parms_typedef_ptr &template_default_class_parms_typedef_module_entry

#ifdef PHP_WIN32
# define PHP_TEMPLATE_DEFAULT_CLASS_PARMS_TYPEDEF_API __declspec(dllexport)
#else
# define PHP_TEMPLATE_DEFAULT_CLASS_PARMS_TYPEDEF_API
#endif

#ifdef ZTS
#include "TSRM.h"
#endif

PHP_MINIT_FUNCTION(template_default_class_parms_typedef);
PHP_MSHUTDOWN_FUNCTION(template_default_class_parms_typedef);
PHP_RINIT_FUNCTION(template_default_class_parms_typedef);
PHP_RSHUTDOWN_FUNCTION(template_default_class_parms_typedef);
PHP_MINFO_FUNCTION(template_default_class_parms_typedef);

ZEND_NAMED_FUNCTION(_wrap_new_SomeType);
ZEND_NAMED_FUNCTION(_wrap_new_AnotherType);
ZEND_NAMED_FUNCTION(_wrap_DefaultBar_CType_set);
ZEND_NAMED_FUNCTION(_wrap_DefaultBar_CType_get);
ZEND_NAMED_FUNCTION(_wrap_DefaultBar_DType_set);
ZEND_NAMED_FUNCTION(_wrap_DefaultBar_DType_get);
ZEND_NAMED_FUNCTION(_wrap_DefaultBar_EType_set);
ZEND_NAMED_FUNCTION(_wrap_DefaultBar_EType_get);
ZEND_NAMED_FUNCTION(_wrap_DefaultBar_method);
ZEND_NAMED_FUNCTION(_wrap_DefaultBar_method_1);
ZEND_NAMED_FUNCTION(_wrap_DefaultBar_method_2);
ZEND_NAMED_FUNCTION(_wrap_new_DefaultBar);
ZEND_NAMED_FUNCTION(_wrap_DefaultBar_method_3);
ZEND_NAMED_FUNCTION(_wrap_DefaultFoo_TType_set);
ZEND_NAMED_FUNCTION(_wrap_DefaultFoo_TType_get);
ZEND_NAMED_FUNCTION(_wrap_DefaultFoo_method);
ZEND_NAMED_FUNCTION(_wrap_DefaultFoo_method_A);
ZEND_NAMED_FUNCTION(_wrap_DefaultFoo_method_B);
ZEND_NAMED_FUNCTION(_wrap_new_DefaultFoo);
ZEND_NAMED_FUNCTION(_wrap_DefaultFoo_method_C);
ZEND_NAMED_FUNCTION(_wrap_BarAnotherTypeBool_CType_set);
ZEND_NAMED_FUNCTION(_wrap_BarAnotherTypeBool_CType_get);
ZEND_NAMED_FUNCTION(_wrap_BarAnotherTypeBool_DType_set);
ZEND_NAMED_FUNCTION(_wrap_BarAnotherTypeBool_DType_get);
ZEND_NAMED_FUNCTION(_wrap_BarAnotherTypeBool_EType_set);
ZEND_NAMED_FUNCTION(_wrap_BarAnotherTypeBool_EType_get);
ZEND_NAMED_FUNCTION(_wrap_BarAnotherTypeBool_method);
ZEND_NAMED_FUNCTION(_wrap_BarAnotherTypeBool_method_1);
ZEND_NAMED_FUNCTION(_wrap_BarAnotherTypeBool_method_2);
ZEND_NAMED_FUNCTION(_wrap_new_BarAnotherTypeBool);
ZEND_NAMED_FUNCTION(_wrap_BarAnotherTypeBool_method_3);
ZEND_NAMED_FUNCTION(_wrap_FooAnotherType_TType_set);
ZEND_NAMED_FUNCTION(_wrap_FooAnotherType_TType_get);
ZEND_NAMED_FUNCTION(_wrap_FooAnotherType_method);
ZEND_NAMED_FUNCTION(_wrap_FooAnotherType_method_A);
ZEND_NAMED_FUNCTION(_wrap_FooAnotherType_method_B);
ZEND_NAMED_FUNCTION(_wrap_new_FooAnotherType);
ZEND_NAMED_FUNCTION(_wrap_FooAnotherType_method_C);
ZEND_NAMED_FUNCTION(_wrap_UsesBarDouble_use_A);
ZEND_NAMED_FUNCTION(_wrap_UsesBarDouble_use_B);
ZEND_NAMED_FUNCTION(_wrap_UsesBarDouble_use_C);
ZEND_NAMED_FUNCTION(_wrap_UsesBarDouble_use_D);
ZEND_NAMED_FUNCTION(_wrap_new_UsesBarDouble);
#endif /* PHP_TEMPLATE_DEFAULT_CLASS_PARMS_TYPEDEF_H */