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



  struct A
  {
    A()
    {
    }
    
    A(int)
    {
    }

    int hi()
    {
      return 0;
    }
  };

  template <class T>
  struct AT
  {
    AT()
    {
    }
    
    AT(int)
    {
    }

    int hi()
    {
      return 0;
    }
  };

  template <class T>
  struct BT
  {
    BT()
    {
    }
    
    BT(int)
    {
    }

    int hi()
    {
      return 0;
    }
  };
  

SWIGINTERN int A_hi__SWIG_1(A *self,int){
    return 0;
  }
SWIGINTERN A *new_A__SWIG_2(double i){
    A* a = new A();
    return a;
  }
SWIGINTERN int AT_Sl_double_Sg__hi__SWIG_1(AT< double > *self,int){
    return 1;
  }
SWIGINTERN AT< double > *new_AT_Sl_double_Sg___SWIG_2(double i){
    AT<double>* a = new AT<double>();
    return a;
  }
SWIGINTERN int BT_Sl_double_Sg__hi__SWIG_1(BT< double > *self,int){
    return 1;
  }
SWIGINTERN BT< double > *new_BT_Sl_double_Sg___SWIG_2(double i){
    BT<double>* a = new BT<double>();
    return a;
  }

#ifdef __cplusplus
extern "C" {
#endif

SWIGEXPORT jlong JNICALL Java_template_1extend_1overload_12_template_1extend_1overload_12JNI_new_1A_1_1SWIG_10(JNIEnv *jenv, jclass jcls) {
  jlong jresult = 0 ;
  A *result = 0 ;
  
  (void)jenv;
  (void)jcls;
  result = (A *)new A();
  *(A **)&jresult = result; 
  return jresult;
}


SWIGEXPORT jlong JNICALL Java_template_1extend_1overload_12_template_1extend_1overload_12JNI_new_1A_1_1SWIG_11(JNIEnv *jenv, jclass jcls, jint jarg1) {
  jlong jresult = 0 ;
  int arg1 ;
  A *result = 0 ;
  
  (void)jenv;
  (void)jcls;
  arg1 = (int)jarg1; 
  result = (A *)new A(arg1);
  *(A **)&jresult = result; 
  return jresult;
}


SWIGEXPORT jint JNICALL Java_template_1extend_1overload_12_template_1extend_1overload_12JNI_A_1hi_1_1SWIG_10(JNIEnv *jenv, jclass jcls, jlong jarg1, jobject jarg1_) {
  jint jresult = 0 ;
  A *arg1 = (A *) 0 ;
  int result;
  
  (void)jenv;
  (void)jcls;
  (void)jarg1_;
  arg1 = *(A **)&jarg1; 
  result = (int)(arg1)->hi();
  jresult = (jint)result; 
  return jresult;
}


SWIGEXPORT jint JNICALL Java_template_1extend_1overload_12_template_1extend_1overload_12JNI_A_1hi_1_1SWIG_11(JNIEnv *jenv, jclass jcls, jlong jarg1, jobject jarg1_, jint jarg2) {
  jint jresult = 0 ;
  A *arg1 = (A *) 0 ;
  int arg2 ;
  int result;
  
  (void)jenv;
  (void)jcls;
  (void)jarg1_;
  arg1 = *(A **)&jarg1; 
  arg2 = (int)jarg2; 
  result = (int)A_hi__SWIG_1(arg1,arg2);
  jresult = (jint)result; 
  return jresult;
}


SWIGEXPORT jlong JNICALL Java_template_1extend_1overload_12_template_1extend_1overload_12JNI_new_1A_1_1SWIG_12(JNIEnv *jenv, jclass jcls, jdouble jarg1) {
  jlong jresult = 0 ;
  double arg1 ;
  A *result = 0 ;
  
  (void)jenv;
  (void)jcls;
  arg1 = (double)jarg1; 
  result = (A *)new_A__SWIG_2(arg1);
  *(A **)&jresult = result; 
  return jresult;
}


SWIGEXPORT void JNICALL Java_template_1extend_1overload_12_template_1extend_1overload_12JNI_delete_1A(JNIEnv *jenv, jclass jcls, jlong jarg1) {
  A *arg1 = (A *) 0 ;
  
  (void)jenv;
  (void)jcls;
  arg1 = *(A **)&jarg1; 
  delete arg1;
}


SWIGEXPORT jlong JNICALL Java_template_1extend_1overload_12_template_1extend_1overload_12JNI_new_1AT_1double_1_1SWIG_10(JNIEnv *jenv, jclass jcls) {
  jlong jresult = 0 ;
  AT< double > *result = 0 ;
  
  (void)jenv;
  (void)jcls;
  result = (AT< double > *)new AT< double >();
  *(AT< double > **)&jresult = result; 
  return jresult;
}


SWIGEXPORT jlong JNICALL Java_template_1extend_1overload_12_template_1extend_1overload_12JNI_new_1AT_1double_1_1SWIG_11(JNIEnv *jenv, jclass jcls, jint jarg1) {
  jlong jresult = 0 ;
  int arg1 ;
  AT< double > *result = 0 ;
  
  (void)jenv;
  (void)jcls;
  arg1 = (int)jarg1; 
  result = (AT< double > *)new AT< double >(arg1);
  *(AT< double > **)&jresult = result; 
  return jresult;
}


SWIGEXPORT jint JNICALL Java_template_1extend_1overload_12_template_1extend_1overload_12JNI_AT_1double_1hi_1_1SWIG_10(JNIEnv *jenv, jclass jcls, jlong jarg1, jobject jarg1_) {
  jint jresult = 0 ;
  AT< double > *arg1 = (AT< double > *) 0 ;
  int result;
  
  (void)jenv;
  (void)jcls;
  (void)jarg1_;
  arg1 = *(AT< double > **)&jarg1; 
  result = (int)(arg1)->hi();
  jresult = (jint)result; 
  return jresult;
}


SWIGEXPORT jint JNICALL Java_template_1extend_1overload_12_template_1extend_1overload_12JNI_AT_1double_1hi_1_1SWIG_11(JNIEnv *jenv, jclass jcls, jlong jarg1, jobject jarg1_, jint jarg2) {
  jint jresult = 0 ;
  AT< double > *arg1 = (AT< double > *) 0 ;
  int arg2 ;
  int result;
  
  (void)jenv;
  (void)jcls;
  (void)jarg1_;
  arg1 = *(AT< double > **)&jarg1; 
  arg2 = (int)jarg2; 
  result = (int)AT_Sl_double_Sg__hi__SWIG_1(arg1,arg2);
  jresult = (jint)result; 
  return jresult;
}


SWIGEXPORT jlong JNICALL Java_template_1extend_1overload_12_template_1extend_1overload_12JNI_new_1AT_1double_1_1SWIG_12(JNIEnv *jenv, jclass jcls, jdouble jarg1) {
  jlong jresult = 0 ;
  double arg1 ;
  AT< double > *result = 0 ;
  
  (void)jenv;
  (void)jcls;
  arg1 = (double)jarg1; 
  result = (AT< double > *)new_AT_Sl_double_Sg___SWIG_2(arg1);
  *(AT< double > **)&jresult = result; 
  return jresult;
}


SWIGEXPORT void JNICALL Java_template_1extend_1overload_12_template_1extend_1overload_12JNI_delete_1AT_1double(JNIEnv *jenv, jclass jcls, jlong jarg1) {
  AT< double > *arg1 = (AT< double > *) 0 ;
  
  (void)jenv;
  (void)jcls;
  arg1 = *(AT< double > **)&jarg1; 
  delete arg1;
}


SWIGEXPORT jlong JNICALL Java_template_1extend_1overload_12_template_1extend_1overload_12JNI_new_1BT_1double_1_1SWIG_10(JNIEnv *jenv, jclass jcls) {
  jlong jresult = 0 ;
  BT< double > *result = 0 ;
  
  (void)jenv;
  (void)jcls;
  result = (BT< double > *)new BT< double >();
  *(BT< double > **)&jresult = result; 
  return jresult;
}


SWIGEXPORT jlong JNICALL Java_template_1extend_1overload_12_template_1extend_1overload_12JNI_new_1BT_1double_1_1SWIG_11(JNIEnv *jenv, jclass jcls, jint jarg1) {
  jlong jresult = 0 ;
  int arg1 ;
  BT< double > *result = 0 ;
  
  (void)jenv;
  (void)jcls;
  arg1 = (int)jarg1; 
  result = (BT< double > *)new BT< double >(arg1);
  *(BT< double > **)&jresult = result; 
  return jresult;
}


SWIGEXPORT jint JNICALL Java_template_1extend_1overload_12_template_1extend_1overload_12JNI_BT_1double_1hi_1_1SWIG_10(JNIEnv *jenv, jclass jcls, jlong jarg1, jobject jarg1_) {
  jint jresult = 0 ;
  BT< double > *arg1 = (BT< double > *) 0 ;
  int result;
  
  (void)jenv;
  (void)jcls;
  (void)jarg1_;
  arg1 = *(BT< double > **)&jarg1; 
  result = (int)(arg1)->hi();
  jresult = (jint)result; 
  return jresult;
}


SWIGEXPORT jint JNICALL Java_template_1extend_1overload_12_template_1extend_1overload_12JNI_BT_1double_1hi_1_1SWIG_11(JNIEnv *jenv, jclass jcls, jlong jarg1, jobject jarg1_, jint jarg2) {
  jint jresult = 0 ;
  BT< double > *arg1 = (BT< double > *) 0 ;
  int arg2 ;
  int result;
  
  (void)jenv;
  (void)jcls;
  (void)jarg1_;
  arg1 = *(BT< double > **)&jarg1; 
  arg2 = (int)jarg2; 
  result = (int)BT_Sl_double_Sg__hi__SWIG_1(arg1,arg2);
  jresult = (jint)result; 
  return jresult;
}


SWIGEXPORT jlong JNICALL Java_template_1extend_1overload_12_template_1extend_1overload_12JNI_new_1BT_1double_1_1SWIG_12(JNIEnv *jenv, jclass jcls, jdouble jarg1) {
  jlong jresult = 0 ;
  double arg1 ;
  BT< double > *result = 0 ;
  
  (void)jenv;
  (void)jcls;
  arg1 = (double)jarg1; 
  result = (BT< double > *)new_BT_Sl_double_Sg___SWIG_2(arg1);
  *(BT< double > **)&jresult = result; 
  return jresult;
}


SWIGEXPORT void JNICALL Java_template_1extend_1overload_12_template_1extend_1overload_12JNI_delete_1BT_1double(JNIEnv *jenv, jclass jcls, jlong jarg1) {
  BT< double > *arg1 = (BT< double > *) 0 ;
  
  (void)jenv;
  (void)jcls;
  arg1 = *(BT< double > **)&jarg1; 
  delete arg1;
}


#ifdef __cplusplus
}
#endif

