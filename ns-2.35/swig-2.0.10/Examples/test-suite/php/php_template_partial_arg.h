/* ----------------------------------------------------------------------------
 * This file was automatically generated by SWIG (http://www.swig.org).
 * Version 2.0.10
 * 
 * This file is not intended to be easily readable and contains a number of 
 * coding conventions designed to improve portability and efficiency. Do not make
 * changes to this file unless you know what you are doing--modify the SWIG 
 * interface file instead. 
 * ----------------------------------------------------------------------------- */

#ifndef PHP_TEMPLATE_PARTIAL_ARG_H
#define PHP_TEMPLATE_PARTIAL_ARG_H

extern zend_module_entry template_partial_arg_module_entry;
#define phpext_template_partial_arg_ptr &template_partial_arg_module_entry

#ifdef PHP_WIN32
# define PHP_TEMPLATE_PARTIAL_ARG_API __declspec(dllexport)
#else
# define PHP_TEMPLATE_PARTIAL_ARG_API
#endif

#ifdef ZTS
#include "TSRM.h"
#endif

PHP_MINIT_FUNCTION(template_partial_arg);
PHP_MSHUTDOWN_FUNCTION(template_partial_arg);
PHP_RINIT_FUNCTION(template_partial_arg);
PHP_RSHUTDOWN_FUNCTION(template_partial_arg);
PHP_MINFO_FUNCTION(template_partial_arg);

ZEND_NAMED_FUNCTION(_wrap_new_Bar);
ZEND_NAMED_FUNCTION(_wrap_Foo1_bar);
ZEND_NAMED_FUNCTION(_wrap_Foo1_baz);
ZEND_NAMED_FUNCTION(_wrap_new_Foo1);
ZEND_NAMED_FUNCTION(_wrap_Foo2_bar);
ZEND_NAMED_FUNCTION(_wrap_Foo2_baz);
ZEND_NAMED_FUNCTION(_wrap_new_Foo2);
#endif /* PHP_TEMPLATE_PARTIAL_ARG_H */