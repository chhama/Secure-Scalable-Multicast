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


#include <stdlib.h>


struct Foo {
  int variable;
#ifdef __cplusplus
    int test() { return -1; }
#endif
};

SWIGINTERN int Foo_test__SWIG_0(struct Foo *self){ return 0; }
SWIGINTERN int Foo_test__SWIG_1(struct Foo *self,int x){ x = 0; return 1; }
SWIGINTERN int Foo_test__SWIG_2(struct Foo *self,char *s){ s = 0; return 2; }
SWIGINTERN double Foo_test__SWIG_3(struct Foo *self,double x,double y){ return x + y; }

typedef struct {
  int variable;
} Bar;

SWIGINTERN Bar *new_Bar(void){
    return (Bar *) malloc(sizeof(Bar));
  }
SWIGINTERN void delete_Bar(Bar *self){
    free(self);
  }

#ifdef __cplusplus
extern "C" {
#endif

SWIGEXPORT void JNICALL Java_overload_1extend_overload_1extendJNI_Foo_1variable_1set(JNIEnv *jenv, jclass jcls, jlong jarg1, jobject jarg1_, jint jarg2) {
  struct Foo *arg1 = (struct Foo *) 0 ;
  int arg2 ;
  
  (void)jenv;
  (void)jcls;
  (void)jarg1_;
  arg1 = *(struct Foo **)&jarg1; 
  arg2 = (int)jarg2; 
  if (arg1) (arg1)->variable = arg2;
}


SWIGEXPORT jint JNICALL Java_overload_1extend_overload_1extendJNI_Foo_1variable_1get(JNIEnv *jenv, jclass jcls, jlong jarg1, jobject jarg1_) {
  jint jresult = 0 ;
  struct Foo *arg1 = (struct Foo *) 0 ;
  int result;
  
  (void)jenv;
  (void)jcls;
  (void)jarg1_;
  arg1 = *(struct Foo **)&jarg1; 
  result = (int) ((arg1)->variable);
  jresult = (jint)result; 
  return jresult;
}


SWIGEXPORT jint JNICALL Java_overload_1extend_overload_1extendJNI_Foo_1test_1_1SWIG_10(JNIEnv *jenv, jclass jcls, jlong jarg1, jobject jarg1_) {
  jint jresult = 0 ;
  struct Foo *arg1 = (struct Foo *) 0 ;
  int result;
  
  (void)jenv;
  (void)jcls;
  (void)jarg1_;
  arg1 = *(struct Foo **)&jarg1; 
  result = (int)Foo_test__SWIG_0(arg1);
  jresult = (jint)result; 
  return jresult;
}


SWIGEXPORT jint JNICALL Java_overload_1extend_overload_1extendJNI_Foo_1test_1_1SWIG_11(JNIEnv *jenv, jclass jcls, jlong jarg1, jobject jarg1_, jint jarg2) {
  jint jresult = 0 ;
  struct Foo *arg1 = (struct Foo *) 0 ;
  int arg2 ;
  int result;
  
  (void)jenv;
  (void)jcls;
  (void)jarg1_;
  arg1 = *(struct Foo **)&jarg1; 
  arg2 = (int)jarg2; 
  result = (int)Foo_test__SWIG_1(arg1,arg2);
  jresult = (jint)result; 
  return jresult;
}


SWIGEXPORT jint JNICALL Java_overload_1extend_overload_1extendJNI_Foo_1test_1_1SWIG_12(JNIEnv *jenv, jclass jcls, jlong jarg1, jobject jarg1_, jstring jarg2) {
  jint jresult = 0 ;
  struct Foo *arg1 = (struct Foo *) 0 ;
  char *arg2 = (char *) 0 ;
  int result;
  
  (void)jenv;
  (void)jcls;
  (void)jarg1_;
  arg1 = *(struct Foo **)&jarg1; 
  arg2 = 0;
  if (jarg2) {
    arg2 = (char *)(*jenv)->GetStringUTFChars(jenv, jarg2, 0);
    if (!arg2) return 0;
  }
  result = (int)Foo_test__SWIG_2(arg1,arg2);
  jresult = (jint)result; 
  if (arg2) (*jenv)->ReleaseStringUTFChars(jenv, jarg2, (const char *)arg2);
  return jresult;
}


SWIGEXPORT jdouble JNICALL Java_overload_1extend_overload_1extendJNI_Foo_1test_1_1SWIG_13(JNIEnv *jenv, jclass jcls, jlong jarg1, jobject jarg1_, jdouble jarg2, jdouble jarg3) {
  jdouble jresult = 0 ;
  struct Foo *arg1 = (struct Foo *) 0 ;
  double arg2 ;
  double arg3 ;
  double result;
  
  (void)jenv;
  (void)jcls;
  arg3=1000;
  (void)jarg1_;
  arg1 = *(struct Foo **)&jarg1; 
  arg2 = (double)jarg2; 
  arg3 = (double)jarg3; 
  result = (double)Foo_test__SWIG_3(arg1,arg2,arg3);
  jresult = (jdouble)result; 
  return jresult;
}


SWIGEXPORT jlong JNICALL Java_overload_1extend_overload_1extendJNI_new_1Foo(JNIEnv *jenv, jclass jcls) {
  jlong jresult = 0 ;
  struct Foo *result = 0 ;
  
  (void)jenv;
  (void)jcls;
  result = (struct Foo *)calloc(1, sizeof(struct Foo));
  *(struct Foo **)&jresult = result; 
  return jresult;
}


SWIGEXPORT void JNICALL Java_overload_1extend_overload_1extendJNI_delete_1Foo(JNIEnv *jenv, jclass jcls, jlong jarg1) {
  struct Foo *arg1 = (struct Foo *) 0 ;
  
  (void)jenv;
  (void)jcls;
  arg1 = *(struct Foo **)&jarg1; 
  free((char *) arg1);
}


SWIGEXPORT jlong JNICALL Java_overload_1extend_overload_1extendJNI_new_1Bar(JNIEnv *jenv, jclass jcls) {
  jlong jresult = 0 ;
  Bar *result = 0 ;
  
  (void)jenv;
  (void)jcls;
  result = (Bar *)new_Bar();
  *(Bar **)&jresult = result; 
  return jresult;
}


SWIGEXPORT void JNICALL Java_overload_1extend_overload_1extendJNI_delete_1Bar(JNIEnv *jenv, jclass jcls, jlong jarg1) {
  Bar *arg1 = (Bar *) 0 ;
  
  (void)jenv;
  (void)jcls;
  arg1 = *(Bar **)&jarg1; 
  delete_Bar(arg1);
}


SWIGEXPORT void JNICALL Java_overload_1extend_overload_1extendJNI_Bar_1variable_1set(JNIEnv *jenv, jclass jcls, jlong jarg1, jobject jarg1_, jint jarg2) {
  Bar *arg1 = (Bar *) 0 ;
  int arg2 ;
  
  (void)jenv;
  (void)jcls;
  (void)jarg1_;
  arg1 = *(Bar **)&jarg1; 
  arg2 = (int)jarg2; 
  if (arg1) (arg1)->variable = arg2;
}


SWIGEXPORT jint JNICALL Java_overload_1extend_overload_1extendJNI_Bar_1variable_1get(JNIEnv *jenv, jclass jcls, jlong jarg1, jobject jarg1_) {
  jint jresult = 0 ;
  Bar *arg1 = (Bar *) 0 ;
  int result;
  
  (void)jenv;
  (void)jcls;
  (void)jarg1_;
  arg1 = *(Bar **)&jarg1; 
  result = (int) ((arg1)->variable);
  jresult = (jint)result; 
  return jresult;
}


#ifdef __cplusplus
}
#endif

