/* ----------------------------------------------------------------------------
 * This file was automatically generated by SWIG (http://www.swig.org).
 * Version 2.0.10
 * 
 * This file is not intended to be easily readable and contains a number of 
 * coding conventions designed to improve portability and efficiency. Do not make
 * changes to this file unless you know what you are doing--modify the SWIG 
 * interface file instead. 
 * ----------------------------------------------------------------------------- */

#ifndef PHP_ABSTRACT_TYPEDEF_H
#define PHP_ABSTRACT_TYPEDEF_H

extern zend_module_entry abstract_typedef_module_entry;
#define phpext_abstract_typedef_ptr &abstract_typedef_module_entry

#ifdef PHP_WIN32
# define PHP_ABSTRACT_TYPEDEF_API __declspec(dllexport)
#else
# define PHP_ABSTRACT_TYPEDEF_API
#endif

#ifdef ZTS
#include "TSRM.h"
#endif

PHP_MINIT_FUNCTION(abstract_typedef);
PHP_MSHUTDOWN_FUNCTION(abstract_typedef);
PHP_RINIT_FUNCTION(abstract_typedef);
PHP_RSHUTDOWN_FUNCTION(abstract_typedef);
PHP_MINFO_FUNCTION(abstract_typedef);

ZEND_NAMED_FUNCTION(_wrap_new_Engine);
ZEND_NAMED_FUNCTION(_wrap_AbstractBaseClass_write);
ZEND_NAMED_FUNCTION(_wrap_new_A);
#endif /* PHP_ABSTRACT_TYPEDEF_H */
