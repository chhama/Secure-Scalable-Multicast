/* ----------------------------------------------------------------------------
 * This file was automatically generated by SWIG (http://www.swig.org).
 * Version 2.0.10
 * 
 * This file is not intended to be easily readable and contains a number of 
 * coding conventions designed to improve portability and efficiency. Do not make
 * changes to this file unless you know what you are doing--modify the SWIG 
 * interface file instead. 
 * ----------------------------------------------------------------------------- */

#ifndef PHP_IMMUTABLE_VALUES_H
#define PHP_IMMUTABLE_VALUES_H

extern zend_module_entry immutable_values_module_entry;
#define phpext_immutable_values_ptr &immutable_values_module_entry

#ifdef PHP_WIN32
# define PHP_IMMUTABLE_VALUES_API __declspec(dllexport)
#else
# define PHP_IMMUTABLE_VALUES_API
#endif

#ifdef ZTS
#include "TSRM.h"
#endif

PHP_MINIT_FUNCTION(immutable_values);
PHP_MSHUTDOWN_FUNCTION(immutable_values);
PHP_RINIT_FUNCTION(immutable_values);
PHP_RSHUTDOWN_FUNCTION(immutable_values);
PHP_MINFO_FUNCTION(immutable_values);

#endif /* PHP_IMMUTABLE_VALUES_H */
