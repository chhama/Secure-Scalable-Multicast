/* ----------------------------------------------------------------------------
 * This file was automatically generated by SWIG (http://www.swig.org).
 * Version 2.0.10
 * 
 * This file is not intended to be easily readable and contains a number of 
 * coding conventions designed to improve portability and efficiency. Do not make
 * changes to this file unless you know what you are doing--modify the SWIG 
 * interface file instead. 
 * ----------------------------------------------------------------------------- */

#ifndef PHP_CAST_OPERATOR_H
#define PHP_CAST_OPERATOR_H

extern zend_module_entry cast_operator_module_entry;
#define phpext_cast_operator_ptr &cast_operator_module_entry

#ifdef PHP_WIN32
# define PHP_CAST_OPERATOR_API __declspec(dllexport)
#else
# define PHP_CAST_OPERATOR_API
#endif

#ifdef ZTS
#include "TSRM.h"
#endif

PHP_MINIT_FUNCTION(cast_operator);
PHP_MSHUTDOWN_FUNCTION(cast_operator);
PHP_RINIT_FUNCTION(cast_operator);
PHP_RSHUTDOWN_FUNCTION(cast_operator);
PHP_MINFO_FUNCTION(cast_operator);

ZEND_NAMED_FUNCTION(_wrap_A_tochar);
ZEND_NAMED_FUNCTION(_wrap_new_A);
#endif /* PHP_CAST_OPERATOR_H */
