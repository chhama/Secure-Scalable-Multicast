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


#ifdef max
#undef max
#endif


namespace test {
   template<typename T> T max(T a, T b) { return (a > b) ? a : b; }
   template<typename T> class vector { 
	public:
	   vector() { }
          ~vector() { }
           char * blah(T x) {
              return (char *) "vector::blah";
           }
   }; 
}

namespace test2 {
   using namespace test;
}

namespace test3 {
   using test::max;
   using test::vector;
}

using namespace test2;
namespace T4 = test;



namespace test4 {
   using namespace test;
   typedef int Integer;
}



#ifdef __cplusplus
extern "C" {
#endif

SWIGEXPORT jint JNICALL Java_namespace_1template_namespace_1templateJNI_maxint(JNIEnv *jenv, jclass jcls, jint jarg1, jint jarg2) {
  jint jresult = 0 ;
  int arg1 ;
  int arg2 ;
  int result;
  
  (void)jenv;
  (void)jcls;
  arg1 = (int)jarg1; 
  arg2 = (int)jarg2; 
  result = (int)max< int >(arg1,arg2);
  jresult = (jint)result; 
  return jresult;
}


SWIGEXPORT jlong JNICALL Java_namespace_1template_namespace_1templateJNI_new_1vectorint(JNIEnv *jenv, jclass jcls) {
  jlong jresult = 0 ;
  vector< int > *result = 0 ;
  
  (void)jenv;
  (void)jcls;
  result = (vector< int > *)new vector< int >();
  *(vector< int > **)&jresult = result; 
  return jresult;
}


SWIGEXPORT void JNICALL Java_namespace_1template_namespace_1templateJNI_delete_1vectorint(JNIEnv *jenv, jclass jcls, jlong jarg1) {
  vector< int > *arg1 = (vector< int > *) 0 ;
  
  (void)jenv;
  (void)jcls;
  arg1 = *(vector< int > **)&jarg1; 
  delete arg1;
}


SWIGEXPORT jstring JNICALL Java_namespace_1template_namespace_1templateJNI_vectorint_1blah(JNIEnv *jenv, jclass jcls, jlong jarg1, jobject jarg1_, jint jarg2) {
  jstring jresult = 0 ;
  vector< int > *arg1 = (vector< int > *) 0 ;
  int arg2 ;
  char *result = 0 ;
  
  (void)jenv;
  (void)jcls;
  (void)jarg1_;
  arg1 = *(vector< int > **)&jarg1; 
  arg2 = (int)jarg2; 
  result = (char *)(arg1)->blah(arg2);
  if (result) jresult = jenv->NewStringUTF((const char *)result);
  return jresult;
}


SWIGEXPORT jshort JNICALL Java_namespace_1template_namespace_1templateJNI_maxshort(JNIEnv *jenv, jclass jcls, jshort jarg1, jshort jarg2) {
  jshort jresult = 0 ;
  short arg1 ;
  short arg2 ;
  short result;
  
  (void)jenv;
  (void)jcls;
  arg1 = (short)jarg1; 
  arg2 = (short)jarg2; 
  result = (short)test2::SWIGTEMPLATEDISAMBIGUATOR max< short >(arg1,arg2);
  jresult = (jshort)result; 
  return jresult;
}


SWIGEXPORT jlong JNICALL Java_namespace_1template_namespace_1templateJNI_new_1vectorshort(JNIEnv *jenv, jclass jcls) {
  jlong jresult = 0 ;
  test2::vector< short > *result = 0 ;
  
  (void)jenv;
  (void)jcls;
  result = (test2::vector< short > *)new test2::vector< short >();
  *(test2::vector< short > **)&jresult = result; 
  return jresult;
}


SWIGEXPORT void JNICALL Java_namespace_1template_namespace_1templateJNI_delete_1vectorshort(JNIEnv *jenv, jclass jcls, jlong jarg1) {
  test2::vector< short > *arg1 = (test2::vector< short > *) 0 ;
  
  (void)jenv;
  (void)jcls;
  arg1 = *(test2::vector< short > **)&jarg1; 
  delete arg1;
}


SWIGEXPORT jstring JNICALL Java_namespace_1template_namespace_1templateJNI_vectorshort_1blah(JNIEnv *jenv, jclass jcls, jlong jarg1, jobject jarg1_, jshort jarg2) {
  jstring jresult = 0 ;
  test2::vector< short > *arg1 = (test2::vector< short > *) 0 ;
  short arg2 ;
  char *result = 0 ;
  
  (void)jenv;
  (void)jcls;
  (void)jarg1_;
  arg1 = *(test2::vector< short > **)&jarg1; 
  arg2 = (short)jarg2; 
  result = (char *)(arg1)->blah(arg2);
  if (result) jresult = jenv->NewStringUTF((const char *)result);
  return jresult;
}


SWIGEXPORT jint JNICALL Java_namespace_1template_namespace_1templateJNI_maxlong(JNIEnv *jenv, jclass jcls, jint jarg1, jint jarg2) {
  jint jresult = 0 ;
  long arg1 ;
  long arg2 ;
  long result;
  
  (void)jenv;
  (void)jcls;
  arg1 = (long)jarg1; 
  arg2 = (long)jarg2; 
  result = (long)test::SWIGTEMPLATEDISAMBIGUATOR max< long >(arg1,arg2);
  jresult = (jint)result; 
  return jresult;
}


SWIGEXPORT jlong JNICALL Java_namespace_1template_namespace_1templateJNI_new_1vectorlong(JNIEnv *jenv, jclass jcls) {
  jlong jresult = 0 ;
  test::vector< long > *result = 0 ;
  
  (void)jenv;
  (void)jcls;
  result = (test::vector< long > *)new test::vector< long >();
  *(test::vector< long > **)&jresult = result; 
  return jresult;
}


SWIGEXPORT void JNICALL Java_namespace_1template_namespace_1templateJNI_delete_1vectorlong(JNIEnv *jenv, jclass jcls, jlong jarg1) {
  test::vector< long > *arg1 = (test::vector< long > *) 0 ;
  
  (void)jenv;
  (void)jcls;
  arg1 = *(test::vector< long > **)&jarg1; 
  delete arg1;
}


SWIGEXPORT jstring JNICALL Java_namespace_1template_namespace_1templateJNI_vectorlong_1blah(JNIEnv *jenv, jclass jcls, jlong jarg1, jobject jarg1_, jint jarg2) {
  jstring jresult = 0 ;
  test::vector< long > *arg1 = (test::vector< long > *) 0 ;
  long arg2 ;
  char *result = 0 ;
  
  (void)jenv;
  (void)jcls;
  (void)jarg1_;
  arg1 = *(test::vector< long > **)&jarg1; 
  arg2 = (long)jarg2; 
  result = (char *)(arg1)->blah(arg2);
  if (result) jresult = jenv->NewStringUTF((const char *)result);
  return jresult;
}


SWIGEXPORT jint JNICALL Java_namespace_1template_namespace_1templateJNI_maxInteger(JNIEnv *jenv, jclass jcls, jint jarg1, jint jarg2) {
  jint jresult = 0 ;
  int arg1 ;
  int arg2 ;
  int result;
  
  (void)jenv;
  (void)jcls;
  arg1 = (int)jarg1; 
  arg2 = (int)jarg2; 
  result = (int)test4::SWIGTEMPLATEDISAMBIGUATOR max< test4::Integer >(arg1,arg2);
  jresult = (jint)result; 
  return jresult;
}


SWIGEXPORT jlong JNICALL Java_namespace_1template_namespace_1templateJNI_new_1vectorInteger(JNIEnv *jenv, jclass jcls) {
  jlong jresult = 0 ;
  test4::vector< test4::Integer > *result = 0 ;
  
  (void)jenv;
  (void)jcls;
  result = (test4::vector< test4::Integer > *)new test4::vector< test4::Integer >();
  *(test4::vector< test4::Integer > **)&jresult = result; 
  return jresult;
}


SWIGEXPORT void JNICALL Java_namespace_1template_namespace_1templateJNI_delete_1vectorInteger(JNIEnv *jenv, jclass jcls, jlong jarg1) {
  test4::vector< test4::Integer > *arg1 = (test4::vector< test4::Integer > *) 0 ;
  
  (void)jenv;
  (void)jcls;
  arg1 = *(test4::vector< test4::Integer > **)&jarg1; 
  delete arg1;
}


SWIGEXPORT jstring JNICALL Java_namespace_1template_namespace_1templateJNI_vectorInteger_1blah(JNIEnv *jenv, jclass jcls, jlong jarg1, jobject jarg1_, jint jarg2) {
  jstring jresult = 0 ;
  test4::vector< test4::Integer > *arg1 = (test4::vector< test4::Integer > *) 0 ;
  int arg2 ;
  char *result = 0 ;
  
  (void)jenv;
  (void)jcls;
  (void)jarg1_;
  arg1 = *(test4::vector< test4::Integer > **)&jarg1; 
  arg2 = (int)jarg2; 
  result = (char *)(arg1)->blah(arg2);
  if (result) jresult = jenv->NewStringUTF((const char *)result);
  return jresult;
}


#ifdef __cplusplus
}
#endif
