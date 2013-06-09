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


  template<class T> void foobar(T t) {}
  namespace test {
    template<class T> void barfoo(T t) {}
  }  


  template <class C>
  struct Bar_T
  {
  };
  
  

  namespace test {
    enum Hello {
      Hi
    };    
    
    struct Test;

    struct Bar  {
      Hello foo(Hello h) {
	return h;
      }
    };

    namespace hola {
      struct Bor;
      struct Foo;
      struct Foobar;
      template <class T> struct BarT {
      };

      template <class T> class FooT;
    }

    template <class T>
    class hola::FooT {
    public:
      Hello foo(Hello h) {
	return h;
      }
      
      T bar(T h) {
	return h;
      }
    };

    namespace hola {
      template <> class FooT<double>;
      template <> class FooT<int>;
    }
    
    template <>
    class hola::FooT<double> {
    public:
      double moo(double h) {
	return h;
      }
    };

    int a;

    struct hola::Foo : Bar {
      Hello bar(Hello h) {
	return h;
      }    
    };
  }
  
  struct test::Test {
    Hello foo(Hello h) {
      return h;
    }
  };

  struct test::hola::Bor {
    Hello foo(Hello h) {
      return h;
    }    
  };

  namespace test {
    struct hola::Foobar : Bar {
      Hello bar(Hello h) {
	return h;
      }    
    };
  }

  template <>
  class test::hola::FooT<int> {
  public:
    int quack(int h) {
      return h;
    }
  };




  namespace hi {
    namespace hello {
      template <class T> struct PooT;
    }

    namespace hello {
      template <class T> struct PooT
      {
      }; 
    }
  }



  template <class T> struct BooT {
  };

  namespace test {
    
    typedef ::BooT<Hello> BooT_H;
  }




namespace jafar {
  namespace jmath {
    class EulerT3D {
    public:
      static void hello(){}
      
      template<class VecFrame, class Vec, class VecRes>
      static void toFrame(const VecFrame& frame_, const Vec&v_,const VecRes& vRes){}
      
      template<class T>
      void operator ()(T& x){}

      template<class T>
      void operator < (T& x){}
      
      template<class T>
      operator Bar_T<T> () {}

    };
  }
}



namespace {
  /* the unnamed namespace is 'private', so, the following
     declarations shouldn't be wrapped */
  class Private1
  {
  };

}

namespace a
{
  namespace 
  {
    class Private2
    {
    };
  }
}
 


  class Ala {
  public : 
    Ala() {}
    class Ola {
    public:
      Ola() {}
      void eek() {}
    };
    
    template <class T>
    static void hi() 
    {
    }
  };


namespace TagLib
{
  class File {
  public:
    File() {}
  };

  class AudioProperties {
  };

  class AudioPropertiesFile {
  public:
    typedef TagLib::File File;
  };
  
  namespace FLAC
  {
    class File;
    class Properties : public AudioProperties  {
    public:
      Properties(File *) {}
    };

    class PropertiesFile : public AudioPropertiesFile  {
    public:
      PropertiesFile(File * = 0) {}
    };

    namespace bar {
      class PropertiesFree  : public AudioProperties  {
      public:
	PropertiesFree(File *) {}
      };
    }

    class FooFilePrivate : private PropertiesFile  {
    public:
      FooFilePrivate(File *) {}
    };

    class FooFile : public PropertiesFile  {
    public:
      FooFile(File *) {}
    };

    class File {
    public:
      File() {}
    };
  }
}


#ifdef __cplusplus
extern "C" {
#endif

SWIGEXPORT void JNICALL Java_namespace_1class_namespace_1classJNI_FooBarInt(JNIEnv *jenv, jclass jcls, jint jarg1) {
  int arg1 ;
  
  (void)jenv;
  (void)jcls;
  arg1 = (int)jarg1; 
  foobar< int >(arg1);
}


SWIGEXPORT void JNICALL Java_namespace_1class_namespace_1classJNI_BarFooInt(JNIEnv *jenv, jclass jcls, jint jarg1) {
  int arg1 ;
  
  (void)jenv;
  (void)jcls;
  arg1 = (int)jarg1; 
  test::SWIGTEMPLATEDISAMBIGUATOR barfoo< int >(arg1);
}


SWIGEXPORT jint JNICALL Java_namespace_1class_namespace_1classJNI_Bar_1foo(JNIEnv *jenv, jclass jcls, jlong jarg1, jobject jarg1_, jint jarg2) {
  jint jresult = 0 ;
  test::Bar *arg1 = (test::Bar *) 0 ;
  test::Hello arg2 ;
  test::Hello result;
  
  (void)jenv;
  (void)jcls;
  (void)jarg1_;
  arg1 = *(test::Bar **)&jarg1; 
  arg2 = (test::Hello)jarg2; 
  result = (test::Hello)(arg1)->foo(arg2);
  jresult = (jint)result; 
  return jresult;
}


SWIGEXPORT jlong JNICALL Java_namespace_1class_namespace_1classJNI_new_1Bar(JNIEnv *jenv, jclass jcls) {
  jlong jresult = 0 ;
  test::Bar *result = 0 ;
  
  (void)jenv;
  (void)jcls;
  result = (test::Bar *)new test::Bar();
  *(test::Bar **)&jresult = result; 
  return jresult;
}


SWIGEXPORT void JNICALL Java_namespace_1class_namespace_1classJNI_delete_1Bar(JNIEnv *jenv, jclass jcls, jlong jarg1) {
  test::Bar *arg1 = (test::Bar *) 0 ;
  
  (void)jenv;
  (void)jcls;
  arg1 = *(test::Bar **)&jarg1; 
  delete arg1;
}


SWIGEXPORT void JNICALL Java_namespace_1class_namespace_1classJNI_a_1set(JNIEnv *jenv, jclass jcls, jint jarg1) {
  int arg1 ;
  
  (void)jenv;
  (void)jcls;
  arg1 = (int)jarg1; 
  test::a = arg1;
}


SWIGEXPORT jint JNICALL Java_namespace_1class_namespace_1classJNI_a_1get(JNIEnv *jenv, jclass jcls) {
  jint jresult = 0 ;
  int result;
  
  (void)jenv;
  (void)jcls;
  result = (int)test::a;
  jresult = (jint)result; 
  return jresult;
}


SWIGEXPORT jint JNICALL Java_namespace_1class_namespace_1classJNI_Foo_1bar(JNIEnv *jenv, jclass jcls, jlong jarg1, jobject jarg1_, jint jarg2) {
  jint jresult = 0 ;
  test::hola::Foo *arg1 = (test::hola::Foo *) 0 ;
  test::Hello arg2 ;
  test::Hello result;
  
  (void)jenv;
  (void)jcls;
  (void)jarg1_;
  arg1 = *(test::hola::Foo **)&jarg1; 
  arg2 = (test::Hello)jarg2; 
  result = (test::Hello)(arg1)->bar(arg2);
  jresult = (jint)result; 
  return jresult;
}


SWIGEXPORT jlong JNICALL Java_namespace_1class_namespace_1classJNI_new_1Foo(JNIEnv *jenv, jclass jcls) {
  jlong jresult = 0 ;
  test::hola::Foo *result = 0 ;
  
  (void)jenv;
  (void)jcls;
  result = (test::hola::Foo *)new test::hola::Foo();
  *(test::hola::Foo **)&jresult = result; 
  return jresult;
}


SWIGEXPORT void JNICALL Java_namespace_1class_namespace_1classJNI_delete_1Foo(JNIEnv *jenv, jclass jcls, jlong jarg1) {
  test::hola::Foo *arg1 = (test::hola::Foo *) 0 ;
  
  (void)jenv;
  (void)jcls;
  arg1 = *(test::hola::Foo **)&jarg1; 
  delete arg1;
}


SWIGEXPORT jint JNICALL Java_namespace_1class_namespace_1classJNI_Test_1foo(JNIEnv *jenv, jclass jcls, jlong jarg1, jobject jarg1_, jint jarg2) {
  jint jresult = 0 ;
  test::Test *arg1 = (test::Test *) 0 ;
  test::Hello arg2 ;
  test::Hello result;
  
  (void)jenv;
  (void)jcls;
  (void)jarg1_;
  arg1 = *(test::Test **)&jarg1; 
  arg2 = (test::Hello)jarg2; 
  result = (test::Hello)(arg1)->foo(arg2);
  jresult = (jint)result; 
  return jresult;
}


SWIGEXPORT jlong JNICALL Java_namespace_1class_namespace_1classJNI_new_1Test(JNIEnv *jenv, jclass jcls) {
  jlong jresult = 0 ;
  test::Test *result = 0 ;
  
  (void)jenv;
  (void)jcls;
  result = (test::Test *)new test::Test();
  *(test::Test **)&jresult = result; 
  return jresult;
}


SWIGEXPORT void JNICALL Java_namespace_1class_namespace_1classJNI_delete_1Test(JNIEnv *jenv, jclass jcls, jlong jarg1) {
  test::Test *arg1 = (test::Test *) 0 ;
  
  (void)jenv;
  (void)jcls;
  arg1 = *(test::Test **)&jarg1; 
  delete arg1;
}


SWIGEXPORT jint JNICALL Java_namespace_1class_namespace_1classJNI_Bor_1foo(JNIEnv *jenv, jclass jcls, jlong jarg1, jobject jarg1_, jint jarg2) {
  jint jresult = 0 ;
  test::hola::Bor *arg1 = (test::hola::Bor *) 0 ;
  test::Hello arg2 ;
  test::Hello result;
  
  (void)jenv;
  (void)jcls;
  (void)jarg1_;
  arg1 = *(test::hola::Bor **)&jarg1; 
  arg2 = (test::Hello)jarg2; 
  result = (test::Hello)(arg1)->foo(arg2);
  jresult = (jint)result; 
  return jresult;
}


SWIGEXPORT jlong JNICALL Java_namespace_1class_namespace_1classJNI_new_1Bor(JNIEnv *jenv, jclass jcls) {
  jlong jresult = 0 ;
  test::hola::Bor *result = 0 ;
  
  (void)jenv;
  (void)jcls;
  result = (test::hola::Bor *)new test::hola::Bor();
  *(test::hola::Bor **)&jresult = result; 
  return jresult;
}


SWIGEXPORT void JNICALL Java_namespace_1class_namespace_1classJNI_delete_1Bor(JNIEnv *jenv, jclass jcls, jlong jarg1) {
  test::hola::Bor *arg1 = (test::hola::Bor *) 0 ;
  
  (void)jenv;
  (void)jcls;
  arg1 = *(test::hola::Bor **)&jarg1; 
  delete arg1;
}


SWIGEXPORT jint JNICALL Java_namespace_1class_namespace_1classJNI_Foobar_1bar(JNIEnv *jenv, jclass jcls, jlong jarg1, jobject jarg1_, jint jarg2) {
  jint jresult = 0 ;
  test::hola::Foobar *arg1 = (test::hola::Foobar *) 0 ;
  test::Hello arg2 ;
  test::Hello result;
  
  (void)jenv;
  (void)jcls;
  (void)jarg1_;
  arg1 = *(test::hola::Foobar **)&jarg1; 
  arg2 = (test::Hello)jarg2; 
  result = (test::Hello)(arg1)->bar(arg2);
  jresult = (jint)result; 
  return jresult;
}


SWIGEXPORT jlong JNICALL Java_namespace_1class_namespace_1classJNI_new_1Foobar(JNIEnv *jenv, jclass jcls) {
  jlong jresult = 0 ;
  test::hola::Foobar *result = 0 ;
  
  (void)jenv;
  (void)jcls;
  result = (test::hola::Foobar *)new test::hola::Foobar();
  *(test::hola::Foobar **)&jresult = result; 
  return jresult;
}


SWIGEXPORT void JNICALL Java_namespace_1class_namespace_1classJNI_delete_1Foobar(JNIEnv *jenv, jclass jcls, jlong jarg1) {
  test::hola::Foobar *arg1 = (test::hola::Foobar *) 0 ;
  
  (void)jenv;
  (void)jcls;
  arg1 = *(test::hola::Foobar **)&jarg1; 
  delete arg1;
}


SWIGEXPORT jint JNICALL Java_namespace_1class_namespace_1classJNI_FooT_1i_1quack(JNIEnv *jenv, jclass jcls, jlong jarg1, jobject jarg1_, jint jarg2) {
  jint jresult = 0 ;
  test::hola::FooT< int > *arg1 = (test::hola::FooT< int > *) 0 ;
  int arg2 ;
  int result;
  
  (void)jenv;
  (void)jcls;
  (void)jarg1_;
  arg1 = *(test::hola::FooT< int > **)&jarg1; 
  arg2 = (int)jarg2; 
  result = (int)(arg1)->quack(arg2);
  jresult = (jint)result; 
  return jresult;
}


SWIGEXPORT jlong JNICALL Java_namespace_1class_namespace_1classJNI_new_1FooT_1i(JNIEnv *jenv, jclass jcls) {
  jlong jresult = 0 ;
  test::hola::FooT< int > *result = 0 ;
  
  (void)jenv;
  (void)jcls;
  result = (test::hola::FooT< int > *)new test::hola::FooT< int >();
  *(test::hola::FooT< int > **)&jresult = result; 
  return jresult;
}


SWIGEXPORT void JNICALL Java_namespace_1class_namespace_1classJNI_delete_1FooT_1i(JNIEnv *jenv, jclass jcls, jlong jarg1) {
  test::hola::FooT< int > *arg1 = (test::hola::FooT< int > *) 0 ;
  
  (void)jenv;
  (void)jcls;
  arg1 = *(test::hola::FooT< int > **)&jarg1; 
  delete arg1;
}


SWIGEXPORT jint JNICALL Java_namespace_1class_namespace_1classJNI_FooT_1H_1foo(JNIEnv *jenv, jclass jcls, jlong jarg1, jobject jarg1_, jint jarg2) {
  jint jresult = 0 ;
  test::hola::FooT< test::Hello > *arg1 = (test::hola::FooT< test::Hello > *) 0 ;
  test::Hello arg2 ;
  test::Hello result;
  
  (void)jenv;
  (void)jcls;
  (void)jarg1_;
  arg1 = *(test::hola::FooT< test::Hello > **)&jarg1; 
  arg2 = (test::Hello)jarg2; 
  result = (test::Hello)(arg1)->foo(arg2);
  jresult = (jint)result; 
  return jresult;
}


SWIGEXPORT jint JNICALL Java_namespace_1class_namespace_1classJNI_FooT_1H_1bar(JNIEnv *jenv, jclass jcls, jlong jarg1, jobject jarg1_, jint jarg2) {
  jint jresult = 0 ;
  test::hola::FooT< test::Hello > *arg1 = (test::hola::FooT< test::Hello > *) 0 ;
  test::Hello arg2 ;
  test::Hello result;
  
  (void)jenv;
  (void)jcls;
  (void)jarg1_;
  arg1 = *(test::hola::FooT< test::Hello > **)&jarg1; 
  arg2 = (test::Hello)jarg2; 
  result = (test::Hello)(arg1)->bar(arg2);
  jresult = (jint)result; 
  return jresult;
}


SWIGEXPORT jlong JNICALL Java_namespace_1class_namespace_1classJNI_new_1FooT_1H(JNIEnv *jenv, jclass jcls) {
  jlong jresult = 0 ;
  test::hola::FooT< test::Hello > *result = 0 ;
  
  (void)jenv;
  (void)jcls;
  result = (test::hola::FooT< test::Hello > *)new test::hola::FooT< test::Hello >();
  *(test::hola::FooT< test::Hello > **)&jresult = result; 
  return jresult;
}


SWIGEXPORT void JNICALL Java_namespace_1class_namespace_1classJNI_delete_1FooT_1H(JNIEnv *jenv, jclass jcls, jlong jarg1) {
  test::hola::FooT< test::Hello > *arg1 = (test::hola::FooT< test::Hello > *) 0 ;
  
  (void)jenv;
  (void)jcls;
  arg1 = *(test::hola::FooT< test::Hello > **)&jarg1; 
  delete arg1;
}


SWIGEXPORT jdouble JNICALL Java_namespace_1class_namespace_1classJNI_FooT_1d_1moo(JNIEnv *jenv, jclass jcls, jlong jarg1, jobject jarg1_, jdouble jarg2) {
  jdouble jresult = 0 ;
  test::hola::FooT< double > *arg1 = (test::hola::FooT< double > *) 0 ;
  double arg2 ;
  double result;
  
  (void)jenv;
  (void)jcls;
  (void)jarg1_;
  arg1 = *(test::hola::FooT< double > **)&jarg1; 
  arg2 = (double)jarg2; 
  result = (double)(arg1)->moo(arg2);
  jresult = (jdouble)result; 
  return jresult;
}


SWIGEXPORT jlong JNICALL Java_namespace_1class_namespace_1classJNI_new_1FooT_1d(JNIEnv *jenv, jclass jcls) {
  jlong jresult = 0 ;
  test::hola::FooT< double > *result = 0 ;
  
  (void)jenv;
  (void)jcls;
  result = (test::hola::FooT< double > *)new test::hola::FooT< double >();
  *(test::hola::FooT< double > **)&jresult = result; 
  return jresult;
}


SWIGEXPORT void JNICALL Java_namespace_1class_namespace_1classJNI_delete_1FooT_1d(JNIEnv *jenv, jclass jcls, jlong jarg1) {
  test::hola::FooT< double > *arg1 = (test::hola::FooT< double > *) 0 ;
  
  (void)jenv;
  (void)jcls;
  arg1 = *(test::hola::FooT< double > **)&jarg1; 
  delete arg1;
}


SWIGEXPORT jlong JNICALL Java_namespace_1class_namespace_1classJNI_new_1BarT_1H(JNIEnv *jenv, jclass jcls) {
  jlong jresult = 0 ;
  test::hola::BarT< test::Hello > *result = 0 ;
  
  (void)jenv;
  (void)jcls;
  result = (test::hola::BarT< test::Hello > *)new test::hola::BarT< test::Hello >();
  *(test::hola::BarT< test::Hello > **)&jresult = result; 
  return jresult;
}


SWIGEXPORT void JNICALL Java_namespace_1class_namespace_1classJNI_delete_1BarT_1H(JNIEnv *jenv, jclass jcls, jlong jarg1) {
  test::hola::BarT< test::Hello > *arg1 = (test::hola::BarT< test::Hello > *) 0 ;
  
  (void)jenv;
  (void)jcls;
  arg1 = *(test::hola::BarT< test::Hello > **)&jarg1; 
  delete arg1;
}


SWIGEXPORT jlong JNICALL Java_namespace_1class_namespace_1classJNI_new_1Poo_1i(JNIEnv *jenv, jclass jcls) {
  jlong jresult = 0 ;
  hi::hello::PooT< int > *result = 0 ;
  
  (void)jenv;
  (void)jcls;
  result = (hi::hello::PooT< int > *)new hi::hello::PooT< int >();
  *(hi::hello::PooT< int > **)&jresult = result; 
  return jresult;
}


SWIGEXPORT void JNICALL Java_namespace_1class_namespace_1classJNI_delete_1Poo_1i(JNIEnv *jenv, jclass jcls, jlong jarg1) {
  hi::hello::PooT< int > *arg1 = (hi::hello::PooT< int > *) 0 ;
  
  (void)jenv;
  (void)jcls;
  arg1 = *(hi::hello::PooT< int > **)&jarg1; 
  delete arg1;
}


SWIGEXPORT jlong JNICALL Java_namespace_1class_namespace_1classJNI_new_1BooT_1H(JNIEnv *jenv, jclass jcls) {
  jlong jresult = 0 ;
  BooT< test::Hello > *result = 0 ;
  
  (void)jenv;
  (void)jcls;
  result = (BooT< test::Hello > *)new BooT< test::Hello >();
  *(BooT< test::Hello > **)&jresult = result; 
  return jresult;
}


SWIGEXPORT void JNICALL Java_namespace_1class_namespace_1classJNI_delete_1BooT_1H(JNIEnv *jenv, jclass jcls, jlong jarg1) {
  BooT< test::Hello > *arg1 = (BooT< test::Hello > *) 0 ;
  
  (void)jenv;
  (void)jcls;
  arg1 = *(BooT< test::Hello > **)&jarg1; 
  delete arg1;
}


SWIGEXPORT jlong JNICALL Java_namespace_1class_namespace_1classJNI_new_1BooT_1i(JNIEnv *jenv, jclass jcls) {
  jlong jresult = 0 ;
  BooT< int > *result = 0 ;
  
  (void)jenv;
  (void)jcls;
  result = (BooT< int > *)new BooT< int >();
  *(BooT< int > **)&jresult = result; 
  return jresult;
}


SWIGEXPORT void JNICALL Java_namespace_1class_namespace_1classJNI_delete_1BooT_1i(JNIEnv *jenv, jclass jcls, jlong jarg1) {
  BooT< int > *arg1 = (BooT< int > *) 0 ;
  
  (void)jenv;
  (void)jcls;
  arg1 = *(BooT< int > **)&jarg1; 
  delete arg1;
}


SWIGEXPORT void JNICALL Java_namespace_1class_namespace_1classJNI_EulerT3D_1hello(JNIEnv *jenv, jclass jcls) {
  (void)jenv;
  (void)jcls;
  jafar::jmath::EulerT3D::hello();
}


SWIGEXPORT void JNICALL Java_namespace_1class_namespace_1classJNI_EulerT3D_1toFrame(JNIEnv *jenv, jclass jcls, jint jarg1, jint jarg2, jint jarg3) {
  int *arg1 = 0 ;
  int *arg2 = 0 ;
  int *arg3 = 0 ;
  int temp1 ;
  int temp2 ;
  int temp3 ;
  
  (void)jenv;
  (void)jcls;
  temp1 = (int)jarg1; 
  arg1 = &temp1; 
  temp2 = (int)jarg2; 
  arg2 = &temp2; 
  temp3 = (int)jarg3; 
  arg3 = &temp3; 
  jafar::jmath::EulerT3D::SWIGTEMPLATEDISAMBIGUATOR toFrame< int,int,int >((int const &)*arg1,(int const &)*arg2,(int const &)*arg3);
}


SWIGEXPORT void JNICALL Java_namespace_1class_namespace_1classJNI_EulerT3D_1callint(JNIEnv *jenv, jclass jcls, jlong jarg1, jobject jarg1_, jlong jarg2) {
  jafar::jmath::EulerT3D *arg1 = (jafar::jmath::EulerT3D *) 0 ;
  int *arg2 = 0 ;
  
  (void)jenv;
  (void)jcls;
  (void)jarg1_;
  arg1 = *(jafar::jmath::EulerT3D **)&jarg1; 
  arg2 = *(int **)&jarg2;
  if (!arg2) {
    SWIG_JavaThrowException(jenv, SWIG_JavaNullPointerException, "int & reference is null");
    return ;
  } 
  (arg1)->SWIGTEMPLATEDISAMBIGUATOR operator ()(*arg2);
}


SWIGEXPORT void JNICALL Java_namespace_1class_namespace_1classJNI_EulerT3D_1lessint(JNIEnv *jenv, jclass jcls, jlong jarg1, jobject jarg1_, jlong jarg2) {
  jafar::jmath::EulerT3D *arg1 = (jafar::jmath::EulerT3D *) 0 ;
  int *arg2 = 0 ;
  
  (void)jenv;
  (void)jcls;
  (void)jarg1_;
  arg1 = *(jafar::jmath::EulerT3D **)&jarg1; 
  arg2 = *(int **)&jarg2;
  if (!arg2) {
    SWIG_JavaThrowException(jenv, SWIG_JavaNullPointerException, "int & reference is null");
    return ;
  } 
  (arg1)->SWIGTEMPLATEDISAMBIGUATOR operator <(*arg2);
}


SWIGEXPORT void JNICALL Java_namespace_1class_namespace_1classJNI_EulerT3D_1callfooi(JNIEnv *jenv, jclass jcls, jlong jarg1, jobject jarg1_, jlong jarg2, jobject jarg2_) {
  jafar::jmath::EulerT3D *arg1 = (jafar::jmath::EulerT3D *) 0 ;
  test::hola::FooT< int > *arg2 = 0 ;
  
  (void)jenv;
  (void)jcls;
  (void)jarg1_;
  (void)jarg2_;
  arg1 = *(jafar::jmath::EulerT3D **)&jarg1; 
  arg2 = *(test::hola::FooT< int > **)&jarg2;
  if (!arg2) {
    SWIG_JavaThrowException(jenv, SWIG_JavaNullPointerException, "test::hola::FooT< int > & reference is null");
    return ;
  } 
  (arg1)->SWIGTEMPLATEDISAMBIGUATOR operator ()(*arg2);
}


SWIGEXPORT void JNICALL Java_namespace_1class_namespace_1classJNI_EulerT3D_1lessfooi(JNIEnv *jenv, jclass jcls, jlong jarg1, jobject jarg1_, jlong jarg2, jobject jarg2_) {
  jafar::jmath::EulerT3D *arg1 = (jafar::jmath::EulerT3D *) 0 ;
  test::hola::FooT< int > *arg2 = 0 ;
  
  (void)jenv;
  (void)jcls;
  (void)jarg1_;
  (void)jarg2_;
  arg1 = *(jafar::jmath::EulerT3D **)&jarg1; 
  arg2 = *(test::hola::FooT< int > **)&jarg2;
  if (!arg2) {
    SWIG_JavaThrowException(jenv, SWIG_JavaNullPointerException, "test::hola::FooT< int > & reference is null");
    return ;
  } 
  (arg1)->SWIGTEMPLATEDISAMBIGUATOR operator <(*arg2);
}


SWIGEXPORT jlong JNICALL Java_namespace_1class_namespace_1classJNI_new_1EulerT3D(JNIEnv *jenv, jclass jcls) {
  jlong jresult = 0 ;
  jafar::jmath::EulerT3D *result = 0 ;
  
  (void)jenv;
  (void)jcls;
  result = (jafar::jmath::EulerT3D *)new jafar::jmath::EulerT3D();
  *(jafar::jmath::EulerT3D **)&jresult = result; 
  return jresult;
}


SWIGEXPORT void JNICALL Java_namespace_1class_namespace_1classJNI_delete_1EulerT3D(JNIEnv *jenv, jclass jcls, jlong jarg1) {
  jafar::jmath::EulerT3D *arg1 = (jafar::jmath::EulerT3D *) 0 ;
  
  (void)jenv;
  (void)jcls;
  arg1 = *(jafar::jmath::EulerT3D **)&jarg1; 
  delete arg1;
}


SWIGEXPORT jlong JNICALL Java_namespace_1class_namespace_1classJNI_new_1Ala(JNIEnv *jenv, jclass jcls) {
  jlong jresult = 0 ;
  Ala *result = 0 ;
  
  (void)jenv;
  (void)jcls;
  result = (Ala *)new Ala();
  *(Ala **)&jresult = result; 
  return jresult;
}


SWIGEXPORT void JNICALL Java_namespace_1class_namespace_1classJNI_Ala_1hi(JNIEnv *jenv, jclass jcls) {
  (void)jenv;
  (void)jcls;
  Ala::SWIGTEMPLATEDISAMBIGUATOR hi< int >();
}


SWIGEXPORT void JNICALL Java_namespace_1class_namespace_1classJNI_delete_1Ala(JNIEnv *jenv, jclass jcls, jlong jarg1) {
  Ala *arg1 = (Ala *) 0 ;
  
  (void)jenv;
  (void)jcls;
  arg1 = *(Ala **)&jarg1; 
  delete arg1;
}


SWIGEXPORT jlong JNICALL Java_namespace_1class_namespace_1classJNI_new_1Ala_1_1Ola(JNIEnv *jenv, jclass jcls) {
  jlong jresult = 0 ;
  Ala::Ola *result = 0 ;
  
  (void)jenv;
  (void)jcls;
  result = (Ala::Ola *)new Ala::Ola();
  *(Ala::Ola **)&jresult = result; 
  return jresult;
}


SWIGEXPORT void JNICALL Java_namespace_1class_namespace_1classJNI_Ala_1_1Ola_1eek(JNIEnv *jenv, jclass jcls, jlong jarg1) {
  Ala::Ola *arg1 = (Ala::Ola *) 0 ;
  
  (void)jenv;
  (void)jcls;
  arg1 = *(Ala::Ola **)&jarg1; 
  (arg1)->eek();
}


SWIGEXPORT void JNICALL Java_namespace_1class_namespace_1classJNI_delete_1Ala_1_1Ola(JNIEnv *jenv, jclass jcls, jlong jarg1) {
  Ala::Ola *arg1 = (Ala::Ola *) 0 ;
  
  (void)jenv;
  (void)jcls;
  arg1 = *(Ala::Ola **)&jarg1; 
  delete arg1;
}


SWIGEXPORT jlong JNICALL Java_namespace_1class_namespace_1classJNI_new_1File(JNIEnv *jenv, jclass jcls) {
  jlong jresult = 0 ;
  TagLib::File *result = 0 ;
  
  (void)jenv;
  (void)jcls;
  result = (TagLib::File *)new TagLib::File();
  *(TagLib::File **)&jresult = result; 
  return jresult;
}


SWIGEXPORT void JNICALL Java_namespace_1class_namespace_1classJNI_delete_1File(JNIEnv *jenv, jclass jcls, jlong jarg1) {
  TagLib::File *arg1 = (TagLib::File *) 0 ;
  
  (void)jenv;
  (void)jcls;
  arg1 = *(TagLib::File **)&jarg1; 
  delete arg1;
}


SWIGEXPORT jlong JNICALL Java_namespace_1class_namespace_1classJNI_new_1AudioProperties(JNIEnv *jenv, jclass jcls) {
  jlong jresult = 0 ;
  TagLib::AudioProperties *result = 0 ;
  
  (void)jenv;
  (void)jcls;
  result = (TagLib::AudioProperties *)new TagLib::AudioProperties();
  *(TagLib::AudioProperties **)&jresult = result; 
  return jresult;
}


SWIGEXPORT void JNICALL Java_namespace_1class_namespace_1classJNI_delete_1AudioProperties(JNIEnv *jenv, jclass jcls, jlong jarg1) {
  TagLib::AudioProperties *arg1 = (TagLib::AudioProperties *) 0 ;
  
  (void)jenv;
  (void)jcls;
  arg1 = *(TagLib::AudioProperties **)&jarg1; 
  delete arg1;
}


SWIGEXPORT jlong JNICALL Java_namespace_1class_namespace_1classJNI_new_1AudioPropertiesFile(JNIEnv *jenv, jclass jcls) {
  jlong jresult = 0 ;
  TagLib::AudioPropertiesFile *result = 0 ;
  
  (void)jenv;
  (void)jcls;
  result = (TagLib::AudioPropertiesFile *)new TagLib::AudioPropertiesFile();
  *(TagLib::AudioPropertiesFile **)&jresult = result; 
  return jresult;
}


SWIGEXPORT void JNICALL Java_namespace_1class_namespace_1classJNI_delete_1AudioPropertiesFile(JNIEnv *jenv, jclass jcls, jlong jarg1) {
  TagLib::AudioPropertiesFile *arg1 = (TagLib::AudioPropertiesFile *) 0 ;
  
  (void)jenv;
  (void)jcls;
  arg1 = *(TagLib::AudioPropertiesFile **)&jarg1; 
  delete arg1;
}


SWIGEXPORT jlong JNICALL Java_namespace_1class_namespace_1classJNI_new_1Properties(JNIEnv *jenv, jclass jcls, jlong jarg1, jobject jarg1_) {
  jlong jresult = 0 ;
  TagLib::FLAC::File *arg1 = (TagLib::FLAC::File *) 0 ;
  TagLib::FLAC::Properties *result = 0 ;
  
  (void)jenv;
  (void)jcls;
  (void)jarg1_;
  arg1 = *(TagLib::FLAC::File **)&jarg1; 
  result = (TagLib::FLAC::Properties *)new TagLib::FLAC::Properties(arg1);
  *(TagLib::FLAC::Properties **)&jresult = result; 
  return jresult;
}


SWIGEXPORT void JNICALL Java_namespace_1class_namespace_1classJNI_delete_1Properties(JNIEnv *jenv, jclass jcls, jlong jarg1) {
  TagLib::FLAC::Properties *arg1 = (TagLib::FLAC::Properties *) 0 ;
  
  (void)jenv;
  (void)jcls;
  arg1 = *(TagLib::FLAC::Properties **)&jarg1; 
  delete arg1;
}


SWIGEXPORT jlong JNICALL Java_namespace_1class_namespace_1classJNI_new_1PropertiesFile_1_1SWIG_10(JNIEnv *jenv, jclass jcls, jlong jarg1, jobject jarg1_) {
  jlong jresult = 0 ;
  TagLib::AudioPropertiesFile::File *arg1 = (TagLib::AudioPropertiesFile::File *) 0 ;
  TagLib::FLAC::PropertiesFile *result = 0 ;
  
  (void)jenv;
  (void)jcls;
  (void)jarg1_;
  arg1 = *(TagLib::AudioPropertiesFile::File **)&jarg1; 
  result = (TagLib::FLAC::PropertiesFile *)new TagLib::FLAC::PropertiesFile(arg1);
  *(TagLib::FLAC::PropertiesFile **)&jresult = result; 
  return jresult;
}


SWIGEXPORT jlong JNICALL Java_namespace_1class_namespace_1classJNI_new_1PropertiesFile_1_1SWIG_11(JNIEnv *jenv, jclass jcls) {
  jlong jresult = 0 ;
  TagLib::FLAC::PropertiesFile *result = 0 ;
  
  (void)jenv;
  (void)jcls;
  result = (TagLib::FLAC::PropertiesFile *)new TagLib::FLAC::PropertiesFile();
  *(TagLib::FLAC::PropertiesFile **)&jresult = result; 
  return jresult;
}


SWIGEXPORT void JNICALL Java_namespace_1class_namespace_1classJNI_delete_1PropertiesFile(JNIEnv *jenv, jclass jcls, jlong jarg1) {
  TagLib::FLAC::PropertiesFile *arg1 = (TagLib::FLAC::PropertiesFile *) 0 ;
  
  (void)jenv;
  (void)jcls;
  arg1 = *(TagLib::FLAC::PropertiesFile **)&jarg1; 
  delete arg1;
}


SWIGEXPORT jlong JNICALL Java_namespace_1class_namespace_1classJNI_new_1PropertiesFree(JNIEnv *jenv, jclass jcls, jlong jarg1, jobject jarg1_) {
  jlong jresult = 0 ;
  TagLib::FLAC::File *arg1 = (TagLib::FLAC::File *) 0 ;
  TagLib::FLAC::bar::PropertiesFree *result = 0 ;
  
  (void)jenv;
  (void)jcls;
  (void)jarg1_;
  arg1 = *(TagLib::FLAC::File **)&jarg1; 
  result = (TagLib::FLAC::bar::PropertiesFree *)new TagLib::FLAC::bar::PropertiesFree(arg1);
  *(TagLib::FLAC::bar::PropertiesFree **)&jresult = result; 
  return jresult;
}


SWIGEXPORT void JNICALL Java_namespace_1class_namespace_1classJNI_delete_1PropertiesFree(JNIEnv *jenv, jclass jcls, jlong jarg1) {
  TagLib::FLAC::bar::PropertiesFree *arg1 = (TagLib::FLAC::bar::PropertiesFree *) 0 ;
  
  (void)jenv;
  (void)jcls;
  arg1 = *(TagLib::FLAC::bar::PropertiesFree **)&jarg1; 
  delete arg1;
}


SWIGEXPORT jlong JNICALL Java_namespace_1class_namespace_1classJNI_new_1FooFilePrivate(JNIEnv *jenv, jclass jcls, jlong jarg1, jobject jarg1_) {
  jlong jresult = 0 ;
  TagLib::AudioPropertiesFile::File *arg1 = (TagLib::AudioPropertiesFile::File *) 0 ;
  TagLib::FLAC::FooFilePrivate *result = 0 ;
  
  (void)jenv;
  (void)jcls;
  (void)jarg1_;
  arg1 = *(TagLib::AudioPropertiesFile::File **)&jarg1; 
  result = (TagLib::FLAC::FooFilePrivate *)new TagLib::FLAC::FooFilePrivate(arg1);
  *(TagLib::FLAC::FooFilePrivate **)&jresult = result; 
  return jresult;
}


SWIGEXPORT void JNICALL Java_namespace_1class_namespace_1classJNI_delete_1FooFilePrivate(JNIEnv *jenv, jclass jcls, jlong jarg1) {
  TagLib::FLAC::FooFilePrivate *arg1 = (TagLib::FLAC::FooFilePrivate *) 0 ;
  
  (void)jenv;
  (void)jcls;
  arg1 = *(TagLib::FLAC::FooFilePrivate **)&jarg1; 
  delete arg1;
}


SWIGEXPORT jlong JNICALL Java_namespace_1class_namespace_1classJNI_new_1FooFile(JNIEnv *jenv, jclass jcls, jlong jarg1, jobject jarg1_) {
  jlong jresult = 0 ;
  TagLib::AudioPropertiesFile::File *arg1 = (TagLib::AudioPropertiesFile::File *) 0 ;
  TagLib::FLAC::FooFile *result = 0 ;
  
  (void)jenv;
  (void)jcls;
  (void)jarg1_;
  arg1 = *(TagLib::AudioPropertiesFile::File **)&jarg1; 
  result = (TagLib::FLAC::FooFile *)new TagLib::FLAC::FooFile(arg1);
  *(TagLib::FLAC::FooFile **)&jresult = result; 
  return jresult;
}


SWIGEXPORT void JNICALL Java_namespace_1class_namespace_1classJNI_delete_1FooFile(JNIEnv *jenv, jclass jcls, jlong jarg1) {
  TagLib::FLAC::FooFile *arg1 = (TagLib::FLAC::FooFile *) 0 ;
  
  (void)jenv;
  (void)jcls;
  arg1 = *(TagLib::FLAC::FooFile **)&jarg1; 
  delete arg1;
}


SWIGEXPORT jlong JNICALL Java_namespace_1class_namespace_1classJNI_new_1FLACFile(JNIEnv *jenv, jclass jcls) {
  jlong jresult = 0 ;
  TagLib::FLAC::File *result = 0 ;
  
  (void)jenv;
  (void)jcls;
  result = (TagLib::FLAC::File *)new TagLib::FLAC::File();
  *(TagLib::FLAC::File **)&jresult = result; 
  return jresult;
}


SWIGEXPORT void JNICALL Java_namespace_1class_namespace_1classJNI_delete_1FLACFile(JNIEnv *jenv, jclass jcls, jlong jarg1) {
  TagLib::FLAC::File *arg1 = (TagLib::FLAC::File *) 0 ;
  
  (void)jenv;
  (void)jcls;
  arg1 = *(TagLib::FLAC::File **)&jarg1; 
  delete arg1;
}


SWIGEXPORT jlong JNICALL Java_namespace_1class_namespace_1classJNI_Foo_1SWIGUpcast(JNIEnv *jenv, jclass jcls, jlong jarg1) {
    jlong baseptr = 0;
    (void)jenv;
    (void)jcls;
    *(test::Bar **)&baseptr = *(test::hola::Foo **)&jarg1;
    return baseptr;
}

SWIGEXPORT jlong JNICALL Java_namespace_1class_namespace_1classJNI_Foobar_1SWIGUpcast(JNIEnv *jenv, jclass jcls, jlong jarg1) {
    jlong baseptr = 0;
    (void)jenv;
    (void)jcls;
    *(test::Bar **)&baseptr = *(test::hola::Foobar **)&jarg1;
    return baseptr;
}

SWIGEXPORT jlong JNICALL Java_namespace_1class_namespace_1classJNI_Properties_1SWIGUpcast(JNIEnv *jenv, jclass jcls, jlong jarg1) {
    jlong baseptr = 0;
    (void)jenv;
    (void)jcls;
    *(TagLib::AudioProperties **)&baseptr = *(TagLib::FLAC::Properties **)&jarg1;
    return baseptr;
}

SWIGEXPORT jlong JNICALL Java_namespace_1class_namespace_1classJNI_PropertiesFile_1SWIGUpcast(JNIEnv *jenv, jclass jcls, jlong jarg1) {
    jlong baseptr = 0;
    (void)jenv;
    (void)jcls;
    *(TagLib::AudioPropertiesFile **)&baseptr = *(TagLib::FLAC::PropertiesFile **)&jarg1;
    return baseptr;
}

SWIGEXPORT jlong JNICALL Java_namespace_1class_namespace_1classJNI_PropertiesFree_1SWIGUpcast(JNIEnv *jenv, jclass jcls, jlong jarg1) {
    jlong baseptr = 0;
    (void)jenv;
    (void)jcls;
    *(TagLib::AudioProperties **)&baseptr = *(TagLib::FLAC::bar::PropertiesFree **)&jarg1;
    return baseptr;
}

SWIGEXPORT jlong JNICALL Java_namespace_1class_namespace_1classJNI_FooFile_1SWIGUpcast(JNIEnv *jenv, jclass jcls, jlong jarg1) {
    jlong baseptr = 0;
    (void)jenv;
    (void)jcls;
    *(TagLib::FLAC::PropertiesFile **)&baseptr = *(TagLib::FLAC::FooFile **)&jarg1;
    return baseptr;
}

#ifdef __cplusplus
}
#endif
