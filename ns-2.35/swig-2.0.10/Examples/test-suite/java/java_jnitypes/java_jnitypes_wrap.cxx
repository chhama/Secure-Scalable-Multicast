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


#ifdef __cplusplus
/* SwigValueWrapper is described in swig.swg */
template<typename T> class SwigValueWrapper {
  struct SwigMovePointer {
    T *ptr;
    SwigMovePointer(T *p) : ptr(p) { }
    ~SwigMovePointer() { delete ptr; }
    SwigMovePointer& operator=(SwigMovePointer& rhs) { T* oldptr = ptr; ptr = 0; delete oldptr; ptr = rhs.ptr; rhs.ptr = 0; return *this; }
  } pointer;
  SwigValueWrapper& operator=(const SwigValueWrapper<T>& rhs);
  SwigValueWrapper(const SwigValueWrapper<T>& rhs);
public:
  SwigValueWrapper() : pointer(0) { }
  SwigValueWrapper& operator=(const T& t) { SwigMovePointer tmp(new T(t)); pointer = tmp; return *this; }
  operator T&() const { return *pointer.ptr; }
  T *operator&() { return pointer.ptr; }
};

template <typename T> T SwigValueInit() {
  return T();
}
#endif

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

  jenv->ExceptionClear();
  excep = jenv->FindClass(except_ptr->java_exception);
  if (excep)
    jenv->ThrowNew(excep, msg);
}


/* Contract support */

#define SWIG_contract_assert(nullreturn, expr, msg) if (!(expr)) {SWIG_JavaThrowException(jenv, SWIG_JavaIllegalArgumentException, msg); return nullreturn; } else



jboolean      jnifunc_bool(jboolean in) { return in; } /* some JVM implementations won't allow overloading of the jboolean type with some of the others on the c++ level */
jchar         jnifunc(jchar in) { return in; }
jbyte         jnifunc(jbyte in) { return in; }
jshort        jnifunc(jshort in) { return in; }
jint          jnifunc(jint in) { return in; }
jlong         jnifunc(jlong in) { return in; }
jfloat        jnifunc(jfloat in) { return in; }
jdouble       jnifunc(jdouble in) { return in; }
jstring       jnifunc(jstring in) { return in; }
jobject       jnifunc(jobject in) { return in; }
jbooleanArray jnifunc(jbooleanArray in) { return in; }
jcharArray    jnifunc(jcharArray in) { return in; }
jbyteArray    jnifunc(jbyteArray in) { return in; }
jshortArray   jnifunc(jshortArray in) { return in; }
jintArray     jnifunc(jintArray in) { return in; }
jlongArray    jnifunc(jlongArray in) { return in; }
jfloatArray   jnifunc(jfloatArray in) { return in; }
jdoubleArray  jnifunc(jdoubleArray in) { return in; }
jobjectArray  jnifunc(jobjectArray in) { return in; }



#ifdef __cplusplus
extern "C" {
#endif

SWIGEXPORT jboolean JNICALL Java_java_1jnitypes_java_1jnitypesJNI_jnifunc_1bool(JNIEnv *jenv, jclass jcls, jboolean jarg1) {
  jboolean jresult = 0 ;
  jboolean arg1 ;
  jboolean result;
  
  (void)jenv;
  (void)jcls;
  arg1 = jarg1; 
  result = jnifunc_bool(arg1);
  jresult = result; 
  return jresult;
}


SWIGEXPORT jchar JNICALL Java_java_1jnitypes_java_1jnitypesJNI_jnifunc_1_1SWIG_10(JNIEnv *jenv, jclass jcls, jchar jarg1) {
  jchar jresult = 0 ;
  jchar arg1 ;
  jchar result;
  
  (void)jenv;
  (void)jcls;
  arg1 = jarg1; 
  result = jnifunc(arg1);
  jresult = result; 
  return jresult;
}


SWIGEXPORT jbyte JNICALL Java_java_1jnitypes_java_1jnitypesJNI_jnifunc_1_1SWIG_11(JNIEnv *jenv, jclass jcls, jbyte jarg1) {
  jbyte jresult = 0 ;
  jbyte arg1 ;
  jbyte result;
  
  (void)jenv;
  (void)jcls;
  arg1 = jarg1; 
  result = jnifunc(arg1);
  jresult = result; 
  return jresult;
}


SWIGEXPORT jshort JNICALL Java_java_1jnitypes_java_1jnitypesJNI_jnifunc_1_1SWIG_12(JNIEnv *jenv, jclass jcls, jshort jarg1) {
  jshort jresult = 0 ;
  jshort arg1 ;
  jshort result;
  
  (void)jenv;
  (void)jcls;
  arg1 = jarg1; 
  result = jnifunc(arg1);
  jresult = result; 
  return jresult;
}


SWIGEXPORT jint JNICALL Java_java_1jnitypes_java_1jnitypesJNI_jnifunc_1_1SWIG_13(JNIEnv *jenv, jclass jcls, jint jarg1) {
  jint jresult = 0 ;
  jint arg1 ;
  jint result;
  
  (void)jenv;
  (void)jcls;
  arg1 = jarg1; 
  result = jnifunc(arg1);
  jresult = result; 
  return jresult;
}


SWIGEXPORT jlong JNICALL Java_java_1jnitypes_java_1jnitypesJNI_jnifunc_1_1SWIG_14(JNIEnv *jenv, jclass jcls, jlong jarg1) {
  jlong jresult = 0 ;
  jlong arg1 ;
  jlong result;
  
  (void)jenv;
  (void)jcls;
  arg1 = jarg1; 
  result = jnifunc(arg1);
  jresult = result; 
  return jresult;
}


SWIGEXPORT jfloat JNICALL Java_java_1jnitypes_java_1jnitypesJNI_jnifunc_1_1SWIG_15(JNIEnv *jenv, jclass jcls, jfloat jarg1) {
  jfloat jresult = 0 ;
  jfloat arg1 ;
  jfloat result;
  
  (void)jenv;
  (void)jcls;
  arg1 = jarg1; 
  result = jnifunc(arg1);
  jresult = result; 
  return jresult;
}


SWIGEXPORT jdouble JNICALL Java_java_1jnitypes_java_1jnitypesJNI_jnifunc_1_1SWIG_16(JNIEnv *jenv, jclass jcls, jdouble jarg1) {
  jdouble jresult = 0 ;
  jdouble arg1 ;
  jdouble result;
  
  (void)jenv;
  (void)jcls;
  arg1 = jarg1; 
  result = jnifunc(arg1);
  jresult = result; 
  return jresult;
}


SWIGEXPORT jstring JNICALL Java_java_1jnitypes_java_1jnitypesJNI_jnifunc_1_1SWIG_17(JNIEnv *jenv, jclass jcls, jstring jarg1) {
  jstring jresult = 0 ;
  jstring arg1 ;
  jstring result;
  
  (void)jenv;
  (void)jcls;
  arg1 = jarg1; 
  result = jnifunc(arg1);
  jresult = result; 
  return jresult;
}


SWIGEXPORT jobject JNICALL Java_java_1jnitypes_java_1jnitypesJNI_jnifunc_1_1SWIG_18(JNIEnv *jenv, jclass jcls, jobject jarg1) {
  jobject jresult = 0 ;
  jobject arg1 ;
  jobject result;
  
  (void)jenv;
  (void)jcls;
  arg1 = jarg1; 
  result = jnifunc(arg1);
  jresult = result; 
  return jresult;
}


SWIGEXPORT jbooleanArray JNICALL Java_java_1jnitypes_java_1jnitypesJNI_jnifunc_1_1SWIG_19(JNIEnv *jenv, jclass jcls, jbooleanArray jarg1) {
  jbooleanArray jresult = 0 ;
  jbooleanArray arg1 ;
  jbooleanArray result;
  
  (void)jenv;
  (void)jcls;
  arg1 = jarg1; 
  result = jnifunc(arg1);
  jresult = result; 
  return jresult;
}


SWIGEXPORT jcharArray JNICALL Java_java_1jnitypes_java_1jnitypesJNI_jnifunc_1_1SWIG_110(JNIEnv *jenv, jclass jcls, jcharArray jarg1) {
  jcharArray jresult = 0 ;
  jcharArray arg1 ;
  jcharArray result;
  
  (void)jenv;
  (void)jcls;
  arg1 = jarg1; 
  result = jnifunc(arg1);
  jresult = result; 
  return jresult;
}


SWIGEXPORT jbyteArray JNICALL Java_java_1jnitypes_java_1jnitypesJNI_jnifunc_1_1SWIG_111(JNIEnv *jenv, jclass jcls, jbyteArray jarg1) {
  jbyteArray jresult = 0 ;
  jbyteArray arg1 ;
  jbyteArray result;
  
  (void)jenv;
  (void)jcls;
  arg1 = jarg1; 
  result = jnifunc(arg1);
  jresult = result; 
  return jresult;
}


SWIGEXPORT jshortArray JNICALL Java_java_1jnitypes_java_1jnitypesJNI_jnifunc_1_1SWIG_112(JNIEnv *jenv, jclass jcls, jshortArray jarg1) {
  jshortArray jresult = 0 ;
  jshortArray arg1 ;
  jshortArray result;
  
  (void)jenv;
  (void)jcls;
  arg1 = jarg1; 
  result = jnifunc(arg1);
  jresult = result; 
  return jresult;
}


SWIGEXPORT jintArray JNICALL Java_java_1jnitypes_java_1jnitypesJNI_jnifunc_1_1SWIG_113(JNIEnv *jenv, jclass jcls, jintArray jarg1) {
  jintArray jresult = 0 ;
  jintArray arg1 ;
  jintArray result;
  
  (void)jenv;
  (void)jcls;
  arg1 = jarg1; 
  result = jnifunc(arg1);
  jresult = result; 
  return jresult;
}


SWIGEXPORT jlongArray JNICALL Java_java_1jnitypes_java_1jnitypesJNI_jnifunc_1_1SWIG_114(JNIEnv *jenv, jclass jcls, jlongArray jarg1) {
  jlongArray jresult = 0 ;
  jlongArray arg1 ;
  jlongArray result;
  
  (void)jenv;
  (void)jcls;
  arg1 = jarg1; 
  result = jnifunc(arg1);
  jresult = result; 
  return jresult;
}


SWIGEXPORT jfloatArray JNICALL Java_java_1jnitypes_java_1jnitypesJNI_jnifunc_1_1SWIG_115(JNIEnv *jenv, jclass jcls, jfloatArray jarg1) {
  jfloatArray jresult = 0 ;
  jfloatArray arg1 ;
  jfloatArray result;
  
  (void)jenv;
  (void)jcls;
  arg1 = jarg1; 
  result = jnifunc(arg1);
  jresult = result; 
  return jresult;
}


SWIGEXPORT jdoubleArray JNICALL Java_java_1jnitypes_java_1jnitypesJNI_jnifunc_1_1SWIG_116(JNIEnv *jenv, jclass jcls, jdoubleArray jarg1) {
  jdoubleArray jresult = 0 ;
  jdoubleArray arg1 ;
  jdoubleArray result;
  
  (void)jenv;
  (void)jcls;
  arg1 = jarg1; 
  result = jnifunc(arg1);
  jresult = result; 
  return jresult;
}


SWIGEXPORT jobjectArray JNICALL Java_java_1jnitypes_java_1jnitypesJNI_jnifunc_1_1SWIG_117(JNIEnv *jenv, jclass jcls, jobjectArray jarg1) {
  jobjectArray jresult = 0 ;
  jobjectArray arg1 ;
  jobjectArray result;
  
  (void)jenv;
  (void)jcls;
  arg1 = jarg1; 
  result = jnifunc(arg1);
  jresult = result; 
  return jresult;
}


#ifdef __cplusplus
}
#endif
