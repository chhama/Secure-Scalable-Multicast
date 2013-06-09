/* ----------------------------------------------------------------------------
 * This file was automatically generated by SWIG (http://www.swig.org).
 * Version 2.0.10
 * 
 * This file is not intended to be easily readable and contains a number of 
 * coding conventions designed to improve portability and efficiency. Do not make
 * changes to this file unless you know what you are doing--modify the SWIG 
 * interface file instead. 
 * ----------------------------------------------------------------------------- */

#ifndef PHP_DIRECTOR_FROB_H
#define PHP_DIRECTOR_FROB_H

extern zend_module_entry director_frob_module_entry;
#define phpext_director_frob_ptr &director_frob_module_entry

#ifdef PHP_WIN32
# define PHP_DIRECTOR_FROB_API __declspec(dllexport)
#else
# define PHP_DIRECTOR_FROB_API
#endif

#ifdef ZTS
#include "TSRM.h"
#endif

PHP_MINIT_FUNCTION(director_frob);
PHP_MSHUTDOWN_FUNCTION(director_frob);
PHP_RINIT_FUNCTION(director_frob);
PHP_RSHUTDOWN_FUNCTION(director_frob);
PHP_MINFO_FUNCTION(director_frob);

ZEND_NAMED_FUNCTION(_wrap_Alpha_abs_method);
ZEND_NAMED_FUNCTION(_wrap_new_Alpha);
ZEND_NAMED_FUNCTION(_wrap_Bravo_abs_method);
ZEND_NAMED_FUNCTION(_wrap_new_Bravo);
ZEND_NAMED_FUNCTION(_wrap_Charlie_abs_method);
ZEND_NAMED_FUNCTION(_wrap_new_Charlie);
ZEND_NAMED_FUNCTION(_wrap_new_Delta);
ZEND_NAMED_FUNCTION(_wrap_new_Ops);
ZEND_NAMED_FUNCTION(_wrap_Ops_OpInt);
ZEND_NAMED_FUNCTION(_wrap_Ops_OpIntStarStarConst);
ZEND_NAMED_FUNCTION(_wrap_Ops_OpIntAmp);
ZEND_NAMED_FUNCTION(_wrap_Ops_OpIntStar);
ZEND_NAMED_FUNCTION(_wrap_Ops_OpConstIntIntStar);
ZEND_NAMED_FUNCTION(_wrap_Prims_ull);
ZEND_NAMED_FUNCTION(_wrap_Prims_callull);
ZEND_NAMED_FUNCTION(_wrap_new_Prims);
ZEND_NAMED_FUNCTION(_wrap_new_corePoint3d);
ZEND_NAMED_FUNCTION(_wrap_coreCallbacks_On3dEngineRedrawnData__eye_set);
ZEND_NAMED_FUNCTION(_wrap_coreCallbacks_On3dEngineRedrawnData__eye_get);
ZEND_NAMED_FUNCTION(_wrap_coreCallbacks_On3dEngineRedrawnData__at_set);
ZEND_NAMED_FUNCTION(_wrap_coreCallbacks_On3dEngineRedrawnData__at_get);
ZEND_NAMED_FUNCTION(_wrap_new_coreCallbacks_On3dEngineRedrawnData);
ZEND_NAMED_FUNCTION(_wrap_coreCallbacksOn3dEngineRedrawnData__eye_set);
ZEND_NAMED_FUNCTION(_wrap_coreCallbacksOn3dEngineRedrawnData__eye_get);
ZEND_NAMED_FUNCTION(_wrap_coreCallbacksOn3dEngineRedrawnData__at_set);
ZEND_NAMED_FUNCTION(_wrap_coreCallbacksOn3dEngineRedrawnData__at_get);
ZEND_NAMED_FUNCTION(_wrap_new_coreCallbacksOn3dEngineRedrawnData);
ZEND_NAMED_FUNCTION(_wrap_new_coreCallbacks);
ZEND_NAMED_FUNCTION(_wrap_coreCallbacks_On3dEngineRedrawn);
ZEND_NAMED_FUNCTION(_wrap_coreCallbacks_On3dEngineRedrawn2);
#endif /* PHP_DIRECTOR_FROB_H */
