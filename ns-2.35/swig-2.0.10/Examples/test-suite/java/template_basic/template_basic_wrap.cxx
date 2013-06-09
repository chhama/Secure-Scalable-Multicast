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



template<class T> T max(const T a, const T b) { return  a>b ? a : b; }

template<class T> class vector {
  T *v;
  int sz;
 public:
  vector(int _sz) {
    v = new T[_sz];
    sz = _sz;
  }
  T &get(int index) {
    return v[index];
  }
  void set(int index, T &val) {
    v[index] = val;
  }
  // This really doesn't do anything except test const handling
  void testconst(const T x) { }
};



#ifdef __cplusplus
extern "C" {
#endif

SWIGEXPORT jint JNICALL Java_template_1basic_template_1basicJNI_maxint(JNIEnv *jenv, jclass jcls, jint jarg1, jint jarg2) {
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


SWIGEXPORT jdouble JNICALL Java_template_1basic_template_1basicJNI_maxdouble(JNIEnv *jenv, jclass jcls, jdouble jarg1, jdouble jarg2) {
  jdouble jresult = 0 ;
  double arg1 ;
  double arg2 ;
  double result;
  
  (void)jenv;
  (void)jcls;
  arg1 = (double)jarg1; 
  arg2 = (double)jarg2; 
  result = (double)max< double >(arg1,arg2);
  jresult = (jdouble)result; 
  return jresult;
}


SWIGEXPORT jlong JNICALL Java_template_1basic_template_1basicJNI_new_1vecint(JNIEnv *jenv, jclass jcls, jint jarg1) {
  jlong jresult = 0 ;
  int arg1 ;
  vector< int > *result = 0 ;
  
  (void)jenv;
  (void)jcls;
  arg1 = (int)jarg1; 
  result = (vector< int > *)new vector< int >(arg1);
  *(vector< int > **)&jresult = result; 
  return jresult;
}


SWIGEXPORT jlong JNICALL Java_template_1basic_template_1basicJNI_vecint_1get(JNIEnv *jenv, jclass jcls, jlong jarg1, jobject jarg1_, jint jarg2) {
  jlong jresult = 0 ;
  vector< int > *arg1 = (vector< int > *) 0 ;
  int arg2 ;
  int *result = 0 ;
  
  (void)jenv;
  (void)jcls;
  (void)jarg1_;
  arg1 = *(vector< int > **)&jarg1; 
  arg2 = (int)jarg2; 
  result = (int *) &(arg1)->get(arg2);
  *(int **)&jresult = result; 
  return jresult;
}


SWIGEXPORT void JNICALL Java_template_1basic_template_1basicJNI_vecint_1set(JNIEnv *jenv, jclass jcls, jlong jarg1, jobject jarg1_, jint jarg2, jlong jarg3) {
  vector< int > *arg1 = (vector< int > *) 0 ;
  int arg2 ;
  int *arg3 = 0 ;
  
  (void)jenv;
  (void)jcls;
  (void)jarg1_;
  arg1 = *(vector< int > **)&jarg1; 
  arg2 = (int)jarg2; 
  arg3 = *(int **)&jarg3;
  if (!arg3) {
    SWIG_JavaThrowException(jenv, SWIG_JavaNullPointerException, "int & reference is null");
    return ;
  } 
  (arg1)->set(arg2,*arg3);
}


SWIGEXPORT void JNICALL Java_template_1basic_template_1basicJNI_vecint_1testconst(JNIEnv *jenv, jclass jcls, jlong jarg1, jobject jarg1_, jint jarg2) {
  vector< int > *arg1 = (vector< int > *) 0 ;
  int arg2 ;
  
  (void)jenv;
  (void)jcls;
  (void)jarg1_;
  arg1 = *(vector< int > **)&jarg1; 
  arg2 = (int)jarg2; 
  (arg1)->testconst(arg2);
}


SWIGEXPORT void JNICALL Java_template_1basic_template_1basicJNI_delete_1vecint(JNIEnv *jenv, jclass jcls, jlong jarg1) {
  vector< int > *arg1 = (vector< int > *) 0 ;
  
  (void)jenv;
  (void)jcls;
  arg1 = *(vector< int > **)&jarg1; 
  delete arg1;
}


SWIGEXPORT jlong JNICALL Java_template_1basic_template_1basicJNI_new_1vecdouble(JNIEnv *jenv, jclass jcls, jint jarg1) {
  jlong jresult = 0 ;
  int arg1 ;
  vector< double > *result = 0 ;
  
  (void)jenv;
  (void)jcls;
  arg1 = (int)jarg1; 
  result = (vector< double > *)new vector< double >(arg1);
  *(vector< double > **)&jresult = result; 
  return jresult;
}


SWIGEXPORT jlong JNICALL Java_template_1basic_template_1basicJNI_vecdouble_1get(JNIEnv *jenv, jclass jcls, jlong jarg1, jobject jarg1_, jint jarg2) {
  jlong jresult = 0 ;
  vector< double > *arg1 = (vector< double > *) 0 ;
  int arg2 ;
  double *result = 0 ;
  
  (void)jenv;
  (void)jcls;
  (void)jarg1_;
  arg1 = *(vector< double > **)&jarg1; 
  arg2 = (int)jarg2; 
  result = (double *) &(arg1)->get(arg2);
  *(double **)&jresult = result; 
  return jresult;
}


SWIGEXPORT void JNICALL Java_template_1basic_template_1basicJNI_vecdouble_1set(JNIEnv *jenv, jclass jcls, jlong jarg1, jobject jarg1_, jint jarg2, jlong jarg3) {
  vector< double > *arg1 = (vector< double > *) 0 ;
  int arg2 ;
  double *arg3 = 0 ;
  
  (void)jenv;
  (void)jcls;
  (void)jarg1_;
  arg1 = *(vector< double > **)&jarg1; 
  arg2 = (int)jarg2; 
  arg3 = *(double **)&jarg3;
  if (!arg3) {
    SWIG_JavaThrowException(jenv, SWIG_JavaNullPointerException, "double & reference is null");
    return ;
  } 
  (arg1)->set(arg2,*arg3);
}


SWIGEXPORT void JNICALL Java_template_1basic_template_1basicJNI_vecdouble_1testconst(JNIEnv *jenv, jclass jcls, jlong jarg1, jobject jarg1_, jdouble jarg2) {
  vector< double > *arg1 = (vector< double > *) 0 ;
  double arg2 ;
  
  (void)jenv;
  (void)jcls;
  (void)jarg1_;
  arg1 = *(vector< double > **)&jarg1; 
  arg2 = (double)jarg2; 
  (arg1)->testconst(arg2);
}


SWIGEXPORT void JNICALL Java_template_1basic_template_1basicJNI_delete_1vecdouble(JNIEnv *jenv, jclass jcls, jlong jarg1) {
  vector< double > *arg1 = (vector< double > *) 0 ;
  
  (void)jenv;
  (void)jcls;
  arg1 = *(vector< double > **)&jarg1; 
  delete arg1;
}


SWIGEXPORT jlong JNICALL Java_template_1basic_template_1basicJNI_maxintp(JNIEnv *jenv, jclass jcls, jlong jarg1, jlong jarg2) {
  jlong jresult = 0 ;
  int (*arg1)[10] = (int (*)[10]) (int (*)[10])0 ;
  int (*arg2)[10] = (int (*)[10]) (int (*)[10])0 ;
  int (*result)[10] = 0 ;
  
  (void)jenv;
  (void)jcls;
  arg1 = *(int (**)[10])&jarg1; 
  arg2 = *(int (**)[10])&jarg2; 
  result = (int (*)[10])max< int (*)[10] >((int (*)[10])arg1,(int (*)[10])arg2);
  *(int (**)[10])&jresult = result; 
  return jresult;
}


SWIGEXPORT jlong JNICALL Java_template_1basic_template_1basicJNI_new_1vecintp(JNIEnv *jenv, jclass jcls, jint jarg1) {
  jlong jresult = 0 ;
  int arg1 ;
  vector< int (*)[10] > *result = 0 ;
  
  (void)jenv;
  (void)jcls;
  arg1 = (int)jarg1; 
  result = (vector< int (*)[10] > *)new vector< int (*)[10] >(arg1);
  *(vector< int (*)[10] > **)&jresult = result; 
  return jresult;
}


SWIGEXPORT jlong JNICALL Java_template_1basic_template_1basicJNI_vecintp_1get(JNIEnv *jenv, jclass jcls, jlong jarg1, jobject jarg1_, jint jarg2) {
  jlong jresult = 0 ;
  vector< int (*)[10] > *arg1 = (vector< int (*)[10] > *) 0 ;
  int arg2 ;
  int (**result)[10] = 0 ;
  
  (void)jenv;
  (void)jcls;
  (void)jarg1_;
  arg1 = *(vector< int (*)[10] > **)&jarg1; 
  arg2 = (int)jarg2; 
  result = (int (**)[10]) &(arg1)->get(arg2);
  *(int (***)[10])&jresult = result; 
  return jresult;
}


SWIGEXPORT void JNICALL Java_template_1basic_template_1basicJNI_vecintp_1set(JNIEnv *jenv, jclass jcls, jlong jarg1, jobject jarg1_, jint jarg2, jlong jarg3) {
  vector< int (*)[10] > *arg1 = (vector< int (*)[10] > *) 0 ;
  int arg2 ;
  int (**arg3)[10] = 0 ;
  
  (void)jenv;
  (void)jcls;
  (void)jarg1_;
  arg1 = *(vector< int (*)[10] > **)&jarg1; 
  arg2 = (int)jarg2; 
  arg3 = *(int (***)[10])&jarg3;
  if (!arg3) {
    SWIG_JavaThrowException(jenv, SWIG_JavaNullPointerException, "int (*&)[10] reference is null");
    return ;
  } 
  (arg1)->set(arg2,(int (*&)[10])*arg3);
}


SWIGEXPORT void JNICALL Java_template_1basic_template_1basicJNI_vecintp_1testconst(JNIEnv *jenv, jclass jcls, jlong jarg1, jobject jarg1_, jlong jarg2) {
  vector< int (*)[10] > *arg1 = (vector< int (*)[10] > *) 0 ;
  int (*arg2)[10] = (int (*)[10]) (int (*)[10])0 ;
  
  (void)jenv;
  (void)jcls;
  (void)jarg1_;
  arg1 = *(vector< int (*)[10] > **)&jarg1; 
  arg2 = *(int (**)[10])&jarg2; 
  (arg1)->testconst((int (*)[10])arg2);
}


SWIGEXPORT void JNICALL Java_template_1basic_template_1basicJNI_delete_1vecintp(JNIEnv *jenv, jclass jcls, jlong jarg1) {
  vector< int (*)[10] > *arg1 = (vector< int (*)[10] > *) 0 ;
  
  (void)jenv;
  (void)jcls;
  arg1 = *(vector< int (*)[10] > **)&jarg1; 
  delete arg1;
}


#ifdef __cplusplus
}
#endif

