/* ----------------------------------------------------------------------------
 * This file was automatically generated by SWIG (http://www.swig.org).
 * Version 2.0.10
 * 
 * This file is not intended to be easily readable and contains a number of 
 * coding conventions designed to improve portability and efficiency. Do not make
 * changes to this file unless you know what you are doing--modify the SWIG 
 * interface file instead. 
 * ----------------------------------------------------------------------------- */

#ifndef PHP_FRAGMENTS_H
#define PHP_FRAGMENTS_H

extern zend_module_entry fragments_module_entry;
#define phpext_fragments_ptr &fragments_module_entry

#ifdef PHP_WIN32
# define PHP_FRAGMENTS_API __declspec(dllexport)
#else
# define PHP_FRAGMENTS_API
#endif

#ifdef ZTS
#include "TSRM.h"
#endif

PHP_MINIT_FUNCTION(fragments);
PHP_MSHUTDOWN_FUNCTION(fragments);
PHP_RINIT_FUNCTION(fragments);
PHP_RSHUTDOWN_FUNCTION(fragments);
PHP_MINFO_FUNCTION(fragments);

ZEND_NAMED_FUNCTION(_wrap_bar);
ZEND_NAMED_FUNCTION(_wrap_foo);
#endif /* PHP_FRAGMENTS_H */
