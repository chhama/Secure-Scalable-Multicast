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


  typedef struct {
    int numpoints;
  } LineObj;
  
  typedef LineObj MultipointObj;
  
  typedef struct {
#ifdef SWIG
    %immutable;
#endif
    char *filename; 
    int numfonts;
#ifdef SWIG
    %mutable;
#endif
    int* fonts;
#ifndef SWIG
    void* map;
#endif
  } FontSetObj;

#define MS_NOOVERRIDE -1111



typedef struct {
    int a;
    int b;
} A_t, *B_t;

A_t* make_a() {
    return (A_t*)malloc(sizeof(A_t));
} 

B_t make_b() {
    return make_a();
}



#ifdef __cplusplus
extern "C" {
#endif

typedef struct _Foo {
  enum { NONAME1, NONAME2 } enumvar;
  int foovar;
  void (*fptr)(int);
} Foo;

#ifdef __cplusplus
}
#endif



#ifdef __cplusplus
extern "C" {
#endif

SWIGEXPORT void JNICALL Java_typedef_1struct_typedef_1structJNI_LineObj_1numpoints_1set(JNIEnv *jenv, jclass jcls, jlong jarg1, jobject jarg1_, jint jarg2) {
  LineObj *arg1 = (LineObj *) 0 ;
  int arg2 ;
  
  (void)jenv;
  (void)jcls;
  (void)jarg1_;
  arg1 = *(LineObj **)&jarg1; 
  arg2 = (int)jarg2; 
  if (arg1) (arg1)->numpoints = arg2;
}


SWIGEXPORT jint JNICALL Java_typedef_1struct_typedef_1structJNI_LineObj_1numpoints_1get(JNIEnv *jenv, jclass jcls, jlong jarg1, jobject jarg1_) {
  jint jresult = 0 ;
  LineObj *arg1 = (LineObj *) 0 ;
  int result;
  
  (void)jenv;
  (void)jcls;
  (void)jarg1_;
  arg1 = *(LineObj **)&jarg1; 
  result = (int) ((arg1)->numpoints);
  jresult = (jint)result; 
  return jresult;
}


SWIGEXPORT jlong JNICALL Java_typedef_1struct_typedef_1structJNI_new_1LineObj(JNIEnv *jenv, jclass jcls) {
  jlong jresult = 0 ;
  LineObj *result = 0 ;
  
  (void)jenv;
  (void)jcls;
  result = (LineObj *)new LineObj();
  *(LineObj **)&jresult = result; 
  return jresult;
}


SWIGEXPORT void JNICALL Java_typedef_1struct_typedef_1structJNI_delete_1LineObj(JNIEnv *jenv, jclass jcls, jlong jarg1) {
  LineObj *arg1 = (LineObj *) 0 ;
  
  (void)jenv;
  (void)jcls;
  arg1 = *(LineObj **)&jarg1; 
  delete arg1;
}


SWIGEXPORT jstring JNICALL Java_typedef_1struct_typedef_1structJNI_FontSetObj_1filename_1get(JNIEnv *jenv, jclass jcls, jlong jarg1, jobject jarg1_) {
  jstring jresult = 0 ;
  FontSetObj *arg1 = (FontSetObj *) 0 ;
  char *result = 0 ;
  
  (void)jenv;
  (void)jcls;
  (void)jarg1_;
  arg1 = *(FontSetObj **)&jarg1; 
  result = (char *) ((arg1)->filename);
  if (result) jresult = jenv->NewStringUTF((const char *)result);
  return jresult;
}


SWIGEXPORT jint JNICALL Java_typedef_1struct_typedef_1structJNI_FontSetObj_1numfonts_1get(JNIEnv *jenv, jclass jcls, jlong jarg1, jobject jarg1_) {
  jint jresult = 0 ;
  FontSetObj *arg1 = (FontSetObj *) 0 ;
  int result;
  
  (void)jenv;
  (void)jcls;
  (void)jarg1_;
  arg1 = *(FontSetObj **)&jarg1; 
  result = (int) ((arg1)->numfonts);
  jresult = (jint)result; 
  return jresult;
}


SWIGEXPORT void JNICALL Java_typedef_1struct_typedef_1structJNI_FontSetObj_1fonts_1set(JNIEnv *jenv, jclass jcls, jlong jarg1, jobject jarg1_, jlong jarg2) {
  FontSetObj *arg1 = (FontSetObj *) 0 ;
  int *arg2 = (int *) 0 ;
  
  (void)jenv;
  (void)jcls;
  (void)jarg1_;
  arg1 = *(FontSetObj **)&jarg1; 
  arg2 = *(int **)&jarg2; 
  if (arg1) (arg1)->fonts = arg2;
}


SWIGEXPORT jlong JNICALL Java_typedef_1struct_typedef_1structJNI_FontSetObj_1fonts_1get(JNIEnv *jenv, jclass jcls, jlong jarg1, jobject jarg1_) {
  jlong jresult = 0 ;
  FontSetObj *arg1 = (FontSetObj *) 0 ;
  int *result = 0 ;
  
  (void)jenv;
  (void)jcls;
  (void)jarg1_;
  arg1 = *(FontSetObj **)&jarg1; 
  result = (int *) ((arg1)->fonts);
  *(int **)&jresult = result; 
  return jresult;
}


SWIGEXPORT jlong JNICALL Java_typedef_1struct_typedef_1structJNI_new_1FontSetObj(JNIEnv *jenv, jclass jcls) {
  jlong jresult = 0 ;
  FontSetObj *result = 0 ;
  
  (void)jenv;
  (void)jcls;
  result = (FontSetObj *)new FontSetObj();
  *(FontSetObj **)&jresult = result; 
  return jresult;
}


SWIGEXPORT void JNICALL Java_typedef_1struct_typedef_1structJNI_delete_1FontSetObj(JNIEnv *jenv, jclass jcls, jlong jarg1) {
  FontSetObj *arg1 = (FontSetObj *) 0 ;
  
  (void)jenv;
  (void)jcls;
  arg1 = *(FontSetObj **)&jarg1; 
  delete arg1;
}


SWIGEXPORT jint JNICALL Java_typedef_1struct_typedef_1structJNI_MS_1NOOVERRIDE_1get(JNIEnv *jenv, jclass jcls) {
  jint jresult = 0 ;
  int result;
  
  (void)jenv;
  (void)jcls;
  result = (int)(-1111);
  jresult = (jint)result; 
  return jresult;
}


SWIGEXPORT void JNICALL Java_typedef_1struct_typedef_1structJNI_A_1t_1a_1set(JNIEnv *jenv, jclass jcls, jlong jarg1, jobject jarg1_, jint jarg2) {
  A_t *arg1 = (A_t *) 0 ;
  int arg2 ;
  
  (void)jenv;
  (void)jcls;
  (void)jarg1_;
  arg1 = *(A_t **)&jarg1; 
  arg2 = (int)jarg2; 
  if (arg1) (arg1)->a = arg2;
}


SWIGEXPORT jint JNICALL Java_typedef_1struct_typedef_1structJNI_A_1t_1a_1get(JNIEnv *jenv, jclass jcls, jlong jarg1, jobject jarg1_) {
  jint jresult = 0 ;
  A_t *arg1 = (A_t *) 0 ;
  int result;
  
  (void)jenv;
  (void)jcls;
  (void)jarg1_;
  arg1 = *(A_t **)&jarg1; 
  result = (int) ((arg1)->a);
  jresult = (jint)result; 
  return jresult;
}


SWIGEXPORT void JNICALL Java_typedef_1struct_typedef_1structJNI_A_1t_1b_1set(JNIEnv *jenv, jclass jcls, jlong jarg1, jobject jarg1_, jint jarg2) {
  A_t *arg1 = (A_t *) 0 ;
  int arg2 ;
  
  (void)jenv;
  (void)jcls;
  (void)jarg1_;
  arg1 = *(A_t **)&jarg1; 
  arg2 = (int)jarg2; 
  if (arg1) (arg1)->b = arg2;
}


SWIGEXPORT jint JNICALL Java_typedef_1struct_typedef_1structJNI_A_1t_1b_1get(JNIEnv *jenv, jclass jcls, jlong jarg1, jobject jarg1_) {
  jint jresult = 0 ;
  A_t *arg1 = (A_t *) 0 ;
  int result;
  
  (void)jenv;
  (void)jcls;
  (void)jarg1_;
  arg1 = *(A_t **)&jarg1; 
  result = (int) ((arg1)->b);
  jresult = (jint)result; 
  return jresult;
}


SWIGEXPORT jlong JNICALL Java_typedef_1struct_typedef_1structJNI_new_1A_1t(JNIEnv *jenv, jclass jcls) {
  jlong jresult = 0 ;
  A_t *result = 0 ;
  
  (void)jenv;
  (void)jcls;
  result = (A_t *)new A_t();
  *(A_t **)&jresult = result; 
  return jresult;
}


SWIGEXPORT void JNICALL Java_typedef_1struct_typedef_1structJNI_delete_1A_1t(JNIEnv *jenv, jclass jcls, jlong jarg1) {
  A_t *arg1 = (A_t *) 0 ;
  
  (void)jenv;
  (void)jcls;
  arg1 = *(A_t **)&jarg1; 
  delete arg1;
}


SWIGEXPORT jlong JNICALL Java_typedef_1struct_typedef_1structJNI_make_1a(JNIEnv *jenv, jclass jcls) {
  jlong jresult = 0 ;
  A_t *result = 0 ;
  
  (void)jenv;
  (void)jcls;
  result = (A_t *)make_a();
  *(A_t **)&jresult = result; 
  return jresult;
}


SWIGEXPORT jlong JNICALL Java_typedef_1struct_typedef_1structJNI_make_1b(JNIEnv *jenv, jclass jcls) {
  jlong jresult = 0 ;
  B_t result;
  
  (void)jenv;
  (void)jcls;
  result = make_b();
  *(B_t **)&jresult = new B_t((const B_t &)result); 
  return jresult;
}


SWIGEXPORT jint JNICALL Java_typedef_1struct_typedef_1structJNI_Foo_1NONAME1_1get(JNIEnv *jenv, jclass jcls) {
  jint jresult = 0 ;
  int result;
  
  (void)jenv;
  (void)jcls;
  result = (int)_Foo::NONAME1;
  jresult = (jint)result; 
  return jresult;
}


SWIGEXPORT jint JNICALL Java_typedef_1struct_typedef_1structJNI_Foo_1NONAME2_1get(JNIEnv *jenv, jclass jcls) {
  jint jresult = 0 ;
  int result;
  
  (void)jenv;
  (void)jcls;
  result = (int)_Foo::NONAME2;
  jresult = (jint)result; 
  return jresult;
}


SWIGEXPORT void JNICALL Java_typedef_1struct_typedef_1structJNI_Foo_1enumvar_1set(JNIEnv *jenv, jclass jcls, jlong jarg1, jobject jarg1_, jint jarg2) {
  _Foo *arg1 = (_Foo *) 0 ;
  int arg2 ;
  
  (void)jenv;
  (void)jcls;
  (void)jarg1_;
  arg1 = *(_Foo **)&jarg1; 
  arg2 = (int)jarg2; 
  if (arg1 && sizeof(int) == sizeof((arg1)->enumvar)) *(int*)(void*)&((arg1)->enumvar) = arg2;
}


SWIGEXPORT jint JNICALL Java_typedef_1struct_typedef_1structJNI_Foo_1enumvar_1get(JNIEnv *jenv, jclass jcls, jlong jarg1, jobject jarg1_) {
  jint jresult = 0 ;
  _Foo *arg1 = (_Foo *) 0 ;
  int result;
  
  (void)jenv;
  (void)jcls;
  (void)jarg1_;
  arg1 = *(_Foo **)&jarg1; 
  result = (int) ((arg1)->enumvar);
  jresult = (jint)result; 
  return jresult;
}


SWIGEXPORT void JNICALL Java_typedef_1struct_typedef_1structJNI_Foo_1foovar_1set(JNIEnv *jenv, jclass jcls, jlong jarg1, jobject jarg1_, jint jarg2) {
  _Foo *arg1 = (_Foo *) 0 ;
  int arg2 ;
  
  (void)jenv;
  (void)jcls;
  (void)jarg1_;
  arg1 = *(_Foo **)&jarg1; 
  arg2 = (int)jarg2; 
  if (arg1) (arg1)->foovar = arg2;
}


SWIGEXPORT jint JNICALL Java_typedef_1struct_typedef_1structJNI_Foo_1foovar_1get(JNIEnv *jenv, jclass jcls, jlong jarg1, jobject jarg1_) {
  jint jresult = 0 ;
  _Foo *arg1 = (_Foo *) 0 ;
  int result;
  
  (void)jenv;
  (void)jcls;
  (void)jarg1_;
  arg1 = *(_Foo **)&jarg1; 
  result = (int) ((arg1)->foovar);
  jresult = (jint)result; 
  return jresult;
}


SWIGEXPORT void JNICALL Java_typedef_1struct_typedef_1structJNI_Foo_1fptr_1set(JNIEnv *jenv, jclass jcls, jlong jarg1, jobject jarg1_, jlong jarg2) {
  _Foo *arg1 = (_Foo *) 0 ;
  void (*arg2)(int) = (void (*)(int)) 0 ;
  
  (void)jenv;
  (void)jcls;
  (void)jarg1_;
  arg1 = *(_Foo **)&jarg1; 
  arg2 = *(void (**)(int))&jarg2; 
  if (arg1) (arg1)->fptr = arg2;
}


SWIGEXPORT jlong JNICALL Java_typedef_1struct_typedef_1structJNI_Foo_1fptr_1get(JNIEnv *jenv, jclass jcls, jlong jarg1, jobject jarg1_) {
  jlong jresult = 0 ;
  _Foo *arg1 = (_Foo *) 0 ;
  void (*result)(int) = 0 ;
  
  (void)jenv;
  (void)jcls;
  (void)jarg1_;
  arg1 = *(_Foo **)&jarg1; 
  result = (void (*)(int)) ((arg1)->fptr);
  *(void (**)(int))&jresult = result; 
  return jresult;
}


SWIGEXPORT jlong JNICALL Java_typedef_1struct_typedef_1structJNI_new_1Foo(JNIEnv *jenv, jclass jcls) {
  jlong jresult = 0 ;
  _Foo *result = 0 ;
  
  (void)jenv;
  (void)jcls;
  result = (_Foo *)new _Foo();
  *(_Foo **)&jresult = result; 
  return jresult;
}


SWIGEXPORT void JNICALL Java_typedef_1struct_typedef_1structJNI_delete_1Foo(JNIEnv *jenv, jclass jcls, jlong jarg1) {
  _Foo *arg1 = (_Foo *) 0 ;
  
  (void)jenv;
  (void)jcls;
  arg1 = *(_Foo **)&jarg1; 
  delete arg1;
}


#ifdef __cplusplus
}
#endif

