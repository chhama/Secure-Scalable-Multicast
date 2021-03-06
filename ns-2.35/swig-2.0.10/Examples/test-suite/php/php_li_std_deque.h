/* ----------------------------------------------------------------------------
 * This file was automatically generated by SWIG (http://www.swig.org).
 * Version 2.0.10
 * 
 * This file is not intended to be easily readable and contains a number of 
 * coding conventions designed to improve portability and efficiency. Do not make
 * changes to this file unless you know what you are doing--modify the SWIG 
 * interface file instead. 
 * ----------------------------------------------------------------------------- */

#ifndef PHP_LI_STD_DEQUE_H
#define PHP_LI_STD_DEQUE_H

extern zend_module_entry li_std_deque_module_entry;
#define phpext_li_std_deque_ptr &li_std_deque_module_entry

#ifdef PHP_WIN32
# define PHP_LI_STD_DEQUE_API __declspec(dllexport)
#else
# define PHP_LI_STD_DEQUE_API
#endif

#ifdef ZTS
#include "TSRM.h"
#endif

PHP_MINIT_FUNCTION(li_std_deque);
PHP_MSHUTDOWN_FUNCTION(li_std_deque);
PHP_RINIT_FUNCTION(li_std_deque);
PHP_RSHUTDOWN_FUNCTION(li_std_deque);
PHP_MINFO_FUNCTION(li_std_deque);

ZEND_NAMED_FUNCTION(_wrap_IntDeque_is_empty);
ZEND_NAMED_FUNCTION(_wrap_new_IntDeque);
ZEND_NAMED_FUNCTION(_wrap_IntDeque_assign);
ZEND_NAMED_FUNCTION(_wrap_IntDeque_swap);
ZEND_NAMED_FUNCTION(_wrap_IntDeque_size);
ZEND_NAMED_FUNCTION(_wrap_IntDeque_max_size);
ZEND_NAMED_FUNCTION(_wrap_IntDeque_resize);
ZEND_NAMED_FUNCTION(_wrap_IntDeque_front);
ZEND_NAMED_FUNCTION(_wrap_IntDeque_back);
ZEND_NAMED_FUNCTION(_wrap_IntDeque_push_front);
ZEND_NAMED_FUNCTION(_wrap_IntDeque_push_back);
ZEND_NAMED_FUNCTION(_wrap_IntDeque_pop_front);
ZEND_NAMED_FUNCTION(_wrap_IntDeque_pop_back);
ZEND_NAMED_FUNCTION(_wrap_IntDeque_clear);
ZEND_NAMED_FUNCTION(_wrap_IntDeque_getitem);
ZEND_NAMED_FUNCTION(_wrap_IntDeque_setitem);
ZEND_NAMED_FUNCTION(_wrap_IntDeque_delitem);
ZEND_NAMED_FUNCTION(_wrap_IntDeque_getslice);
ZEND_NAMED_FUNCTION(_wrap_IntDeque_setslice);
ZEND_NAMED_FUNCTION(_wrap_IntDeque_delslice);
ZEND_NAMED_FUNCTION(_wrap_DoubleDeque_is_empty);
ZEND_NAMED_FUNCTION(_wrap_new_DoubleDeque);
ZEND_NAMED_FUNCTION(_wrap_DoubleDeque_assign);
ZEND_NAMED_FUNCTION(_wrap_DoubleDeque_swap);
ZEND_NAMED_FUNCTION(_wrap_DoubleDeque_size);
ZEND_NAMED_FUNCTION(_wrap_DoubleDeque_max_size);
ZEND_NAMED_FUNCTION(_wrap_DoubleDeque_resize);
ZEND_NAMED_FUNCTION(_wrap_DoubleDeque_front);
ZEND_NAMED_FUNCTION(_wrap_DoubleDeque_back);
ZEND_NAMED_FUNCTION(_wrap_DoubleDeque_push_front);
ZEND_NAMED_FUNCTION(_wrap_DoubleDeque_push_back);
ZEND_NAMED_FUNCTION(_wrap_DoubleDeque_pop_front);
ZEND_NAMED_FUNCTION(_wrap_DoubleDeque_pop_back);
ZEND_NAMED_FUNCTION(_wrap_DoubleDeque_clear);
ZEND_NAMED_FUNCTION(_wrap_DoubleDeque_getitem);
ZEND_NAMED_FUNCTION(_wrap_DoubleDeque_setitem);
ZEND_NAMED_FUNCTION(_wrap_DoubleDeque_delitem);
ZEND_NAMED_FUNCTION(_wrap_DoubleDeque_getslice);
ZEND_NAMED_FUNCTION(_wrap_DoubleDeque_setslice);
ZEND_NAMED_FUNCTION(_wrap_DoubleDeque_delslice);
ZEND_NAMED_FUNCTION(_wrap_RealDeque_is_empty);
ZEND_NAMED_FUNCTION(_wrap_new_RealDeque);
ZEND_NAMED_FUNCTION(_wrap_RealDeque_assign);
ZEND_NAMED_FUNCTION(_wrap_RealDeque_swap);
ZEND_NAMED_FUNCTION(_wrap_RealDeque_size);
ZEND_NAMED_FUNCTION(_wrap_RealDeque_max_size);
ZEND_NAMED_FUNCTION(_wrap_RealDeque_resize);
ZEND_NAMED_FUNCTION(_wrap_RealDeque_front);
ZEND_NAMED_FUNCTION(_wrap_RealDeque_back);
ZEND_NAMED_FUNCTION(_wrap_RealDeque_push_front);
ZEND_NAMED_FUNCTION(_wrap_RealDeque_push_back);
ZEND_NAMED_FUNCTION(_wrap_RealDeque_pop_front);
ZEND_NAMED_FUNCTION(_wrap_RealDeque_pop_back);
ZEND_NAMED_FUNCTION(_wrap_RealDeque_clear);
ZEND_NAMED_FUNCTION(_wrap_RealDeque_getitem);
ZEND_NAMED_FUNCTION(_wrap_RealDeque_setitem);
ZEND_NAMED_FUNCTION(_wrap_RealDeque_delitem);
ZEND_NAMED_FUNCTION(_wrap_RealDeque_getslice);
ZEND_NAMED_FUNCTION(_wrap_RealDeque_setslice);
ZEND_NAMED_FUNCTION(_wrap_RealDeque_delslice);
ZEND_NAMED_FUNCTION(_wrap_average);
ZEND_NAMED_FUNCTION(_wrap_half);
ZEND_NAMED_FUNCTION(_wrap_halve_in_place);
#endif /* PHP_LI_STD_DEQUE_H */
