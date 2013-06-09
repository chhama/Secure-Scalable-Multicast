/* ----------------------------------------------------------------------------
 * This file was automatically generated by SWIG (http://www.swig.org).
 * Version 2.0.10
 * 
 * This file is not intended to be easily readable and contains a number of 
 * coding conventions designed to improve portability and efficiency. Do not make
 * changes to this file unless you know what you are doing--modify the SWIG 
 * interface file instead. 
 * ----------------------------------------------------------------------------- */

#ifndef PHP_NESTED_WORKAROUND_H
#define PHP_NESTED_WORKAROUND_H

extern zend_module_entry nested_workaround_module_entry;
#define phpext_nested_workaround_ptr &nested_workaround_module_entry

#ifdef PHP_WIN32
# define PHP_NESTED_WORKAROUND_API __declspec(dllexport)
#else
# define PHP_NESTED_WORKAROUND_API
#endif

#ifdef ZTS
#include "TSRM.h"
#endif

PHP_MINIT_FUNCTION(nested_workaround);
PHP_MSHUTDOWN_FUNCTION(nested_workaround);
PHP_RINIT_FUNCTION(nested_workaround);
PHP_RSHUTDOWN_FUNCTION(nested_workaround);
PHP_MINFO_FUNCTION(nested_workaround);

ZEND_NAMED_FUNCTION(_wrap_new_Inner);
ZEND_NAMED_FUNCTION(_wrap_Inner_setValue);
ZEND_NAMED_FUNCTION(_wrap_Inner_getValue);
ZEND_NAMED_FUNCTION(_wrap_Outer_createInner);
ZEND_NAMED_FUNCTION(_wrap_Outer_getInnerValue);
ZEND_NAMED_FUNCTION(_wrap_Outer_doubleInnerValue);
ZEND_NAMED_FUNCTION(_wrap_new_Outer);
#endif /* PHP_NESTED_WORKAROUND_H */
