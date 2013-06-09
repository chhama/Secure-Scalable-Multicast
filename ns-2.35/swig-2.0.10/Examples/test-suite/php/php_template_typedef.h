/* ----------------------------------------------------------------------------
 * This file was automatically generated by SWIG (http://www.swig.org).
 * Version 2.0.10
 * 
 * This file is not intended to be easily readable and contains a number of 
 * coding conventions designed to improve portability and efficiency. Do not make
 * changes to this file unless you know what you are doing--modify the SWIG 
 * interface file instead. 
 * ----------------------------------------------------------------------------- */

#ifndef PHP_TEMPLATE_TYPEDEF_H
#define PHP_TEMPLATE_TYPEDEF_H

extern zend_module_entry template_typedef_module_entry;
#define phpext_template_typedef_ptr &template_typedef_module_entry

#ifdef PHP_WIN32
# define PHP_TEMPLATE_TYPEDEF_API __declspec(dllexport)
#else
# define PHP_TEMPLATE_TYPEDEF_API
#endif

#ifdef ZTS
#include "TSRM.h"
#endif

PHP_MINIT_FUNCTION(template_typedef);
PHP_MSHUTDOWN_FUNCTION(template_typedef);
PHP_RINIT_FUNCTION(template_typedef);
PHP_RSHUTDOWN_FUNCTION(template_typedef);
PHP_MINFO_FUNCTION(template_typedef);

ZEND_NAMED_FUNCTION(_wrap_new_UnaryFunctionBase);
ZEND_NAMED_FUNCTION(_wrap_new_UnaryFunction_float_float);
ZEND_NAMED_FUNCTION(_wrap_new_ArithUnaryFunction_float_float);
ZEND_NAMED_FUNCTION(_wrap_make_Identity_float);
ZEND_NAMED_FUNCTION(_wrap_new_UnaryFunction_reald_reald);
ZEND_NAMED_FUNCTION(_wrap_new_ArithUnaryFunction_reald_reald);
ZEND_NAMED_FUNCTION(_wrap_make_Identity_reald);
ZEND_NAMED_FUNCTION(_wrap_new_UnaryFunction_float_reald);
ZEND_NAMED_FUNCTION(_wrap_new_ArithUnaryFunction_float_reald);
ZEND_NAMED_FUNCTION(_wrap_make_Multiplies_float_float_reald_reald);
ZEND_NAMED_FUNCTION(_wrap_make_Multiplies_float_float_float_float);
ZEND_NAMED_FUNCTION(_wrap_make_Multiplies_reald_reald_reald_reald);
#endif /* PHP_TEMPLATE_TYPEDEF_H */
