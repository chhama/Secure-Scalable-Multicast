/* ----------------------------------------------------------------------------
 * This file was automatically generated by SWIG (http://www.swig.org).
 * Version 2.0.10
 * 
 * This file is not intended to be easily readable and contains a number of 
 * coding conventions designed to improve portability and efficiency. Do not make
 * changes to this file unless you know what you are doing--modify the SWIG 
 * interface file instead. 
 * ----------------------------------------------------------------------------- */

#ifndef PHP_LI_CARRAYS_H
#define PHP_LI_CARRAYS_H

extern zend_module_entry li_carrays_module_entry;
#define phpext_li_carrays_ptr &li_carrays_module_entry

#ifdef PHP_WIN32
# define PHP_LI_CARRAYS_API __declspec(dllexport)
#else
# define PHP_LI_CARRAYS_API
#endif

#ifdef ZTS
#include "TSRM.h"
#endif

PHP_MINIT_FUNCTION(li_carrays);
PHP_MSHUTDOWN_FUNCTION(li_carrays);
PHP_RINIT_FUNCTION(li_carrays);
PHP_RSHUTDOWN_FUNCTION(li_carrays);
PHP_MINFO_FUNCTION(li_carrays);

ZEND_NAMED_FUNCTION(_wrap_new_intArray);
ZEND_NAMED_FUNCTION(_wrap_delete_intArray);
ZEND_NAMED_FUNCTION(_wrap_intArray_getitem);
ZEND_NAMED_FUNCTION(_wrap_intArray_setitem);
ZEND_NAMED_FUNCTION(_wrap_new_doubleArray);
ZEND_NAMED_FUNCTION(_wrap_doubleArray_getitem);
ZEND_NAMED_FUNCTION(_wrap_doubleArray_setitem);
ZEND_NAMED_FUNCTION(_wrap_doubleArray_cast);
ZEND_NAMED_FUNCTION(_wrap_doubleArray_frompointer);
ZEND_NAMED_FUNCTION(_wrap_XY_x_set);
ZEND_NAMED_FUNCTION(_wrap_XY_x_get);
ZEND_NAMED_FUNCTION(_wrap_XY_y_set);
ZEND_NAMED_FUNCTION(_wrap_XY_y_get);
ZEND_NAMED_FUNCTION(_wrap_new_XY);
ZEND_NAMED_FUNCTION(_wrap_globalXYArray_set);
ZEND_NAMED_FUNCTION(_wrap_globalXYArray_get);
ZEND_NAMED_FUNCTION(_wrap_AB_a_set);
ZEND_NAMED_FUNCTION(_wrap_AB_a_get);
ZEND_NAMED_FUNCTION(_wrap_AB_b_set);
ZEND_NAMED_FUNCTION(_wrap_AB_b_get);
ZEND_NAMED_FUNCTION(_wrap_new_AB);
ZEND_NAMED_FUNCTION(_wrap_globalABArray_set);
ZEND_NAMED_FUNCTION(_wrap_globalABArray_get);
ZEND_NAMED_FUNCTION(_wrap_new_XYArray);
ZEND_NAMED_FUNCTION(_wrap_XYArray_getitem);
ZEND_NAMED_FUNCTION(_wrap_XYArray_setitem);
ZEND_NAMED_FUNCTION(_wrap_XYArray_cast);
ZEND_NAMED_FUNCTION(_wrap_XYArray_frompointer);
ZEND_NAMED_FUNCTION(_wrap_new_ABArray);
ZEND_NAMED_FUNCTION(_wrap_delete_ABArray);
ZEND_NAMED_FUNCTION(_wrap_ABArray_getitem);
ZEND_NAMED_FUNCTION(_wrap_ABArray_setitem);
#endif /* PHP_LI_CARRAYS_H */
