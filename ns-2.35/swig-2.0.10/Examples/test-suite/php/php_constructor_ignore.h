/* ----------------------------------------------------------------------------
 * This file was automatically generated by SWIG (http://www.swig.org).
 * Version 2.0.10
 * 
 * This file is not intended to be easily readable and contains a number of 
 * coding conventions designed to improve portability and efficiency. Do not make
 * changes to this file unless you know what you are doing--modify the SWIG 
 * interface file instead. 
 * ----------------------------------------------------------------------------- */

#ifndef PHP_CONSTRUCTOR_IGNORE_H
#define PHP_CONSTRUCTOR_IGNORE_H

extern zend_module_entry constructor_ignore_module_entry;
#define phpext_constructor_ignore_ptr &constructor_ignore_module_entry

#ifdef PHP_WIN32
# define PHP_CONSTRUCTOR_IGNORE_API __declspec(dllexport)
#else
# define PHP_CONSTRUCTOR_IGNORE_API
#endif

#ifdef ZTS
#include "TSRM.h"
#endif

PHP_MINIT_FUNCTION(constructor_ignore);
PHP_MSHUTDOWN_FUNCTION(constructor_ignore);
PHP_RINIT_FUNCTION(constructor_ignore);
PHP_RSHUTDOWN_FUNCTION(constructor_ignore);
PHP_MINFO_FUNCTION(constructor_ignore);

ZEND_NAMED_FUNCTION(_wrap_new_Delta6);
#endif /* PHP_CONSTRUCTOR_IGNORE_H */
