/* ----------------------------------------------------------------------------
 * This file was automatically generated by SWIG (http://www.swig.org).
 * Version 2.0.10
 * 
 * This file is not intended to be easily readable and contains a number of 
 * coding conventions designed to improve portability and efficiency. Do not make
 * changes to this file unless you know what you are doing--modify the SWIG 
 * interface file instead. 
 * ----------------------------------------------------------------------------- */

#ifndef PHP_CONSTANT_EXPR_H
#define PHP_CONSTANT_EXPR_H

extern zend_module_entry constant_expr_module_entry;
#define phpext_constant_expr_ptr &constant_expr_module_entry

#ifdef PHP_WIN32
# define PHP_CONSTANT_EXPR_API __declspec(dllexport)
#else
# define PHP_CONSTANT_EXPR_API
#endif

#ifdef ZTS
#include "TSRM.h"
#endif

PHP_MINIT_FUNCTION(constant_expr);
PHP_MSHUTDOWN_FUNCTION(constant_expr);
PHP_RINIT_FUNCTION(constant_expr);
PHP_RSHUTDOWN_FUNCTION(constant_expr);
PHP_MINFO_FUNCTION(constant_expr);

ZEND_NAMED_FUNCTION(_wrap_X_get);
ZEND_NAMED_FUNCTION(_wrap_d_array_set);
ZEND_NAMED_FUNCTION(_wrap_d_array_get);
#endif /* PHP_CONSTANT_EXPR_H */