/* ----------------------------------------------------------------------------
 * This file was automatically generated by SWIG (http://www.swig.org).
 * Version 2.0.10
 * 
 * This file is not intended to be easily readable and contains a number of 
 * coding conventions designed to improve portability and efficiency. Do not make
 * changes to this file unless you know what you are doing--modify the SWIG 
 * interface file instead. 
 * ----------------------------------------------------------------------------- */

#ifndef PHP_TEMPLATE_INHERIT_H
#define PHP_TEMPLATE_INHERIT_H

extern zend_module_entry template_inherit_module_entry;
#define phpext_template_inherit_ptr &template_inherit_module_entry

#ifdef PHP_WIN32
# define PHP_TEMPLATE_INHERIT_API __declspec(dllexport)
#else
# define PHP_TEMPLATE_INHERIT_API
#endif

#ifdef ZTS
#include "TSRM.h"
#endif

PHP_MINIT_FUNCTION(template_inherit);
PHP_MSHUTDOWN_FUNCTION(template_inherit);
PHP_RINIT_FUNCTION(template_inherit);
PHP_RSHUTDOWN_FUNCTION(template_inherit);
PHP_MINFO_FUNCTION(template_inherit);

ZEND_NAMED_FUNCTION(_wrap_FooInt_blah);
ZEND_NAMED_FUNCTION(_wrap_FooInt_foomethod);
ZEND_NAMED_FUNCTION(_wrap_new_FooInt);
ZEND_NAMED_FUNCTION(_wrap_FooDouble_blah);
ZEND_NAMED_FUNCTION(_wrap_FooDouble_foomethod);
ZEND_NAMED_FUNCTION(_wrap_new_FooDouble);
ZEND_NAMED_FUNCTION(_wrap_FooUInt_blah);
ZEND_NAMED_FUNCTION(_wrap_FooUInt_foomethod);
ZEND_NAMED_FUNCTION(_wrap_new_FooUInt);
ZEND_NAMED_FUNCTION(_wrap_BarInt_blah);
ZEND_NAMED_FUNCTION(_wrap_new_BarInt);
ZEND_NAMED_FUNCTION(_wrap_BarDouble_blah);
ZEND_NAMED_FUNCTION(_wrap_new_BarDouble);
ZEND_NAMED_FUNCTION(_wrap_BarUInt_blah);
ZEND_NAMED_FUNCTION(_wrap_new_BarUInt);
ZEND_NAMED_FUNCTION(_wrap_invoke_blah_int);
ZEND_NAMED_FUNCTION(_wrap_invoke_blah_double);
ZEND_NAMED_FUNCTION(_wrap_invoke_blah_uint);
#endif /* PHP_TEMPLATE_INHERIT_H */
