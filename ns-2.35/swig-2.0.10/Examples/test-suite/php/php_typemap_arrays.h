/* ----------------------------------------------------------------------------
 * This file was automatically generated by SWIG (http://www.swig.org).
 * Version 2.0.10
 * 
 * This file is not intended to be easily readable and contains a number of 
 * coding conventions designed to improve portability and efficiency. Do not make
 * changes to this file unless you know what you are doing--modify the SWIG 
 * interface file instead. 
 * ----------------------------------------------------------------------------- */

#ifndef PHP_TYPEMAP_ARRAYS_H
#define PHP_TYPEMAP_ARRAYS_H

extern zend_module_entry typemap_arrays_module_entry;
#define phpext_typemap_arrays_ptr &typemap_arrays_module_entry

#ifdef PHP_WIN32
# define PHP_TYPEMAP_ARRAYS_API __declspec(dllexport)
#else
# define PHP_TYPEMAP_ARRAYS_API
#endif

#ifdef ZTS
#include "TSRM.h"
#endif

PHP_MINIT_FUNCTION(typemap_arrays);
PHP_MSHUTDOWN_FUNCTION(typemap_arrays);
PHP_RINIT_FUNCTION(typemap_arrays);
PHP_RSHUTDOWN_FUNCTION(typemap_arrays);
PHP_MINFO_FUNCTION(typemap_arrays);

ZEND_NAMED_FUNCTION(_wrap_sumA);
#endif /* PHP_TYPEMAP_ARRAYS_H */
