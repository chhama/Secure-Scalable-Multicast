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



class Bar {
public:
  virtual ~Bar()
  {
  }
  
  virtual int bar() { return 1; }
};

class Foo {
public:
  virtual ~Foo()
  {
  }

  virtual int foo() { return 2; }
};

template<class T> class Spam {
public:
  virtual ~Spam()
  {
  }
  
  virtual int spam(const T& t) { return 100; }
};


class FooBar : public Foo, public Bar {
public:
  virtual int fooBar() { return 3; }
};

class FooBarSpam : public Foo, public Bar, public Spam<int> {
public:
  virtual int fooBarSpam() { return 4; }
};



class IgnoreMe {
public:
  virtual int ignoreme() { return 5; }
  virtual ~IgnoreMe() {}
};
class IgnoreMeToo {
public:
  virtual int ignoremetoo() { return 6; }
  virtual ~IgnoreMeToo() {}
};
class IgnoreDerived1 : public IgnoreMe, public Bar {
public:
  virtual int ignorederived1() { return 7; }
};
class IgnoreDerived2 : public IgnoreMe, public IgnoreMeToo, public Bar {
public:
  virtual int ignorederived2() { return 8; }
};
class IgnoreDerived3 : public IgnoreMe, public Bar, public IgnoreMeToo {
public:
  virtual int ignorederived3() { return 9; }
};
class IgnoreDerived4 : public Bar, public IgnoreMe, public IgnoreMeToo {
public:
  virtual int ignorederived4() { return 10; }
};


#ifdef __cplusplus
extern "C" {
#endif

SWIGEXPORT void JNICALL Java_multiple_1inheritance_multiple_1inheritanceJNI_delete_1Bar(JNIEnv *jenv, jclass jcls, jlong jarg1) {
  Bar *arg1 = (Bar *) 0 ;
  
  (void)jenv;
  (void)jcls;
  arg1 = *(Bar **)&jarg1; 
  delete arg1;
}


SWIGEXPORT jint JNICALL Java_multiple_1inheritance_multiple_1inheritanceJNI_Bar_1bar(JNIEnv *jenv, jclass jcls, jlong jarg1, jobject jarg1_) {
  jint jresult = 0 ;
  Bar *arg1 = (Bar *) 0 ;
  int result;
  
  (void)jenv;
  (void)jcls;
  (void)jarg1_;
  arg1 = *(Bar **)&jarg1; 
  result = (int)(arg1)->bar();
  jresult = (jint)result; 
  return jresult;
}


SWIGEXPORT jlong JNICALL Java_multiple_1inheritance_multiple_1inheritanceJNI_new_1Bar(JNIEnv *jenv, jclass jcls) {
  jlong jresult = 0 ;
  Bar *result = 0 ;
  
  (void)jenv;
  (void)jcls;
  result = (Bar *)new Bar();
  *(Bar **)&jresult = result; 
  return jresult;
}


SWIGEXPORT void JNICALL Java_multiple_1inheritance_multiple_1inheritanceJNI_delete_1Foo(JNIEnv *jenv, jclass jcls, jlong jarg1) {
  Foo *arg1 = (Foo *) 0 ;
  
  (void)jenv;
  (void)jcls;
  arg1 = *(Foo **)&jarg1; 
  delete arg1;
}


SWIGEXPORT jint JNICALL Java_multiple_1inheritance_multiple_1inheritanceJNI_Foo_1foo(JNIEnv *jenv, jclass jcls, jlong jarg1, jobject jarg1_) {
  jint jresult = 0 ;
  Foo *arg1 = (Foo *) 0 ;
  int result;
  
  (void)jenv;
  (void)jcls;
  (void)jarg1_;
  arg1 = *(Foo **)&jarg1; 
  result = (int)(arg1)->foo();
  jresult = (jint)result; 
  return jresult;
}


SWIGEXPORT jlong JNICALL Java_multiple_1inheritance_multiple_1inheritanceJNI_new_1Foo(JNIEnv *jenv, jclass jcls) {
  jlong jresult = 0 ;
  Foo *result = 0 ;
  
  (void)jenv;
  (void)jcls;
  result = (Foo *)new Foo();
  *(Foo **)&jresult = result; 
  return jresult;
}


SWIGEXPORT void JNICALL Java_multiple_1inheritance_multiple_1inheritanceJNI_delete_1SpamInt(JNIEnv *jenv, jclass jcls, jlong jarg1) {
  Spam< int > *arg1 = (Spam< int > *) 0 ;
  
  (void)jenv;
  (void)jcls;
  arg1 = *(Spam< int > **)&jarg1; 
  delete arg1;
}


SWIGEXPORT jint JNICALL Java_multiple_1inheritance_multiple_1inheritanceJNI_SpamInt_1spam(JNIEnv *jenv, jclass jcls, jlong jarg1, jobject jarg1_, jint jarg2) {
  jint jresult = 0 ;
  Spam< int > *arg1 = (Spam< int > *) 0 ;
  int *arg2 = 0 ;
  int temp2 ;
  int result;
  
  (void)jenv;
  (void)jcls;
  (void)jarg1_;
  arg1 = *(Spam< int > **)&jarg1; 
  temp2 = (int)jarg2; 
  arg2 = &temp2; 
  result = (int)(arg1)->spam((int const &)*arg2);
  jresult = (jint)result; 
  return jresult;
}


SWIGEXPORT jlong JNICALL Java_multiple_1inheritance_multiple_1inheritanceJNI_new_1SpamInt(JNIEnv *jenv, jclass jcls) {
  jlong jresult = 0 ;
  Spam< int > *result = 0 ;
  
  (void)jenv;
  (void)jcls;
  result = (Spam< int > *)new Spam< int >();
  *(Spam< int > **)&jresult = result; 
  return jresult;
}


SWIGEXPORT jint JNICALL Java_multiple_1inheritance_multiple_1inheritanceJNI_FooBar_1fooBar(JNIEnv *jenv, jclass jcls, jlong jarg1, jobject jarg1_) {
  jint jresult = 0 ;
  FooBar *arg1 = (FooBar *) 0 ;
  int result;
  
  (void)jenv;
  (void)jcls;
  (void)jarg1_;
  arg1 = *(FooBar **)&jarg1; 
  result = (int)(arg1)->fooBar();
  jresult = (jint)result; 
  return jresult;
}


SWIGEXPORT jlong JNICALL Java_multiple_1inheritance_multiple_1inheritanceJNI_new_1FooBar(JNIEnv *jenv, jclass jcls) {
  jlong jresult = 0 ;
  FooBar *result = 0 ;
  
  (void)jenv;
  (void)jcls;
  result = (FooBar *)new FooBar();
  *(FooBar **)&jresult = result; 
  return jresult;
}


SWIGEXPORT void JNICALL Java_multiple_1inheritance_multiple_1inheritanceJNI_delete_1FooBar(JNIEnv *jenv, jclass jcls, jlong jarg1) {
  FooBar *arg1 = (FooBar *) 0 ;
  
  (void)jenv;
  (void)jcls;
  arg1 = *(FooBar **)&jarg1; 
  delete arg1;
}


SWIGEXPORT jint JNICALL Java_multiple_1inheritance_multiple_1inheritanceJNI_FooBarSpam_1fooBarSpam(JNIEnv *jenv, jclass jcls, jlong jarg1, jobject jarg1_) {
  jint jresult = 0 ;
  FooBarSpam *arg1 = (FooBarSpam *) 0 ;
  int result;
  
  (void)jenv;
  (void)jcls;
  (void)jarg1_;
  arg1 = *(FooBarSpam **)&jarg1; 
  result = (int)(arg1)->fooBarSpam();
  jresult = (jint)result; 
  return jresult;
}


SWIGEXPORT jlong JNICALL Java_multiple_1inheritance_multiple_1inheritanceJNI_new_1FooBarSpam(JNIEnv *jenv, jclass jcls) {
  jlong jresult = 0 ;
  FooBarSpam *result = 0 ;
  
  (void)jenv;
  (void)jcls;
  result = (FooBarSpam *)new FooBarSpam();
  *(FooBarSpam **)&jresult = result; 
  return jresult;
}


SWIGEXPORT void JNICALL Java_multiple_1inheritance_multiple_1inheritanceJNI_delete_1FooBarSpam(JNIEnv *jenv, jclass jcls, jlong jarg1) {
  FooBarSpam *arg1 = (FooBarSpam *) 0 ;
  
  (void)jenv;
  (void)jcls;
  arg1 = *(FooBarSpam **)&jarg1; 
  delete arg1;
}


SWIGEXPORT jint JNICALL Java_multiple_1inheritance_multiple_1inheritanceJNI_IgnoreDerived1_1ignorederived1(JNIEnv *jenv, jclass jcls, jlong jarg1, jobject jarg1_) {
  jint jresult = 0 ;
  IgnoreDerived1 *arg1 = (IgnoreDerived1 *) 0 ;
  int result;
  
  (void)jenv;
  (void)jcls;
  (void)jarg1_;
  arg1 = *(IgnoreDerived1 **)&jarg1; 
  result = (int)(arg1)->ignorederived1();
  jresult = (jint)result; 
  return jresult;
}


SWIGEXPORT jlong JNICALL Java_multiple_1inheritance_multiple_1inheritanceJNI_new_1IgnoreDerived1(JNIEnv *jenv, jclass jcls) {
  jlong jresult = 0 ;
  IgnoreDerived1 *result = 0 ;
  
  (void)jenv;
  (void)jcls;
  result = (IgnoreDerived1 *)new IgnoreDerived1();
  *(IgnoreDerived1 **)&jresult = result; 
  return jresult;
}


SWIGEXPORT void JNICALL Java_multiple_1inheritance_multiple_1inheritanceJNI_delete_1IgnoreDerived1(JNIEnv *jenv, jclass jcls, jlong jarg1) {
  IgnoreDerived1 *arg1 = (IgnoreDerived1 *) 0 ;
  
  (void)jenv;
  (void)jcls;
  arg1 = *(IgnoreDerived1 **)&jarg1; 
  delete arg1;
}


SWIGEXPORT jint JNICALL Java_multiple_1inheritance_multiple_1inheritanceJNI_IgnoreDerived2_1ignorederived2(JNIEnv *jenv, jclass jcls, jlong jarg1, jobject jarg1_) {
  jint jresult = 0 ;
  IgnoreDerived2 *arg1 = (IgnoreDerived2 *) 0 ;
  int result;
  
  (void)jenv;
  (void)jcls;
  (void)jarg1_;
  arg1 = *(IgnoreDerived2 **)&jarg1; 
  result = (int)(arg1)->ignorederived2();
  jresult = (jint)result; 
  return jresult;
}


SWIGEXPORT jlong JNICALL Java_multiple_1inheritance_multiple_1inheritanceJNI_new_1IgnoreDerived2(JNIEnv *jenv, jclass jcls) {
  jlong jresult = 0 ;
  IgnoreDerived2 *result = 0 ;
  
  (void)jenv;
  (void)jcls;
  result = (IgnoreDerived2 *)new IgnoreDerived2();
  *(IgnoreDerived2 **)&jresult = result; 
  return jresult;
}


SWIGEXPORT void JNICALL Java_multiple_1inheritance_multiple_1inheritanceJNI_delete_1IgnoreDerived2(JNIEnv *jenv, jclass jcls, jlong jarg1) {
  IgnoreDerived2 *arg1 = (IgnoreDerived2 *) 0 ;
  
  (void)jenv;
  (void)jcls;
  arg1 = *(IgnoreDerived2 **)&jarg1; 
  delete arg1;
}


SWIGEXPORT jint JNICALL Java_multiple_1inheritance_multiple_1inheritanceJNI_IgnoreDerived3_1ignorederived3(JNIEnv *jenv, jclass jcls, jlong jarg1, jobject jarg1_) {
  jint jresult = 0 ;
  IgnoreDerived3 *arg1 = (IgnoreDerived3 *) 0 ;
  int result;
  
  (void)jenv;
  (void)jcls;
  (void)jarg1_;
  arg1 = *(IgnoreDerived3 **)&jarg1; 
  result = (int)(arg1)->ignorederived3();
  jresult = (jint)result; 
  return jresult;
}


SWIGEXPORT jlong JNICALL Java_multiple_1inheritance_multiple_1inheritanceJNI_new_1IgnoreDerived3(JNIEnv *jenv, jclass jcls) {
  jlong jresult = 0 ;
  IgnoreDerived3 *result = 0 ;
  
  (void)jenv;
  (void)jcls;
  result = (IgnoreDerived3 *)new IgnoreDerived3();
  *(IgnoreDerived3 **)&jresult = result; 
  return jresult;
}


SWIGEXPORT void JNICALL Java_multiple_1inheritance_multiple_1inheritanceJNI_delete_1IgnoreDerived3(JNIEnv *jenv, jclass jcls, jlong jarg1) {
  IgnoreDerived3 *arg1 = (IgnoreDerived3 *) 0 ;
  
  (void)jenv;
  (void)jcls;
  arg1 = *(IgnoreDerived3 **)&jarg1; 
  delete arg1;
}


SWIGEXPORT jint JNICALL Java_multiple_1inheritance_multiple_1inheritanceJNI_IgnoreDerived4_1ignorederived4(JNIEnv *jenv, jclass jcls, jlong jarg1, jobject jarg1_) {
  jint jresult = 0 ;
  IgnoreDerived4 *arg1 = (IgnoreDerived4 *) 0 ;
  int result;
  
  (void)jenv;
  (void)jcls;
  (void)jarg1_;
  arg1 = *(IgnoreDerived4 **)&jarg1; 
  result = (int)(arg1)->ignorederived4();
  jresult = (jint)result; 
  return jresult;
}


SWIGEXPORT jlong JNICALL Java_multiple_1inheritance_multiple_1inheritanceJNI_new_1IgnoreDerived4(JNIEnv *jenv, jclass jcls) {
  jlong jresult = 0 ;
  IgnoreDerived4 *result = 0 ;
  
  (void)jenv;
  (void)jcls;
  result = (IgnoreDerived4 *)new IgnoreDerived4();
  *(IgnoreDerived4 **)&jresult = result; 
  return jresult;
}


SWIGEXPORT void JNICALL Java_multiple_1inheritance_multiple_1inheritanceJNI_delete_1IgnoreDerived4(JNIEnv *jenv, jclass jcls, jlong jarg1) {
  IgnoreDerived4 *arg1 = (IgnoreDerived4 *) 0 ;
  
  (void)jenv;
  (void)jcls;
  arg1 = *(IgnoreDerived4 **)&jarg1; 
  delete arg1;
}


SWIGEXPORT jlong JNICALL Java_multiple_1inheritance_multiple_1inheritanceJNI_FooBar_1SWIGUpcast(JNIEnv *jenv, jclass jcls, jlong jarg1) {
    jlong baseptr = 0;
    (void)jenv;
    (void)jcls;
    *(Foo **)&baseptr = *(FooBar **)&jarg1;
    return baseptr;
}

SWIGEXPORT jlong JNICALL Java_multiple_1inheritance_multiple_1inheritanceJNI_FooBarSpam_1SWIGUpcast(JNIEnv *jenv, jclass jcls, jlong jarg1) {
    jlong baseptr = 0;
    (void)jenv;
    (void)jcls;
    *(Foo **)&baseptr = *(FooBarSpam **)&jarg1;
    return baseptr;
}

SWIGEXPORT jlong JNICALL Java_multiple_1inheritance_multiple_1inheritanceJNI_IgnoreDerived1_1SWIGUpcast(JNIEnv *jenv, jclass jcls, jlong jarg1) {
    jlong baseptr = 0;
    (void)jenv;
    (void)jcls;
    *(Bar **)&baseptr = *(IgnoreDerived1 **)&jarg1;
    return baseptr;
}

SWIGEXPORT jlong JNICALL Java_multiple_1inheritance_multiple_1inheritanceJNI_IgnoreDerived2_1SWIGUpcast(JNIEnv *jenv, jclass jcls, jlong jarg1) {
    jlong baseptr = 0;
    (void)jenv;
    (void)jcls;
    *(Bar **)&baseptr = *(IgnoreDerived2 **)&jarg1;
    return baseptr;
}

SWIGEXPORT jlong JNICALL Java_multiple_1inheritance_multiple_1inheritanceJNI_IgnoreDerived3_1SWIGUpcast(JNIEnv *jenv, jclass jcls, jlong jarg1) {
    jlong baseptr = 0;
    (void)jenv;
    (void)jcls;
    *(Bar **)&baseptr = *(IgnoreDerived3 **)&jarg1;
    return baseptr;
}

SWIGEXPORT jlong JNICALL Java_multiple_1inheritance_multiple_1inheritanceJNI_IgnoreDerived4_1SWIGUpcast(JNIEnv *jenv, jclass jcls, jlong jarg1) {
    jlong baseptr = 0;
    (void)jenv;
    (void)jcls;
    *(Bar **)&baseptr = *(IgnoreDerived4 **)&jarg1;
    return baseptr;
}

#ifdef __cplusplus
}
#endif

