/* ----------------------------------------------------------------------------
 * This file was automatically generated by SWIG (http://www.swig.org).
 * Version 2.0.10
 * 
 * This file is not intended to be easily readable and contains a number of 
 * coding conventions designed to improve portability and efficiency. Do not make
 * changes to this file unless you know what you are doing--modify the SWIG 
 * interface file instead. 
 * ----------------------------------------------------------------------------- */

#ifndef PHP_MEMBER_TEMPLATE_H
#define PHP_MEMBER_TEMPLATE_H

extern zend_module_entry member_template_module_entry;
#define phpext_member_template_ptr &member_template_module_entry

#ifdef PHP_WIN32
# define PHP_MEMBER_TEMPLATE_API __declspec(dllexport)
#else
# define PHP_MEMBER_TEMPLATE_API
#endif

#ifdef ZTS
#include "TSRM.h"
#endif

PHP_MINIT_FUNCTION(member_template);
PHP_MSHUTDOWN_FUNCTION(member_template);
PHP_RINIT_FUNCTION(member_template);
PHP_RSHUTDOWN_FUNCTION(member_template);
PHP_MINFO_FUNCTION(member_template);

ZEND_NAMED_FUNCTION(_wrap_Fooint_maxi);
ZEND_NAMED_FUNCTION(_wrap_Fooint_maxd);
ZEND_NAMED_FUNCTION(_wrap_new_Fooint);
ZEND_NAMED_FUNCTION(_wrap_Foodouble_maxi);
ZEND_NAMED_FUNCTION(_wrap_Foodouble_maxd);
ZEND_NAMED_FUNCTION(_wrap_new_Foodouble);
#endif /* PHP_MEMBER_TEMPLATE_H */
