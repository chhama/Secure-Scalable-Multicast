/* ----------------------------------------------------------------------------
 * This file was automatically generated by SWIG (http://www.swig.org).
 * Version 2.0.10
 * 
 * This file is not intended to be easily readable and contains a number of 
 * coding conventions designed to improve portability and efficiency. Do not make
 * changes to this file unless you know what you are doing--modify the SWIG 
 * interface file instead. 
 * ----------------------------------------------------------------------------- */

#ifndef PHP_TEMPLATE_NS_INHERIT_H
#define PHP_TEMPLATE_NS_INHERIT_H

extern zend_module_entry template_ns_inherit_module_entry;
#define phpext_template_ns_inherit_ptr &template_ns_inherit_module_entry

#ifdef PHP_WIN32
# define PHP_TEMPLATE_NS_INHERIT_API __declspec(dllexport)
#else
# define PHP_TEMPLATE_NS_INHERIT_API
#endif

#ifdef ZTS
#include "TSRM.h"
#endif

PHP_MINIT_FUNCTION(template_ns_inherit);
PHP_MSHUTDOWN_FUNCTION(template_ns_inherit);
PHP_RINIT_FUNCTION(template_ns_inherit);
PHP_RSHUTDOWN_FUNCTION(template_ns_inherit);
PHP_MINFO_FUNCTION(template_ns_inherit);

ZEND_NAMED_FUNCTION(_wrap_new_VUnaryFunction_id);
ZEND_NAMED_FUNCTION(_wrap_new_UnaryFunction_id);
#endif /* PHP_TEMPLATE_NS_INHERIT_H */
