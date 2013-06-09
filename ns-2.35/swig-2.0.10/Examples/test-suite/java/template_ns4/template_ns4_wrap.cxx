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


    namespace hello {

    class Double {
    };
   
    template <class ArgType, class ResType>
    struct Function_
    {     
	char *test() { return (char *) "test"; }
    };
   
    template <class AF, class RF>
    struct ArithFunction : Function_<AF, RF>
    {
    };
   
    template <class ArgType, class ResType>
    struct traits
    {
    }; 

    template <class ArgType>
    struct traits<ArgType, double>
    {
      typedef ArgType arg_type;
      typedef double res_type;
      typedef ArithFunction<ArgType, double> base;
    };   

    template <class ArgType>
    struct traits<ArgType, Double>
    {
      typedef ArgType arg_type;
      typedef Double res_type;
      typedef ArithFunction<ArgType, Double> base;
    };   

    template <class AF, class RF>
    class Class_ : public ArithFunction< typename traits<AF, RF>::arg_type,
                    typename traits<AF, RF>::res_type >
    {
    };
 
    template <class AF, class RF>
    typename traits<AF, RF>::base
    make_Class()
    {
      return Class_<AF, RF>();
    }


  }  

  
  namespace hello {
    template struct Function_ <Double, Double>;
    template struct ArithFunction <Double, Double>;
    template class Class_ <Double, Double>;   
  }  


#ifdef __cplusplus
extern "C" {
#endif

SWIGEXPORT jlong JNICALL Java_template_1ns4_template_1ns4JNI_new_1Double(JNIEnv *jenv, jclass jcls) {
  jlong jresult = 0 ;
  hello::Double *result = 0 ;
  
  (void)jenv;
  (void)jcls;
  result = (hello::Double *)new hello::Double();
  *(hello::Double **)&jresult = result; 
  return jresult;
}


SWIGEXPORT void JNICALL Java_template_1ns4_template_1ns4JNI_delete_1Double(JNIEnv *jenv, jclass jcls, jlong jarg1) {
  hello::Double *arg1 = (hello::Double *) 0 ;
  
  (void)jenv;
  (void)jcls;
  arg1 = *(hello::Double **)&jarg1; 
  delete arg1;
}


SWIGEXPORT jstring JNICALL Java_template_1ns4_template_1ns4JNI_Function_1DD_1test(JNIEnv *jenv, jclass jcls, jlong jarg1, jobject jarg1_) {
  jstring jresult = 0 ;
  hello::Function_< hello::Double,hello::Double > *arg1 = (hello::Function_< hello::Double,hello::Double > *) 0 ;
  char *result = 0 ;
  
  (void)jenv;
  (void)jcls;
  (void)jarg1_;
  arg1 = *(hello::Function_< hello::Double,hello::Double > **)&jarg1; 
  result = (char *)(arg1)->test();
  if (result) jresult = jenv->NewStringUTF((const char *)result);
  return jresult;
}


SWIGEXPORT jlong JNICALL Java_template_1ns4_template_1ns4JNI_new_1Function_1DD(JNIEnv *jenv, jclass jcls) {
  jlong jresult = 0 ;
  hello::Function_< hello::Double,hello::Double > *result = 0 ;
  
  (void)jenv;
  (void)jcls;
  result = (hello::Function_< hello::Double,hello::Double > *)new hello::Function_< hello::Double,hello::Double >();
  *(hello::Function_< hello::Double,hello::Double > **)&jresult = result; 
  return jresult;
}


SWIGEXPORT void JNICALL Java_template_1ns4_template_1ns4JNI_delete_1Function_1DD(JNIEnv *jenv, jclass jcls, jlong jarg1) {
  hello::Function_< hello::Double,hello::Double > *arg1 = (hello::Function_< hello::Double,hello::Double > *) 0 ;
  
  (void)jenv;
  (void)jcls;
  arg1 = *(hello::Function_< hello::Double,hello::Double > **)&jarg1; 
  delete arg1;
}


SWIGEXPORT jlong JNICALL Java_template_1ns4_template_1ns4JNI_new_1ArithFunction_1DD(JNIEnv *jenv, jclass jcls) {
  jlong jresult = 0 ;
  hello::ArithFunction< hello::Double,hello::Double > *result = 0 ;
  
  (void)jenv;
  (void)jcls;
  result = (hello::ArithFunction< hello::Double,hello::Double > *)new hello::ArithFunction< hello::Double,hello::Double >();
  *(hello::ArithFunction< hello::Double,hello::Double > **)&jresult = result; 
  return jresult;
}


SWIGEXPORT void JNICALL Java_template_1ns4_template_1ns4JNI_delete_1ArithFunction_1DD(JNIEnv *jenv, jclass jcls, jlong jarg1) {
  hello::ArithFunction< hello::Double,hello::Double > *arg1 = (hello::ArithFunction< hello::Double,hello::Double > *) 0 ;
  
  (void)jenv;
  (void)jcls;
  arg1 = *(hello::ArithFunction< hello::Double,hello::Double > **)&jarg1; 
  delete arg1;
}


SWIGEXPORT jlong JNICALL Java_template_1ns4_template_1ns4JNI_new_1Class_1DD(JNIEnv *jenv, jclass jcls) {
  jlong jresult = 0 ;
  hello::Class_< hello::Double,hello::Double > *result = 0 ;
  
  (void)jenv;
  (void)jcls;
  result = (hello::Class_< hello::Double,hello::Double > *)new hello::Class_< hello::Double,hello::Double >();
  *(hello::Class_< hello::Double,hello::Double > **)&jresult = result; 
  return jresult;
}


SWIGEXPORT void JNICALL Java_template_1ns4_template_1ns4JNI_delete_1Class_1DD(JNIEnv *jenv, jclass jcls, jlong jarg1) {
  hello::Class_< hello::Double,hello::Double > *arg1 = (hello::Class_< hello::Double,hello::Double > *) 0 ;
  
  (void)jenv;
  (void)jcls;
  arg1 = *(hello::Class_< hello::Double,hello::Double > **)&jarg1; 
  delete arg1;
}


SWIGEXPORT jlong JNICALL Java_template_1ns4_template_1ns4JNI_make_1Class_1DD(JNIEnv *jenv, jclass jcls) {
  jlong jresult = 0 ;
  hello::traits< hello::Double,hello::Double >::base result;
  
  (void)jenv;
  (void)jcls;
  result = hello::SWIGTEMPLATEDISAMBIGUATOR make_Class< hello::Double,hello::Double >();
  *(hello::traits< hello::Double,hello::Double >::base **)&jresult = new hello::traits< hello::Double,hello::Double >::base((const hello::traits< hello::Double,hello::Double >::base &)result); 
  return jresult;
}


SWIGEXPORT jlong JNICALL Java_template_1ns4_template_1ns4JNI_ArithFunction_1DD_1SWIGUpcast(JNIEnv *jenv, jclass jcls, jlong jarg1) {
    jlong baseptr = 0;
    (void)jenv;
    (void)jcls;
    *(hello::Function_< hello::Double,hello::Double > **)&baseptr = *(hello::ArithFunction< hello::Double,hello::Double > **)&jarg1;
    return baseptr;
}

SWIGEXPORT jlong JNICALL Java_template_1ns4_template_1ns4JNI_Class_1DD_1SWIGUpcast(JNIEnv *jenv, jclass jcls, jlong jarg1) {
    jlong baseptr = 0;
    (void)jenv;
    (void)jcls;
    *(hello::ArithFunction< hello::Double,hello::Double > **)&baseptr = *(hello::Class_< hello::Double,hello::Double > **)&jarg1;
    return baseptr;
}

#ifdef __cplusplus
}
#endif

