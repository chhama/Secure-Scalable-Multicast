/* ----------------------------------------------------------------------------
 * This file was automatically generated by SWIG (http://www.swig.org).
 * Version 2.0.10
 * 
 * This file is not intended to be easily readable and contains a number of 
 * coding conventions designed to improve portability and efficiency. Do not make
 * changes to this file unless you know what you are doing--modify the SWIG 
 * interface file instead. 
 * ----------------------------------------------------------------------------- */

#ifndef PHP_APPLY_SIGNED_CHAR_H
#define PHP_APPLY_SIGNED_CHAR_H

extern zend_module_entry apply_signed_char_module_entry;
#define phpext_apply_signed_char_ptr &apply_signed_char_module_entry

#ifdef PHP_WIN32
# define PHP_APPLY_SIGNED_CHAR_API __declspec(dllexport)
#else
# define PHP_APPLY_SIGNED_CHAR_API
#endif

#ifdef ZTS
#include "TSRM.h"
#endif

PHP_MINIT_FUNCTION(apply_signed_char);
PHP_MSHUTDOWN_FUNCTION(apply_signed_char);
PHP_RINIT_FUNCTION(apply_signed_char);
PHP_RSHUTDOWN_FUNCTION(apply_signed_char);
PHP_MINFO_FUNCTION(apply_signed_char);

ZEND_NAMED_FUNCTION(_wrap_CharValFunction);
ZEND_NAMED_FUNCTION(_wrap_CCharValFunction);
ZEND_NAMED_FUNCTION(_wrap_CCharRefFunction);
ZEND_NAMED_FUNCTION(_wrap_globalchar_set);
ZEND_NAMED_FUNCTION(_wrap_globalchar_get);
ZEND_NAMED_FUNCTION(_wrap_globalconstchar_get);
ZEND_NAMED_FUNCTION(_wrap_new_DirectorTest);
ZEND_NAMED_FUNCTION(_wrap_DirectorTest_CharValFunction);
ZEND_NAMED_FUNCTION(_wrap_DirectorTest_CCharValFunction);
ZEND_NAMED_FUNCTION(_wrap_DirectorTest_CCharRefFunction);
ZEND_NAMED_FUNCTION(_wrap_DirectorTest_memberchar_set);
ZEND_NAMED_FUNCTION(_wrap_DirectorTest_memberchar_get);
ZEND_NAMED_FUNCTION(_wrap_DirectorTest_memberconstchar_get);
#endif /* PHP_APPLY_SIGNED_CHAR_H */
