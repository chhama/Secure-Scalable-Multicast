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


#include <stdexcept>


#if defined(_MSC_VER)
  #pragma warning(disable: 4290) // C++ exception specification ignored except to indicate a function is not __declspec(nothrow)
#endif


  struct E1 : public std::exception
  {
  };

  struct E2 
  {
  };

  struct Test {
    int foo1() throw(std::bad_exception) { return 0; }
    int foo2() throw(std::logic_error) { return 0; }
    int foo3() throw(E1) { return 0; }
    int foo4() throw(E2) { return 0; }
    // all the STL exceptions...
    void throw_bad_exception()    throw(std::bad_exception)     { throw std::bad_exception(); }
    void throw_domain_error()     throw(std::domain_error)      { throw std::domain_error("oops"); }
    void throw_exception()        throw(std::exception)         { throw std::exception(); }
    void throw_invalid_argument() throw(std::invalid_argument)  { throw std::invalid_argument("oops"); }
    void throw_length_error()     throw(std::length_error)      { throw std::length_error("oops"); }
    void throw_logic_error()      throw(std::logic_error)       { throw std::logic_error("oops"); }
    void throw_out_of_range()     throw(std::out_of_range)      { throw std::out_of_range("oops"); }
    void throw_overflow_error()   throw(std::overflow_error)    { throw std::overflow_error("oops"); }
    void throw_range_error()      throw(std::range_error)       { throw std::range_error("oops"); }
    void throw_runtime_error()    throw(std::runtime_error)     { throw std::runtime_error("oops"); }
    void throw_underflow_error()  throw(std::underflow_error)   { throw std::underflow_error("oops"); }
  };


#ifdef __cplusplus
extern "C" {
#endif

SWIGEXPORT jlong JNICALL Java_li_1std_1except_li_1std_1exceptJNI_new_1E1(JNIEnv *jenv, jclass jcls) {
  jlong jresult = 0 ;
  E1 *result = 0 ;
  
  (void)jenv;
  (void)jcls;
  result = (E1 *)new E1();
  *(E1 **)&jresult = result; 
  return jresult;
}


SWIGEXPORT void JNICALL Java_li_1std_1except_li_1std_1exceptJNI_delete_1E1(JNIEnv *jenv, jclass jcls, jlong jarg1) {
  E1 *arg1 = (E1 *) 0 ;
  
  (void)jenv;
  (void)jcls;
  arg1 = *(E1 **)&jarg1; 
  delete arg1;
}


SWIGEXPORT jlong JNICALL Java_li_1std_1except_li_1std_1exceptJNI_new_1E2(JNIEnv *jenv, jclass jcls) {
  jlong jresult = 0 ;
  E2 *result = 0 ;
  
  (void)jenv;
  (void)jcls;
  result = (E2 *)new E2();
  *(E2 **)&jresult = result; 
  return jresult;
}


SWIGEXPORT void JNICALL Java_li_1std_1except_li_1std_1exceptJNI_delete_1E2(JNIEnv *jenv, jclass jcls, jlong jarg1) {
  E2 *arg1 = (E2 *) 0 ;
  
  (void)jenv;
  (void)jcls;
  arg1 = *(E2 **)&jarg1; 
  delete arg1;
}


SWIGEXPORT jint JNICALL Java_li_1std_1except_li_1std_1exceptJNI_Test_1foo1(JNIEnv *jenv, jclass jcls, jlong jarg1, jobject jarg1_) {
  jint jresult = 0 ;
  Test *arg1 = (Test *) 0 ;
  int result;
  
  (void)jenv;
  (void)jcls;
  (void)jarg1_;
  arg1 = *(Test **)&jarg1; 
  try {
    result = (int)(arg1)->foo1();
  }
  catch(std::bad_exception &_e) {
    SWIG_JavaThrowException(jenv, SWIG_JavaRuntimeException, (&_e)->what());
    return 0;
  }
  
  jresult = (jint)result; 
  return jresult;
}


SWIGEXPORT jint JNICALL Java_li_1std_1except_li_1std_1exceptJNI_Test_1foo2(JNIEnv *jenv, jclass jcls, jlong jarg1, jobject jarg1_) {
  jint jresult = 0 ;
  Test *arg1 = (Test *) 0 ;
  int result;
  
  (void)jenv;
  (void)jcls;
  (void)jarg1_;
  arg1 = *(Test **)&jarg1; 
  try {
    result = (int)(arg1)->foo2();
  }
  catch(std::logic_error &_e) {
    SWIG_JavaThrowException(jenv, SWIG_JavaRuntimeException, (&_e)->what());
    return 0;
  }
  
  jresult = (jint)result; 
  return jresult;
}


SWIGEXPORT jint JNICALL Java_li_1std_1except_li_1std_1exceptJNI_Test_1foo3(JNIEnv *jenv, jclass jcls, jlong jarg1, jobject jarg1_) {
  jint jresult = 0 ;
  Test *arg1 = (Test *) 0 ;
  int result;
  
  (void)jenv;
  (void)jcls;
  (void)jarg1_;
  arg1 = *(Test **)&jarg1; 
  try {
    result = (int)(arg1)->foo3();
  }
  catch(E1 &_e) {
    (void)_e;
    SWIG_JavaThrowException(jenv, SWIG_JavaRuntimeException, "C++ E1 exception thrown");
    return 0; 
  }
  
  jresult = (jint)result; 
  return jresult;
}


SWIGEXPORT jint JNICALL Java_li_1std_1except_li_1std_1exceptJNI_Test_1foo4(JNIEnv *jenv, jclass jcls, jlong jarg1, jobject jarg1_) {
  jint jresult = 0 ;
  Test *arg1 = (Test *) 0 ;
  int result;
  
  (void)jenv;
  (void)jcls;
  (void)jarg1_;
  arg1 = *(Test **)&jarg1; 
  try {
    result = (int)(arg1)->foo4();
  }
  catch(E2 &_e) {
    (void)_e;
    SWIG_JavaThrowException(jenv, SWIG_JavaRuntimeException, "C++ E2 exception thrown");
    return 0; 
  }
  
  jresult = (jint)result; 
  return jresult;
}


SWIGEXPORT void JNICALL Java_li_1std_1except_li_1std_1exceptJNI_Test_1throw_1bad_1exception(JNIEnv *jenv, jclass jcls, jlong jarg1, jobject jarg1_) {
  Test *arg1 = (Test *) 0 ;
  
  (void)jenv;
  (void)jcls;
  (void)jarg1_;
  arg1 = *(Test **)&jarg1; 
  try {
    (arg1)->throw_bad_exception();
  }
  catch(std::bad_exception &_e) {
    SWIG_JavaThrowException(jenv, SWIG_JavaRuntimeException, (&_e)->what());
    return ;
  }
  
}


SWIGEXPORT void JNICALL Java_li_1std_1except_li_1std_1exceptJNI_Test_1throw_1domain_1error(JNIEnv *jenv, jclass jcls, jlong jarg1, jobject jarg1_) {
  Test *arg1 = (Test *) 0 ;
  
  (void)jenv;
  (void)jcls;
  (void)jarg1_;
  arg1 = *(Test **)&jarg1; 
  try {
    (arg1)->throw_domain_error();
  }
  catch(std::domain_error &_e) {
    SWIG_JavaThrowException(jenv, SWIG_JavaRuntimeException, (&_e)->what());
    return ;
  }
  
}


SWIGEXPORT void JNICALL Java_li_1std_1except_li_1std_1exceptJNI_Test_1throw_1exception(JNIEnv *jenv, jclass jcls, jlong jarg1, jobject jarg1_) {
  Test *arg1 = (Test *) 0 ;
  
  (void)jenv;
  (void)jcls;
  (void)jarg1_;
  arg1 = *(Test **)&jarg1; 
  try {
    (arg1)->throw_exception();
  }
  catch(std::exception &_e) {
    SWIG_JavaThrowException(jenv, SWIG_JavaRuntimeException, (&_e)->what());
    return ;
  }
  
}


SWIGEXPORT void JNICALL Java_li_1std_1except_li_1std_1exceptJNI_Test_1throw_1invalid_1argument(JNIEnv *jenv, jclass jcls, jlong jarg1, jobject jarg1_) {
  Test *arg1 = (Test *) 0 ;
  
  (void)jenv;
  (void)jcls;
  (void)jarg1_;
  arg1 = *(Test **)&jarg1; 
  try {
    (arg1)->throw_invalid_argument();
  }
  catch(std::invalid_argument &_e) {
    SWIG_JavaThrowException(jenv, SWIG_JavaIllegalArgumentException, (&_e)->what());
    return ;
  }
  
}


SWIGEXPORT void JNICALL Java_li_1std_1except_li_1std_1exceptJNI_Test_1throw_1length_1error(JNIEnv *jenv, jclass jcls, jlong jarg1, jobject jarg1_) {
  Test *arg1 = (Test *) 0 ;
  
  (void)jenv;
  (void)jcls;
  (void)jarg1_;
  arg1 = *(Test **)&jarg1; 
  try {
    (arg1)->throw_length_error();
  }
  catch(std::length_error &_e) {
    SWIG_JavaThrowException(jenv, SWIG_JavaIndexOutOfBoundsException, (&_e)->what());
    return ;
  }
  
}


SWIGEXPORT void JNICALL Java_li_1std_1except_li_1std_1exceptJNI_Test_1throw_1logic_1error(JNIEnv *jenv, jclass jcls, jlong jarg1, jobject jarg1_) {
  Test *arg1 = (Test *) 0 ;
  
  (void)jenv;
  (void)jcls;
  (void)jarg1_;
  arg1 = *(Test **)&jarg1; 
  try {
    (arg1)->throw_logic_error();
  }
  catch(std::logic_error &_e) {
    SWIG_JavaThrowException(jenv, SWIG_JavaRuntimeException, (&_e)->what());
    return ;
  }
  
}


SWIGEXPORT void JNICALL Java_li_1std_1except_li_1std_1exceptJNI_Test_1throw_1out_1of_1range(JNIEnv *jenv, jclass jcls, jlong jarg1, jobject jarg1_) {
  Test *arg1 = (Test *) 0 ;
  
  (void)jenv;
  (void)jcls;
  (void)jarg1_;
  arg1 = *(Test **)&jarg1; 
  try {
    (arg1)->throw_out_of_range();
  }
  catch(std::out_of_range &_e) {
    SWIG_JavaThrowException(jenv, SWIG_JavaIndexOutOfBoundsException, (&_e)->what());
    return ;
  }
  
}


SWIGEXPORT void JNICALL Java_li_1std_1except_li_1std_1exceptJNI_Test_1throw_1overflow_1error(JNIEnv *jenv, jclass jcls, jlong jarg1, jobject jarg1_) {
  Test *arg1 = (Test *) 0 ;
  
  (void)jenv;
  (void)jcls;
  (void)jarg1_;
  arg1 = *(Test **)&jarg1; 
  try {
    (arg1)->throw_overflow_error();
  }
  catch(std::overflow_error &_e) {
    SWIG_JavaThrowException(jenv, SWIG_JavaArithmeticException, (&_e)->what());
    return ;
  }
  
}


SWIGEXPORT void JNICALL Java_li_1std_1except_li_1std_1exceptJNI_Test_1throw_1range_1error(JNIEnv *jenv, jclass jcls, jlong jarg1, jobject jarg1_) {
  Test *arg1 = (Test *) 0 ;
  
  (void)jenv;
  (void)jcls;
  (void)jarg1_;
  arg1 = *(Test **)&jarg1; 
  try {
    (arg1)->throw_range_error();
  }
  catch(std::range_error &_e) {
    SWIG_JavaThrowException(jenv, SWIG_JavaIndexOutOfBoundsException, (&_e)->what());
    return ;
  }
  
}


SWIGEXPORT void JNICALL Java_li_1std_1except_li_1std_1exceptJNI_Test_1throw_1runtime_1error(JNIEnv *jenv, jclass jcls, jlong jarg1, jobject jarg1_) {
  Test *arg1 = (Test *) 0 ;
  
  (void)jenv;
  (void)jcls;
  (void)jarg1_;
  arg1 = *(Test **)&jarg1; 
  try {
    (arg1)->throw_runtime_error();
  }
  catch(std::runtime_error &_e) {
    SWIG_JavaThrowException(jenv, SWIG_JavaRuntimeException, (&_e)->what());
    return ;
  }
  
}


SWIGEXPORT void JNICALL Java_li_1std_1except_li_1std_1exceptJNI_Test_1throw_1underflow_1error(JNIEnv *jenv, jclass jcls, jlong jarg1, jobject jarg1_) {
  Test *arg1 = (Test *) 0 ;
  
  (void)jenv;
  (void)jcls;
  (void)jarg1_;
  arg1 = *(Test **)&jarg1; 
  try {
    (arg1)->throw_underflow_error();
  }
  catch(std::underflow_error &_e) {
    SWIG_JavaThrowException(jenv, SWIG_JavaArithmeticException, (&_e)->what());
    return ;
  }
  
}


SWIGEXPORT jlong JNICALL Java_li_1std_1except_li_1std_1exceptJNI_new_1Test(JNIEnv *jenv, jclass jcls) {
  jlong jresult = 0 ;
  Test *result = 0 ;
  
  (void)jenv;
  (void)jcls;
  result = (Test *)new Test();
  *(Test **)&jresult = result; 
  return jresult;
}


SWIGEXPORT void JNICALL Java_li_1std_1except_li_1std_1exceptJNI_delete_1Test(JNIEnv *jenv, jclass jcls, jlong jarg1) {
  Test *arg1 = (Test *) 0 ;
  
  (void)jenv;
  (void)jcls;
  arg1 = *(Test **)&jarg1; 
  delete arg1;
}


#ifdef __cplusplus
}
#endif

