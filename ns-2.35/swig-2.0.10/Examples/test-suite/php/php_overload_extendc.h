/* ----------------------------------------------------------------------------
 * This file was automatically generated by SWIG (http://www.swig.org).
 * Version 2.0.10
 * 
 * This file is not intended to be easily readable and contains a number of 
 * coding conventions designed to improve portability and efficiency. Do not make
 * changes to this file unless you know what you are doing--modify the SWIG 
 * interface file instead. 
 * ----------------------------------------------------------------------------- */

#ifndef PHP_OVERLOAD_EXTENDC_H
#define PHP_OVERLOAD_EXTENDC_H

extern zend_module_entry overload_extendc_module_entry;
#define phpext_overload_extendc_ptr &overload_extendc_module_entry

#ifdef PHP_WIN32
# define PHP_OVERLOAD_EXTENDC_API __declspec(dllexport)
#else
# define PHP_OVERLOAD_EXTENDC_API
#endif

#ifdef ZTS
#include "TSRM.h"
#endif

PHP_MINIT_FUNCTION(overload_extendc);
PHP_MSHUTDOWN_FUNCTION(overload_extendc);
PHP_RINIT_FUNCTION(overload_extendc);
PHP_RSHUTDOWN_FUNCTION(overload_extendc);
PHP_MINFO_FUNCTION(overload_extendc);

ZEND_NAMED_FUNCTION(_wrap_Foo_dummy_set);
ZEND_NAMED_FUNCTION(_wrap_Foo_dummy_get);
ZEND_NAMED_FUNCTION(_wrap_Foo_test);
ZEND_NAMED_FUNCTION(_wrap_new_Foo);
#endif /* PHP_OVERLOAD_EXTENDC_H */
