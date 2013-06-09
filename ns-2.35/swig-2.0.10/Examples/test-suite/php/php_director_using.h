/* ----------------------------------------------------------------------------
 * This file was automatically generated by SWIG (http://www.swig.org).
 * Version 2.0.10
 * 
 * This file is not intended to be easily readable and contains a number of 
 * coding conventions designed to improve portability and efficiency. Do not make
 * changes to this file unless you know what you are doing--modify the SWIG 
 * interface file instead. 
 * ----------------------------------------------------------------------------- */

#ifndef PHP_DIRECTOR_USING_H
#define PHP_DIRECTOR_USING_H

extern zend_module_entry director_using_module_entry;
#define phpext_director_using_ptr &director_using_module_entry

#ifdef PHP_WIN32
# define PHP_DIRECTOR_USING_API __declspec(dllexport)
#else
# define PHP_DIRECTOR_USING_API
#endif

#ifdef ZTS
#include "TSRM.h"
#endif

PHP_MINIT_FUNCTION(director_using);
PHP_MSHUTDOWN_FUNCTION(director_using);
PHP_RINIT_FUNCTION(director_using);
PHP_RSHUTDOWN_FUNCTION(director_using);
PHP_MINFO_FUNCTION(director_using);

ZEND_NAMED_FUNCTION(_wrap_Foo_int_advance);
ZEND_NAMED_FUNCTION(_wrap_Foo_int_do_advance);
ZEND_NAMED_FUNCTION(_wrap_Foo_int_do_step);
ZEND_NAMED_FUNCTION(_wrap_new_Foo_int);
ZEND_NAMED_FUNCTION(_wrap_Bar_step);
ZEND_NAMED_FUNCTION(_wrap_Bar_do_step);
ZEND_NAMED_FUNCTION(_wrap_Bar_do_advance);
ZEND_NAMED_FUNCTION(_wrap_new_Bar);
ZEND_NAMED_FUNCTION(_wrap_FooBar_int_get_value);
ZEND_NAMED_FUNCTION(_wrap_FooBar_int_do_advance);
ZEND_NAMED_FUNCTION(_wrap_new_FooBar_int);
ZEND_NAMED_FUNCTION(_wrap_SomeBase_method1);
ZEND_NAMED_FUNCTION(_wrap_SomeBase_method2);
ZEND_NAMED_FUNCTION(_wrap_new_SomeBase);
ZEND_NAMED_FUNCTION(_wrap_new_PrivateDerived);
#endif /* PHP_DIRECTOR_USING_H */
