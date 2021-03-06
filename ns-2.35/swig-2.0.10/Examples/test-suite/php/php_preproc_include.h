/* ----------------------------------------------------------------------------
 * This file was automatically generated by SWIG (http://www.swig.org).
 * Version 2.0.10
 * 
 * This file is not intended to be easily readable and contains a number of 
 * coding conventions designed to improve portability and efficiency. Do not make
 * changes to this file unless you know what you are doing--modify the SWIG 
 * interface file instead. 
 * ----------------------------------------------------------------------------- */

#ifndef PHP_PREPROC_INCLUDE_H
#define PHP_PREPROC_INCLUDE_H

extern zend_module_entry preproc_include_module_entry;
#define phpext_preproc_include_ptr &preproc_include_module_entry

#ifdef PHP_WIN32
# define PHP_PREPROC_INCLUDE_API __declspec(dllexport)
#else
# define PHP_PREPROC_INCLUDE_API
#endif

#ifdef ZTS
#include "TSRM.h"
#endif

PHP_MINIT_FUNCTION(preproc_include);
PHP_MSHUTDOWN_FUNCTION(preproc_include);
PHP_RINIT_FUNCTION(preproc_include);
PHP_RSHUTDOWN_FUNCTION(preproc_include);
PHP_MINFO_FUNCTION(preproc_include);

ZEND_NAMED_FUNCTION(_wrap_multiply10);
ZEND_NAMED_FUNCTION(_wrap_multiply20);
ZEND_NAMED_FUNCTION(_wrap_multiply30);
ZEND_NAMED_FUNCTION(_wrap_multiply40);
ZEND_NAMED_FUNCTION(_wrap_multiply50);
ZEND_NAMED_FUNCTION(_wrap_multiply60);
ZEND_NAMED_FUNCTION(_wrap_multiply70);
#endif /* PHP_PREPROC_INCLUDE_H */
