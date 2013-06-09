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


#define BIT(n) (1ULL << (n))

enum MyEnum {
  kValue = BIT(2)
};


#ifdef __cplusplus
extern "C" {
#endif

SWIGEXPORT jint JNICALL Java_preproc_1constants_1c_preproc_1constants_1cJNI_CONST_1INT1_1get(JNIEnv *jenv, jclass jcls) {
  jint jresult = 0 ;
  int result;
  
  (void)jenv;
  (void)jcls;
  result = (int)(10);
  jresult = (jint)result; 
  return jresult;
}


SWIGEXPORT jint JNICALL Java_preproc_1constants_1c_preproc_1constants_1cJNI_CONST_1INT2_1get(JNIEnv *jenv, jclass jcls) {
  jint jresult = 0 ;
  int result;
  
  (void)jenv;
  (void)jcls;
  result = (int)(0xFF);
  jresult = (jint)result; 
  return jresult;
}


SWIGEXPORT jlong JNICALL Java_preproc_1constants_1c_preproc_1constants_1cJNI_CONST_1UINT1_1get(JNIEnv *jenv, jclass jcls) {
  jlong jresult = 0 ;
  unsigned int result;
  
  (void)jenv;
  (void)jcls;
  result = (unsigned int)(10u);
  jresult = (jlong)result; 
  return jresult;
}


SWIGEXPORT jlong JNICALL Java_preproc_1constants_1c_preproc_1constants_1cJNI_CONST_1UINT2_1get(JNIEnv *jenv, jclass jcls) {
  jlong jresult = 0 ;
  unsigned int result;
  
  (void)jenv;
  (void)jcls;
  result = (unsigned int)(10U);
  jresult = (jlong)result; 
  return jresult;
}


SWIGEXPORT jlong JNICALL Java_preproc_1constants_1c_preproc_1constants_1cJNI_CONST_1UINT3_1get(JNIEnv *jenv, jclass jcls) {
  jlong jresult = 0 ;
  unsigned int result;
  
  (void)jenv;
  (void)jcls;
  result = (unsigned int)(0xFFu);
  jresult = (jlong)result; 
  return jresult;
}


SWIGEXPORT jlong JNICALL Java_preproc_1constants_1c_preproc_1constants_1cJNI_CONST_1UINT4_1get(JNIEnv *jenv, jclass jcls) {
  jlong jresult = 0 ;
  unsigned int result;
  
  (void)jenv;
  (void)jcls;
  result = (unsigned int)(0xFFU);
  jresult = (jlong)result; 
  return jresult;
}


SWIGEXPORT jint JNICALL Java_preproc_1constants_1c_preproc_1constants_1cJNI_CONST_1LONG1_1get(JNIEnv *jenv, jclass jcls) {
  jint jresult = 0 ;
  long result;
  
  (void)jenv;
  (void)jcls;
  result = (long)(10l);
  jresult = (jint)result; 
  return jresult;
}


SWIGEXPORT jint JNICALL Java_preproc_1constants_1c_preproc_1constants_1cJNI_CONST_1LONG2_1get(JNIEnv *jenv, jclass jcls) {
  jint jresult = 0 ;
  long result;
  
  (void)jenv;
  (void)jcls;
  result = (long)(10L);
  jresult = (jint)result; 
  return jresult;
}


SWIGEXPORT jint JNICALL Java_preproc_1constants_1c_preproc_1constants_1cJNI_CONST_1LONG3_1get(JNIEnv *jenv, jclass jcls) {
  jint jresult = 0 ;
  long result;
  
  (void)jenv;
  (void)jcls;
  result = (long)(0xFFl);
  jresult = (jint)result; 
  return jresult;
}


SWIGEXPORT jint JNICALL Java_preproc_1constants_1c_preproc_1constants_1cJNI_CONST_1LONG4_1get(JNIEnv *jenv, jclass jcls) {
  jint jresult = 0 ;
  long result;
  
  (void)jenv;
  (void)jcls;
  result = (long)(0xFFL);
  jresult = (jint)result; 
  return jresult;
}


SWIGEXPORT jlong JNICALL Java_preproc_1constants_1c_preproc_1constants_1cJNI_CONST_1LLONG1_1get(JNIEnv *jenv, jclass jcls) {
  jlong jresult = 0 ;
  long long result;
  
  (void)jenv;
  (void)jcls;
  result = (long long)(10LL);
  jresult = (jlong)result; 
  return jresult;
}


SWIGEXPORT jlong JNICALL Java_preproc_1constants_1c_preproc_1constants_1cJNI_CONST_1LLONG2_1get(JNIEnv *jenv, jclass jcls) {
  jlong jresult = 0 ;
  long long result;
  
  (void)jenv;
  (void)jcls;
  result = (long long)(10ll);
  jresult = (jlong)result; 
  return jresult;
}


SWIGEXPORT jlong JNICALL Java_preproc_1constants_1c_preproc_1constants_1cJNI_CONST_1LLONG3_1get(JNIEnv *jenv, jclass jcls) {
  jlong jresult = 0 ;
  long long result;
  
  (void)jenv;
  (void)jcls;
  result = (long long)(0xFFll);
  jresult = (jlong)result; 
  return jresult;
}


SWIGEXPORT jlong JNICALL Java_preproc_1constants_1c_preproc_1constants_1cJNI_CONST_1LLONG4_1get(JNIEnv *jenv, jclass jcls) {
  jlong jresult = 0 ;
  long long result;
  
  (void)jenv;
  (void)jcls;
  result = (long long)(0xFFLL);
  jresult = (jlong)result; 
  return jresult;
}


SWIGEXPORT jobject JNICALL Java_preproc_1constants_1c_preproc_1constants_1cJNI_CONST_1ULLONG1_1get(JNIEnv *jenv, jclass jcls) {
  jobject jresult = 0 ;
  unsigned long long result;
  
  (void)jenv;
  (void)jcls;
  result = (unsigned long long)(10ull);
  {
    jbyteArray ba = (*jenv)->NewByteArray(jenv, 9);
    jbyte* bae = (*jenv)->GetByteArrayElements(jenv, ba, 0);
    jclass clazz = (*jenv)->FindClass(jenv, "java/math/BigInteger");
    jmethodID mid = (*jenv)->GetMethodID(jenv, clazz, "<init>", "([B)V");
    jobject bigint;
    int i;
    
    bae[0] = 0;
    for(i=1; i<9; i++ ) {
      bae[i] = (jbyte)(result>>8*(8-i));
    }
    
    (*jenv)->ReleaseByteArrayElements(jenv, ba, bae, 0);
    bigint = (*jenv)->NewObject(jenv, clazz, mid, ba);
    jresult = bigint;
  }
  return jresult;
}


SWIGEXPORT jobject JNICALL Java_preproc_1constants_1c_preproc_1constants_1cJNI_CONST_1ULLONG2_1get(JNIEnv *jenv, jclass jcls) {
  jobject jresult = 0 ;
  unsigned long long result;
  
  (void)jenv;
  (void)jcls;
  result = (unsigned long long)(10ULL);
  {
    jbyteArray ba = (*jenv)->NewByteArray(jenv, 9);
    jbyte* bae = (*jenv)->GetByteArrayElements(jenv, ba, 0);
    jclass clazz = (*jenv)->FindClass(jenv, "java/math/BigInteger");
    jmethodID mid = (*jenv)->GetMethodID(jenv, clazz, "<init>", "([B)V");
    jobject bigint;
    int i;
    
    bae[0] = 0;
    for(i=1; i<9; i++ ) {
      bae[i] = (jbyte)(result>>8*(8-i));
    }
    
    (*jenv)->ReleaseByteArrayElements(jenv, ba, bae, 0);
    bigint = (*jenv)->NewObject(jenv, clazz, mid, ba);
    jresult = bigint;
  }
  return jresult;
}


SWIGEXPORT jobject JNICALL Java_preproc_1constants_1c_preproc_1constants_1cJNI_CONST_1ULLONG3_1get(JNIEnv *jenv, jclass jcls) {
  jobject jresult = 0 ;
  unsigned long long result;
  
  (void)jenv;
  (void)jcls;
  result = (unsigned long long)(0xFFull);
  {
    jbyteArray ba = (*jenv)->NewByteArray(jenv, 9);
    jbyte* bae = (*jenv)->GetByteArrayElements(jenv, ba, 0);
    jclass clazz = (*jenv)->FindClass(jenv, "java/math/BigInteger");
    jmethodID mid = (*jenv)->GetMethodID(jenv, clazz, "<init>", "([B)V");
    jobject bigint;
    int i;
    
    bae[0] = 0;
    for(i=1; i<9; i++ ) {
      bae[i] = (jbyte)(result>>8*(8-i));
    }
    
    (*jenv)->ReleaseByteArrayElements(jenv, ba, bae, 0);
    bigint = (*jenv)->NewObject(jenv, clazz, mid, ba);
    jresult = bigint;
  }
  return jresult;
}


SWIGEXPORT jobject JNICALL Java_preproc_1constants_1c_preproc_1constants_1cJNI_CONST_1ULLONG4_1get(JNIEnv *jenv, jclass jcls) {
  jobject jresult = 0 ;
  unsigned long long result;
  
  (void)jenv;
  (void)jcls;
  result = (unsigned long long)(0xFFULL);
  {
    jbyteArray ba = (*jenv)->NewByteArray(jenv, 9);
    jbyte* bae = (*jenv)->GetByteArrayElements(jenv, ba, 0);
    jclass clazz = (*jenv)->FindClass(jenv, "java/math/BigInteger");
    jmethodID mid = (*jenv)->GetMethodID(jenv, clazz, "<init>", "([B)V");
    jobject bigint;
    int i;
    
    bae[0] = 0;
    for(i=1; i<9; i++ ) {
      bae[i] = (jbyte)(result>>8*(8-i));
    }
    
    (*jenv)->ReleaseByteArrayElements(jenv, ba, bae, 0);
    bigint = (*jenv)->NewObject(jenv, clazz, mid, ba);
    jresult = bigint;
  }
  return jresult;
}


SWIGEXPORT jdouble JNICALL Java_preproc_1constants_1c_preproc_1constants_1cJNI_CONST_1DOUBLE1_1get(JNIEnv *jenv, jclass jcls) {
  jdouble jresult = 0 ;
  double result;
  
  (void)jenv;
  (void)jcls;
  result = (double)(10e1);
  jresult = (jdouble)result; 
  return jresult;
}


SWIGEXPORT jdouble JNICALL Java_preproc_1constants_1c_preproc_1constants_1cJNI_CONST_1DOUBLE2_1get(JNIEnv *jenv, jclass jcls) {
  jdouble jresult = 0 ;
  double result;
  
  (void)jenv;
  (void)jcls;
  result = (double)(10E1);
  jresult = (jdouble)result; 
  return jresult;
}


SWIGEXPORT jdouble JNICALL Java_preproc_1constants_1c_preproc_1constants_1cJNI_CONST_1DOUBLE3_1get(JNIEnv *jenv, jclass jcls) {
  jdouble jresult = 0 ;
  double result;
  
  (void)jenv;
  (void)jcls;
  result = (double)(12.3);
  jresult = (jdouble)result; 
  return jresult;
}


SWIGEXPORT jdouble JNICALL Java_preproc_1constants_1c_preproc_1constants_1cJNI_CONST_1DOUBLE4_1get(JNIEnv *jenv, jclass jcls) {
  jdouble jresult = 0 ;
  double result;
  
  (void)jenv;
  (void)jcls;
  result = (double)(12.);
  jresult = (jdouble)result; 
  return jresult;
}


SWIGEXPORT jdouble JNICALL Java_preproc_1constants_1c_preproc_1constants_1cJNI_CONST_1DOUBLE5_1get(JNIEnv *jenv, jclass jcls) {
  jdouble jresult = 0 ;
  double result;
  
  (void)jenv;
  (void)jcls;
  result = (double)(12.3);
  jresult = (jdouble)result; 
  return jresult;
}


SWIGEXPORT jdouble JNICALL Java_preproc_1constants_1c_preproc_1constants_1cJNI_CONST_1DOUBLE6_1get(JNIEnv *jenv, jclass jcls) {
  jdouble jresult = 0 ;
  double result;
  
  (void)jenv;
  (void)jcls;
  result = (double)(12.3);
  jresult = (jdouble)result; 
  return jresult;
}


SWIGEXPORT jint JNICALL Java_preproc_1constants_1c_preproc_1constants_1cJNI_CONST_1BOOL1_1get(JNIEnv *jenv, jclass jcls) {
  jint jresult = 0 ;
  int result;
  
  (void)jenv;
  (void)jcls;
  result = (int)(1);
  jresult = (jint)result; 
  return jresult;
}


SWIGEXPORT jint JNICALL Java_preproc_1constants_1c_preproc_1constants_1cJNI_CONST_1BOOL2_1get(JNIEnv *jenv, jclass jcls) {
  jint jresult = 0 ;
  int result;
  
  (void)jenv;
  (void)jcls;
  result = (int)(0);
  jresult = (jint)result; 
  return jresult;
}


SWIGEXPORT jchar JNICALL Java_preproc_1constants_1c_preproc_1constants_1cJNI_CONST_1CHAR_1get(JNIEnv *jenv, jclass jcls) {
  jchar jresult = 0 ;
  char result;
  
  (void)jenv;
  (void)jcls;
  result = (char)('x');
  jresult = (jchar)result; 
  return jresult;
}


SWIGEXPORT jstring JNICALL Java_preproc_1constants_1c_preproc_1constants_1cJNI_CONST_1STRING1_1get(JNIEnv *jenv, jclass jcls) {
  jstring jresult = 0 ;
  char *result = 0 ;
  
  (void)jenv;
  (void)jcls;
  result = (char *)("const string");
  if (result) jresult = (*jenv)->NewStringUTF(jenv, (const char *)result);
  return jresult;
}


SWIGEXPORT jstring JNICALL Java_preproc_1constants_1c_preproc_1constants_1cJNI_CONST_1STRING2_1get(JNIEnv *jenv, jclass jcls) {
  jstring jresult = 0 ;
  char *result = 0 ;
  
  (void)jenv;
  (void)jcls;
  result = (char *)("const string");
  if (result) jresult = (*jenv)->NewStringUTF(jenv, (const char *)result);
  return jresult;
}


SWIGEXPORT jstring JNICALL Java_preproc_1constants_1c_preproc_1constants_1cJNI_CONST_1STRING3_1get(JNIEnv *jenv, jclass jcls) {
  jstring jresult = 0 ;
  char *result = 0 ;
  
  (void)jenv;
  (void)jcls;
  result = (char *)("log-revprops");
  if (result) jresult = (*jenv)->NewStringUTF(jenv, (const char *)result);
  return jresult;
}


SWIGEXPORT jint JNICALL Java_preproc_1constants_1c_preproc_1constants_1cJNI_INT_1AND_1BOOL_1get(JNIEnv *jenv, jclass jcls) {
  jint jresult = 0 ;
  int result;
  
  (void)jenv;
  (void)jcls;
  result = (int)(0xFF&1);
  jresult = (jint)result; 
  return jresult;
}


SWIGEXPORT jint JNICALL Java_preproc_1constants_1c_preproc_1constants_1cJNI_INT_1AND_1INT_1get(JNIEnv *jenv, jclass jcls) {
  jint jresult = 0 ;
  int result;
  
  (void)jenv;
  (void)jcls;
  result = (int)(0xFF&2);
  jresult = (jint)result; 
  return jresult;
}


SWIGEXPORT jlong JNICALL Java_preproc_1constants_1c_preproc_1constants_1cJNI_INT_1AND_1UINT_1get(JNIEnv *jenv, jclass jcls) {
  jlong jresult = 0 ;
  unsigned int result;
  
  (void)jenv;
  (void)jcls;
  result = (unsigned int)(0xFF&2u);
  jresult = (jlong)result; 
  return jresult;
}


SWIGEXPORT jint JNICALL Java_preproc_1constants_1c_preproc_1constants_1cJNI_INT_1AND_1LONG_1get(JNIEnv *jenv, jclass jcls) {
  jint jresult = 0 ;
  long result;
  
  (void)jenv;
  (void)jcls;
  result = (long)(0xFF&2l);
  jresult = (jint)result; 
  return jresult;
}


SWIGEXPORT jlong JNICALL Java_preproc_1constants_1c_preproc_1constants_1cJNI_INT_1AND_1ULONG_1get(JNIEnv *jenv, jclass jcls) {
  jlong jresult = 0 ;
  unsigned long result;
  
  (void)jenv;
  (void)jcls;
  result = (unsigned long)(0xFF&2ul);
  jresult = (jlong)result; 
  return jresult;
}


SWIGEXPORT jlong JNICALL Java_preproc_1constants_1c_preproc_1constants_1cJNI_INT_1AND_1LLONG_1get(JNIEnv *jenv, jclass jcls) {
  jlong jresult = 0 ;
  long long result;
  
  (void)jenv;
  (void)jcls;
  result = (long long)(0xFF&2ll);
  jresult = (jlong)result; 
  return jresult;
}


SWIGEXPORT jobject JNICALL Java_preproc_1constants_1c_preproc_1constants_1cJNI_INT_1AND_1ULLONG_1get(JNIEnv *jenv, jclass jcls) {
  jobject jresult = 0 ;
  unsigned long long result;
  
  (void)jenv;
  (void)jcls;
  result = (unsigned long long)(0xFF&2ull);
  {
    jbyteArray ba = (*jenv)->NewByteArray(jenv, 9);
    jbyte* bae = (*jenv)->GetByteArrayElements(jenv, ba, 0);
    jclass clazz = (*jenv)->FindClass(jenv, "java/math/BigInteger");
    jmethodID mid = (*jenv)->GetMethodID(jenv, clazz, "<init>", "([B)V");
    jobject bigint;
    int i;
    
    bae[0] = 0;
    for(i=1; i<9; i++ ) {
      bae[i] = (jbyte)(result>>8*(8-i));
    }
    
    (*jenv)->ReleaseByteArrayElements(jenv, ba, bae, 0);
    bigint = (*jenv)->NewObject(jenv, clazz, mid, ba);
    jresult = bigint;
  }
  return jresult;
}


SWIGEXPORT jint JNICALL Java_preproc_1constants_1c_preproc_1constants_1cJNI_BOOL_1AND_1BOOL_1get(JNIEnv *jenv, jclass jcls) {
  jint jresult = 0 ;
  int result;
  
  (void)jenv;
  (void)jcls;
  result = (int)(1&1);
  jresult = (jint)result; 
  return jresult;
}


SWIGEXPORT jint JNICALL Java_preproc_1constants_1c_preproc_1constants_1cJNI_EXPR_1MULTIPLY_1get(JNIEnv *jenv, jclass jcls) {
  jint jresult = 0 ;
  int result;
  
  (void)jenv;
  (void)jcls;
  result = (int)(0xFF*2);
  jresult = (jint)result; 
  return jresult;
}


SWIGEXPORT jint JNICALL Java_preproc_1constants_1c_preproc_1constants_1cJNI_EXPR_1DIVIDE_1get(JNIEnv *jenv, jclass jcls) {
  jint jresult = 0 ;
  int result;
  
  (void)jenv;
  (void)jcls;
  result = (int)(0xFF/2);
  jresult = (jint)result; 
  return jresult;
}


SWIGEXPORT jint JNICALL Java_preproc_1constants_1c_preproc_1constants_1cJNI_EXPR_1PLUS_1get(JNIEnv *jenv, jclass jcls) {
  jint jresult = 0 ;
  int result;
  
  (void)jenv;
  (void)jcls;
  result = (int)(0xFF+2);
  jresult = (jint)result; 
  return jresult;
}


SWIGEXPORT jint JNICALL Java_preproc_1constants_1c_preproc_1constants_1cJNI_EXPR_1MINUS_1get(JNIEnv *jenv, jclass jcls) {
  jint jresult = 0 ;
  int result;
  
  (void)jenv;
  (void)jcls;
  result = (int)(0xFF+2);
  jresult = (jint)result; 
  return jresult;
}


SWIGEXPORT jint JNICALL Java_preproc_1constants_1c_preproc_1constants_1cJNI_EXPR_1LSHIFT_1get(JNIEnv *jenv, jclass jcls) {
  jint jresult = 0 ;
  int result;
  
  (void)jenv;
  (void)jcls;
  result = (int)(0xFF << 2);
  jresult = (jint)result; 
  return jresult;
}


SWIGEXPORT jint JNICALL Java_preproc_1constants_1c_preproc_1constants_1cJNI_EXPR_1RSHIFT_1get(JNIEnv *jenv, jclass jcls) {
  jint jresult = 0 ;
  int result;
  
  (void)jenv;
  (void)jcls;
  result = (int)(0xFF >> 2);
  jresult = (jint)result; 
  return jresult;
}


SWIGEXPORT jint JNICALL Java_preproc_1constants_1c_preproc_1constants_1cJNI_EXPR_1LTE_1get(JNIEnv *jenv, jclass jcls) {
  jint jresult = 0 ;
  int result;
  
  (void)jenv;
  (void)jcls;
  result = (int)(0xFF <= 255);
  jresult = (jint)result; 
  return jresult;
}


SWIGEXPORT jint JNICALL Java_preproc_1constants_1c_preproc_1constants_1cJNI_EXPR_1GTE_1get(JNIEnv *jenv, jclass jcls) {
  jint jresult = 0 ;
  int result;
  
  (void)jenv;
  (void)jcls;
  result = (int)(0xFF >= 255);
  jresult = (jint)result; 
  return jresult;
}


SWIGEXPORT jint JNICALL Java_preproc_1constants_1c_preproc_1constants_1cJNI_EXPR_1INEQUALITY_1get(JNIEnv *jenv, jclass jcls) {
  jint jresult = 0 ;
  int result;
  
  (void)jenv;
  (void)jcls;
  result = (int)(0xFF!=255);
  jresult = (jint)result; 
  return jresult;
}


SWIGEXPORT jint JNICALL Java_preproc_1constants_1c_preproc_1constants_1cJNI_EXPR_1EQUALITY_1get(JNIEnv *jenv, jclass jcls) {
  jint jresult = 0 ;
  int result;
  
  (void)jenv;
  (void)jcls;
  result = (int)(0xFF==255);
  jresult = (jint)result; 
  return jresult;
}


SWIGEXPORT jint JNICALL Java_preproc_1constants_1c_preproc_1constants_1cJNI_EXPR_1AND_1get(JNIEnv *jenv, jclass jcls) {
  jint jresult = 0 ;
  int result;
  
  (void)jenv;
  (void)jcls;
  result = (int)(0xFF&1);
  jresult = (jint)result; 
  return jresult;
}


SWIGEXPORT jint JNICALL Java_preproc_1constants_1c_preproc_1constants_1cJNI_EXPR_1XOR_1get(JNIEnv *jenv, jclass jcls) {
  jint jresult = 0 ;
  int result;
  
  (void)jenv;
  (void)jcls;
  result = (int)(0xFF^1);
  jresult = (jint)result; 
  return jresult;
}


SWIGEXPORT jint JNICALL Java_preproc_1constants_1c_preproc_1constants_1cJNI_EXPR_1OR_1get(JNIEnv *jenv, jclass jcls) {
  jint jresult = 0 ;
  int result;
  
  (void)jenv;
  (void)jcls;
  result = (int)(0xFF|1);
  jresult = (jint)result; 
  return jresult;
}


SWIGEXPORT jint JNICALL Java_preproc_1constants_1c_preproc_1constants_1cJNI_EXPR_1LAND_1get(JNIEnv *jenv, jclass jcls) {
  jint jresult = 0 ;
  int result;
  
  (void)jenv;
  (void)jcls;
  result = (int)(0xFF&&1);
  jresult = (jint)result; 
  return jresult;
}


SWIGEXPORT jint JNICALL Java_preproc_1constants_1c_preproc_1constants_1cJNI_EXPR_1LOR_1get(JNIEnv *jenv, jclass jcls) {
  jint jresult = 0 ;
  int result;
  
  (void)jenv;
  (void)jcls;
  result = (int)(0xFF||1);
  jresult = (jint)result; 
  return jresult;
}


SWIGEXPORT jdouble JNICALL Java_preproc_1constants_1c_preproc_1constants_1cJNI_EXPR_1CONDITIONAL_1get(JNIEnv *jenv, jclass jcls) {
  jdouble jresult = 0 ;
  double result;
  
  (void)jenv;
  (void)jcls;
  result = (double)(1?2:2.2);
  jresult = (jdouble)result; 
  return jresult;
}


SWIGEXPORT jint JNICALL Java_preproc_1constants_1c_preproc_1constants_1cJNI_kValue_1get(JNIEnv *jenv, jclass jcls) {
  jint jresult = 0 ;
  enum MyEnum result;
  
  (void)jenv;
  (void)jcls;
  result = (enum MyEnum)kValue;
  jresult = (jint)result; 
  return jresult;
}


#ifdef __cplusplus
}
#endif

