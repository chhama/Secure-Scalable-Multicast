/* ----------------------------------------------------------------------------
 * This file was automatically generated by SWIG (http://www.swig.org).
 * Version 2.0.10
 * 
 * This file is not intended to be easily readable and contains a number of 
 * coding conventions designed to improve portability and efficiency. Do not make
 * changes to this file unless you know what you are doing--modify the SWIG 
 * interface file instead. 
 * ----------------------------------------------------------------------------- */

#ifndef PHP_DERIVED_BYVALUE_H
#define PHP_DERIVED_BYVALUE_H

extern zend_module_entry derived_byvalue_module_entry;
#define phpext_derived_byvalue_ptr &derived_byvalue_module_entry

#ifdef PHP_WIN32
# define PHP_DERIVED_BYVALUE_API __declspec(dllexport)
#else
# define PHP_DERIVED_BYVALUE_API
#endif

#ifdef ZTS
#include "TSRM.h"
#endif

PHP_MINIT_FUNCTION(derived_byvalue);
PHP_MSHUTDOWN_FUNCTION(derived_byvalue);
PHP_RINIT_FUNCTION(derived_byvalue);
PHP_RSHUTDOWN_FUNCTION(derived_byvalue);
PHP_MINFO_FUNCTION(derived_byvalue);

ZEND_NAMED_FUNCTION(_wrap_Foo_x_set);
ZEND_NAMED_FUNCTION(_wrap_Foo_x_get);
ZEND_NAMED_FUNCTION(_wrap_Foo_rmethod);
ZEND_NAMED_FUNCTION(_wrap_Foo_method);
ZEND_NAMED_FUNCTION(_wrap_new_Foo);
ZEND_NAMED_FUNCTION(_wrap_Bar_a_set);
ZEND_NAMED_FUNCTION(_wrap_Bar_a_get);
ZEND_NAMED_FUNCTION(_wrap_Bar_b_set);
ZEND_NAMED_FUNCTION(_wrap_Bar_b_get);
ZEND_NAMED_FUNCTION(_wrap_new_Bar);
ZEND_NAMED_FUNCTION(_wrap_new_DerFoo);
#endif /* PHP_DERIVED_BYVALUE_H */