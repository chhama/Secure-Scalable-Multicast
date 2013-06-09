/* ----------------------------------------------------------------------------
 * This file was automatically generated by SWIG (http://www.swig.org).
 * Version 2.0.10
 * 
 * This file is not intended to be easily readable and contains a number of 
 * coding conventions designed to improve portability and efficiency. Do not make
 * changes to this file unless you know what you are doing--modify the SWIG 
 * interface file instead. 
 * ----------------------------------------------------------------------------- */

#ifndef PHP_LI_ATTRIBUTE_TEMPLATE_H
#define PHP_LI_ATTRIBUTE_TEMPLATE_H

extern zend_module_entry li_attribute_template_module_entry;
#define phpext_li_attribute_template_ptr &li_attribute_template_module_entry

#ifdef PHP_WIN32
# define PHP_LI_ATTRIBUTE_TEMPLATE_API __declspec(dllexport)
#else
# define PHP_LI_ATTRIBUTE_TEMPLATE_API
#endif

#ifdef ZTS
#include "TSRM.h"
#endif

PHP_MINIT_FUNCTION(li_attribute_template);
PHP_MSHUTDOWN_FUNCTION(li_attribute_template);
PHP_RINIT_FUNCTION(li_attribute_template);
PHP_RSHUTDOWN_FUNCTION(li_attribute_template);
PHP_MINFO_FUNCTION(li_attribute_template);

ZEND_NAMED_FUNCTION(_wrap_new_Foo);
ZEND_NAMED_FUNCTION(_wrap_Foo_value_set);
ZEND_NAMED_FUNCTION(_wrap_Foo_value_get);
ZEND_NAMED_FUNCTION(_wrap_new_pair_intint);
ZEND_NAMED_FUNCTION(_wrap_pair_intint_first_set);
ZEND_NAMED_FUNCTION(_wrap_pair_intint_first_get);
ZEND_NAMED_FUNCTION(_wrap_pair_intint_second_set);
ZEND_NAMED_FUNCTION(_wrap_pair_intint_second_get);
ZEND_NAMED_FUNCTION(_wrap_new_Cintint);
ZEND_NAMED_FUNCTION(_wrap_Cintint_a_set);
ZEND_NAMED_FUNCTION(_wrap_Cintint_a_get);
ZEND_NAMED_FUNCTION(_wrap_Cintint_b_set);
ZEND_NAMED_FUNCTION(_wrap_Cintint_b_get);
ZEND_NAMED_FUNCTION(_wrap_Cintint_str_set);
ZEND_NAMED_FUNCTION(_wrap_Cintint_str_get);
ZEND_NAMED_FUNCTION(_wrap_Cintint_d_set);
ZEND_NAMED_FUNCTION(_wrap_Cintint_d_get);
ZEND_NAMED_FUNCTION(_wrap_Cintint_e_set);
ZEND_NAMED_FUNCTION(_wrap_Cintint_e_get);
ZEND_NAMED_FUNCTION(_wrap_Cintint_f_set);
ZEND_NAMED_FUNCTION(_wrap_Cintint_f_get);
ZEND_NAMED_FUNCTION(_wrap_Cintint_g_set);
ZEND_NAMED_FUNCTION(_wrap_Cintint_g_get);
#endif /* PHP_LI_ATTRIBUTE_TEMPLATE_H */
