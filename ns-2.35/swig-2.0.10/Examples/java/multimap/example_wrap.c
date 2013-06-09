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


extern int gcd(int x, int y);
extern int gcdmain(int argc, char *argv[]);
extern int count(char *bytes, int len, char c);
extern void capitalize (char *str, int len);
extern void circle (double cx, double cy);
extern int squareCubed (int n, int *OUTPUT);


#ifdef __cplusplus
extern "C" {
#endif

SWIGEXPORT jint JNICALL Java_exampleJNI_gcd(JNIEnv *jenv, jclass jcls, jint jarg1, jint jarg2) {
  jint jresult = 0 ;
  int arg1 ;
  int arg2 ;
  int result;
  
  (void)jenv;
  (void)jcls;
  arg1 = (int)jarg1; 
  arg2 = (int)jarg2; 
  result = (int)gcd(arg1,arg2);
  jresult = (jint)result; 
  return jresult;
}


SWIGEXPORT jint JNICALL Java_exampleJNI_gcdmain(JNIEnv *jenv, jclass jcls, jobjectArray jarg1) {
  jint jresult = 0 ;
  int arg1 ;
  char **arg2 ;
  jstring *jsarray1 ;
  int result;
  
  (void)jenv;
  (void)jcls;
  {
    int i;
    
    arg1 = (*jenv)->GetArrayLength(jenv, jarg1);
    if (arg1 == 0) {
      SWIG_JavaThrowException(jenv, SWIG_JavaIndexOutOfBoundsException, "Array must contain at least 1 element");
      return 0;
    }
    arg2 = (char **) malloc((arg1+1)*sizeof(char *));
    jsarray1 = (jstring *) malloc(arg1*sizeof(jstring));
    for (i = 0; i < arg1; i++) {
      jsarray1[i] = (jstring) (*jenv)->GetObjectArrayElement(jenv, jarg1, i);
      arg2[i] = (char *) (*jenv)->GetStringUTFChars(jenv, jsarray1[i], 0);
    }
    arg2[i] = 0;
  }
  result = (int)gcdmain(arg1,arg2);
  jresult = (jint)result; 
  
  {
    int i;
    for (i = 0; i < arg1; i++) {
      (*jenv)->ReleaseStringUTFChars(jenv, jsarray1[i], arg2[i]);
    }
    free(arg2);
  }
  return jresult;
}


SWIGEXPORT jint JNICALL Java_exampleJNI_count(JNIEnv *jenv, jclass jcls, jstring jarg1, jchar jarg3) {
  jint jresult = 0 ;
  char *arg1 = (char *) 0 ;
  int arg2 ;
  char arg3 ;
  int result;
  
  (void)jenv;
  (void)jcls;
  {
    arg1 = (char *)(*jenv)->GetStringUTFChars(jenv, jarg1, 0);
    arg2 = (*jenv)->GetStringUTFLength(jenv, jarg1);
  }
  arg3 = (char)jarg3; 
  result = (int)count(arg1,arg2,arg3);
  jresult = (jint)result; 
  
  (*jenv)->ReleaseStringUTFChars(jenv, jarg1, arg1);
  
  return jresult;
}


SWIGEXPORT void JNICALL Java_exampleJNI_capitalize(JNIEnv *jenv, jclass jcls, jobjectArray jarg1) {
  char *arg1 = (char *) 0 ;
  int arg2 ;
  jstring js1 ;
  
  (void)jenv;
  (void)jcls;
  {
    int index = 0;
    js1 = (jstring) (*jenv)->GetObjectArrayElement(jenv, jarg1, index);
    arg1 = (char *) (*jenv)->GetStringUTFChars(jenv, js1, 0);
    arg2 = (*jenv)->GetStringUTFLength(jenv, js1);
  }
  capitalize(arg1,arg2);
  {
    jstring newstring = (*jenv)->NewStringUTF(jenv, arg1);
    (*jenv)->SetObjectArrayElement(jenv, jarg1, 0, newstring);
  }
  {
    (*jenv)->ReleaseStringUTFChars(jenv, js1, arg1);
  }
}


SWIGEXPORT void JNICALL Java_exampleJNI_circle(JNIEnv *jenv, jclass jcls, jdouble jarg1, jdouble jarg2) {
  double arg1 ;
  double arg2 ;
  
  (void)jenv;
  (void)jcls;
  arg1 = (double)jarg1; 
  arg2 = (double)jarg2; 
  {
    double a = arg1*arg1 + arg2*arg2;
    if (a > 1.0) {
      SWIG_JavaThrowException(jenv, SWIG_JavaIllegalArgumentException, "cx and cy must be in unit circle");
      return;
    }
  }
  circle(arg1,arg2);
}


#ifdef __cplusplus
}
#endif
