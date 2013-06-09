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


// global function tests
char* jaguar(char* a, int b, double c) { return a; }
int lotus(char* aa, int bb, double cc) { return bb; }
double tvr(char* aaa, int bbb, double ccc) { return ccc; }
int ferrari(int bb) { return bb; }

// member function tests
struct SportsCars {
  char* daimler(char* a, int b, double c) { return a; }
  int astonmartin(char* aa, int bb, double cc) { return bb; }
  double bugatti(char* aaa, int bbb, double ccc) { return ccc; }
  int lamborghini(int bb) { return bb; }
};

// constructor tests
struct MiniCooper {
    MiniCooper(char* a, int b, double c) {}
};
struct MorrisMinor {
    MorrisMinor(char* aa, int bb, double cc) {}
};
struct FordAnglia {
    FordAnglia(char* aaa, int bbb, double ccc) {}
};
struct AustinAllegro {
    AustinAllegro(int bb) {}
};


#ifdef __cplusplus
extern "C" {
#endif

SWIGEXPORT jstring JNICALL Java_ignore_1parameter_ignore_1parameterJNI_jaguar(JNIEnv *jenv, jclass jcls, jint jarg2, jdouble jarg3) {
  jstring jresult = 0 ;
  char *arg1 = (char *) 0 ;
  int arg2 ;
  double arg3 ;
  char *result = 0 ;
  
  (void)jenv;
  (void)jcls;
  static const char* hi = "hello"; arg1 = const_cast<char *>(hi);
  arg2 = (int)jarg2; 
  arg3 = (double)jarg3; 
  result = (char *)jaguar(arg1,arg2,arg3);
  if (result) jresult = jenv->NewStringUTF((const char *)result);
  
  return jresult;
}


SWIGEXPORT jint JNICALL Java_ignore_1parameter_ignore_1parameterJNI_lotus(JNIEnv *jenv, jclass jcls, jstring jarg1, jdouble jarg3) {
  jint jresult = 0 ;
  char *arg1 = (char *) 0 ;
  int arg2 ;
  double arg3 ;
  int result;
  
  (void)jenv;
  (void)jcls;
  arg2 = 101;
  arg1 = 0;
  if (jarg1) {
    arg1 = (char *)jenv->GetStringUTFChars(jarg1, 0);
    if (!arg1) return 0;
  }
  arg3 = (double)jarg3; 
  result = (int)lotus(arg1,arg2,arg3);
  jresult = (jint)result; 
  if (arg1) jenv->ReleaseStringUTFChars(jarg1, (const char *)arg1);
  return jresult;
}


SWIGEXPORT jdouble JNICALL Java_ignore_1parameter_ignore_1parameterJNI_tvr(JNIEnv *jenv, jclass jcls, jstring jarg1, jint jarg2) {
  jdouble jresult = 0 ;
  char *arg1 = (char *) 0 ;
  int arg2 ;
  double arg3 ;
  double result;
  
  (void)jenv;
  (void)jcls;
  arg3 = 8.8;
  arg1 = 0;
  if (jarg1) {
    arg1 = (char *)jenv->GetStringUTFChars(jarg1, 0);
    if (!arg1) return 0;
  }
  arg2 = (int)jarg2; 
  result = (double)tvr(arg1,arg2,arg3);
  jresult = (jdouble)result; 
  if (arg1) jenv->ReleaseStringUTFChars(jarg1, (const char *)arg1);
  return jresult;
}


SWIGEXPORT jint JNICALL Java_ignore_1parameter_ignore_1parameterJNI_ferrari(JNIEnv *jenv, jclass jcls) {
  jint jresult = 0 ;
  int arg1 ;
  int result;
  
  (void)jenv;
  (void)jcls;
  arg1 = 101;
  result = (int)ferrari(arg1);
  jresult = (jint)result; 
  return jresult;
}


SWIGEXPORT jstring JNICALL Java_ignore_1parameter_ignore_1parameterJNI_SportsCars_1daimler(JNIEnv *jenv, jclass jcls, jlong jarg1, jobject jarg1_, jint jarg3, jdouble jarg4) {
  jstring jresult = 0 ;
  SportsCars *arg1 = (SportsCars *) 0 ;
  char *arg2 = (char *) 0 ;
  int arg3 ;
  double arg4 ;
  char *result = 0 ;
  
  (void)jenv;
  (void)jcls;
  static const char* hi = "hello"; arg2 = const_cast<char *>(hi);
  (void)jarg1_;
  arg1 = *(SportsCars **)&jarg1; 
  arg3 = (int)jarg3; 
  arg4 = (double)jarg4; 
  result = (char *)(arg1)->daimler(arg2,arg3,arg4);
  if (result) jresult = jenv->NewStringUTF((const char *)result);
  
  return jresult;
}


SWIGEXPORT jint JNICALL Java_ignore_1parameter_ignore_1parameterJNI_SportsCars_1astonmartin(JNIEnv *jenv, jclass jcls, jlong jarg1, jobject jarg1_, jstring jarg2, jdouble jarg4) {
  jint jresult = 0 ;
  SportsCars *arg1 = (SportsCars *) 0 ;
  char *arg2 = (char *) 0 ;
  int arg3 ;
  double arg4 ;
  int result;
  
  (void)jenv;
  (void)jcls;
  arg3 = 101;
  (void)jarg1_;
  arg1 = *(SportsCars **)&jarg1; 
  arg2 = 0;
  if (jarg2) {
    arg2 = (char *)jenv->GetStringUTFChars(jarg2, 0);
    if (!arg2) return 0;
  }
  arg4 = (double)jarg4; 
  result = (int)(arg1)->astonmartin(arg2,arg3,arg4);
  jresult = (jint)result; 
  if (arg2) jenv->ReleaseStringUTFChars(jarg2, (const char *)arg2);
  return jresult;
}


SWIGEXPORT jdouble JNICALL Java_ignore_1parameter_ignore_1parameterJNI_SportsCars_1bugatti(JNIEnv *jenv, jclass jcls, jlong jarg1, jobject jarg1_, jstring jarg2, jint jarg3) {
  jdouble jresult = 0 ;
  SportsCars *arg1 = (SportsCars *) 0 ;
  char *arg2 = (char *) 0 ;
  int arg3 ;
  double arg4 ;
  double result;
  
  (void)jenv;
  (void)jcls;
  arg4 = 8.8;
  (void)jarg1_;
  arg1 = *(SportsCars **)&jarg1; 
  arg2 = 0;
  if (jarg2) {
    arg2 = (char *)jenv->GetStringUTFChars(jarg2, 0);
    if (!arg2) return 0;
  }
  arg3 = (int)jarg3; 
  result = (double)(arg1)->bugatti(arg2,arg3,arg4);
  jresult = (jdouble)result; 
  if (arg2) jenv->ReleaseStringUTFChars(jarg2, (const char *)arg2);
  return jresult;
}


SWIGEXPORT jint JNICALL Java_ignore_1parameter_ignore_1parameterJNI_SportsCars_1lamborghini(JNIEnv *jenv, jclass jcls, jlong jarg1, jobject jarg1_) {
  jint jresult = 0 ;
  SportsCars *arg1 = (SportsCars *) 0 ;
  int arg2 ;
  int result;
  
  (void)jenv;
  (void)jcls;
  arg2 = 101;
  (void)jarg1_;
  arg1 = *(SportsCars **)&jarg1; 
  result = (int)(arg1)->lamborghini(arg2);
  jresult = (jint)result; 
  return jresult;
}


SWIGEXPORT jlong JNICALL Java_ignore_1parameter_ignore_1parameterJNI_new_1SportsCars(JNIEnv *jenv, jclass jcls) {
  jlong jresult = 0 ;
  SportsCars *result = 0 ;
  
  (void)jenv;
  (void)jcls;
  result = (SportsCars *)new SportsCars();
  *(SportsCars **)&jresult = result; 
  return jresult;
}


SWIGEXPORT void JNICALL Java_ignore_1parameter_ignore_1parameterJNI_delete_1SportsCars(JNIEnv *jenv, jclass jcls, jlong jarg1) {
  SportsCars *arg1 = (SportsCars *) 0 ;
  
  (void)jenv;
  (void)jcls;
  arg1 = *(SportsCars **)&jarg1; 
  delete arg1;
}


SWIGEXPORT jlong JNICALL Java_ignore_1parameter_ignore_1parameterJNI_new_1MiniCooper(JNIEnv *jenv, jclass jcls, jint jarg2, jdouble jarg3) {
  jlong jresult = 0 ;
  char *arg1 = (char *) 0 ;
  int arg2 ;
  double arg3 ;
  MiniCooper *result = 0 ;
  
  (void)jenv;
  (void)jcls;
  static const char* hi = "hello"; arg1 = const_cast<char *>(hi);
  arg2 = (int)jarg2; 
  arg3 = (double)jarg3; 
  result = (MiniCooper *)new MiniCooper(arg1,arg2,arg3);
  *(MiniCooper **)&jresult = result; 
  
  return jresult;
}


SWIGEXPORT void JNICALL Java_ignore_1parameter_ignore_1parameterJNI_delete_1MiniCooper(JNIEnv *jenv, jclass jcls, jlong jarg1) {
  MiniCooper *arg1 = (MiniCooper *) 0 ;
  
  (void)jenv;
  (void)jcls;
  arg1 = *(MiniCooper **)&jarg1; 
  delete arg1;
}


SWIGEXPORT jlong JNICALL Java_ignore_1parameter_ignore_1parameterJNI_new_1MorrisMinor(JNIEnv *jenv, jclass jcls, jstring jarg1, jdouble jarg3) {
  jlong jresult = 0 ;
  char *arg1 = (char *) 0 ;
  int arg2 ;
  double arg3 ;
  MorrisMinor *result = 0 ;
  
  (void)jenv;
  (void)jcls;
  arg2 = 101;
  arg1 = 0;
  if (jarg1) {
    arg1 = (char *)jenv->GetStringUTFChars(jarg1, 0);
    if (!arg1) return 0;
  }
  arg3 = (double)jarg3; 
  result = (MorrisMinor *)new MorrisMinor(arg1,arg2,arg3);
  *(MorrisMinor **)&jresult = result; 
  if (arg1) jenv->ReleaseStringUTFChars(jarg1, (const char *)arg1);
  return jresult;
}


SWIGEXPORT void JNICALL Java_ignore_1parameter_ignore_1parameterJNI_delete_1MorrisMinor(JNIEnv *jenv, jclass jcls, jlong jarg1) {
  MorrisMinor *arg1 = (MorrisMinor *) 0 ;
  
  (void)jenv;
  (void)jcls;
  arg1 = *(MorrisMinor **)&jarg1; 
  delete arg1;
}


SWIGEXPORT jlong JNICALL Java_ignore_1parameter_ignore_1parameterJNI_new_1FordAnglia(JNIEnv *jenv, jclass jcls, jstring jarg1, jint jarg2) {
  jlong jresult = 0 ;
  char *arg1 = (char *) 0 ;
  int arg2 ;
  double arg3 ;
  FordAnglia *result = 0 ;
  
  (void)jenv;
  (void)jcls;
  arg3 = 8.8;
  arg1 = 0;
  if (jarg1) {
    arg1 = (char *)jenv->GetStringUTFChars(jarg1, 0);
    if (!arg1) return 0;
  }
  arg2 = (int)jarg2; 
  result = (FordAnglia *)new FordAnglia(arg1,arg2,arg3);
  *(FordAnglia **)&jresult = result; 
  if (arg1) jenv->ReleaseStringUTFChars(jarg1, (const char *)arg1);
  return jresult;
}


SWIGEXPORT void JNICALL Java_ignore_1parameter_ignore_1parameterJNI_delete_1FordAnglia(JNIEnv *jenv, jclass jcls, jlong jarg1) {
  FordAnglia *arg1 = (FordAnglia *) 0 ;
  
  (void)jenv;
  (void)jcls;
  arg1 = *(FordAnglia **)&jarg1; 
  delete arg1;
}


SWIGEXPORT jlong JNICALL Java_ignore_1parameter_ignore_1parameterJNI_new_1AustinAllegro(JNIEnv *jenv, jclass jcls) {
  jlong jresult = 0 ;
  int arg1 ;
  AustinAllegro *result = 0 ;
  
  (void)jenv;
  (void)jcls;
  arg1 = 101;
  result = (AustinAllegro *)new AustinAllegro(arg1);
  *(AustinAllegro **)&jresult = result; 
  return jresult;
}


SWIGEXPORT void JNICALL Java_ignore_1parameter_ignore_1parameterJNI_delete_1AustinAllegro(JNIEnv *jenv, jclass jcls, jlong jarg1) {
  AustinAllegro *arg1 = (AustinAllegro *) 0 ;
  
  (void)jenv;
  (void)jcls;
  arg1 = *(AustinAllegro **)&jarg1; 
  delete arg1;
}


#ifdef __cplusplus
}
#endif
