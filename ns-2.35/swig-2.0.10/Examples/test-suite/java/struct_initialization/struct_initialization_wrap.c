/* ----------------------------------------------------------------------------
 * This file was automatically generated by SWIG (http://www.swig.org).
 * Version 2.0.10
 * 
 * This file is not intended to be easily readable and contains a number of 
 * coding conventions designed to improve portability and efficiency. Do not make
 * changes to this file unless you know what you are doing--modify the SWIG 
 * interface file instead. 
 * ----------------------------------------------------------------------------- */

#define SWIGJAVA

/* -----------------------------------------------------------------------------
 *  This section contains generic SWIG labels for method/variable
 *  declarations/attributes, and other compiler dependent labels.
 * ----------------------------------------------------------------------------- */

/* template workaround for compilers that cannot correctly implement the C++ standard */
#ifndef SWIGTEMPLATEDISAMBIGUATOR
# if defined(__SUNPRO_CC) && (__SUNPRO_CC <= 0x560)
#  define SWIGTEMPLATEDISAMBIGUATOR template
# elif defined(__HP_aCC)
/* Needed even with `aCC -AA' when `aCC -V' reports HP ANSI C++ B3910B A.03.55 */
/* If we find a maximum version that requires this, the test would be __HP_aCC <= 35500 for A.03.55 */
#  define SWIGTEMPLATEDISAMBIGUATOR template
# else
#  define SWIGTEMPLATEDISAMBIGUATOR
# endif
#endif

/* inline attribute */
#ifndef SWIGINLINE
# if defined(__cplusplus) || (defined(__GNUC__) && !defined(__STRICT_ANSI__))
#   define SWIGINLINE inline
# else
#   define SWIGINLINE
# endif
#endif

/* attribute recognised by some compilers to avoid 'unused' warnings */
#ifndef SWIGUNUSED
# if defined(__GNUC__)
#   if !(defined(__cplusplus)) || (__GNUC__ > 3 || (__GNUC__ == 3 && __GNUC_MINOR__ >= 4))
#     define SWIGUNUSED __attribute__ ((__unused__)) 
#   else
#     define SWIGUNUSED
#   endif
# elif defined(__ICC)
#   define SWIGUNUSED __attribute__ ((__unused__)) 
# else
#   define SWIGUNUSED 
# endif
#endif

#ifndef SWIG_MSC_UNSUPPRESS_4505
# if defined(_MSC_VER)
#   pragma warning(disable : 4505) /* unreferenced local function has been removed */
# endif 
#endif

#ifndef SWIGUNUSEDPARM
# ifdef __cplusplus
#   define SWIGUNUSEDPARM(p)
# else
#   define SWIGUNUSEDPARM(p) p SWIGUNUSED 
# endif
#endif

/* internal SWIG method */
#ifndef SWIGINTERN
# define SWIGINTERN static SWIGUNUSED
#endif

/* internal inline SWIG method */
#ifndef SWIGINTERNINLINE
# define SWIGINTERNINLINE SWIGINTERN SWIGINLINE
#endif

/* exporting methods */
#if (__GNUC__ >= 4) || (__GNUC__ == 3 && __GNUC_MINOR__ >= 4)
#  ifndef GCC_HASCLASSVISIBILITY
#    define GCC_HASCLASSVISIBILITY
#  endif
#endif

#ifndef SWIGEXPORT
# if defined(_WIN32) || defined(__WIN32__) || defined(__CYGWIN__)
#   if defined(STATIC_LINKED)
#     define SWIGEXPORT
#   else
#     define SWIGEXPORT __declspec(dllexport)
#   endif
# else
#   if defined(__GNUC__) && defined(GCC_HASCLASSVISIBILITY)
#     define SWIGEXPORT __attribute__ ((visibility("default")))
#   else
#     define SWIGEXPORT
#   endif
# endif
#endif

/* calling conventions for Windows */
#ifndef SWIGSTDCALL
# if defined(_WIN32) || defined(__WIN32__) || defined(__CYGWIN__)
#   define SWIGSTDCALL __stdcall
# else
#   define SWIGSTDCALL
# endif 
#endif

/* Deal with Microsoft's attempt at deprecating C standard runtime functions */
#if !defined(SWIG_NO_CRT_SECURE_NO_DEPRECATE) && defined(_MSC_VER) && !defined(_CRT_SECURE_NO_DEPRECATE)
# define _CRT_SECURE_NO_DEPRECATE
#endif

/* Deal with Microsoft's attempt at deprecating methods in the standard C++ library */
#if !defined(SWIG_NO_SCL_SECURE_NO_DEPRECATE) && defined(_MSC_VER) && !defined(_SCL_SECURE_NO_DEPRECATE)
# define _SCL_SECURE_NO_DEPRECATE
#endif



/* Fix for jlong on some versions of gcc on Windows */
#if defined(__GNUC__) && !defined(__INTEL_COMPILER)
  typedef long long __int64;
#endif

/* Fix for jlong on 64-bit x86 Solaris */
#if defined(__x86_64)
# ifdef _LP64
#   undef _LP64
# endif
#endif

#include <jni.h>
#include <stdlib.h>
#include <string.h>


/* Support for throwing Java exceptions */
typedef enum {
  SWIG_JavaOutOfMemoryError = 1, 
  SWIG_JavaIOException, 
  SWIG_JavaRuntimeException, 
  SWIG_JavaIndexOutOfBoundsException,
  SWIG_JavaArithmeticException,
  SWIG_JavaIllegalArgumentException,
  SWIG_JavaNullPointerException,
  SWIG_JavaDirectorPureVirtual,
  SWIG_JavaUnknownError
} SWIG_JavaExceptionCodes;

typedef struct {
  SWIG_JavaExceptionCodes code;
  const char *java_exception;
} SWIG_JavaExceptions_t;


static void SWIGUNUSED SWIG_JavaThrowException(JNIEnv *jenv, SWIG_JavaExceptionCodes code, const char *msg) {
  jclass excep;
  static const SWIG_JavaExceptions_t java_exceptions[] = {
    { SWIG_JavaOutOfMemoryError, "java/lang/OutOfMemoryError" },
    { SWIG_JavaIOException, "java/io/IOException" },
    { SWIG_JavaRuntimeException, "java/lang/RuntimeException" },
    { SWIG_JavaIndexOutOfBoundsException, "java/lang/IndexOutOfBoundsException" },
    { SWIG_JavaArithmeticException, "java/lang/ArithmeticException" },
    { SWIG_JavaIllegalArgumentException, "java/lang/IllegalArgumentException" },
    { SWIG_JavaNullPointerException, "java/lang/NullPointerException" },
    { SWIG_JavaDirectorPureVirtual, "java/lang/RuntimeException" },
    { SWIG_JavaUnknownError,  "java/lang/UnknownError" },
    { (SWIG_JavaExceptionCodes)0,  "java/lang/UnknownError" }
  };
  const SWIG_JavaExceptions_t *except_ptr = java_exceptions;

  while (except_ptr->code != code && except_ptr->code)
    except_ptr++;

  (*jenv)->ExceptionClear(jenv);
  excep = (*jenv)->FindClass(jenv, except_ptr->java_exception);
  if (excep)
    (*jenv)->ThrowNew(jenv, excep, msg);
}


/* Contract support */

#define SWIG_contract_assert(nullreturn, expr, msg) if (!(expr)) {SWIG_JavaThrowException(jenv, SWIG_JavaIllegalArgumentException, msg); return nullreturn; } else



// Named types
struct StructA {
   int x;
} instanceA1;

struct StructB {
   int x;
} instanceB1, instanceB2, instanceB3;

struct StructC {
   int x;
} instanceC1 = { 10 };

struct StructD {
   int x;
} instanceD1 = { 10 }, instanceD2 = { 20 }, instanceD3 = { 30 };

struct StructE {
   int x;
} instanceE1[3] = { { 1 }, { 2 }, { 3} };

struct StructF {
   int x;
} instanceF1[3] = { { 1 }, { 2 } }, instanceF2[2] = { { -1 }, { -2 } }, instanceF3[2] = { { 11 }, { 22 } };



#ifdef __cplusplus
extern "C" {
#endif

SWIGEXPORT void JNICALL Java_struct_1initialization_struct_1initializationJNI_StructA_1x_1set(JNIEnv *jenv, jclass jcls, jlong jarg1, jobject jarg1_, jint jarg2) {
  struct StructA *arg1 = (struct StructA *) 0 ;
  int arg2 ;
  
  (void)jenv;
  (void)jcls;
  (void)jarg1_;
  arg1 = *(struct StructA **)&jarg1; 
  arg2 = (int)jarg2; 
  if (arg1) (arg1)->x = arg2;
}


SWIGEXPORT jint JNICALL Java_struct_1initialization_struct_1initializationJNI_StructA_1x_1get(JNIEnv *jenv, jclass jcls, jlong jarg1, jobject jarg1_) {
  jint jresult = 0 ;
  struct StructA *arg1 = (struct StructA *) 0 ;
  int result;
  
  (void)jenv;
  (void)jcls;
  (void)jarg1_;
  arg1 = *(struct StructA **)&jarg1; 
  result = (int) ((arg1)->x);
  jresult = (jint)result; 
  return jresult;
}


SWIGEXPORT jlong JNICALL Java_struct_1initialization_struct_1initializationJNI_new_1StructA(JNIEnv *jenv, jclass jcls) {
  jlong jresult = 0 ;
  struct StructA *result = 0 ;
  
  (void)jenv;
  (void)jcls;
  result = (struct StructA *)calloc(1, sizeof(struct StructA));
  *(struct StructA **)&jresult = result; 
  return jresult;
}


SWIGEXPORT void JNICALL Java_struct_1initialization_struct_1initializationJNI_delete_1StructA(JNIEnv *jenv, jclass jcls, jlong jarg1) {
  struct StructA *arg1 = (struct StructA *) 0 ;
  
  (void)jenv;
  (void)jcls;
  arg1 = *(struct StructA **)&jarg1; 
  free((char *) arg1);
}


SWIGEXPORT void JNICALL Java_struct_1initialization_struct_1initializationJNI_instanceA1_1set(JNIEnv *jenv, jclass jcls, jlong jarg1, jobject jarg1_) {
  struct StructA *arg1 = (struct StructA *) 0 ;
  
  (void)jenv;
  (void)jcls;
  (void)jarg1_;
  arg1 = *(struct StructA **)&jarg1; 
  instanceA1 = *arg1;
}


SWIGEXPORT jlong JNICALL Java_struct_1initialization_struct_1initializationJNI_instanceA1_1get(JNIEnv *jenv, jclass jcls) {
  jlong jresult = 0 ;
  struct StructA *result = 0 ;
  
  (void)jenv;
  (void)jcls;
  result = (struct StructA *)&instanceA1;
  *(struct StructA **)&jresult = result; 
  return jresult;
}


SWIGEXPORT void JNICALL Java_struct_1initialization_struct_1initializationJNI_StructB_1x_1set(JNIEnv *jenv, jclass jcls, jlong jarg1, jobject jarg1_, jint jarg2) {
  struct StructB *arg1 = (struct StructB *) 0 ;
  int arg2 ;
  
  (void)jenv;
  (void)jcls;
  (void)jarg1_;
  arg1 = *(struct StructB **)&jarg1; 
  arg2 = (int)jarg2; 
  if (arg1) (arg1)->x = arg2;
}


SWIGEXPORT jint JNICALL Java_struct_1initialization_struct_1initializationJNI_StructB_1x_1get(JNIEnv *jenv, jclass jcls, jlong jarg1, jobject jarg1_) {
  jint jresult = 0 ;
  struct StructB *arg1 = (struct StructB *) 0 ;
  int result;
  
  (void)jenv;
  (void)jcls;
  (void)jarg1_;
  arg1 = *(struct StructB **)&jarg1; 
  result = (int) ((arg1)->x);
  jresult = (jint)result; 
  return jresult;
}


SWIGEXPORT jlong JNICALL Java_struct_1initialization_struct_1initializationJNI_new_1StructB(JNIEnv *jenv, jclass jcls) {
  jlong jresult = 0 ;
  struct StructB *result = 0 ;
  
  (void)jenv;
  (void)jcls;
  result = (struct StructB *)calloc(1, sizeof(struct StructB));
  *(struct StructB **)&jresult = result; 
  return jresult;
}


SWIGEXPORT void JNICALL Java_struct_1initialization_struct_1initializationJNI_delete_1StructB(JNIEnv *jenv, jclass jcls, jlong jarg1) {
  struct StructB *arg1 = (struct StructB *) 0 ;
  
  (void)jenv;
  (void)jcls;
  arg1 = *(struct StructB **)&jarg1; 
  free((char *) arg1);
}


SWIGEXPORT void JNICALL Java_struct_1initialization_struct_1initializationJNI_instanceB1_1set(JNIEnv *jenv, jclass jcls, jlong jarg1, jobject jarg1_) {
  struct StructB *arg1 = (struct StructB *) 0 ;
  
  (void)jenv;
  (void)jcls;
  (void)jarg1_;
  arg1 = *(struct StructB **)&jarg1; 
  instanceB1 = *arg1;
}


SWIGEXPORT jlong JNICALL Java_struct_1initialization_struct_1initializationJNI_instanceB1_1get(JNIEnv *jenv, jclass jcls) {
  jlong jresult = 0 ;
  struct StructB *result = 0 ;
  
  (void)jenv;
  (void)jcls;
  result = (struct StructB *)&instanceB1;
  *(struct StructB **)&jresult = result; 
  return jresult;
}


SWIGEXPORT void JNICALL Java_struct_1initialization_struct_1initializationJNI_instanceB2_1set(JNIEnv *jenv, jclass jcls, jlong jarg1, jobject jarg1_) {
  struct StructB *arg1 = (struct StructB *) 0 ;
  
  (void)jenv;
  (void)jcls;
  (void)jarg1_;
  arg1 = *(struct StructB **)&jarg1; 
  instanceB2 = *arg1;
}


SWIGEXPORT jlong JNICALL Java_struct_1initialization_struct_1initializationJNI_instanceB2_1get(JNIEnv *jenv, jclass jcls) {
  jlong jresult = 0 ;
  struct StructB *result = 0 ;
  
  (void)jenv;
  (void)jcls;
  result = (struct StructB *)&instanceB2;
  *(struct StructB **)&jresult = result; 
  return jresult;
}


SWIGEXPORT void JNICALL Java_struct_1initialization_struct_1initializationJNI_instanceB3_1set(JNIEnv *jenv, jclass jcls, jlong jarg1, jobject jarg1_) {
  struct StructB *arg1 = (struct StructB *) 0 ;
  
  (void)jenv;
  (void)jcls;
  (void)jarg1_;
  arg1 = *(struct StructB **)&jarg1; 
  instanceB3 = *arg1;
}


SWIGEXPORT jlong JNICALL Java_struct_1initialization_struct_1initializationJNI_instanceB3_1get(JNIEnv *jenv, jclass jcls) {
  jlong jresult = 0 ;
  struct StructB *result = 0 ;
  
  (void)jenv;
  (void)jcls;
  result = (struct StructB *)&instanceB3;
  *(struct StructB **)&jresult = result; 
  return jresult;
}


SWIGEXPORT void JNICALL Java_struct_1initialization_struct_1initializationJNI_StructC_1x_1set(JNIEnv *jenv, jclass jcls, jlong jarg1, jobject jarg1_, jint jarg2) {
  struct StructC *arg1 = (struct StructC *) 0 ;
  int arg2 ;
  
  (void)jenv;
  (void)jcls;
  (void)jarg1_;
  arg1 = *(struct StructC **)&jarg1; 
  arg2 = (int)jarg2; 
  if (arg1) (arg1)->x = arg2;
}


SWIGEXPORT jint JNICALL Java_struct_1initialization_struct_1initializationJNI_StructC_1x_1get(JNIEnv *jenv, jclass jcls, jlong jarg1, jobject jarg1_) {
  jint jresult = 0 ;
  struct StructC *arg1 = (struct StructC *) 0 ;
  int result;
  
  (void)jenv;
  (void)jcls;
  (void)jarg1_;
  arg1 = *(struct StructC **)&jarg1; 
  result = (int) ((arg1)->x);
  jresult = (jint)result; 
  return jresult;
}


SWIGEXPORT jlong JNICALL Java_struct_1initialization_struct_1initializationJNI_new_1StructC(JNIEnv *jenv, jclass jcls) {
  jlong jresult = 0 ;
  struct StructC *result = 0 ;
  
  (void)jenv;
  (void)jcls;
  result = (struct StructC *)calloc(1, sizeof(struct StructC));
  *(struct StructC **)&jresult = result; 
  return jresult;
}


SWIGEXPORT void JNICALL Java_struct_1initialization_struct_1initializationJNI_delete_1StructC(JNIEnv *jenv, jclass jcls, jlong jarg1) {
  struct StructC *arg1 = (struct StructC *) 0 ;
  
  (void)jenv;
  (void)jcls;
  arg1 = *(struct StructC **)&jarg1; 
  free((char *) arg1);
}


SWIGEXPORT void JNICALL Java_struct_1initialization_struct_1initializationJNI_instanceC1_1set(JNIEnv *jenv, jclass jcls, jlong jarg1, jobject jarg1_) {
  struct StructC *arg1 = (struct StructC *) 0 ;
  
  (void)jenv;
  (void)jcls;
  (void)jarg1_;
  arg1 = *(struct StructC **)&jarg1; 
  instanceC1 = *arg1;
}


SWIGEXPORT jlong JNICALL Java_struct_1initialization_struct_1initializationJNI_instanceC1_1get(JNIEnv *jenv, jclass jcls) {
  jlong jresult = 0 ;
  struct StructC *result = 0 ;
  
  (void)jenv;
  (void)jcls;
  result = (struct StructC *)&instanceC1;
  *(struct StructC **)&jresult = result; 
  return jresult;
}


SWIGEXPORT void JNICALL Java_struct_1initialization_struct_1initializationJNI_StructD_1x_1set(JNIEnv *jenv, jclass jcls, jlong jarg1, jobject jarg1_, jint jarg2) {
  struct StructD *arg1 = (struct StructD *) 0 ;
  int arg2 ;
  
  (void)jenv;
  (void)jcls;
  (void)jarg1_;
  arg1 = *(struct StructD **)&jarg1; 
  arg2 = (int)jarg2; 
  if (arg1) (arg1)->x = arg2;
}


SWIGEXPORT jint JNICALL Java_struct_1initialization_struct_1initializationJNI_StructD_1x_1get(JNIEnv *jenv, jclass jcls, jlong jarg1, jobject jarg1_) {
  jint jresult = 0 ;
  struct StructD *arg1 = (struct StructD *) 0 ;
  int result;
  
  (void)jenv;
  (void)jcls;
  (void)jarg1_;
  arg1 = *(struct StructD **)&jarg1; 
  result = (int) ((arg1)->x);
  jresult = (jint)result; 
  return jresult;
}


SWIGEXPORT jlong JNICALL Java_struct_1initialization_struct_1initializationJNI_new_1StructD(JNIEnv *jenv, jclass jcls) {
  jlong jresult = 0 ;
  struct StructD *result = 0 ;
  
  (void)jenv;
  (void)jcls;
  result = (struct StructD *)calloc(1, sizeof(struct StructD));
  *(struct StructD **)&jresult = result; 
  return jresult;
}


SWIGEXPORT void JNICALL Java_struct_1initialization_struct_1initializationJNI_delete_1StructD(JNIEnv *jenv, jclass jcls, jlong jarg1) {
  struct StructD *arg1 = (struct StructD *) 0 ;
  
  (void)jenv;
  (void)jcls;
  arg1 = *(struct StructD **)&jarg1; 
  free((char *) arg1);
}


SWIGEXPORT void JNICALL Java_struct_1initialization_struct_1initializationJNI_instanceD1_1set(JNIEnv *jenv, jclass jcls, jlong jarg1, jobject jarg1_) {
  struct StructD *arg1 = (struct StructD *) 0 ;
  
  (void)jenv;
  (void)jcls;
  (void)jarg1_;
  arg1 = *(struct StructD **)&jarg1; 
  instanceD1 = *arg1;
}


SWIGEXPORT jlong JNICALL Java_struct_1initialization_struct_1initializationJNI_instanceD1_1get(JNIEnv *jenv, jclass jcls) {
  jlong jresult = 0 ;
  struct StructD *result = 0 ;
  
  (void)jenv;
  (void)jcls;
  result = (struct StructD *)&instanceD1;
  *(struct StructD **)&jresult = result; 
  return jresult;
}


SWIGEXPORT void JNICALL Java_struct_1initialization_struct_1initializationJNI_instanceD2_1set(JNIEnv *jenv, jclass jcls, jlong jarg1, jobject jarg1_) {
  struct StructD *arg1 = (struct StructD *) 0 ;
  
  (void)jenv;
  (void)jcls;
  (void)jarg1_;
  arg1 = *(struct StructD **)&jarg1; 
  instanceD2 = *arg1;
}


SWIGEXPORT jlong JNICALL Java_struct_1initialization_struct_1initializationJNI_instanceD2_1get(JNIEnv *jenv, jclass jcls) {
  jlong jresult = 0 ;
  struct StructD *result = 0 ;
  
  (void)jenv;
  (void)jcls;
  result = (struct StructD *)&instanceD2;
  *(struct StructD **)&jresult = result; 
  return jresult;
}


SWIGEXPORT void JNICALL Java_struct_1initialization_struct_1initializationJNI_instanceD3_1set(JNIEnv *jenv, jclass jcls, jlong jarg1, jobject jarg1_) {
  struct StructD *arg1 = (struct StructD *) 0 ;
  
  (void)jenv;
  (void)jcls;
  (void)jarg1_;
  arg1 = *(struct StructD **)&jarg1; 
  instanceD3 = *arg1;
}


SWIGEXPORT jlong JNICALL Java_struct_1initialization_struct_1initializationJNI_instanceD3_1get(JNIEnv *jenv, jclass jcls) {
  jlong jresult = 0 ;
  struct StructD *result = 0 ;
  
  (void)jenv;
  (void)jcls;
  result = (struct StructD *)&instanceD3;
  *(struct StructD **)&jresult = result; 
  return jresult;
}


SWIGEXPORT void JNICALL Java_struct_1initialization_struct_1initializationJNI_StructE_1x_1set(JNIEnv *jenv, jclass jcls, jlong jarg1, jobject jarg1_, jint jarg2) {
  struct StructE *arg1 = (struct StructE *) 0 ;
  int arg2 ;
  
  (void)jenv;
  (void)jcls;
  (void)jarg1_;
  arg1 = *(struct StructE **)&jarg1; 
  arg2 = (int)jarg2; 
  if (arg1) (arg1)->x = arg2;
}


SWIGEXPORT jint JNICALL Java_struct_1initialization_struct_1initializationJNI_StructE_1x_1get(JNIEnv *jenv, jclass jcls, jlong jarg1, jobject jarg1_) {
  jint jresult = 0 ;
  struct StructE *arg1 = (struct StructE *) 0 ;
  int result;
  
  (void)jenv;
  (void)jcls;
  (void)jarg1_;
  arg1 = *(struct StructE **)&jarg1; 
  result = (int) ((arg1)->x);
  jresult = (jint)result; 
  return jresult;
}


SWIGEXPORT jlong JNICALL Java_struct_1initialization_struct_1initializationJNI_new_1StructE(JNIEnv *jenv, jclass jcls) {
  jlong jresult = 0 ;
  struct StructE *result = 0 ;
  
  (void)jenv;
  (void)jcls;
  result = (struct StructE *)calloc(1, sizeof(struct StructE));
  *(struct StructE **)&jresult = result; 
  return jresult;
}


SWIGEXPORT void JNICALL Java_struct_1initialization_struct_1initializationJNI_delete_1StructE(JNIEnv *jenv, jclass jcls, jlong jarg1) {
  struct StructE *arg1 = (struct StructE *) 0 ;
  
  (void)jenv;
  (void)jcls;
  arg1 = *(struct StructE **)&jarg1; 
  free((char *) arg1);
}


SWIGEXPORT void JNICALL Java_struct_1initialization_struct_1initializationJNI_instanceE1_1set(JNIEnv *jenv, jclass jcls, jlong jarg1, jobject jarg1_) {
  struct StructE *arg1 ;
  
  (void)jenv;
  (void)jcls;
  (void)jarg1_;
  arg1 = *(struct StructE **)&jarg1; 
  {
    size_t ii;
    struct StructE *b = (struct StructE *) instanceE1;
    for (ii = 0; ii < (size_t)3; ii++) b[ii] = *((struct StructE *) arg1 + ii);
  }
  
}


SWIGEXPORT jlong JNICALL Java_struct_1initialization_struct_1initializationJNI_instanceE1_1get(JNIEnv *jenv, jclass jcls) {
  jlong jresult = 0 ;
  struct StructE *result = 0 ;
  
  (void)jenv;
  (void)jcls;
  result = (struct StructE *)(struct StructE *)instanceE1;
  *(struct StructE **)&jresult = result; 
  return jresult;
}


SWIGEXPORT void JNICALL Java_struct_1initialization_struct_1initializationJNI_StructF_1x_1set(JNIEnv *jenv, jclass jcls, jlong jarg1, jobject jarg1_, jint jarg2) {
  struct StructF *arg1 = (struct StructF *) 0 ;
  int arg2 ;
  
  (void)jenv;
  (void)jcls;
  (void)jarg1_;
  arg1 = *(struct StructF **)&jarg1; 
  arg2 = (int)jarg2; 
  if (arg1) (arg1)->x = arg2;
}


SWIGEXPORT jint JNICALL Java_struct_1initialization_struct_1initializationJNI_StructF_1x_1get(JNIEnv *jenv, jclass jcls, jlong jarg1, jobject jarg1_) {
  jint jresult = 0 ;
  struct StructF *arg1 = (struct StructF *) 0 ;
  int result;
  
  (void)jenv;
  (void)jcls;
  (void)jarg1_;
  arg1 = *(struct StructF **)&jarg1; 
  result = (int) ((arg1)->x);
  jresult = (jint)result; 
  return jresult;
}


SWIGEXPORT jlong JNICALL Java_struct_1initialization_struct_1initializationJNI_new_1StructF(JNIEnv *jenv, jclass jcls) {
  jlong jresult = 0 ;
  struct StructF *result = 0 ;
  
  (void)jenv;
  (void)jcls;
  result = (struct StructF *)calloc(1, sizeof(struct StructF));
  *(struct StructF **)&jresult = result; 
  return jresult;
}


SWIGEXPORT void JNICALL Java_struct_1initialization_struct_1initializationJNI_delete_1StructF(JNIEnv *jenv, jclass jcls, jlong jarg1) {
  struct StructF *arg1 = (struct StructF *) 0 ;
  
  (void)jenv;
  (void)jcls;
  arg1 = *(struct StructF **)&jarg1; 
  free((char *) arg1);
}


SWIGEXPORT void JNICALL Java_struct_1initialization_struct_1initializationJNI_instanceF1_1set(JNIEnv *jenv, jclass jcls, jlong jarg1, jobject jarg1_) {
  struct StructF *arg1 ;
  
  (void)jenv;
  (void)jcls;
  (void)jarg1_;
  arg1 = *(struct StructF **)&jarg1; 
  {
    size_t ii;
    struct StructF *b = (struct StructF *) instanceF1;
    for (ii = 0; ii < (size_t)3; ii++) b[ii] = *((struct StructF *) arg1 + ii);
  }
  
}


SWIGEXPORT jlong JNICALL Java_struct_1initialization_struct_1initializationJNI_instanceF1_1get(JNIEnv *jenv, jclass jcls) {
  jlong jresult = 0 ;
  struct StructF *result = 0 ;
  
  (void)jenv;
  (void)jcls;
  result = (struct StructF *)(struct StructF *)instanceF1;
  *(struct StructF **)&jresult = result; 
  return jresult;
}


SWIGEXPORT void JNICALL Java_struct_1initialization_struct_1initializationJNI_instanceF2_1set(JNIEnv *jenv, jclass jcls, jlong jarg1, jobject jarg1_) {
  struct StructF *arg1 ;
  
  (void)jenv;
  (void)jcls;
  (void)jarg1_;
  arg1 = *(struct StructF **)&jarg1; 
  {
    size_t ii;
    struct StructF *b = (struct StructF *) instanceF2;
    for (ii = 0; ii < (size_t)2; ii++) b[ii] = *((struct StructF *) arg1 + ii);
  }
  
}


SWIGEXPORT jlong JNICALL Java_struct_1initialization_struct_1initializationJNI_instanceF2_1get(JNIEnv *jenv, jclass jcls) {
  jlong jresult = 0 ;
  struct StructF *result = 0 ;
  
  (void)jenv;
  (void)jcls;
  result = (struct StructF *)(struct StructF *)instanceF2;
  *(struct StructF **)&jresult = result; 
  return jresult;
}


SWIGEXPORT void JNICALL Java_struct_1initialization_struct_1initializationJNI_instanceF3_1set(JNIEnv *jenv, jclass jcls, jlong jarg1, jobject jarg1_) {
  struct StructF *arg1 ;
  
  (void)jenv;
  (void)jcls;
  (void)jarg1_;
  arg1 = *(struct StructF **)&jarg1; 
  {
    size_t ii;
    struct StructF *b = (struct StructF *) instanceF3;
    for (ii = 0; ii < (size_t)2; ii++) b[ii] = *((struct StructF *) arg1 + ii);
  }
  
}


SWIGEXPORT jlong JNICALL Java_struct_1initialization_struct_1initializationJNI_instanceF3_1get(JNIEnv *jenv, jclass jcls) {
  jlong jresult = 0 ;
  struct StructF *result = 0 ;
  
  (void)jenv;
  (void)jcls;
  result = (struct StructF *)(struct StructF *)instanceF3;
  *(struct StructF **)&jresult = result; 
  return jresult;
}


#ifdef __cplusplus
}
#endif

