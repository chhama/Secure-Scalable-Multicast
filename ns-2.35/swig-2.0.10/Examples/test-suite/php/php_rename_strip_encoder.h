/* ----------------------------------------------------------------------------
 * This file was automatically generated by SWIG (http://www.swig.org).
 * Version 2.0.10
 * 
 * This file is not intended to be easily readable and contains a number of 
 * coding conventions designed to improve portability and efficiency. Do not make
 * changes to this file unless you know what you are doing--modify the SWIG 
 * interface file instead. 
 * ----------------------------------------------------------------------------- */

#ifndef PHP_RENAME_STRIP_ENCODER_H
#define PHP_RENAME_STRIP_ENCODER_H

extern zend_module_entry rename_strip_encoder_module_entry;
#define phpext_rename_strip_encoder_ptr &rename_strip_encoder_module_entry

#ifdef PHP_WIN32
# define PHP_RENAME_STRIP_ENCODER_API __declspec(dllexport)
#else
# define PHP_RENAME_STRIP_ENCODER_API
#endif

#ifdef ZTS
#include "TSRM.h"
#endif

PHP_MINIT_FUNCTION(rename_strip_encoder);
PHP_MSHUTDOWN_FUNCTION(rename_strip_encoder);
PHP_RINIT_FUNCTION(rename_strip_encoder);
PHP_RSHUTDOWN_FUNCTION(rename_strip_encoder);
PHP_MINFO_FUNCTION(rename_strip_encoder);

ZEND_NAMED_FUNCTION(_wrap_new_SomeWidget);
ZEND_NAMED_FUNCTION(_wrap_AnotherWidget_DoSomething);
ZEND_NAMED_FUNCTION(_wrap_new_AnotherWidget);
#endif /* PHP_RENAME_STRIP_ENCODER_H */
