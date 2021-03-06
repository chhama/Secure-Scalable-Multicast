/* ----------------------------------------------------------------------------
 * This file was automatically generated by SWIG (http://www.swig.org).
 * Version 2.0.10
 * 
 * This file is not intended to be easily readable and contains a number of 
 * coding conventions designed to improve portability and efficiency. Do not make
 * changes to this file unless you know what you are doing--modify the SWIG 
 * interface file instead. 
 * ----------------------------------------------------------------------------- */

#ifndef PHP_LI_STD_PAIR_H
#define PHP_LI_STD_PAIR_H

extern zend_module_entry li_std_pair_module_entry;
#define phpext_li_std_pair_ptr &li_std_pair_module_entry

#ifdef PHP_WIN32
# define PHP_LI_STD_PAIR_API __declspec(dllexport)
#else
# define PHP_LI_STD_PAIR_API
#endif

#ifdef ZTS
#include "TSRM.h"
#endif

PHP_MINIT_FUNCTION(li_std_pair);
PHP_MSHUTDOWN_FUNCTION(li_std_pair);
PHP_RINIT_FUNCTION(li_std_pair);
PHP_RSHUTDOWN_FUNCTION(li_std_pair);
PHP_MINFO_FUNCTION(li_std_pair);

ZEND_NAMED_FUNCTION(_wrap_new_IntPair);
ZEND_NAMED_FUNCTION(_wrap_IntPair_first_set);
ZEND_NAMED_FUNCTION(_wrap_IntPair_first_get);
ZEND_NAMED_FUNCTION(_wrap_IntPair_second_set);
ZEND_NAMED_FUNCTION(_wrap_IntPair_second_get);
ZEND_NAMED_FUNCTION(_wrap_makeIntPair);
ZEND_NAMED_FUNCTION(_wrap_makeIntPairPtr);
ZEND_NAMED_FUNCTION(_wrap_makeIntPairRef);
ZEND_NAMED_FUNCTION(_wrap_makeIntPairConstRef);
ZEND_NAMED_FUNCTION(_wrap_product1);
ZEND_NAMED_FUNCTION(_wrap_product2);
ZEND_NAMED_FUNCTION(_wrap_product3);
#endif /* PHP_LI_STD_PAIR_H */
