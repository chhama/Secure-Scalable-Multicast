/* ----------------------------------------------------------------------------
 * This file was automatically generated by SWIG (http://www.swig.org).
 * Version 2.0.10
 * 
 * This file is not intended to be easily readable and contains a number of 
 * coding conventions designed to improve portability and efficiency. Do not make
 * changes to this file unless you know what you are doing--modify the SWIG 
 * interface file instead. 
 * ----------------------------------------------------------------------------- */

#ifndef PHP_VALUEWRAPPER_H
#define PHP_VALUEWRAPPER_H

extern zend_module_entry valuewrapper_module_entry;
#define phpext_valuewrapper_ptr &valuewrapper_module_entry

#ifdef PHP_WIN32
# define PHP_VALUEWRAPPER_API __declspec(dllexport)
#else
# define PHP_VALUEWRAPPER_API
#endif

#ifdef ZTS
#include "TSRM.h"
#endif

PHP_MINIT_FUNCTION(valuewrapper);
PHP_MSHUTDOWN_FUNCTION(valuewrapper);
PHP_RINIT_FUNCTION(valuewrapper);
PHP_RSHUTDOWN_FUNCTION(valuewrapper);
PHP_MINFO_FUNCTION(valuewrapper);

ZEND_NAMED_FUNCTION(_wrap_new_Xi);
ZEND_NAMED_FUNCTION(_wrap_new_YXi);
ZEND_NAMED_FUNCTION(_wrap_YXi_spam);
#endif /* PHP_VALUEWRAPPER_H */
