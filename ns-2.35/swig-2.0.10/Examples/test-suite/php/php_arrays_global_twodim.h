/* ----------------------------------------------------------------------------
 * This file was automatically generated by SWIG (http://www.swig.org).
 * Version 2.0.10
 * 
 * This file is not intended to be easily readable and contains a number of 
 * coding conventions designed to improve portability and efficiency. Do not make
 * changes to this file unless you know what you are doing--modify the SWIG 
 * interface file instead. 
 * ----------------------------------------------------------------------------- */

#ifndef PHP_ARRAYS_GLOBAL_TWODIM_H
#define PHP_ARRAYS_GLOBAL_TWODIM_H

extern zend_module_entry arrays_global_twodim_module_entry;
#define phpext_arrays_global_twodim_ptr &arrays_global_twodim_module_entry

#ifdef PHP_WIN32
# define PHP_ARRAYS_GLOBAL_TWODIM_API __declspec(dllexport)
#else
# define PHP_ARRAYS_GLOBAL_TWODIM_API
#endif

#ifdef ZTS
#include "TSRM.h"
#endif

PHP_MINIT_FUNCTION(arrays_global_twodim);
PHP_MSHUTDOWN_FUNCTION(arrays_global_twodim);
PHP_RINIT_FUNCTION(arrays_global_twodim);
PHP_RSHUTDOWN_FUNCTION(arrays_global_twodim);
PHP_MINFO_FUNCTION(arrays_global_twodim);

ZEND_NAMED_FUNCTION(_wrap_SimpleStruct_double_field_set);
ZEND_NAMED_FUNCTION(_wrap_SimpleStruct_double_field_get);
ZEND_NAMED_FUNCTION(_wrap_new_SimpleStruct);
ZEND_NAMED_FUNCTION(_wrap_array_c_set);
ZEND_NAMED_FUNCTION(_wrap_array_c_get);
ZEND_NAMED_FUNCTION(_wrap_array_sc_set);
ZEND_NAMED_FUNCTION(_wrap_array_sc_get);
ZEND_NAMED_FUNCTION(_wrap_array_uc_set);
ZEND_NAMED_FUNCTION(_wrap_array_uc_get);
ZEND_NAMED_FUNCTION(_wrap_array_s_set);
ZEND_NAMED_FUNCTION(_wrap_array_s_get);
ZEND_NAMED_FUNCTION(_wrap_array_us_set);
ZEND_NAMED_FUNCTION(_wrap_array_us_get);
ZEND_NAMED_FUNCTION(_wrap_array_i_set);
ZEND_NAMED_FUNCTION(_wrap_array_i_get);
ZEND_NAMED_FUNCTION(_wrap_array_ui_set);
ZEND_NAMED_FUNCTION(_wrap_array_ui_get);
ZEND_NAMED_FUNCTION(_wrap_array_l_set);
ZEND_NAMED_FUNCTION(_wrap_array_l_get);
ZEND_NAMED_FUNCTION(_wrap_array_ul_set);
ZEND_NAMED_FUNCTION(_wrap_array_ul_get);
ZEND_NAMED_FUNCTION(_wrap_array_ll_set);
ZEND_NAMED_FUNCTION(_wrap_array_ll_get);
ZEND_NAMED_FUNCTION(_wrap_array_f_set);
ZEND_NAMED_FUNCTION(_wrap_array_f_get);
ZEND_NAMED_FUNCTION(_wrap_array_d_set);
ZEND_NAMED_FUNCTION(_wrap_array_d_get);
ZEND_NAMED_FUNCTION(_wrap_array_struct_set);
ZEND_NAMED_FUNCTION(_wrap_array_struct_get);
ZEND_NAMED_FUNCTION(_wrap_array_structpointers_set);
ZEND_NAMED_FUNCTION(_wrap_array_structpointers_get);
ZEND_NAMED_FUNCTION(_wrap_array_ipointers_set);
ZEND_NAMED_FUNCTION(_wrap_array_ipointers_get);
ZEND_NAMED_FUNCTION(_wrap_array_enum_set);
ZEND_NAMED_FUNCTION(_wrap_array_enum_get);
ZEND_NAMED_FUNCTION(_wrap_array_enumpointers_set);
ZEND_NAMED_FUNCTION(_wrap_array_enumpointers_get);
ZEND_NAMED_FUNCTION(_wrap_array_const_i_get);
ZEND_NAMED_FUNCTION(_wrap_fn_taking_arrays);
ZEND_NAMED_FUNCTION(_wrap_get_2d_array);
ZEND_NAMED_FUNCTION(_wrap_new_Material);
ZEND_NAMED_FUNCTION(_wrap_chitMat_set);
ZEND_NAMED_FUNCTION(_wrap_chitMat_get);
ZEND_NAMED_FUNCTION(_wrap_hitMat_val_set);
ZEND_NAMED_FUNCTION(_wrap_hitMat_val_get);
ZEND_NAMED_FUNCTION(_wrap_hitMat_set);
ZEND_NAMED_FUNCTION(_wrap_hitMat_get);
#endif /* PHP_ARRAYS_GLOBAL_TWODIM_H */
