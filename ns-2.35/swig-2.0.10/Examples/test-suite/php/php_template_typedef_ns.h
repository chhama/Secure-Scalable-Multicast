/* ----------------------------------------------------------------------------
 * This file was automatically generated by SWIG (http://www.swig.org).
 * Version 2.0.10
 * 
 * This file is not intended to be easily readable and contains a number of 
 * coding conventions designed to improve portability and efficiency. Do not make
 * changes to this file unless you know what you are doing--modify the SWIG 
 * interface file instead. 
 * ----------------------------------------------------------------------------- */

#ifndef PHP_TEMPLATE_TYPEDEF_NS_H
#define PHP_TEMPLATE_TYPEDEF_NS_H

extern zend_module_entry template_typedef_ns_module_entry;
#define phpext_template_typedef_ns_ptr &template_typedef_ns_module_entry

#ifdef PHP_WIN32
# define PHP_TEMPLATE_TYPEDEF_NS_API __declspec(dllexport)
#else
# define PHP_TEMPLATE_TYPEDEF_NS_API
#endif

#ifdef ZTS
#include "TSRM.h"
#endif

PHP_MINIT_FUNCTION(template_typedef_ns);
PHP_MSHUTDOWN_FUNCTION(template_typedef_ns);
PHP_RINIT_FUNCTION(template_typedef_ns);
PHP_RSHUTDOWN_FUNCTION(template_typedef_ns);
PHP_MINFO_FUNCTION(template_typedef_ns);

ZEND_NAMED_FUNCTION(_wrap_AlphaInt_x_set);
ZEND_NAMED_FUNCTION(_wrap_AlphaInt_x_get);
ZEND_NAMED_FUNCTION(_wrap_new_AlphaInt);
#endif /* PHP_TEMPLATE_TYPEDEF_NS_H */
