/* ----------------------------------------------------------------------------
 * This file was automatically generated by SWIG (http://www.swig.org).
 * Version 2.0.10
 * 
 * This file is not intended to be easily readable and contains a number of 
 * coding conventions designed to improve portability and efficiency. Do not make
 * changes to this file unless you know what you are doing--modify the SWIG 
 * interface file instead. 
 * ----------------------------------------------------------------------------- */

#ifndef PHP_LI_ATTRIBUTE_H
#define PHP_LI_ATTRIBUTE_H

extern zend_module_entry li_attribute_module_entry;
#define phpext_li_attribute_ptr &li_attribute_module_entry

#ifdef PHP_WIN32
# define PHP_LI_ATTRIBUTE_API __declspec(dllexport)
#else
# define PHP_LI_ATTRIBUTE_API
#endif

#ifdef ZTS
#include "TSRM.h"
#endif

PHP_MINIT_FUNCTION(li_attribute);
PHP_MSHUTDOWN_FUNCTION(li_attribute);
PHP_RINIT_FUNCTION(li_attribute);
PHP_RSHUTDOWN_FUNCTION(li_attribute);
PHP_MINFO_FUNCTION(li_attribute);

ZEND_NAMED_FUNCTION(_wrap_new_A);
ZEND_NAMED_FUNCTION(_wrap_A_a_set);
ZEND_NAMED_FUNCTION(_wrap_A_a_get);
ZEND_NAMED_FUNCTION(_wrap_A_b_set);
ZEND_NAMED_FUNCTION(_wrap_A_b_get);
ZEND_NAMED_FUNCTION(_wrap_A_c_get);
ZEND_NAMED_FUNCTION(_wrap_A_d_set);
ZEND_NAMED_FUNCTION(_wrap_A_d_get);
ZEND_NAMED_FUNCTION(_wrap_new_B);
ZEND_NAMED_FUNCTION(_wrap_B_a_set);
ZEND_NAMED_FUNCTION(_wrap_B_a_get);
ZEND_NAMED_FUNCTION(_wrap_new_Param_i);
ZEND_NAMED_FUNCTION(_wrap_Param_i_value_set);
ZEND_NAMED_FUNCTION(_wrap_Param_i_value_get);
ZEND_NAMED_FUNCTION(_wrap_new_MyFoo);
ZEND_NAMED_FUNCTION(_wrap_MyFoo_x_set);
ZEND_NAMED_FUNCTION(_wrap_MyFoo_x_get);
ZEND_NAMED_FUNCTION(_wrap_MyClass_Foo_set);
ZEND_NAMED_FUNCTION(_wrap_MyClass_Foo_get);
ZEND_NAMED_FUNCTION(_wrap_new_MyClass);
ZEND_NAMED_FUNCTION(_wrap_MyClassVal_ReadWriteFoo_set);
ZEND_NAMED_FUNCTION(_wrap_MyClassVal_ReadWriteFoo_get);
ZEND_NAMED_FUNCTION(_wrap_MyClassVal_ReadOnlyFoo_get);
ZEND_NAMED_FUNCTION(_wrap_new_MyClassVal);
ZEND_NAMED_FUNCTION(_wrap_new_MyStringyClass);
ZEND_NAMED_FUNCTION(_wrap_MyStringyClass_ReadWriteString_set);
ZEND_NAMED_FUNCTION(_wrap_MyStringyClass_ReadWriteString_get);
ZEND_NAMED_FUNCTION(_wrap_MyStringyClass_ReadOnlyString_get);
#endif /* PHP_LI_ATTRIBUTE_H */
