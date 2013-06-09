/* ----------------------------------------------------------------------------
 * This file was automatically generated by SWIG (http://www.swig.org).
 * Version 2.0.10
 * 
 * This file is not intended to be easily readable and contains a number of 
 * coding conventions designed to improve portability and efficiency. Do not make
 * changes to this file unless you know what you are doing--modify the SWIG 
 * interface file instead. 
 * ----------------------------------------------------------------------------- */

#ifndef PHP_DEFAULT_ARGS_H
#define PHP_DEFAULT_ARGS_H

extern zend_module_entry default_args_module_entry;
#define phpext_default_args_ptr &default_args_module_entry

#ifdef PHP_WIN32
# define PHP_DEFAULT_ARGS_API __declspec(dllexport)
#else
# define PHP_DEFAULT_ARGS_API
#endif

#ifdef ZTS
#include "TSRM.h"
#endif

PHP_MINIT_FUNCTION(default_args);
PHP_MSHUTDOWN_FUNCTION(default_args);
PHP_RINIT_FUNCTION(default_args);
PHP_RSHUTDOWN_FUNCTION(default_args);
PHP_MINFO_FUNCTION(default_args);

ZEND_NAMED_FUNCTION(_wrap_anonymous);
ZEND_NAMED_FUNCTION(_wrap_booltest);
ZEND_NAMED_FUNCTION(_wrap_EnumClass_blah);
ZEND_NAMED_FUNCTION(_wrap_new_EnumClass);
ZEND_NAMED_FUNCTION(_wrap_casts1);
ZEND_NAMED_FUNCTION(_wrap_casts2);
ZEND_NAMED_FUNCTION(_wrap_chartest1);
ZEND_NAMED_FUNCTION(_wrap_chartest2);
ZEND_NAMED_FUNCTION(_wrap_dummy);
ZEND_NAMED_FUNCTION(_wrap_CONST_NUM_set);
ZEND_NAMED_FUNCTION(_wrap_CONST_NUM_get);
ZEND_NAMED_FUNCTION(_wrap_afunction);
ZEND_NAMED_FUNCTION(_wrap_reftest1);
ZEND_NAMED_FUNCTION(_wrap_reftest2);
ZEND_NAMED_FUNCTION(_wrap_Tree_chops);
ZEND_NAMED_FUNCTION(_wrap_Tree_test);
ZEND_NAMED_FUNCTION(_wrap_new_Tree);
ZEND_NAMED_FUNCTION(_wrap_chops);
ZEND_NAMED_FUNCTION(_wrap_Foo_bar2_set);
ZEND_NAMED_FUNCTION(_wrap_Foo_bar2_get);
ZEND_NAMED_FUNCTION(_wrap_Foo_spam_set);
ZEND_NAMED_FUNCTION(_wrap_Foo_spam_get);
ZEND_NAMED_FUNCTION(_wrap_new_Foo);
ZEND_NAMED_FUNCTION(_wrap_Foo_method1);
ZEND_NAMED_FUNCTION(_wrap_Foo_method2);
ZEND_NAMED_FUNCTION(_wrap_Foo_newname);
ZEND_NAMED_FUNCTION(_wrap_Foo_renamed3arg);
ZEND_NAMED_FUNCTION(_wrap_Foo_renamed2arg);
ZEND_NAMED_FUNCTION(_wrap_Foo_renamed1arg);
ZEND_NAMED_FUNCTION(_wrap_new_MyClass1);
ZEND_NAMED_FUNCTION(_wrap_MyClass2_set);
ZEND_NAMED_FUNCTION(_wrap_MyClass2_set2);
ZEND_NAMED_FUNCTION(_wrap_new_MyClass2);
ZEND_NAMED_FUNCTION(_wrap_exceptionspec);
ZEND_NAMED_FUNCTION(_wrap_new_Except);
ZEND_NAMED_FUNCTION(_wrap_Except_exspec);
ZEND_NAMED_FUNCTION(_wrap_Statics_staticmethod);
ZEND_NAMED_FUNCTION(_wrap_new_Statics);
ZEND_NAMED_FUNCTION(_wrap_Tricky_privatedefault);
ZEND_NAMED_FUNCTION(_wrap_Tricky_protectedint);
ZEND_NAMED_FUNCTION(_wrap_Tricky_protecteddouble);
ZEND_NAMED_FUNCTION(_wrap_Tricky_functiondefault);
ZEND_NAMED_FUNCTION(_wrap_Tricky_contrived);
ZEND_NAMED_FUNCTION(_wrap_new_Tricky);
ZEND_NAMED_FUNCTION(_wrap_Klass_val_set);
ZEND_NAMED_FUNCTION(_wrap_Klass_val_get);
ZEND_NAMED_FUNCTION(_wrap_new_Klass);
ZEND_NAMED_FUNCTION(_wrap_constructorcall);
ZEND_NAMED_FUNCTION(_wrap_ConstMethods_coo);
ZEND_NAMED_FUNCTION(_wrap_new_ConstMethods);
ZEND_NAMED_FUNCTION(_wrap_cfunc1);
ZEND_NAMED_FUNCTION(_wrap_cfunc2);
ZEND_NAMED_FUNCTION(_wrap_cfunc3);
ZEND_NAMED_FUNCTION(_wrap_Pointf_x_set);
ZEND_NAMED_FUNCTION(_wrap_Pointf_x_get);
ZEND_NAMED_FUNCTION(_wrap_Pointf_y_set);
ZEND_NAMED_FUNCTION(_wrap_Pointf_y_get);
ZEND_NAMED_FUNCTION(_wrap_new_Pointf);
#endif /* PHP_DEFAULT_ARGS_H */