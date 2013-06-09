/* ----------------------------------------------------------------------------
 * This file was automatically generated by SWIG (http://www.swig.org).
 * Version 2.0.10
 * 
 * This file is not intended to be easily readable and contains a number of 
 * coding conventions designed to improve portability and efficiency. Do not make
 * changes to this file unless you know what you are doing--modify the SWIG 
 * interface file instead. 
 * ----------------------------------------------------------------------------- */

#ifndef PHP_LI_STD_MAP_H
#define PHP_LI_STD_MAP_H

extern zend_module_entry li_std_map_module_entry;
#define phpext_li_std_map_ptr &li_std_map_module_entry

#ifdef PHP_WIN32
# define PHP_LI_STD_MAP_API __declspec(dllexport)
#else
# define PHP_LI_STD_MAP_API
#endif

#ifdef ZTS
#include "TSRM.h"
#endif

PHP_MINIT_FUNCTION(li_std_map);
PHP_MSHUTDOWN_FUNCTION(li_std_map);
PHP_RINIT_FUNCTION(li_std_map);
PHP_RSHUTDOWN_FUNCTION(li_std_map);
PHP_MINFO_FUNCTION(li_std_map);

ZEND_NAMED_FUNCTION(_wrap_map_val_set);
ZEND_NAMED_FUNCTION(_wrap_map_val_get);
ZEND_NAMED_FUNCTION(_wrap_new_map);
ZEND_NAMED_FUNCTION(_wrap_new_IntIntMap);
ZEND_NAMED_FUNCTION(_wrap_IntIntMap_size);
ZEND_NAMED_FUNCTION(_wrap_IntIntMap_clear);
ZEND_NAMED_FUNCTION(_wrap_IntIntMap_get);
ZEND_NAMED_FUNCTION(_wrap_IntIntMap_set);
ZEND_NAMED_FUNCTION(_wrap_IntIntMap_del);
ZEND_NAMED_FUNCTION(_wrap_IntIntMap_has_key);
ZEND_NAMED_FUNCTION(_wrap_IntIntMap_is_empty);
ZEND_NAMED_FUNCTION(_wrap_new_StringIntMap);
ZEND_NAMED_FUNCTION(_wrap_StringIntMap_size);
ZEND_NAMED_FUNCTION(_wrap_StringIntMap_clear);
ZEND_NAMED_FUNCTION(_wrap_StringIntMap_get);
ZEND_NAMED_FUNCTION(_wrap_StringIntMap_set);
ZEND_NAMED_FUNCTION(_wrap_StringIntMap_del);
ZEND_NAMED_FUNCTION(_wrap_StringIntMap_has_key);
ZEND_NAMED_FUNCTION(_wrap_StringIntMap_is_empty);
ZEND_NAMED_FUNCTION(_wrap_valueAverage);
ZEND_NAMED_FUNCTION(_wrap_stringifyKeys);
ZEND_NAMED_FUNCTION(_wrap_Struct_num_set);
ZEND_NAMED_FUNCTION(_wrap_Struct_num_get);
ZEND_NAMED_FUNCTION(_wrap_new_Struct);
ZEND_NAMED_FUNCTION(_wrap_new_IntIntPtrMap);
ZEND_NAMED_FUNCTION(_wrap_IntIntPtrMap_size);
ZEND_NAMED_FUNCTION(_wrap_IntIntPtrMap_clear);
ZEND_NAMED_FUNCTION(_wrap_IntIntPtrMap_get);
ZEND_NAMED_FUNCTION(_wrap_IntIntPtrMap_set);
ZEND_NAMED_FUNCTION(_wrap_IntIntPtrMap_del);
ZEND_NAMED_FUNCTION(_wrap_IntIntPtrMap_has_key);
ZEND_NAMED_FUNCTION(_wrap_IntIntPtrMap_is_empty);
ZEND_NAMED_FUNCTION(_wrap_new_IntConstIntPtrMap);
ZEND_NAMED_FUNCTION(_wrap_IntConstIntPtrMap_size);
ZEND_NAMED_FUNCTION(_wrap_IntConstIntPtrMap_clear);
ZEND_NAMED_FUNCTION(_wrap_IntConstIntPtrMap_get);
ZEND_NAMED_FUNCTION(_wrap_IntConstIntPtrMap_set);
ZEND_NAMED_FUNCTION(_wrap_IntConstIntPtrMap_del);
ZEND_NAMED_FUNCTION(_wrap_IntConstIntPtrMap_has_key);
ZEND_NAMED_FUNCTION(_wrap_IntConstIntPtrMap_is_empty);
ZEND_NAMED_FUNCTION(_wrap_new_IntStructMap);
ZEND_NAMED_FUNCTION(_wrap_IntStructMap_size);
ZEND_NAMED_FUNCTION(_wrap_IntStructMap_clear);
ZEND_NAMED_FUNCTION(_wrap_IntStructMap_get);
ZEND_NAMED_FUNCTION(_wrap_IntStructMap_set);
ZEND_NAMED_FUNCTION(_wrap_IntStructMap_del);
ZEND_NAMED_FUNCTION(_wrap_IntStructMap_has_key);
ZEND_NAMED_FUNCTION(_wrap_IntStructMap_is_empty);
ZEND_NAMED_FUNCTION(_wrap_new_IntStructPtrMap);
ZEND_NAMED_FUNCTION(_wrap_IntStructPtrMap_size);
ZEND_NAMED_FUNCTION(_wrap_IntStructPtrMap_clear);
ZEND_NAMED_FUNCTION(_wrap_IntStructPtrMap_get);
ZEND_NAMED_FUNCTION(_wrap_IntStructPtrMap_set);
ZEND_NAMED_FUNCTION(_wrap_IntStructPtrMap_del);
ZEND_NAMED_FUNCTION(_wrap_IntStructPtrMap_has_key);
ZEND_NAMED_FUNCTION(_wrap_IntStructPtrMap_is_empty);
ZEND_NAMED_FUNCTION(_wrap_new_IntStructConstPtrMap);
ZEND_NAMED_FUNCTION(_wrap_IntStructConstPtrMap_size);
ZEND_NAMED_FUNCTION(_wrap_IntStructConstPtrMap_clear);
ZEND_NAMED_FUNCTION(_wrap_IntStructConstPtrMap_get);
ZEND_NAMED_FUNCTION(_wrap_IntStructConstPtrMap_set);
ZEND_NAMED_FUNCTION(_wrap_IntStructConstPtrMap_del);
ZEND_NAMED_FUNCTION(_wrap_IntStructConstPtrMap_has_key);
ZEND_NAMED_FUNCTION(_wrap_IntStructConstPtrMap_is_empty);
ZEND_NAMED_FUNCTION(_wrap_new_StructPtrIntMap);
ZEND_NAMED_FUNCTION(_wrap_StructPtrIntMap_size);
ZEND_NAMED_FUNCTION(_wrap_StructPtrIntMap_clear);
ZEND_NAMED_FUNCTION(_wrap_StructPtrIntMap_get);
ZEND_NAMED_FUNCTION(_wrap_StructPtrIntMap_set);
ZEND_NAMED_FUNCTION(_wrap_StructPtrIntMap_del);
ZEND_NAMED_FUNCTION(_wrap_StructPtrIntMap_has_key);
ZEND_NAMED_FUNCTION(_wrap_StructPtrIntMap_is_empty);
ZEND_NAMED_FUNCTION(_wrap_new_StructIntMap);
ZEND_NAMED_FUNCTION(_wrap_StructIntMap_size);
ZEND_NAMED_FUNCTION(_wrap_StructIntMap_clear);
ZEND_NAMED_FUNCTION(_wrap_StructIntMap_get);
ZEND_NAMED_FUNCTION(_wrap_StructIntMap_set);
ZEND_NAMED_FUNCTION(_wrap_StructIntMap_del);
ZEND_NAMED_FUNCTION(_wrap_StructIntMap_has_key);
ZEND_NAMED_FUNCTION(_wrap_StructIntMap_is_empty);
ZEND_NAMED_FUNCTION(_wrap_A_val_set);
ZEND_NAMED_FUNCTION(_wrap_A_val_get);
ZEND_NAMED_FUNCTION(_wrap_new_A);
ZEND_NAMED_FUNCTION(_wrap_new_pairii);
ZEND_NAMED_FUNCTION(_wrap_pairii_first_set);
ZEND_NAMED_FUNCTION(_wrap_pairii_first_get);
ZEND_NAMED_FUNCTION(_wrap_pairii_second_set);
ZEND_NAMED_FUNCTION(_wrap_pairii_second_get);
ZEND_NAMED_FUNCTION(_wrap_new_pairAA);
ZEND_NAMED_FUNCTION(_wrap_pairAA_first_set);
ZEND_NAMED_FUNCTION(_wrap_pairAA_first_get);
ZEND_NAMED_FUNCTION(_wrap_pairAA_second_set);
ZEND_NAMED_FUNCTION(_wrap_pairAA_second_get);
ZEND_NAMED_FUNCTION(_wrap_new_pairA);
ZEND_NAMED_FUNCTION(_wrap_pairA_first_set);
ZEND_NAMED_FUNCTION(_wrap_pairA_first_get);
ZEND_NAMED_FUNCTION(_wrap_pairA_second_set);
ZEND_NAMED_FUNCTION(_wrap_pairA_second_get);
ZEND_NAMED_FUNCTION(_wrap_new_mapA);
ZEND_NAMED_FUNCTION(_wrap_mapA_size);
ZEND_NAMED_FUNCTION(_wrap_mapA_clear);
ZEND_NAMED_FUNCTION(_wrap_mapA_get);
ZEND_NAMED_FUNCTION(_wrap_mapA_set);
ZEND_NAMED_FUNCTION(_wrap_mapA_del);
ZEND_NAMED_FUNCTION(_wrap_mapA_has_key);
ZEND_NAMED_FUNCTION(_wrap_mapA_is_empty);
ZEND_NAMED_FUNCTION(_wrap_new_paircA1);
ZEND_NAMED_FUNCTION(_wrap_paircA1_first_get);
ZEND_NAMED_FUNCTION(_wrap_paircA1_second_set);
ZEND_NAMED_FUNCTION(_wrap_paircA1_second_get);
ZEND_NAMED_FUNCTION(_wrap_new_paircA2);
ZEND_NAMED_FUNCTION(_wrap_paircA2_first_get);
ZEND_NAMED_FUNCTION(_wrap_paircA2_second_set);
ZEND_NAMED_FUNCTION(_wrap_paircA2_second_get);
ZEND_NAMED_FUNCTION(_wrap_new_pairiiA);
ZEND_NAMED_FUNCTION(_wrap_pairiiA_first_set);
ZEND_NAMED_FUNCTION(_wrap_pairiiA_first_get);
ZEND_NAMED_FUNCTION(_wrap_pairiiA_second_set);
ZEND_NAMED_FUNCTION(_wrap_pairiiA_second_get);
ZEND_NAMED_FUNCTION(_wrap_new_pairiiAc);
ZEND_NAMED_FUNCTION(_wrap_pairiiAc_first_set);
ZEND_NAMED_FUNCTION(_wrap_pairiiAc_first_get);
ZEND_NAMED_FUNCTION(_wrap_pairiiAc_second_get);
ZEND_NAMED_FUNCTION(_wrap_p_identa);
ZEND_NAMED_FUNCTION(_wrap_m_identa);
#endif /* PHP_LI_STD_MAP_H */
