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


namespace Space {
  struct SomeType {};
  struct AnotherType {};
  template<typename C, typename D = SomeType, typename E = int> class Bar {
  public:
    C CType;
    D DType;
    E EType;
    Bar(C c, D d, E e) {}
    C method(C c, D d, E e) { return c; }
  };
  template<typename T = SomeType> class Foo {
  public:
    T TType;
    Foo(T t) {}
    T method(T t) { return t; }
  };
  template<typename T = int> class ATemplate {};
}


#ifdef __cplusplus
extern "C" {
#endif

SWIGEXPORT jlong JNICALL Java_template_1default_1class_1parms_template_1default_1class_1parmsJNI_new_1SomeType(JNIEnv *jenv, jclass jcls) {
  jlong jresult = 0 ;
  Space::SomeType *result = 0 ;
  
  (void)jenv;
  (void)jcls;
  result = (Space::SomeType *)new Space::SomeType();
  *(Space::SomeType **)&jresult = result; 
  return jresult;
}


SWIGEXPORT void JNICALL Java_template_1default_1class_1parms_template_1default_1class_1parmsJNI_delete_1SomeType(JNIEnv *jenv, jclass jcls, jlong jarg1) {
  Space::SomeType *arg1 = (Space::SomeType *) 0 ;
  
  (void)jenv;
  (void)jcls;
  arg1 = *(Space::SomeType **)&jarg1; 
  delete arg1;
}


SWIGEXPORT jlong JNICALL Java_template_1default_1class_1parms_template_1default_1class_1parmsJNI_new_1AnotherType(JNIEnv *jenv, jclass jcls) {
  jlong jresult = 0 ;
  Space::AnotherType *result = 0 ;
  
  (void)jenv;
  (void)jcls;
  result = (Space::AnotherType *)new Space::AnotherType();
  *(Space::AnotherType **)&jresult = result; 
  return jresult;
}


SWIGEXPORT void JNICALL Java_template_1default_1class_1parms_template_1default_1class_1parmsJNI_delete_1AnotherType(JNIEnv *jenv, jclass jcls, jlong jarg1) {
  Space::AnotherType *arg1 = (Space::AnotherType *) 0 ;
  
  (void)jenv;
  (void)jcls;
  arg1 = *(Space::AnotherType **)&jarg1; 
  delete arg1;
}


SWIGEXPORT void JNICALL Java_template_1default_1class_1parms_template_1default_1class_1parmsJNI_DefaultBar_1CType_1set(JNIEnv *jenv, jclass jcls, jlong jarg1, jobject jarg1_, jdouble jarg2) {
  Space::Bar< double > *arg1 = (Space::Bar< double > *) 0 ;
  double arg2 ;
  
  (void)jenv;
  (void)jcls;
  (void)jarg1_;
  arg1 = *(Space::Bar< double > **)&jarg1; 
  arg2 = (double)jarg2; 
  if (arg1) (arg1)->CType = arg2;
}


SWIGEXPORT jdouble JNICALL Java_template_1default_1class_1parms_template_1default_1class_1parmsJNI_DefaultBar_1CType_1get(JNIEnv *jenv, jclass jcls, jlong jarg1, jobject jarg1_) {
  jdouble jresult = 0 ;
  Space::Bar< double > *arg1 = (Space::Bar< double > *) 0 ;
  double result;
  
  (void)jenv;
  (void)jcls;
  (void)jarg1_;
  arg1 = *(Space::Bar< double > **)&jarg1; 
  result = (double) ((arg1)->CType);
  jresult = (jdouble)result; 
  return jresult;
}


SWIGEXPORT void JNICALL Java_template_1default_1class_1parms_template_1default_1class_1parmsJNI_DefaultBar_1DType_1set(JNIEnv *jenv, jclass jcls, jlong jarg1, jobject jarg1_, jlong jarg2, jobject jarg2_) {
  Space::Bar< double > *arg1 = (Space::Bar< double > *) 0 ;
  Space::SomeType *arg2 = (Space::SomeType *) 0 ;
  
  (void)jenv;
  (void)jcls;
  (void)jarg1_;
  (void)jarg2_;
  arg1 = *(Space::Bar< double > **)&jarg1; 
  arg2 = *(Space::SomeType **)&jarg2; 
  if (arg1) (arg1)->DType = *arg2;
}


SWIGEXPORT jlong JNICALL Java_template_1default_1class_1parms_template_1default_1class_1parmsJNI_DefaultBar_1DType_1get(JNIEnv *jenv, jclass jcls, jlong jarg1, jobject jarg1_) {
  jlong jresult = 0 ;
  Space::Bar< double > *arg1 = (Space::Bar< double > *) 0 ;
  Space::SomeType *result = 0 ;
  
  (void)jenv;
  (void)jcls;
  (void)jarg1_;
  arg1 = *(Space::Bar< double > **)&jarg1; 
  result = (Space::SomeType *)& ((arg1)->DType);
  *(Space::SomeType **)&jresult = result; 
  return jresult;
}


SWIGEXPORT void JNICALL Java_template_1default_1class_1parms_template_1default_1class_1parmsJNI_DefaultBar_1EType_1set(JNIEnv *jenv, jclass jcls, jlong jarg1, jobject jarg1_, jint jarg2) {
  Space::Bar< double > *arg1 = (Space::Bar< double > *) 0 ;
  int arg2 ;
  
  (void)jenv;
  (void)jcls;
  (void)jarg1_;
  arg1 = *(Space::Bar< double > **)&jarg1; 
  arg2 = (int)jarg2; 
  if (arg1) (arg1)->EType = arg2;
}


SWIGEXPORT jint JNICALL Java_template_1default_1class_1parms_template_1default_1class_1parmsJNI_DefaultBar_1EType_1get(JNIEnv *jenv, jclass jcls, jlong jarg1, jobject jarg1_) {
  jint jresult = 0 ;
  Space::Bar< double > *arg1 = (Space::Bar< double > *) 0 ;
  int result;
  
  (void)jenv;
  (void)jcls;
  (void)jarg1_;
  arg1 = *(Space::Bar< double > **)&jarg1; 
  result = (int) ((arg1)->EType);
  jresult = (jint)result; 
  return jresult;
}


SWIGEXPORT jlong JNICALL Java_template_1default_1class_1parms_template_1default_1class_1parmsJNI_new_1DefaultBar(JNIEnv *jenv, jclass jcls, jdouble jarg1, jlong jarg2, jobject jarg2_, jint jarg3) {
  jlong jresult = 0 ;
  double arg1 ;
  Space::SomeType arg2 ;
  int arg3 ;
  Space::SomeType *argp2 ;
  Space::Bar< double > *result = 0 ;
  
  (void)jenv;
  (void)jcls;
  (void)jarg2_;
  arg1 = (double)jarg1; 
  argp2 = *(Space::SomeType **)&jarg2; 
  if (!argp2) {
    SWIG_JavaThrowException(jenv, SWIG_JavaNullPointerException, "Attempt to dereference null Space::SomeType");
    return 0;
  }
  arg2 = *argp2; 
  arg3 = (int)jarg3; 
  result = (Space::Bar< double > *)new Space::Bar< double >(arg1,arg2,arg3);
  *(Space::Bar< double > **)&jresult = result; 
  return jresult;
}


SWIGEXPORT jdouble JNICALL Java_template_1default_1class_1parms_template_1default_1class_1parmsJNI_DefaultBar_1method(JNIEnv *jenv, jclass jcls, jlong jarg1, jobject jarg1_, jdouble jarg2, jlong jarg3, jobject jarg3_, jint jarg4) {
  jdouble jresult = 0 ;
  Space::Bar< double > *arg1 = (Space::Bar< double > *) 0 ;
  double arg2 ;
  Space::SomeType arg3 ;
  int arg4 ;
  Space::SomeType *argp3 ;
  double result;
  
  (void)jenv;
  (void)jcls;
  (void)jarg1_;
  (void)jarg3_;
  arg1 = *(Space::Bar< double > **)&jarg1; 
  arg2 = (double)jarg2; 
  argp3 = *(Space::SomeType **)&jarg3; 
  if (!argp3) {
    SWIG_JavaThrowException(jenv, SWIG_JavaNullPointerException, "Attempt to dereference null Space::SomeType");
    return 0;
  }
  arg3 = *argp3; 
  arg4 = (int)jarg4; 
  result = (double)(arg1)->method(arg2,arg3,arg4);
  jresult = (jdouble)result; 
  return jresult;
}


SWIGEXPORT void JNICALL Java_template_1default_1class_1parms_template_1default_1class_1parmsJNI_delete_1DefaultBar(JNIEnv *jenv, jclass jcls, jlong jarg1) {
  Space::Bar< double > *arg1 = (Space::Bar< double > *) 0 ;
  
  (void)jenv;
  (void)jcls;
  arg1 = *(Space::Bar< double > **)&jarg1; 
  delete arg1;
}


SWIGEXPORT void JNICALL Java_template_1default_1class_1parms_template_1default_1class_1parmsJNI_DefaultFoo_1TType_1set(JNIEnv *jenv, jclass jcls, jlong jarg1, jobject jarg1_, jlong jarg2, jobject jarg2_) {
  Space::Foo< > *arg1 = (Space::Foo< > *) 0 ;
  Space::SomeType *arg2 = (Space::SomeType *) 0 ;
  
  (void)jenv;
  (void)jcls;
  (void)jarg1_;
  (void)jarg2_;
  arg1 = *(Space::Foo< > **)&jarg1; 
  arg2 = *(Space::SomeType **)&jarg2; 
  if (arg1) (arg1)->TType = *arg2;
}


SWIGEXPORT jlong JNICALL Java_template_1default_1class_1parms_template_1default_1class_1parmsJNI_DefaultFoo_1TType_1get(JNIEnv *jenv, jclass jcls, jlong jarg1, jobject jarg1_) {
  jlong jresult = 0 ;
  Space::Foo< > *arg1 = (Space::Foo< > *) 0 ;
  Space::SomeType *result = 0 ;
  
  (void)jenv;
  (void)jcls;
  (void)jarg1_;
  arg1 = *(Space::Foo< > **)&jarg1; 
  result = (Space::SomeType *)& ((arg1)->TType);
  *(Space::SomeType **)&jresult = result; 
  return jresult;
}


SWIGEXPORT jlong JNICALL Java_template_1default_1class_1parms_template_1default_1class_1parmsJNI_new_1DefaultFoo(JNIEnv *jenv, jclass jcls, jlong jarg1, jobject jarg1_) {
  jlong jresult = 0 ;
  Space::SomeType arg1 ;
  Space::SomeType *argp1 ;
  Space::Foo< > *result = 0 ;
  
  (void)jenv;
  (void)jcls;
  (void)jarg1_;
  argp1 = *(Space::SomeType **)&jarg1; 
  if (!argp1) {
    SWIG_JavaThrowException(jenv, SWIG_JavaNullPointerException, "Attempt to dereference null Space::SomeType");
    return 0;
  }
  arg1 = *argp1; 
  result = (Space::Foo< > *)new Space::Foo< >(arg1);
  *(Space::Foo< > **)&jresult = result; 
  return jresult;
}


SWIGEXPORT jlong JNICALL Java_template_1default_1class_1parms_template_1default_1class_1parmsJNI_DefaultFoo_1method(JNIEnv *jenv, jclass jcls, jlong jarg1, jobject jarg1_, jlong jarg2, jobject jarg2_) {
  jlong jresult = 0 ;
  Space::Foo< > *arg1 = (Space::Foo< > *) 0 ;
  Space::SomeType arg2 ;
  Space::SomeType *argp2 ;
  Space::SomeType result;
  
  (void)jenv;
  (void)jcls;
  (void)jarg1_;
  (void)jarg2_;
  arg1 = *(Space::Foo< > **)&jarg1; 
  argp2 = *(Space::SomeType **)&jarg2; 
  if (!argp2) {
    SWIG_JavaThrowException(jenv, SWIG_JavaNullPointerException, "Attempt to dereference null Space::SomeType");
    return 0;
  }
  arg2 = *argp2; 
  result = (arg1)->method(arg2);
  *(Space::SomeType **)&jresult = new Space::SomeType((const Space::SomeType &)result); 
  return jresult;
}


SWIGEXPORT void JNICALL Java_template_1default_1class_1parms_template_1default_1class_1parmsJNI_delete_1DefaultFoo(JNIEnv *jenv, jclass jcls, jlong jarg1) {
  Space::Foo< > *arg1 = (Space::Foo< > *) 0 ;
  
  (void)jenv;
  (void)jcls;
  arg1 = *(Space::Foo< > **)&jarg1; 
  delete arg1;
}


SWIGEXPORT void JNICALL Java_template_1default_1class_1parms_template_1default_1class_1parmsJNI_BarAnotherTypeBool_1CType_1set(JNIEnv *jenv, jclass jcls, jlong jarg1, jobject jarg1_, jlong jarg2, jobject jarg2_) {
  Space::Bar< Space::AnotherType,bool > *arg1 = (Space::Bar< Space::AnotherType,bool > *) 0 ;
  Space::AnotherType *arg2 = (Space::AnotherType *) 0 ;
  
  (void)jenv;
  (void)jcls;
  (void)jarg1_;
  (void)jarg2_;
  arg1 = *(Space::Bar< Space::AnotherType,bool > **)&jarg1; 
  arg2 = *(Space::AnotherType **)&jarg2; 
  if (arg1) (arg1)->CType = *arg2;
}


SWIGEXPORT jlong JNICALL Java_template_1default_1class_1parms_template_1default_1class_1parmsJNI_BarAnotherTypeBool_1CType_1get(JNIEnv *jenv, jclass jcls, jlong jarg1, jobject jarg1_) {
  jlong jresult = 0 ;
  Space::Bar< Space::AnotherType,bool > *arg1 = (Space::Bar< Space::AnotherType,bool > *) 0 ;
  Space::AnotherType *result = 0 ;
  
  (void)jenv;
  (void)jcls;
  (void)jarg1_;
  arg1 = *(Space::Bar< Space::AnotherType,bool > **)&jarg1; 
  result = (Space::AnotherType *)& ((arg1)->CType);
  *(Space::AnotherType **)&jresult = result; 
  return jresult;
}


SWIGEXPORT void JNICALL Java_template_1default_1class_1parms_template_1default_1class_1parmsJNI_BarAnotherTypeBool_1DType_1set(JNIEnv *jenv, jclass jcls, jlong jarg1, jobject jarg1_, jboolean jarg2) {
  Space::Bar< Space::AnotherType,bool > *arg1 = (Space::Bar< Space::AnotherType,bool > *) 0 ;
  bool arg2 ;
  
  (void)jenv;
  (void)jcls;
  (void)jarg1_;
  arg1 = *(Space::Bar< Space::AnotherType,bool > **)&jarg1; 
  arg2 = jarg2 ? true : false; 
  if (arg1) (arg1)->DType = arg2;
}


SWIGEXPORT jboolean JNICALL Java_template_1default_1class_1parms_template_1default_1class_1parmsJNI_BarAnotherTypeBool_1DType_1get(JNIEnv *jenv, jclass jcls, jlong jarg1, jobject jarg1_) {
  jboolean jresult = 0 ;
  Space::Bar< Space::AnotherType,bool > *arg1 = (Space::Bar< Space::AnotherType,bool > *) 0 ;
  bool result;
  
  (void)jenv;
  (void)jcls;
  (void)jarg1_;
  arg1 = *(Space::Bar< Space::AnotherType,bool > **)&jarg1; 
  result = (bool) ((arg1)->DType);
  jresult = (jboolean)result; 
  return jresult;
}


SWIGEXPORT void JNICALL Java_template_1default_1class_1parms_template_1default_1class_1parmsJNI_BarAnotherTypeBool_1EType_1set(JNIEnv *jenv, jclass jcls, jlong jarg1, jobject jarg1_, jint jarg2) {
  Space::Bar< Space::AnotherType,bool > *arg1 = (Space::Bar< Space::AnotherType,bool > *) 0 ;
  int arg2 ;
  
  (void)jenv;
  (void)jcls;
  (void)jarg1_;
  arg1 = *(Space::Bar< Space::AnotherType,bool > **)&jarg1; 
  arg2 = (int)jarg2; 
  if (arg1) (arg1)->EType = arg2;
}


SWIGEXPORT jint JNICALL Java_template_1default_1class_1parms_template_1default_1class_1parmsJNI_BarAnotherTypeBool_1EType_1get(JNIEnv *jenv, jclass jcls, jlong jarg1, jobject jarg1_) {
  jint jresult = 0 ;
  Space::Bar< Space::AnotherType,bool > *arg1 = (Space::Bar< Space::AnotherType,bool > *) 0 ;
  int result;
  
  (void)jenv;
  (void)jcls;
  (void)jarg1_;
  arg1 = *(Space::Bar< Space::AnotherType,bool > **)&jarg1; 
  result = (int) ((arg1)->EType);
  jresult = (jint)result; 
  return jresult;
}


SWIGEXPORT jlong JNICALL Java_template_1default_1class_1parms_template_1default_1class_1parmsJNI_new_1BarAnotherTypeBool(JNIEnv *jenv, jclass jcls, jlong jarg1, jobject jarg1_, jboolean jarg2, jint jarg3) {
  jlong jresult = 0 ;
  Space::AnotherType arg1 ;
  bool arg2 ;
  int arg3 ;
  Space::AnotherType *argp1 ;
  Space::Bar< Space::AnotherType,bool > *result = 0 ;
  
  (void)jenv;
  (void)jcls;
  (void)jarg1_;
  argp1 = *(Space::AnotherType **)&jarg1; 
  if (!argp1) {
    SWIG_JavaThrowException(jenv, SWIG_JavaNullPointerException, "Attempt to dereference null Space::AnotherType");
    return 0;
  }
  arg1 = *argp1; 
  arg2 = jarg2 ? true : false; 
  arg3 = (int)jarg3; 
  result = (Space::Bar< Space::AnotherType,bool > *)new Space::Bar< Space::AnotherType,bool >(arg1,arg2,arg3);
  *(Space::Bar< Space::AnotherType,bool > **)&jresult = result; 
  return jresult;
}


SWIGEXPORT jlong JNICALL Java_template_1default_1class_1parms_template_1default_1class_1parmsJNI_BarAnotherTypeBool_1method(JNIEnv *jenv, jclass jcls, jlong jarg1, jobject jarg1_, jlong jarg2, jobject jarg2_, jboolean jarg3, jint jarg4) {
  jlong jresult = 0 ;
  Space::Bar< Space::AnotherType,bool > *arg1 = (Space::Bar< Space::AnotherType,bool > *) 0 ;
  Space::AnotherType arg2 ;
  bool arg3 ;
  int arg4 ;
  Space::AnotherType *argp2 ;
  Space::AnotherType result;
  
  (void)jenv;
  (void)jcls;
  (void)jarg1_;
  (void)jarg2_;
  arg1 = *(Space::Bar< Space::AnotherType,bool > **)&jarg1; 
  argp2 = *(Space::AnotherType **)&jarg2; 
  if (!argp2) {
    SWIG_JavaThrowException(jenv, SWIG_JavaNullPointerException, "Attempt to dereference null Space::AnotherType");
    return 0;
  }
  arg2 = *argp2; 
  arg3 = jarg3 ? true : false; 
  arg4 = (int)jarg4; 
  result = (arg1)->method(arg2,arg3,arg4);
  *(Space::AnotherType **)&jresult = new Space::AnotherType((const Space::AnotherType &)result); 
  return jresult;
}


SWIGEXPORT void JNICALL Java_template_1default_1class_1parms_template_1default_1class_1parmsJNI_delete_1BarAnotherTypeBool(JNIEnv *jenv, jclass jcls, jlong jarg1) {
  Space::Bar< Space::AnotherType,bool > *arg1 = (Space::Bar< Space::AnotherType,bool > *) 0 ;
  
  (void)jenv;
  (void)jcls;
  arg1 = *(Space::Bar< Space::AnotherType,bool > **)&jarg1; 
  delete arg1;
}


SWIGEXPORT void JNICALL Java_template_1default_1class_1parms_template_1default_1class_1parmsJNI_FooAnotherType_1TType_1set(JNIEnv *jenv, jclass jcls, jlong jarg1, jobject jarg1_, jlong jarg2, jobject jarg2_) {
  Space::Foo< Space::AnotherType > *arg1 = (Space::Foo< Space::AnotherType > *) 0 ;
  Space::AnotherType *arg2 = (Space::AnotherType *) 0 ;
  
  (void)jenv;
  (void)jcls;
  (void)jarg1_;
  (void)jarg2_;
  arg1 = *(Space::Foo< Space::AnotherType > **)&jarg1; 
  arg2 = *(Space::AnotherType **)&jarg2; 
  if (arg1) (arg1)->TType = *arg2;
}


SWIGEXPORT jlong JNICALL Java_template_1default_1class_1parms_template_1default_1class_1parmsJNI_FooAnotherType_1TType_1get(JNIEnv *jenv, jclass jcls, jlong jarg1, jobject jarg1_) {
  jlong jresult = 0 ;
  Space::Foo< Space::AnotherType > *arg1 = (Space::Foo< Space::AnotherType > *) 0 ;
  Space::AnotherType *result = 0 ;
  
  (void)jenv;
  (void)jcls;
  (void)jarg1_;
  arg1 = *(Space::Foo< Space::AnotherType > **)&jarg1; 
  result = (Space::AnotherType *)& ((arg1)->TType);
  *(Space::AnotherType **)&jresult = result; 
  return jresult;
}


SWIGEXPORT jlong JNICALL Java_template_1default_1class_1parms_template_1default_1class_1parmsJNI_new_1FooAnotherType(JNIEnv *jenv, jclass jcls, jlong jarg1, jobject jarg1_) {
  jlong jresult = 0 ;
  Space::AnotherType arg1 ;
  Space::AnotherType *argp1 ;
  Space::Foo< Space::AnotherType > *result = 0 ;
  
  (void)jenv;
  (void)jcls;
  (void)jarg1_;
  argp1 = *(Space::AnotherType **)&jarg1; 
  if (!argp1) {
    SWIG_JavaThrowException(jenv, SWIG_JavaNullPointerException, "Attempt to dereference null Space::AnotherType");
    return 0;
  }
  arg1 = *argp1; 
  result = (Space::Foo< Space::AnotherType > *)new Space::Foo< Space::AnotherType >(arg1);
  *(Space::Foo< Space::AnotherType > **)&jresult = result; 
  return jresult;
}


SWIGEXPORT jlong JNICALL Java_template_1default_1class_1parms_template_1default_1class_1parmsJNI_FooAnotherType_1method(JNIEnv *jenv, jclass jcls, jlong jarg1, jobject jarg1_, jlong jarg2, jobject jarg2_) {
  jlong jresult = 0 ;
  Space::Foo< Space::AnotherType > *arg1 = (Space::Foo< Space::AnotherType > *) 0 ;
  Space::AnotherType arg2 ;
  Space::AnotherType *argp2 ;
  Space::AnotherType result;
  
  (void)jenv;
  (void)jcls;
  (void)jarg1_;
  (void)jarg2_;
  arg1 = *(Space::Foo< Space::AnotherType > **)&jarg1; 
  argp2 = *(Space::AnotherType **)&jarg2; 
  if (!argp2) {
    SWIG_JavaThrowException(jenv, SWIG_JavaNullPointerException, "Attempt to dereference null Space::AnotherType");
    return 0;
  }
  arg2 = *argp2; 
  result = (arg1)->method(arg2);
  *(Space::AnotherType **)&jresult = new Space::AnotherType((const Space::AnotherType &)result); 
  return jresult;
}


SWIGEXPORT void JNICALL Java_template_1default_1class_1parms_template_1default_1class_1parmsJNI_delete_1FooAnotherType(JNIEnv *jenv, jclass jcls, jlong jarg1) {
  Space::Foo< Space::AnotherType > *arg1 = (Space::Foo< Space::AnotherType > *) 0 ;
  
  (void)jenv;
  (void)jcls;
  arg1 = *(Space::Foo< Space::AnotherType > **)&jarg1; 
  delete arg1;
}


#ifdef __cplusplus
}
#endif

