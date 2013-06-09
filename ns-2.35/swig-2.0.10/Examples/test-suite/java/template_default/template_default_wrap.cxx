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


  
  namespace ns1 {
    namespace ns2 {
      
      struct Parm
      {
      };
      
      template <class T1, class T2 = T1>
      class A
      {
	
#ifdef SWIG      
	%typemap(in) A *  { /* in A */ }
  #ifdef SWIGCSHARP
	%typemap(out) A *  { /* out A */ $result=0; }
  #else
	%typemap(out) A *  { /* out A */ }
  #endif
#endif
      };

      typedef unsigned int category;
      
      const category one = 1;
      const category two = 1;
      
      
      template <class T1, category C = one, class T2 = Parm>
      class N
      {
	
#ifdef SWIG      
	%typemap(in) N *  { /* in N */ }
  #ifdef SWIGCSHARP
	%typemap(out) N *  { /* out N */ $result=0; }
  #else
	%typemap(out) N *  { /* out N */ }
  #endif
#endif
      };
    }
  }

SWIGINTERN int ns1_ns2_A_Sl_int_Sc_int_Sg__bar(ns1::ns2::A< int,int > *self){ return 1; }
SWIGINTERN int ns1_ns2_A_Sl_double_Sg__bar(ns1::ns2::A< double > *self){ return 1; }
SWIGINTERN int ns1_ns2_N_Sl_double_Sg__bar(ns1::ns2::N< double > *self){ return 1; }

  namespace ns1 {
    namespace ns2 {    
      namespace ns3 {  

	struct B : A<int> 
	{
	};
	
	struct C : N<double,ns1::ns2::one> 
	{	  
	};
	
	
	A<int> *get_a1(A<int> *a) {
	  return a;
	}
	
	A<int,int> *get_a2(A<int,int> *a) {
	  return a;
	}

      }
    }
  }


  namespace ns1 {    
    struct Traits
    {
      static const ns2::category c = ns2::one;
    };
    namespace ns4 {    
      
      template <class T>
      struct D : ns2::N<double,T::c>
      {
	D()
	{
	}
	
      };

      template <class T1, class T2 = D<T1> >
      struct Base : T2
      {
      };
    }
  }


  namespace ns1 {    
    namespace ns5 {    
      
      struct Der : ns4::Base<Traits>
      {
      };
    }
  }
  



  namespace hi 
  {
    class CFoo
    {
    };
    
    template<class T1, class T2 = T1> class CTemplate
    {
    };
    
    typedef CTemplate<CFoo> TBla;                  // OK
    typedef void (*TFunc1)(CFoo arg);              // OK
    typedef void (*TFunc2)(CTemplate<CFoo> arg);   // OK
    typedef void (*TFunc3)(CTemplate<CFoo>* arg);  // OK

    int foo(TFunc1 a, TFunc2 b, TFunc3 c) 
    {
      return 0;
    }
  }  


#include <stdexcept>


#include <vector>
#include <stdexcept>


#include <vector>


void g(std::vector<double>* s = 0) {}
void q(double = 0) {}


#ifdef __cplusplus
extern "C" {
#endif

SWIGEXPORT jlong JNICALL Java_template_1default_template_1defaultJNI_new_1Parm(JNIEnv *jenv, jclass jcls) {
  jlong jresult = 0 ;
  ns1::ns2::Parm *result = 0 ;
  
  (void)jenv;
  (void)jcls;
  result = (ns1::ns2::Parm *)new ns1::ns2::Parm();
  *(ns1::ns2::Parm **)&jresult = result; 
  return jresult;
}


SWIGEXPORT void JNICALL Java_template_1default_template_1defaultJNI_delete_1Parm(JNIEnv *jenv, jclass jcls, jlong jarg1) {
  ns1::ns2::Parm *arg1 = (ns1::ns2::Parm *) 0 ;
  
  (void)jenv;
  (void)jcls;
  arg1 = *(ns1::ns2::Parm **)&jarg1; 
  delete arg1;
}


SWIGEXPORT jlong JNICALL Java_template_1default_template_1defaultJNI_one_1get(JNIEnv *jenv, jclass jcls) {
  jlong jresult = 0 ;
  ns1::ns2::category result;
  
  (void)jenv;
  (void)jcls;
  result = (ns1::ns2::category)(ns1::ns2::category)ns1::ns2::one;
  jresult = (jlong)result; 
  return jresult;
}


SWIGEXPORT jlong JNICALL Java_template_1default_template_1defaultJNI_two_1get(JNIEnv *jenv, jclass jcls) {
  jlong jresult = 0 ;
  ns1::ns2::category result;
  
  (void)jenv;
  (void)jcls;
  result = (ns1::ns2::category)(ns1::ns2::category)ns1::ns2::two;
  jresult = (jlong)result; 
  return jresult;
}


SWIGEXPORT jlong JNICALL Java_template_1default_template_1defaultJNI_new_1A_1p(JNIEnv *jenv, jclass jcls) {
  jlong jresult = 0 ;
  ns1::ns2::A< double,ns1::ns2::Parm > *result = 0 ;
  
  (void)jenv;
  (void)jcls;
  result = (ns1::ns2::A< double,ns1::ns2::Parm > *)new ns1::ns2::A< double,ns1::ns2::Parm >();
  {
    /* out A */ 
  }
  return jresult;
}


SWIGEXPORT void JNICALL Java_template_1default_template_1defaultJNI_delete_1A_1p(JNIEnv *jenv, jclass jcls, jlong jarg1) {
  ns1::ns2::A< double,ns1::ns2::Parm > *arg1 = (ns1::ns2::A< double,ns1::ns2::Parm > *) 0 ;
  
  (void)jenv;
  (void)jcls;
  {
    /* in A */ 
  }
  delete arg1;
}


SWIGEXPORT jlong JNICALL Java_template_1default_template_1defaultJNI_new_1N_11p(JNIEnv *jenv, jclass jcls) {
  jlong jresult = 0 ;
  ns1::ns2::N< int > *result = 0 ;
  
  (void)jenv;
  (void)jcls;
  result = (ns1::ns2::N< int > *)new ns1::ns2::N< int >();
  {
    /* out N */ 
  }
  return jresult;
}


SWIGEXPORT void JNICALL Java_template_1default_template_1defaultJNI_delete_1N_11p(JNIEnv *jenv, jclass jcls, jlong jarg1) {
  ns1::ns2::N< int > *arg1 = (ns1::ns2::N< int > *) 0 ;
  
  (void)jenv;
  (void)jcls;
  {
    /* in N */ 
  }
  delete arg1;
}


SWIGEXPORT jint JNICALL Java_template_1default_template_1defaultJNI_A_1ii_1bar(JNIEnv *jenv, jclass jcls, jlong jarg1, jobject jarg1_) {
  jint jresult = 0 ;
  ns1::ns2::A< int,int > *arg1 = (ns1::ns2::A< int,int > *) 0 ;
  int result;
  
  (void)jenv;
  (void)jcls;
  (void)jarg1_;
  {
    /* in A */ 
  }
  result = (int)ns1_ns2_A_Sl_int_Sc_int_Sg__bar(arg1);
  jresult = (jint)result; 
  return jresult;
}


SWIGEXPORT jlong JNICALL Java_template_1default_template_1defaultJNI_new_1A_1ii(JNIEnv *jenv, jclass jcls) {
  jlong jresult = 0 ;
  ns1::ns2::A< int,int > *result = 0 ;
  
  (void)jenv;
  (void)jcls;
  result = (ns1::ns2::A< int,int > *)new ns1::ns2::A< int,int >();
  {
    /* out A */ 
  }
  return jresult;
}


SWIGEXPORT void JNICALL Java_template_1default_template_1defaultJNI_delete_1A_1ii(JNIEnv *jenv, jclass jcls, jlong jarg1) {
  ns1::ns2::A< int,int > *arg1 = (ns1::ns2::A< int,int > *) 0 ;
  
  (void)jenv;
  (void)jcls;
  {
    /* in A */ 
  }
  delete arg1;
}


SWIGEXPORT jint JNICALL Java_template_1default_template_1defaultJNI_A_1d_1bar(JNIEnv *jenv, jclass jcls, jlong jarg1, jobject jarg1_) {
  jint jresult = 0 ;
  ns1::ns2::A< double > *arg1 = (ns1::ns2::A< double > *) 0 ;
  int result;
  
  (void)jenv;
  (void)jcls;
  (void)jarg1_;
  {
    /* in A */ 
  }
  result = (int)ns1_ns2_A_Sl_double_Sg__bar(arg1);
  jresult = (jint)result; 
  return jresult;
}


SWIGEXPORT jlong JNICALL Java_template_1default_template_1defaultJNI_new_1A_1d(JNIEnv *jenv, jclass jcls) {
  jlong jresult = 0 ;
  ns1::ns2::A< double > *result = 0 ;
  
  (void)jenv;
  (void)jcls;
  result = (ns1::ns2::A< double > *)new ns1::ns2::A< double >();
  {
    /* out A */ 
  }
  return jresult;
}


SWIGEXPORT void JNICALL Java_template_1default_template_1defaultJNI_delete_1A_1d(JNIEnv *jenv, jclass jcls, jlong jarg1) {
  ns1::ns2::A< double > *arg1 = (ns1::ns2::A< double > *) 0 ;
  
  (void)jenv;
  (void)jcls;
  {
    /* in A */ 
  }
  delete arg1;
}


SWIGEXPORT jint JNICALL Java_template_1default_template_1defaultJNI_N_1d_1bar(JNIEnv *jenv, jclass jcls, jlong jarg1, jobject jarg1_) {
  jint jresult = 0 ;
  ns1::ns2::N< double > *arg1 = (ns1::ns2::N< double > *) 0 ;
  int result;
  
  (void)jenv;
  (void)jcls;
  (void)jarg1_;
  {
    /* in N */ 
  }
  result = (int)ns1_ns2_N_Sl_double_Sg__bar(arg1);
  jresult = (jint)result; 
  return jresult;
}


SWIGEXPORT jlong JNICALL Java_template_1default_template_1defaultJNI_new_1N_1d(JNIEnv *jenv, jclass jcls) {
  jlong jresult = 0 ;
  ns1::ns2::N< double > *result = 0 ;
  
  (void)jenv;
  (void)jcls;
  result = (ns1::ns2::N< double > *)new ns1::ns2::N< double >();
  {
    /* out N */ 
  }
  return jresult;
}


SWIGEXPORT void JNICALL Java_template_1default_template_1defaultJNI_delete_1N_1d(JNIEnv *jenv, jclass jcls, jlong jarg1) {
  ns1::ns2::N< double > *arg1 = (ns1::ns2::N< double > *) 0 ;
  
  (void)jenv;
  (void)jcls;
  {
    /* in N */ 
  }
  delete arg1;
}


SWIGEXPORT jlong JNICALL Java_template_1default_template_1defaultJNI_new_1B(JNIEnv *jenv, jclass jcls) {
  jlong jresult = 0 ;
  ns1::ns2::ns3::B *result = 0 ;
  
  (void)jenv;
  (void)jcls;
  result = (ns1::ns2::ns3::B *)new ns1::ns2::ns3::B();
  *(ns1::ns2::ns3::B **)&jresult = result; 
  return jresult;
}


SWIGEXPORT void JNICALL Java_template_1default_template_1defaultJNI_delete_1B(JNIEnv *jenv, jclass jcls, jlong jarg1) {
  ns1::ns2::ns3::B *arg1 = (ns1::ns2::ns3::B *) 0 ;
  
  (void)jenv;
  (void)jcls;
  arg1 = *(ns1::ns2::ns3::B **)&jarg1; 
  delete arg1;
}


SWIGEXPORT jlong JNICALL Java_template_1default_template_1defaultJNI_new_1C(JNIEnv *jenv, jclass jcls) {
  jlong jresult = 0 ;
  ns1::ns2::ns3::C *result = 0 ;
  
  (void)jenv;
  (void)jcls;
  result = (ns1::ns2::ns3::C *)new ns1::ns2::ns3::C();
  *(ns1::ns2::ns3::C **)&jresult = result; 
  return jresult;
}


SWIGEXPORT void JNICALL Java_template_1default_template_1defaultJNI_delete_1C(JNIEnv *jenv, jclass jcls, jlong jarg1) {
  ns1::ns2::ns3::C *arg1 = (ns1::ns2::ns3::C *) 0 ;
  
  (void)jenv;
  (void)jcls;
  arg1 = *(ns1::ns2::ns3::C **)&jarg1; 
  delete arg1;
}


SWIGEXPORT jlong JNICALL Java_template_1default_template_1defaultJNI_get_1a1(JNIEnv *jenv, jclass jcls, jlong jarg1, jobject jarg1_) {
  jlong jresult = 0 ;
  ns1::ns2::A< int > *arg1 = (ns1::ns2::A< int > *) 0 ;
  ns1::ns2::A< int > *result = 0 ;
  
  (void)jenv;
  (void)jcls;
  (void)jarg1_;
  {
    /* in A */ 
  }
  result = (ns1::ns2::A< int > *)ns1::ns2::ns3::get_a1(arg1);
  {
    /* out A */ 
  }
  return jresult;
}


SWIGEXPORT jlong JNICALL Java_template_1default_template_1defaultJNI_get_1a2(JNIEnv *jenv, jclass jcls, jlong jarg1, jobject jarg1_) {
  jlong jresult = 0 ;
  ns1::ns2::A< int,int > *arg1 = (ns1::ns2::A< int,int > *) 0 ;
  ns1::ns2::A< int,int > *result = 0 ;
  
  (void)jenv;
  (void)jcls;
  (void)jarg1_;
  {
    /* in A */ 
  }
  result = (ns1::ns2::A< int,int > *)ns1::ns2::ns3::get_a2(arg1);
  {
    /* out A */ 
  }
  return jresult;
}


SWIGEXPORT jlong JNICALL Java_template_1default_template_1defaultJNI_Traits_1c_1get(JNIEnv *jenv, jclass jcls) {
  jlong jresult = 0 ;
  unsigned int result;
  
  (void)jenv;
  (void)jcls;
  result = (unsigned int)ns1::Traits::c;
  jresult = (jlong)result; 
  return jresult;
}


SWIGEXPORT jlong JNICALL Java_template_1default_template_1defaultJNI_new_1Traits(JNIEnv *jenv, jclass jcls) {
  jlong jresult = 0 ;
  ns1::Traits *result = 0 ;
  
  (void)jenv;
  (void)jcls;
  result = (ns1::Traits *)new ns1::Traits();
  *(ns1::Traits **)&jresult = result; 
  return jresult;
}


SWIGEXPORT void JNICALL Java_template_1default_template_1defaultJNI_delete_1Traits(JNIEnv *jenv, jclass jcls, jlong jarg1) {
  ns1::Traits *arg1 = (ns1::Traits *) 0 ;
  
  (void)jenv;
  (void)jcls;
  arg1 = *(ns1::Traits **)&jarg1; 
  delete arg1;
}


SWIGEXPORT jlong JNICALL Java_template_1default_template_1defaultJNI_new_1Doo(JNIEnv *jenv, jclass jcls) {
  jlong jresult = 0 ;
  ns1::ns4::D< ns1::Traits > *result = 0 ;
  
  (void)jenv;
  (void)jcls;
  result = (ns1::ns4::D< ns1::Traits > *)new ns1::ns4::D< ns1::Traits >();
  *(ns1::ns4::D< ns1::Traits > **)&jresult = result; 
  return jresult;
}


SWIGEXPORT void JNICALL Java_template_1default_template_1defaultJNI_delete_1Doo(JNIEnv *jenv, jclass jcls, jlong jarg1) {
  ns1::ns4::D< ns1::Traits > *arg1 = (ns1::ns4::D< ns1::Traits > *) 0 ;
  
  (void)jenv;
  (void)jcls;
  arg1 = *(ns1::ns4::D< ns1::Traits > **)&jarg1; 
  delete arg1;
}


SWIGEXPORT jlong JNICALL Java_template_1default_template_1defaultJNI_new_1Boo(JNIEnv *jenv, jclass jcls) {
  jlong jresult = 0 ;
  ns1::ns4::Base< ns1::Traits,ns1::ns4::D< ns1::Traits > > *result = 0 ;
  
  (void)jenv;
  (void)jcls;
  result = (ns1::ns4::Base< ns1::Traits,ns1::ns4::D< ns1::Traits > > *)new ns1::ns4::Base< ns1::Traits,ns1::ns4::D< ns1::Traits > >();
  *(ns1::ns4::Base< ns1::Traits,ns1::ns4::D< ns1::Traits > > **)&jresult = result; 
  return jresult;
}


SWIGEXPORT void JNICALL Java_template_1default_template_1defaultJNI_delete_1Boo(JNIEnv *jenv, jclass jcls, jlong jarg1) {
  ns1::ns4::Base< ns1::Traits,ns1::ns4::D< ns1::Traits > > *arg1 = (ns1::ns4::Base< ns1::Traits,ns1::ns4::D< ns1::Traits > > *) 0 ;
  
  (void)jenv;
  (void)jcls;
  arg1 = *(ns1::ns4::Base< ns1::Traits,ns1::ns4::D< ns1::Traits > > **)&jarg1; 
  delete arg1;
}


SWIGEXPORT jlong JNICALL Java_template_1default_template_1defaultJNI_new_1Der(JNIEnv *jenv, jclass jcls) {
  jlong jresult = 0 ;
  ns1::ns5::Der *result = 0 ;
  
  (void)jenv;
  (void)jcls;
  result = (ns1::ns5::Der *)new ns1::ns5::Der();
  *(ns1::ns5::Der **)&jresult = result; 
  return jresult;
}


SWIGEXPORT void JNICALL Java_template_1default_template_1defaultJNI_delete_1Der(JNIEnv *jenv, jclass jcls, jlong jarg1) {
  ns1::ns5::Der *arg1 = (ns1::ns5::Der *) 0 ;
  
  (void)jenv;
  (void)jcls;
  arg1 = *(ns1::ns5::Der **)&jarg1; 
  delete arg1;
}


SWIGEXPORT jlong JNICALL Java_template_1default_template_1defaultJNI_new_1CFoo(JNIEnv *jenv, jclass jcls) {
  jlong jresult = 0 ;
  hi::CFoo *result = 0 ;
  
  (void)jenv;
  (void)jcls;
  result = (hi::CFoo *)new hi::CFoo();
  *(hi::CFoo **)&jresult = result; 
  return jresult;
}


SWIGEXPORT void JNICALL Java_template_1default_template_1defaultJNI_delete_1CFoo(JNIEnv *jenv, jclass jcls, jlong jarg1) {
  hi::CFoo *arg1 = (hi::CFoo *) 0 ;
  
  (void)jenv;
  (void)jcls;
  arg1 = *(hi::CFoo **)&jarg1; 
  delete arg1;
}


SWIGEXPORT jint JNICALL Java_template_1default_template_1defaultJNI_foo(JNIEnv *jenv, jclass jcls, jlong jarg1, jlong jarg2, jlong jarg3) {
  jint jresult = 0 ;
  hi::TFunc1 arg1 = (hi::TFunc1) 0 ;
  hi::TFunc2 arg2 = (hi::TFunc2) 0 ;
  hi::TFunc3 arg3 = (hi::TFunc3) 0 ;
  int result;
  
  (void)jenv;
  (void)jcls;
  arg1 = *(hi::TFunc1 *)&jarg1; 
  arg2 = *(hi::TFunc2 *)&jarg2; 
  arg3 = *(hi::TFunc3 *)&jarg3; 
  result = (int)hi::foo(arg1,arg2,arg3);
  jresult = (jint)result; 
  return jresult;
}


SWIGEXPORT void JNICALL Java_template_1default_template_1defaultJNI_g_1_1SWIG_10(JNIEnv *jenv, jclass jcls, jlong jarg1) {
  std::vector< double > *arg1 = (std::vector< double > *) 0 ;
  
  (void)jenv;
  (void)jcls;
  arg1 = *(std::vector< double > **)&jarg1; 
  g(arg1);
}


SWIGEXPORT void JNICALL Java_template_1default_template_1defaultJNI_g_1_1SWIG_11(JNIEnv *jenv, jclass jcls) {
  (void)jenv;
  (void)jcls;
  g();
}


SWIGEXPORT void JNICALL Java_template_1default_template_1defaultJNI_q_1_1SWIG_10(JNIEnv *jenv, jclass jcls, jdouble jarg1) {
  double arg1 ;
  
  (void)jenv;
  (void)jcls;
  arg1 = (double)jarg1; 
  q(arg1);
}


SWIGEXPORT void JNICALL Java_template_1default_template_1defaultJNI_q_1_1SWIG_11(JNIEnv *jenv, jclass jcls) {
  (void)jenv;
  (void)jcls;
  q();
}


SWIGEXPORT jlong JNICALL Java_template_1default_template_1defaultJNI_Bf_1get(JNIEnv *jenv, jclass jcls) {
  jlong jresult = 0 ;
  void (*result)(std::vector< double > *) = 0 ;
  
  (void)jenv;
  (void)jcls;
  result = (void (*)(std::vector< double > *))(g);
  *(void (**)(std::vector< double > *))&jresult = result; 
  return jresult;
}


SWIGEXPORT jlong JNICALL Java_template_1default_template_1defaultJNI_Cf_1get(JNIEnv *jenv, jclass jcls) {
  jlong jresult = 0 ;
  void (*result)(double) = 0 ;
  
  (void)jenv;
  (void)jcls;
  result = (void (*)(double))(q);
  *(void (**)(double))&jresult = result; 
  return jresult;
}


SWIGEXPORT jlong JNICALL Java_template_1default_template_1defaultJNI_B_1SWIGUpcast(JNIEnv *jenv, jclass jcls, jlong jarg1) {
    jlong baseptr = 0;
    (void)jenv;
    (void)jcls;
    *(ns1::ns2::A< int,int > **)&baseptr = *(ns1::ns2::ns3::B **)&jarg1;
    return baseptr;
}

SWIGEXPORT jlong JNICALL Java_template_1default_template_1defaultJNI_C_1SWIGUpcast(JNIEnv *jenv, jclass jcls, jlong jarg1) {
    jlong baseptr = 0;
    (void)jenv;
    (void)jcls;
    *(ns1::ns2::N< double > **)&baseptr = *(ns1::ns2::ns3::C **)&jarg1;
    return baseptr;
}

SWIGEXPORT jlong JNICALL Java_template_1default_template_1defaultJNI_Doo_1SWIGUpcast(JNIEnv *jenv, jclass jcls, jlong jarg1) {
    jlong baseptr = 0;
    (void)jenv;
    (void)jcls;
    *(ns1::ns2::N< double > **)&baseptr = *(ns1::ns4::D< ns1::Traits > **)&jarg1;
    return baseptr;
}

SWIGEXPORT jlong JNICALL Java_template_1default_template_1defaultJNI_Boo_1SWIGUpcast(JNIEnv *jenv, jclass jcls, jlong jarg1) {
    jlong baseptr = 0;
    (void)jenv;
    (void)jcls;
    *(ns1::ns4::D< ns1::Traits > **)&baseptr = *(ns1::ns4::Base< ns1::Traits,ns1::ns4::D< ns1::Traits > > **)&jarg1;
    return baseptr;
}

SWIGEXPORT jlong JNICALL Java_template_1default_template_1defaultJNI_Der_1SWIGUpcast(JNIEnv *jenv, jclass jcls, jlong jarg1) {
    jlong baseptr = 0;
    (void)jenv;
    (void)jcls;
    *(ns1::ns4::Base< ns1::Traits,ns1::ns4::D< ns1::Traits > > **)&baseptr = *(ns1::ns5::Der **)&jarg1;
    return baseptr;
}

#ifdef __cplusplus
}
#endif

