/* ----------------------------------------------------------------------------
 * This file was automatically generated by SWIG (http://www.swig.org).
 * Version 2.0.10
 * 
 * This file is not intended to be easily readable and contains a number of 
 * coding conventions designed to improve portability and efficiency. Do not make
 * changes to this file unless you know what you are doing--modify the SWIG 
 * interface file instead. 
 * ----------------------------------------------------------------------------- */

#ifndef PHP_TYPEMAP_ARRAY_QUALIFIERS_H
#define PHP_TYPEMAP_ARRAY_QUALIFIERS_H

extern zend_module_entry typemap_array_qualifiers_module_entry;
#define phpext_typemap_array_qualifiers_ptr &typemap_array_qualifiers_module_entry

#ifdef PHP_WIN32
# define PHP_TYPEMAP_ARRAY_QUALIFIERS_API __declspec(dllexport)
#else
# define PHP_TYPEMAP_ARRAY_QUALIFIERS_API
#endif

#ifdef ZTS
#include "TSRM.h"
#endif

PHP_MINIT_FUNCTION(typemap_array_qualifiers);
PHP_MSHUTDOWN_FUNCTION(typemap_array_qualifiers);
PHP_RINIT_FUNCTION(typemap_array_qualifiers);
PHP_RSHUTDOWN_FUNCTION(typemap_array_qualifiers);
PHP_MINFO_FUNCTION(typemap_array_qualifiers);

ZEND_NAMED_FUNCTION(_wrap_SomeType_a_set);
ZEND_NAMED_FUNCTION(_wrap_SomeType_a_get);
ZEND_NAMED_FUNCTION(_wrap_new_SomeType);
ZEND_NAMED_FUNCTION(_wrap_func1a);
ZEND_NAMED_FUNCTION(_wrap_func1b);
ZEND_NAMED_FUNCTION(_wrap_func2a);
ZEND_NAMED_FUNCTION(_wrap_func2b);
ZEND_NAMED_FUNCTION(_wrap_func2c);
ZEND_NAMED_FUNCTION(_wrap_func3a);
ZEND_NAMED_FUNCTION(_wrap_func4a);
#endif /* PHP_TYPEMAP_ARRAY_QUALIFIERS_H */
