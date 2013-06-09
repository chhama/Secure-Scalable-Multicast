/* ----------------------------------------------------------------------------
 * This file was automatically generated by SWIG (http://www.swig.org).
 * Version 2.0.10
 * 
 * This file is not intended to be easily readable and contains a number of 
 * coding conventions designed to improve portability and efficiency. Do not make
 * changes to this file unless you know what you are doing--modify the SWIG 
 * interface file instead. 
 * ----------------------------------------------------------------------------- */

#ifndef PHP_TEMPLATE_TYPEDEF_CPLX2_H
#define PHP_TEMPLATE_TYPEDEF_CPLX2_H

extern zend_module_entry template_typedef_cplx2_module_entry;
#define phpext_template_typedef_cplx2_ptr &template_typedef_cplx2_module_entry

#ifdef PHP_WIN32
# define PHP_TEMPLATE_TYPEDEF_CPLX2_API __declspec(dllexport)
#else
# define PHP_TEMPLATE_TYPEDEF_CPLX2_API
#endif

#ifdef ZTS
#include "TSRM.h"
#endif

PHP_MINIT_FUNCTION(template_typedef_cplx2);
PHP_MSHUTDOWN_FUNCTION(template_typedef_cplx2);
PHP_RINIT_FUNCTION(template_typedef_cplx2);
PHP_RSHUTDOWN_FUNCTION(template_typedef_cplx2);
PHP_MINFO_FUNCTION(template_typedef_cplx2);

ZEND_NAMED_FUNCTION(_wrap_UnaryFunctionBase_get_base_value);
ZEND_NAMED_FUNCTION(_wrap_new_UnaryFunctionBase);
ZEND_NAMED_FUNCTION(_wrap_UnaryFunction_double_double_get_value);
ZEND_NAMED_FUNCTION(_wrap_new_UnaryFunction_double_double);
ZEND_NAMED_FUNCTION(_wrap_ArithUnaryFunction_double_double_get_arith_value);
ZEND_NAMED_FUNCTION(_wrap_new_ArithUnaryFunction_double_double);
ZEND_NAMED_FUNCTION(_wrap_make_Identity_double);
ZEND_NAMED_FUNCTION(_wrap_UnaryFunction_complex_complex_get_value);
ZEND_NAMED_FUNCTION(_wrap_new_UnaryFunction_complex_complex);
ZEND_NAMED_FUNCTION(_wrap_ArithUnaryFunction_complex_complex_get_arith_value);
ZEND_NAMED_FUNCTION(_wrap_new_ArithUnaryFunction_complex_complex);
ZEND_NAMED_FUNCTION(_wrap_make_Identity_complex);
ZEND_NAMED_FUNCTION(_wrap_UnaryFunction_double_complex_get_value);
ZEND_NAMED_FUNCTION(_wrap_new_UnaryFunction_double_complex);
ZEND_NAMED_FUNCTION(_wrap_ArithUnaryFunction_double_complex_get_arith_value);
ZEND_NAMED_FUNCTION(_wrap_new_ArithUnaryFunction_double_complex);
ZEND_NAMED_FUNCTION(_wrap_make_Multiplies_double_double_complex_complex);
ZEND_NAMED_FUNCTION(_wrap_make_Multiplies_double_double_double_double);
ZEND_NAMED_FUNCTION(_wrap_make_Multiplies_complex_complex_complex_complex);
ZEND_NAMED_FUNCTION(_wrap_make_Multiplies_complex_complex_double_double);
#endif /* PHP_TEMPLATE_TYPEDEF_CPLX2_H */
