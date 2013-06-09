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



struct Foo {
  int x;

  // this works
  int rmethod(const Foo& f) { return f.x; }

  // this doesn't when DerFoo (below) is introduced
  int method(Foo f) { return f.x; }
};

struct Bar {
   Foo   a;
   struct Foo b;
};

/*
  When the next derived class is declared, the 
  following bad method is generated

  static void *_DerFooTo_Foo(void *x) {   // **** bad ****
    return (void *)((Foo)  ((DerFoo) x));
  }

  static void *_p_DerFooTo_p_Foo(void *x) {   // *** good ***
    return (void *)((Foo *)  ((DerFoo *) x));
  }
  
  if the derived class is deleted, it works again 

  if the previous Foo::method is deleted, it works again

 */
struct DerFoo : Foo {
};

/*
  The problem is caused by accidentally remembering a object value type
  instead of an object pointer type.
  During the course of SWIGing a file, several calls to SwigType_remember()
  or SwigType_remember_clientdata() will be made.
  When the SwigType_emit_type_table() function is called it emits all the
  type conversion functions.
  
  If a object type exists in the SwigType table, you get this error.

  You can view the SwigType table, with a #define DEBUG at the top of
  Source/Swig/typesys.c

  When run you get an output like this:

---r_mangled---
Hash {
    '_p_Bar' : Hash {
        'p.Bar' : _p_Bar, 
    }
, 
    '_p_DerFoo' : Hash {
        'p.DerFoo' : _p_DerFoo, 
    }
, 
    '_p_Foo' : Hash {
        'r.Foo' : _p_Foo, 
        'p.Foo' : _p_Foo, 
    }
, 
    '_Foo' : Hash {
        'Foo' : _Foo, 
    }
, 
}
....

  The last field ('_Foo') is an object type and caused the error.
  It can be fixed either by checking all the calls to SwigType_remember()
  and by checking the typemaps.
  The typemap code also calls SwigType_remember(), if your typemaps
  defined an object type, it will be added into the SwigType table.
  its normally a 
    SWIG_ConvertPtr(....$descriptor...)
  when it should have been a $&descriptor or $*descriptor
    
  Commenting out all your object typemaps (and typecheck fns) may help
  isolate it.

*/
#


#ifdef __cplusplus
extern "C" {
#endif

SWIGEXPORT void JNICALL Java_derived_1byvalue_derived_1byvalueJNI_Foo_1x_1set(JNIEnv *jenv, jclass jcls, jlong jarg1, jobject jarg1_, jint jarg2) {
  Foo *arg1 = (Foo *) 0 ;
  int arg2 ;
  
  (void)jenv;
  (void)jcls;
  (void)jarg1_;
  arg1 = *(Foo **)&jarg1; 
  arg2 = (int)jarg2; 
  if (arg1) (arg1)->x = arg2;
}


SWIGEXPORT jint JNICALL Java_derived_1byvalue_derived_1byvalueJNI_Foo_1x_1get(JNIEnv *jenv, jclass jcls, jlong jarg1, jobject jarg1_) {
  jint jresult = 0 ;
  Foo *arg1 = (Foo *) 0 ;
  int result;
  
  (void)jenv;
  (void)jcls;
  (void)jarg1_;
  arg1 = *(Foo **)&jarg1; 
  result = (int) ((arg1)->x);
  jresult = (jint)result; 
  return jresult;
}


SWIGEXPORT jint JNICALL Java_derived_1byvalue_derived_1byvalueJNI_Foo_1rmethod(JNIEnv *jenv, jclass jcls, jlong jarg1, jobject jarg1_, jlong jarg2, jobject jarg2_) {
  jint jresult = 0 ;
  Foo *arg1 = (Foo *) 0 ;
  Foo *arg2 = 0 ;
  int result;
  
  (void)jenv;
  (void)jcls;
  (void)jarg1_;
  (void)jarg2_;
  arg1 = *(Foo **)&jarg1; 
  arg2 = *(Foo **)&jarg2;
  if (!arg2) {
    SWIG_JavaThrowException(jenv, SWIG_JavaNullPointerException, "Foo const & reference is null");
    return 0;
  } 
  result = (int)(arg1)->rmethod((Foo const &)*arg2);
  jresult = (jint)result; 
  return jresult;
}


SWIGEXPORT jint JNICALL Java_derived_1byvalue_derived_1byvalueJNI_Foo_1method(JNIEnv *jenv, jclass jcls, jlong jarg1, jobject jarg1_, jlong jarg2, jobject jarg2_) {
  jint jresult = 0 ;
  Foo *arg1 = (Foo *) 0 ;
  Foo arg2 ;
  Foo *argp2 ;
  int result;
  
  (void)jenv;
  (void)jcls;
  (void)jarg1_;
  (void)jarg2_;
  arg1 = *(Foo **)&jarg1; 
  argp2 = *(Foo **)&jarg2; 
  if (!argp2) {
    SWIG_JavaThrowException(jenv, SWIG_JavaNullPointerException, "Attempt to dereference null Foo");
    return 0;
  }
  arg2 = *argp2; 
  result = (int)(arg1)->method(arg2);
  jresult = (jint)result; 
  return jresult;
}


SWIGEXPORT jlong JNICALL Java_derived_1byvalue_derived_1byvalueJNI_new_1Foo(JNIEnv *jenv, jclass jcls) {
  jlong jresult = 0 ;
  Foo *result = 0 ;
  
  (void)jenv;
  (void)jcls;
  result = (Foo *)new Foo();
  *(Foo **)&jresult = result; 
  return jresult;
}


SWIGEXPORT void JNICALL Java_derived_1byvalue_derived_1byvalueJNI_delete_1Foo(JNIEnv *jenv, jclass jcls, jlong jarg1) {
  Foo *arg1 = (Foo *) 0 ;
  
  (void)jenv;
  (void)jcls;
  arg1 = *(Foo **)&jarg1; 
  delete arg1;
}


SWIGEXPORT void JNICALL Java_derived_1byvalue_derived_1byvalueJNI_Bar_1a_1set(JNIEnv *jenv, jclass jcls, jlong jarg1, jobject jarg1_, jlong jarg2, jobject jarg2_) {
  Bar *arg1 = (Bar *) 0 ;
  Foo *arg2 = (Foo *) 0 ;
  
  (void)jenv;
  (void)jcls;
  (void)jarg1_;
  (void)jarg2_;
  arg1 = *(Bar **)&jarg1; 
  arg2 = *(Foo **)&jarg2; 
  if (arg1) (arg1)->a = *arg2;
}


SWIGEXPORT jlong JNICALL Java_derived_1byvalue_derived_1byvalueJNI_Bar_1a_1get(JNIEnv *jenv, jclass jcls, jlong jarg1, jobject jarg1_) {
  jlong jresult = 0 ;
  Bar *arg1 = (Bar *) 0 ;
  Foo *result = 0 ;
  
  (void)jenv;
  (void)jcls;
  (void)jarg1_;
  arg1 = *(Bar **)&jarg1; 
  result = (Foo *)& ((arg1)->a);
  *(Foo **)&jresult = result; 
  return jresult;
}


SWIGEXPORT void JNICALL Java_derived_1byvalue_derived_1byvalueJNI_Bar_1b_1set(JNIEnv *jenv, jclass jcls, jlong jarg1, jobject jarg1_, jlong jarg2, jobject jarg2_) {
  Bar *arg1 = (Bar *) 0 ;
  Foo *arg2 = (Foo *) 0 ;
  
  (void)jenv;
  (void)jcls;
  (void)jarg1_;
  (void)jarg2_;
  arg1 = *(Bar **)&jarg1; 
  arg2 = *(Foo **)&jarg2; 
  if (arg1) (arg1)->b = *arg2;
}


SWIGEXPORT jlong JNICALL Java_derived_1byvalue_derived_1byvalueJNI_Bar_1b_1get(JNIEnv *jenv, jclass jcls, jlong jarg1, jobject jarg1_) {
  jlong jresult = 0 ;
  Bar *arg1 = (Bar *) 0 ;
  Foo *result = 0 ;
  
  (void)jenv;
  (void)jcls;
  (void)jarg1_;
  arg1 = *(Bar **)&jarg1; 
  result = (Foo *)& ((arg1)->b);
  *(Foo **)&jresult = result; 
  return jresult;
}


SWIGEXPORT jlong JNICALL Java_derived_1byvalue_derived_1byvalueJNI_new_1Bar(JNIEnv *jenv, jclass jcls) {
  jlong jresult = 0 ;
  Bar *result = 0 ;
  
  (void)jenv;
  (void)jcls;
  result = (Bar *)new Bar();
  *(Bar **)&jresult = result; 
  return jresult;
}


SWIGEXPORT void JNICALL Java_derived_1byvalue_derived_1byvalueJNI_delete_1Bar(JNIEnv *jenv, jclass jcls, jlong jarg1) {
  Bar *arg1 = (Bar *) 0 ;
  
  (void)jenv;
  (void)jcls;
  arg1 = *(Bar **)&jarg1; 
  delete arg1;
}


SWIGEXPORT jlong JNICALL Java_derived_1byvalue_derived_1byvalueJNI_new_1DerFoo(JNIEnv *jenv, jclass jcls) {
  jlong jresult = 0 ;
  DerFoo *result = 0 ;
  
  (void)jenv;
  (void)jcls;
  result = (DerFoo *)new DerFoo();
  *(DerFoo **)&jresult = result; 
  return jresult;
}


SWIGEXPORT void JNICALL Java_derived_1byvalue_derived_1byvalueJNI_delete_1DerFoo(JNIEnv *jenv, jclass jcls, jlong jarg1) {
  DerFoo *arg1 = (DerFoo *) 0 ;
  
  (void)jenv;
  (void)jcls;
  arg1 = *(DerFoo **)&jarg1; 
  delete arg1;
}


SWIGEXPORT jlong JNICALL Java_derived_1byvalue_derived_1byvalueJNI_DerFoo_1SWIGUpcast(JNIEnv *jenv, jclass jcls, jlong jarg1) {
    jlong baseptr = 0;
    (void)jenv;
    (void)jcls;
    *(Foo **)&baseptr = *(DerFoo **)&jarg1;
    return baseptr;
}

#ifdef __cplusplus
}
#endif
