/* ----------------------------------------------------------------------------
 * This file was automatically generated by SWIG (http://www.swig.org).
 * Version 2.0.10
 * 
 * This file is not intended to be easily readable and contains a number of 
 * coding conventions designed to improve portability and efficiency. Do not make
 * changes to this file unless you know what you are doing--modify the SWIG 
 * interface file instead. 
 * ----------------------------------------------------------------------------- */

#ifndef PHP_LI_BOOST_SHARED_PTR_TEMPLATE_H
#define PHP_LI_BOOST_SHARED_PTR_TEMPLATE_H

extern zend_module_entry li_boost_shared_ptr_template_module_entry;
#define phpext_li_boost_shared_ptr_template_ptr &li_boost_shared_ptr_template_module_entry

#ifdef PHP_WIN32
# define PHP_LI_BOOST_SHARED_PTR_TEMPLATE_API __declspec(dllexport)
#else
# define PHP_LI_BOOST_SHARED_PTR_TEMPLATE_API
#endif

#ifdef ZTS
#include "TSRM.h"
#endif

PHP_MINIT_FUNCTION(li_boost_shared_ptr_template);
PHP_MSHUTDOWN_FUNCTION(li_boost_shared_ptr_template);
PHP_RINIT_FUNCTION(li_boost_shared_ptr_template);
PHP_RSHUTDOWN_FUNCTION(li_boost_shared_ptr_template);
PHP_MINFO_FUNCTION(li_boost_shared_ptr_template);

ZEND_NAMED_FUNCTION(_wrap_bar_getter);
ZEND_NAMED_FUNCTION(_wrap_BaseINTEGER_bar);
ZEND_NAMED_FUNCTION(_wrap_new_BaseINTEGER);
ZEND_NAMED_FUNCTION(_wrap_DerivedINTEGER_bar);
ZEND_NAMED_FUNCTION(_wrap_new_DerivedINTEGER);
ZEND_NAMED_FUNCTION(_wrap_bar2_getter);
ZEND_NAMED_FUNCTION(_wrap_BaseDefaultInt_bar2);
ZEND_NAMED_FUNCTION(_wrap_new_BaseDefaultInt);
ZEND_NAMED_FUNCTION(_wrap_DerivedDefaultInt_bar2);
ZEND_NAMED_FUNCTION(_wrap_new_DerivedDefaultInt);
ZEND_NAMED_FUNCTION(_wrap_DerivedDefaultInt2_bar2);
ZEND_NAMED_FUNCTION(_wrap_new_DerivedDefaultInt2);
#endif /* PHP_LI_BOOST_SHARED_PTR_TEMPLATE_H */