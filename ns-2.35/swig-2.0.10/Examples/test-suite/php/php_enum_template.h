/* ----------------------------------------------------------------------------
 * This file was automatically generated by SWIG (http://www.swig.org).
 * Version 2.0.10
 * 
 * This file is not intended to be easily readable and contains a number of 
 * coding conventions designed to improve portability and efficiency. Do not make
 * changes to this file unless you know what you are doing--modify the SWIG 
 * interface file instead. 
 * ----------------------------------------------------------------------------- */

#ifndef PHP_ENUM_TEMPLATE_H
#define PHP_ENUM_TEMPLATE_H

extern zend_module_entry enum_template_module_entry;
#define phpext_enum_template_ptr &enum_template_module_entry

#ifdef PHP_WIN32
# define PHP_ENUM_TEMPLATE_API __declspec(dllexport)
#else
# define PHP_ENUM_TEMPLATE_API
#endif

#ifdef ZTS
#include "TSRM.h"
#endif

PHP_MINIT_FUNCTION(enum_template);
PHP_MSHUTDOWN_FUNCTION(enum_template);
PHP_RINIT_FUNCTION(enum_template);
PHP_RSHUTDOWN_FUNCTION(enum_template);
PHP_MINFO_FUNCTION(enum_template);

ZEND_NAMED_FUNCTION(_wrap_TakeETest);
ZEND_NAMED_FUNCTION(_wrap_MakeETest);
ZEND_NAMED_FUNCTION(_wrap_new_CTempl_ETest);
#endif /* PHP_ENUM_TEMPLATE_H */
