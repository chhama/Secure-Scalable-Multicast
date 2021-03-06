/* ----------------------------------------------------------------------------
 * This file was automatically generated by SWIG (http://www.swig.org).
 * Version 2.0.10
 * 
 * This file is not intended to be easily readable and contains a number of 
 * coding conventions designed to improve portability and efficiency. Do not make
 * changes to this file unless you know what you are doing--modify the SWIG 
 * interface file instead. 
 * ----------------------------------------------------------------------------- */

#ifndef PHP_DIRECTOR_BASIC_H
#define PHP_DIRECTOR_BASIC_H

extern zend_module_entry director_basic_module_entry;
#define phpext_director_basic_ptr &director_basic_module_entry

#ifdef PHP_WIN32
# define PHP_DIRECTOR_BASIC_API __declspec(dllexport)
#else
# define PHP_DIRECTOR_BASIC_API
#endif

#ifdef ZTS
#include "TSRM.h"
#endif

PHP_MINIT_FUNCTION(director_basic);
PHP_MSHUTDOWN_FUNCTION(director_basic);
PHP_RINIT_FUNCTION(director_basic);
PHP_RSHUTDOWN_FUNCTION(director_basic);
PHP_MINFO_FUNCTION(director_basic);

ZEND_NAMED_FUNCTION(_wrap_Foo_ping);
ZEND_NAMED_FUNCTION(_wrap_Foo_pong);
ZEND_NAMED_FUNCTION(_wrap_Foo_get_self);
ZEND_NAMED_FUNCTION(_wrap_new_Foo);
ZEND_NAMED_FUNCTION(_wrap_new_A);
ZEND_NAMED_FUNCTION(_wrap_A_f);
ZEND_NAMED_FUNCTION(_wrap_A_rg);
ZEND_NAMED_FUNCTION(_wrap_new_A1);
ZEND_NAMED_FUNCTION(_wrap_A1_ff);
ZEND_NAMED_FUNCTION(_wrap_Bar_x_set);
ZEND_NAMED_FUNCTION(_wrap_Bar_x_get);
ZEND_NAMED_FUNCTION(_wrap_new_Bar);
ZEND_NAMED_FUNCTION(_wrap_new_MyClass);
ZEND_NAMED_FUNCTION(_wrap_MyClass_method);
ZEND_NAMED_FUNCTION(_wrap_MyClass_vmethod);
ZEND_NAMED_FUNCTION(_wrap_MyClass_pmethod);
ZEND_NAMED_FUNCTION(_wrap_MyClass_cmethod);
ZEND_NAMED_FUNCTION(_wrap_MyClass_get_self);
ZEND_NAMED_FUNCTION(_wrap_MyClass_call_pmethod);
ZEND_NAMED_FUNCTION(_wrap_new_MyClassT_i);
ZEND_NAMED_FUNCTION(_wrap_MyClassT_i_method);
#endif /* PHP_DIRECTOR_BASIC_H */
