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


struct Test {
  size_t strlen(const char *str, size_t len) {
    return len;
  }
};

typedef char namet[5];
namet var_namet;

typedef char* pchar;
pchar var_pchar;


static char *new_pchar(int nelements) { 
  return new char[nelements]; 
}

static void delete_pchar(char *ary) { 
  delete [] ary; 
}

static char pchar_getitem(char *ary, int index) {
    return ary[index];
}
static void pchar_setitem(char *ary, int index, char value) {
    ary[index] = value;
}


#ifdef __cplusplus
extern "C" {
#endif

SWIGEXPORT jlong JNICALL Java_char_1binary_char_1binaryJNI_Test_1strlen(JNIEnv *jenv, jclass jcls, jlong jarg1, jobject jarg1_, jbyteArray jarg2) {
  jlong jresult = 0 ;
  Test *arg1 = (Test *) 0 ;
  char *arg2 = (char *) 0 ;
  size_t arg3 ;
  size_t result;
  
  (void)jenv;
  (void)jcls;
  (void)jarg1_;
  arg1 = *(Test **)&jarg1; 
  {
    if (jarg2) {
      arg2 = (char *) jenv->GetByteArrayElements(jarg2, 0);
      arg3 = (size_t) jenv->GetArrayLength(jarg2);
    } else {
      arg2 = 0;
      arg3 = 0;
    }
  }
  result = (arg1)->strlen((char const *)arg2,arg3);
  jresult = (jlong)result; 
  {
    if (jarg2) jenv->ReleaseByteArrayElements(jarg2, (jbyte *)arg2, 0);
  }
  
  return jresult;
}


SWIGEXPORT jlong JNICALL Java_char_1binary_char_1binaryJNI_new_1Test(JNIEnv *jenv, jclass jcls) {
  jlong jresult = 0 ;
  Test *result = 0 ;
  
  (void)jenv;
  (void)jcls;
  result = (Test *)new Test();
  *(Test **)&jresult = result; 
  return jresult;
}


SWIGEXPORT void JNICALL Java_char_1binary_char_1binaryJNI_delete_1Test(JNIEnv *jenv, jclass jcls, jlong jarg1) {
  Test *arg1 = (Test *) 0 ;
  
  (void)jenv;
  (void)jcls;
  arg1 = *(Test **)&jarg1; 
  delete arg1;
}


SWIGEXPORT void JNICALL Java_char_1binary_char_1binaryJNI_var_1namet_1set(JNIEnv *jenv, jclass jcls, jstring jarg1) {
  char *arg1 ;
  
  (void)jenv;
  (void)jcls;
  arg1 = 0;
  if (jarg1) {
    arg1 = (char *)jenv->GetStringUTFChars(jarg1, 0);
    if (!arg1) return ;
  }
  {
    if(arg1) {
      strncpy((char*)var_namet, (const char *)arg1, 5-1);
      var_namet[5-1] = 0;
    } else {
      var_namet[0] = 0;
    }
  }
  
  if (arg1) jenv->ReleaseStringUTFChars(jarg1, (const char *)arg1);
}


SWIGEXPORT jstring JNICALL Java_char_1binary_char_1binaryJNI_var_1namet_1get(JNIEnv *jenv, jclass jcls) {
  jstring jresult = 0 ;
  char *result = 0 ;
  
  (void)jenv;
  (void)jcls;
  result = (char *)var_namet;
  if (result) jresult = jenv->NewStringUTF((const char *)result);
  return jresult;
}


SWIGEXPORT void JNICALL Java_char_1binary_char_1binaryJNI_var_1pchar_1set(JNIEnv *jenv, jclass jcls, jstring jarg1) {
  pchar arg1 = (pchar) 0 ;
  
  (void)jenv;
  (void)jcls;
  arg1 = 0;
  if (jarg1) {
    arg1 = (pchar)jenv->GetStringUTFChars(jarg1, 0);
    if (!arg1) return ;
  }
  {
    delete [] var_pchar;
    if (arg1) {
      var_pchar = (pchar) (new char[strlen((const char *)arg1)+1]);
      strcpy((char *)var_pchar, (const char *)arg1);
    } else {
      var_pchar = 0;
    }
  }
  if (arg1) jenv->ReleaseStringUTFChars(jarg1, (const char *)arg1);
}


SWIGEXPORT jstring JNICALL Java_char_1binary_char_1binaryJNI_var_1pchar_1get(JNIEnv *jenv, jclass jcls) {
  jstring jresult = 0 ;
  pchar result;
  
  (void)jenv;
  (void)jcls;
  result = (pchar)var_pchar;
  if (result) jresult = jenv->NewStringUTF((const char *)result);
  return jresult;
}


SWIGEXPORT jlong JNICALL Java_char_1binary_char_1binaryJNI_new_1pchar(JNIEnv *jenv, jclass jcls, jint jarg1) {
  jlong jresult = 0 ;
  int arg1 ;
  char *result = 0 ;
  
  (void)jenv;
  (void)jcls;
  arg1 = (int)jarg1; 
  result = (char *)new_pchar(arg1);
  *(char **)&jresult = result; 
  return jresult;
}


SWIGEXPORT void JNICALL Java_char_1binary_char_1binaryJNI_delete_1pchar(JNIEnv *jenv, jclass jcls, jlong jarg1) {
  char *arg1 = (char *) 0 ;
  
  (void)jenv;
  (void)jcls;
  arg1 = *(char **)&jarg1; 
  delete_pchar(arg1);
  
}


SWIGEXPORT jchar JNICALL Java_char_1binary_char_1binaryJNI_pchar_1getitem(JNIEnv *jenv, jclass jcls, jlong jarg1, jint jarg2) {
  jchar jresult = 0 ;
  char *arg1 = (char *) 0 ;
  int arg2 ;
  char result;
  
  (void)jenv;
  (void)jcls;
  arg1 = *(char **)&jarg1; 
  arg2 = (int)jarg2; 
  result = (char)pchar_getitem(arg1,arg2);
  jresult = (jchar)result; 
  
  return jresult;
}


SWIGEXPORT void JNICALL Java_char_1binary_char_1binaryJNI_pchar_1setitem(JNIEnv *jenv, jclass jcls, jlong jarg1, jint jarg2, jchar jarg3) {
  char *arg1 = (char *) 0 ;
  int arg2 ;
  char arg3 ;
  
  (void)jenv;
  (void)jcls;
  arg1 = *(char **)&jarg1; 
  arg2 = (int)jarg2; 
  arg3 = (char)jarg3; 
  pchar_setitem(arg1,arg2,arg3);
  
}


#ifdef __cplusplus
}
#endif
