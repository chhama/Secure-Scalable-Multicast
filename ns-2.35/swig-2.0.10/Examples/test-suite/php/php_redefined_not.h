/* ----------------------------------------------------------------------------
 * This file was automatically generated by SWIG (http://www.swig.org).
 * Version 2.0.10
 * 
 * This file is not intended to be easily readable and contains a number of 
 * coding conventions designed to improve portability and efficiency. Do not make
 * changes to this file unless you know what you are doing--modify the SWIG 
 * interface file instead. 
 * ----------------------------------------------------------------------------- */

#ifndef PHP_REDEFINED_NOT_H
#define PHP_REDEFINED_NOT_H

extern zend_module_entry redefined_not_module_entry;
#define phpext_redefined_not_ptr &redefined_not_module_entry

#ifdef PHP_WIN32
# define PHP_REDEFINED_NOT_API __declspec(dllexport)
#else
# define PHP_REDEFINED_NOT_API
#endif

#ifdef ZTS
#include "TSRM.h"
#endif

PHP_MINIT_FUNCTION(redefined_not);
PHP_MSHUTDOWN_FUNCTION(redefined_not);
PHP_RINIT_FUNCTION(redefined_not);
PHP_RSHUTDOWN_FUNCTION(redefined_not);
PHP_MINFO_FUNCTION(redefined_not);

#endif /* PHP_REDEFINED_NOT_H */
