/* ----------------------------------------------------------------------------
 * This file was automatically generated by SWIG (http://www.swig.org).
 * Version 2.0.10
 * 
 * This file is not intended to be easily readable and contains a number of 
 * coding conventions designed to improve portability and efficiency. Do not make
 * changes to this file unless you know what you are doing--modify the SWIG 
 * interface file instead. 
 * ----------------------------------------------------------------------------- */

#ifndef PHP_LI_STD_EXCEPT_AS_CLASS_H
#define PHP_LI_STD_EXCEPT_AS_CLASS_H

extern zend_module_entry li_std_except_as_class_module_entry;
#define phpext_li_std_except_as_class_ptr &li_std_except_as_class_module_entry

#ifdef PHP_WIN32
# define PHP_LI_STD_EXCEPT_AS_CLASS_API __declspec(dllexport)
#else
# define PHP_LI_STD_EXCEPT_AS_CLASS_API
#endif

#ifdef ZTS
#include "TSRM.h"
#endif

PHP_MINIT_FUNCTION(li_std_except_as_class);
PHP_MSHUTDOWN_FUNCTION(li_std_except_as_class);
PHP_RINIT_FUNCTION(li_std_except_as_class);
PHP_RSHUTDOWN_FUNCTION(li_std_except_as_class);
PHP_MINFO_FUNCTION(li_std_except_as_class);

ZEND_NAMED_FUNCTION(_wrap_test_domain_error);
#endif /* PHP_LI_STD_EXCEPT_AS_CLASS_H */
