/* ----------------------------------------------------------------------------
 * This file was automatically generated by SWIG (http://www.swig.org).
 * Version 2.0.10
 * 
 * This file is not intended to be easily readable and contains a number of 
 * coding conventions designed to improve portability and efficiency. Do not make
 * changes to this file unless you know what you are doing--modify the SWIG 
 * interface file instead. 
 * ----------------------------------------------------------------------------- */

#ifndef PHP_ALLPROTECTED_NOT_H
#define PHP_ALLPROTECTED_NOT_H

extern zend_module_entry allprotected_not_module_entry;
#define phpext_allprotected_not_ptr &allprotected_not_module_entry

#ifdef PHP_WIN32
# define PHP_ALLPROTECTED_NOT_API __declspec(dllexport)
#else
# define PHP_ALLPROTECTED_NOT_API
#endif

#ifdef ZTS
#include "TSRM.h"
#endif

PHP_MINIT_FUNCTION(allprotected_not);
PHP_MSHUTDOWN_FUNCTION(allprotected_not);
PHP_RINIT_FUNCTION(allprotected_not);
PHP_RSHUTDOWN_FUNCTION(allprotected_not);
PHP_MINFO_FUNCTION(allprotected_not);

ZEND_NAMED_FUNCTION(_wrap_AllProtectedNot_PublicMethod);
ZEND_NAMED_FUNCTION(_wrap_new_AllProtectedNot);
#endif /* PHP_ALLPROTECTED_NOT_H */
