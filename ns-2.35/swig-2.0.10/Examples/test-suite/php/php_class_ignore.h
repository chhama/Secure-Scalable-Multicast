/* ----------------------------------------------------------------------------
 * This file was automatically generated by SWIG (http://www.swig.org).
 * Version 2.0.10
 * 
 * This file is not intended to be easily readable and contains a number of 
 * coding conventions designed to improve portability and efficiency. Do not make
 * changes to this file unless you know what you are doing--modify the SWIG 
 * interface file instead. 
 * ----------------------------------------------------------------------------- */

#ifndef PHP_CLASS_IGNORE_H
#define PHP_CLASS_IGNORE_H

extern zend_module_entry class_ignore_module_entry;
#define phpext_class_ignore_ptr &class_ignore_module_entry

#ifdef PHP_WIN32
# define PHP_CLASS_IGNORE_API __declspec(dllexport)
#else
# define PHP_CLASS_IGNORE_API
#endif

#ifdef ZTS
#include "TSRM.h"
#endif

PHP_MINIT_FUNCTION(class_ignore);
PHP_MSHUTDOWN_FUNCTION(class_ignore);
PHP_RINIT_FUNCTION(class_ignore);
PHP_RSHUTDOWN_FUNCTION(class_ignore);
PHP_MINFO_FUNCTION(class_ignore);

ZEND_NAMED_FUNCTION(_wrap_Bar_blah);
ZEND_NAMED_FUNCTION(_wrap_new_Bar);
ZEND_NAMED_FUNCTION(_wrap_Boo_away);
ZEND_NAMED_FUNCTION(_wrap_new_Boo);
ZEND_NAMED_FUNCTION(_wrap_new_Far);
ZEND_NAMED_FUNCTION(_wrap_new_Hoo);
ZEND_NAMED_FUNCTION(_wrap_do_blah);
#endif /* PHP_CLASS_IGNORE_H */
