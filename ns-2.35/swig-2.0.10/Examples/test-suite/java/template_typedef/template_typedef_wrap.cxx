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


  typedef double reald;



  //  typedef double reald;

  namespace vfncs {

    struct UnaryFunctionBase
    {
    };    
    
    template <class ArgType, class ResType>
    struct UnaryFunction;
    
    template <class ArgType, class ResType>
    struct ArithUnaryFunction;  
    
    template <class ArgType, class ResType>
    struct UnaryFunction : UnaryFunctionBase
    {
    };

    template <class ArgType, class ResType>
    struct ArithUnaryFunction : UnaryFunction<ArgType, ResType>
    {
    };      
    
    template <class ArgType, class ResType>         
    struct unary_func_traits 
    {
      typedef ArithUnaryFunction<ArgType, ResType > base;
    };
  
    template <class ArgType>
    inline
    typename unary_func_traits< ArgType, ArgType >::base
    make_Identity()
    {
      return typename unary_func_traits< ArgType, ArgType >::base();
    }

    template <class Arg1, class Arg2>
    struct arith_traits 
    {
    };

    template<>
    struct arith_traits< float, float >
    {
    
      typedef float argument_type;
      typedef float result_type;
      static const char* const arg_type;
      static const char* const res_type;
    };

    template<>
    struct arith_traits< reald, reald >
    {
    
      typedef reald argument_type;
      typedef reald result_type;
      static const char* const arg_type;
      static const char* const res_type;
    };

    template<>
    struct arith_traits< reald, float >
    {
      typedef float argument_type;
      typedef reald result_type;
      static const char* const arg_type;
      static const char* const res_type;
    };

    template<>
    struct arith_traits< float, reald >
    {
      typedef float argument_type;
      typedef reald result_type;
      static const char* const arg_type;
      static const char* const res_type;
    };

    template <class AF, class RF, class AG, class RG>
    inline
    ArithUnaryFunction<typename arith_traits< AF, AG >::argument_type,
		       typename arith_traits< RF, RG >::result_type >
    make_Multiplies(const ArithUnaryFunction<AF, RF>& f,
		    const ArithUnaryFunction<AG, RG >& g)
    {
      return 
	ArithUnaryFunction<typename arith_traits< AF, AG >::argument_type,
	                   typename arith_traits< RF, RG >::result_type>();
    }

#ifndef SWIG

    // Initialize these static class members

    const char* const arith_traits< float, float >::arg_type = "float";
    const char* const arith_traits< float, float >::res_type = "float";

    const char* const arith_traits< reald, reald >::arg_type = "reald";
    const char* const arith_traits< reald, reald >::res_type = "reald";

    const char* const arith_traits< reald, float >::arg_type = "float";
    const char* const arith_traits< reald, float >::res_type = "reald";

    const char* const arith_traits< float, reald >::arg_type = "float";
    const char* const arith_traits< float, reald >::res_type = "reald";

#endif

  }


#ifdef __cplusplus
extern "C" {
#endif

SWIGEXPORT jlong JNICALL Java_template_1typedef_template_1typedefJNI_new_1UnaryFunctionBase(JNIEnv *jenv, jclass jcls) {
  jlong jresult = 0 ;
  vfncs::UnaryFunctionBase *result = 0 ;
  
  (void)jenv;
  (void)jcls;
  result = (vfncs::UnaryFunctionBase *)new vfncs::UnaryFunctionBase();
  *(vfncs::UnaryFunctionBase **)&jresult = result; 
  return jresult;
}


SWIGEXPORT void JNICALL Java_template_1typedef_template_1typedefJNI_delete_1UnaryFunctionBase(JNIEnv *jenv, jclass jcls, jlong jarg1) {
  vfncs::UnaryFunctionBase *arg1 = (vfncs::UnaryFunctionBase *) 0 ;
  
  (void)jenv;
  (void)jcls;
  arg1 = *(vfncs::UnaryFunctionBase **)&jarg1; 
  delete arg1;
}


SWIGEXPORT jlong JNICALL Java_template_1typedef_template_1typedefJNI_new_1UnaryFunction_1float_1float(JNIEnv *jenv, jclass jcls) {
  jlong jresult = 0 ;
  vfncs::UnaryFunction< float,float > *result = 0 ;
  
  (void)jenv;
  (void)jcls;
  result = (vfncs::UnaryFunction< float,float > *)new vfncs::UnaryFunction< float,float >();
  *(vfncs::UnaryFunction< float,float > **)&jresult = result; 
  return jresult;
}


SWIGEXPORT void JNICALL Java_template_1typedef_template_1typedefJNI_delete_1UnaryFunction_1float_1float(JNIEnv *jenv, jclass jcls, jlong jarg1) {
  vfncs::UnaryFunction< float,float > *arg1 = (vfncs::UnaryFunction< float,float > *) 0 ;
  
  (void)jenv;
  (void)jcls;
  arg1 = *(vfncs::UnaryFunction< float,float > **)&jarg1; 
  delete arg1;
}


SWIGEXPORT jlong JNICALL Java_template_1typedef_template_1typedefJNI_new_1ArithUnaryFunction_1float_1float(JNIEnv *jenv, jclass jcls) {
  jlong jresult = 0 ;
  vfncs::ArithUnaryFunction< float,float > *result = 0 ;
  
  (void)jenv;
  (void)jcls;
  result = (vfncs::ArithUnaryFunction< float,float > *)new vfncs::ArithUnaryFunction< float,float >();
  *(vfncs::ArithUnaryFunction< float,float > **)&jresult = result; 
  return jresult;
}


SWIGEXPORT void JNICALL Java_template_1typedef_template_1typedefJNI_delete_1ArithUnaryFunction_1float_1float(JNIEnv *jenv, jclass jcls, jlong jarg1) {
  vfncs::ArithUnaryFunction< float,float > *arg1 = (vfncs::ArithUnaryFunction< float,float > *) 0 ;
  
  (void)jenv;
  (void)jcls;
  arg1 = *(vfncs::ArithUnaryFunction< float,float > **)&jarg1; 
  delete arg1;
}


SWIGEXPORT jlong JNICALL Java_template_1typedef_template_1typedefJNI_make_1Identity_1float(JNIEnv *jenv, jclass jcls) {
  jlong jresult = 0 ;
  vfncs::unary_func_traits< float,float >::base result;
  
  (void)jenv;
  (void)jcls;
  result = vfncs::SWIGTEMPLATEDISAMBIGUATOR make_Identity< float >();
  *(vfncs::unary_func_traits< float,float >::base **)&jresult = new vfncs::unary_func_traits< float,float >::base((const vfncs::unary_func_traits< float,float >::base &)result); 
  return jresult;
}


SWIGEXPORT jlong JNICALL Java_template_1typedef_template_1typedefJNI_new_1UnaryFunction_1reald_1reald(JNIEnv *jenv, jclass jcls) {
  jlong jresult = 0 ;
  vfncs::UnaryFunction< reald,reald > *result = 0 ;
  
  (void)jenv;
  (void)jcls;
  result = (vfncs::UnaryFunction< reald,reald > *)new vfncs::UnaryFunction< reald,reald >();
  *(vfncs::UnaryFunction< reald,reald > **)&jresult = result; 
  return jresult;
}


SWIGEXPORT void JNICALL Java_template_1typedef_template_1typedefJNI_delete_1UnaryFunction_1reald_1reald(JNIEnv *jenv, jclass jcls, jlong jarg1) {
  vfncs::UnaryFunction< reald,reald > *arg1 = (vfncs::UnaryFunction< reald,reald > *) 0 ;
  
  (void)jenv;
  (void)jcls;
  arg1 = *(vfncs::UnaryFunction< reald,reald > **)&jarg1; 
  delete arg1;
}


SWIGEXPORT jlong JNICALL Java_template_1typedef_template_1typedefJNI_new_1ArithUnaryFunction_1reald_1reald(JNIEnv *jenv, jclass jcls) {
  jlong jresult = 0 ;
  vfncs::ArithUnaryFunction< reald,reald > *result = 0 ;
  
  (void)jenv;
  (void)jcls;
  result = (vfncs::ArithUnaryFunction< reald,reald > *)new vfncs::ArithUnaryFunction< reald,reald >();
  *(vfncs::ArithUnaryFunction< reald,reald > **)&jresult = result; 
  return jresult;
}


SWIGEXPORT void JNICALL Java_template_1typedef_template_1typedefJNI_delete_1ArithUnaryFunction_1reald_1reald(JNIEnv *jenv, jclass jcls, jlong jarg1) {
  vfncs::ArithUnaryFunction< reald,reald > *arg1 = (vfncs::ArithUnaryFunction< reald,reald > *) 0 ;
  
  (void)jenv;
  (void)jcls;
  arg1 = *(vfncs::ArithUnaryFunction< reald,reald > **)&jarg1; 
  delete arg1;
}


SWIGEXPORT jlong JNICALL Java_template_1typedef_template_1typedefJNI_make_1Identity_1reald(JNIEnv *jenv, jclass jcls) {
  jlong jresult = 0 ;
  vfncs::unary_func_traits< double,double >::base result;
  
  (void)jenv;
  (void)jcls;
  result = vfncs::SWIGTEMPLATEDISAMBIGUATOR make_Identity< reald >();
  *(vfncs::unary_func_traits< double,double >::base **)&jresult = new vfncs::unary_func_traits< double,double >::base((const vfncs::unary_func_traits< double,double >::base &)result); 
  return jresult;
}


SWIGEXPORT jlong JNICALL Java_template_1typedef_template_1typedefJNI_new_1UnaryFunction_1float_1reald(JNIEnv *jenv, jclass jcls) {
  jlong jresult = 0 ;
  vfncs::UnaryFunction< float,reald > *result = 0 ;
  
  (void)jenv;
  (void)jcls;
  result = (vfncs::UnaryFunction< float,reald > *)new vfncs::UnaryFunction< float,reald >();
  *(vfncs::UnaryFunction< float,reald > **)&jresult = result; 
  return jresult;
}


SWIGEXPORT void JNICALL Java_template_1typedef_template_1typedefJNI_delete_1UnaryFunction_1float_1reald(JNIEnv *jenv, jclass jcls, jlong jarg1) {
  vfncs::UnaryFunction< float,reald > *arg1 = (vfncs::UnaryFunction< float,reald > *) 0 ;
  
  (void)jenv;
  (void)jcls;
  arg1 = *(vfncs::UnaryFunction< float,reald > **)&jarg1; 
  delete arg1;
}


SWIGEXPORT jlong JNICALL Java_template_1typedef_template_1typedefJNI_new_1ArithUnaryFunction_1float_1reald(JNIEnv *jenv, jclass jcls) {
  jlong jresult = 0 ;
  vfncs::ArithUnaryFunction< float,reald > *result = 0 ;
  
  (void)jenv;
  (void)jcls;
  result = (vfncs::ArithUnaryFunction< float,reald > *)new vfncs::ArithUnaryFunction< float,reald >();
  *(vfncs::ArithUnaryFunction< float,reald > **)&jresult = result; 
  return jresult;
}


SWIGEXPORT void JNICALL Java_template_1typedef_template_1typedefJNI_delete_1ArithUnaryFunction_1float_1reald(JNIEnv *jenv, jclass jcls, jlong jarg1) {
  vfncs::ArithUnaryFunction< float,reald > *arg1 = (vfncs::ArithUnaryFunction< float,reald > *) 0 ;
  
  (void)jenv;
  (void)jcls;
  arg1 = *(vfncs::ArithUnaryFunction< float,reald > **)&jarg1; 
  delete arg1;
}


SWIGEXPORT jlong JNICALL Java_template_1typedef_template_1typedefJNI_make_1Multiplies_1float_1float_1reald_1reald(JNIEnv *jenv, jclass jcls, jlong jarg1, jobject jarg1_, jlong jarg2, jobject jarg2_) {
  jlong jresult = 0 ;
  vfncs::ArithUnaryFunction< float,float > *arg1 = 0 ;
  vfncs::ArithUnaryFunction< double,double > *arg2 = 0 ;
  vfncs::ArithUnaryFunction< vfncs::arith_traits< float,double >::argument_type,vfncs::arith_traits< float,double >::result_type > result;
  
  (void)jenv;
  (void)jcls;
  (void)jarg1_;
  (void)jarg2_;
  arg1 = *(vfncs::ArithUnaryFunction< float,float > **)&jarg1;
  if (!arg1) {
    SWIG_JavaThrowException(jenv, SWIG_JavaNullPointerException, "vfncs::ArithUnaryFunction< float,float > const & reference is null");
    return 0;
  } 
  arg2 = *(vfncs::ArithUnaryFunction< double,double > **)&jarg2;
  if (!arg2) {
    SWIG_JavaThrowException(jenv, SWIG_JavaNullPointerException, "vfncs::ArithUnaryFunction< double,double > const & reference is null");
    return 0;
  } 
  result = vfncs::SWIGTEMPLATEDISAMBIGUATOR make_Multiplies< float,float,reald,reald >((vfncs::ArithUnaryFunction< float,float > const &)*arg1,(vfncs::ArithUnaryFunction< double,double > const &)*arg2);
  *(vfncs::ArithUnaryFunction< vfncs::arith_traits< float,double >::argument_type,vfncs::arith_traits< float,double >::result_type > **)&jresult = new vfncs::ArithUnaryFunction< vfncs::arith_traits< float,double >::argument_type,vfncs::arith_traits< float,double >::result_type >((const vfncs::ArithUnaryFunction< vfncs::arith_traits< float,double >::argument_type,vfncs::arith_traits< float,double >::result_type > &)result); 
  return jresult;
}


SWIGEXPORT jlong JNICALL Java_template_1typedef_template_1typedefJNI_make_1Multiplies_1float_1float_1float_1float(JNIEnv *jenv, jclass jcls, jlong jarg1, jobject jarg1_, jlong jarg2, jobject jarg2_) {
  jlong jresult = 0 ;
  vfncs::ArithUnaryFunction< float,float > *arg1 = 0 ;
  vfncs::ArithUnaryFunction< float,float > *arg2 = 0 ;
  vfncs::ArithUnaryFunction< vfncs::arith_traits< float,float >::argument_type,vfncs::arith_traits< float,float >::result_type > result;
  
  (void)jenv;
  (void)jcls;
  (void)jarg1_;
  (void)jarg2_;
  arg1 = *(vfncs::ArithUnaryFunction< float,float > **)&jarg1;
  if (!arg1) {
    SWIG_JavaThrowException(jenv, SWIG_JavaNullPointerException, "vfncs::ArithUnaryFunction< float,float > const & reference is null");
    return 0;
  } 
  arg2 = *(vfncs::ArithUnaryFunction< float,float > **)&jarg2;
  if (!arg2) {
    SWIG_JavaThrowException(jenv, SWIG_JavaNullPointerException, "vfncs::ArithUnaryFunction< float,float > const & reference is null");
    return 0;
  } 
  result = vfncs::SWIGTEMPLATEDISAMBIGUATOR make_Multiplies< float,float,float,float >((vfncs::ArithUnaryFunction< float,float > const &)*arg1,(vfncs::ArithUnaryFunction< float,float > const &)*arg2);
  *(vfncs::ArithUnaryFunction< vfncs::arith_traits< float,float >::argument_type,vfncs::arith_traits< float,float >::result_type > **)&jresult = new vfncs::ArithUnaryFunction< vfncs::arith_traits< float,float >::argument_type,vfncs::arith_traits< float,float >::result_type >((const vfncs::ArithUnaryFunction< vfncs::arith_traits< float,float >::argument_type,vfncs::arith_traits< float,float >::result_type > &)result); 
  return jresult;
}


SWIGEXPORT jlong JNICALL Java_template_1typedef_template_1typedefJNI_make_1Multiplies_1reald_1reald_1reald_1reald(JNIEnv *jenv, jclass jcls, jlong jarg1, jobject jarg1_, jlong jarg2, jobject jarg2_) {
  jlong jresult = 0 ;
  vfncs::ArithUnaryFunction< double,double > *arg1 = 0 ;
  vfncs::ArithUnaryFunction< double,double > *arg2 = 0 ;
  vfncs::ArithUnaryFunction< vfncs::arith_traits< double,double >::argument_type,vfncs::arith_traits< double,double >::result_type > result;
  
  (void)jenv;
  (void)jcls;
  (void)jarg1_;
  (void)jarg2_;
  arg1 = *(vfncs::ArithUnaryFunction< double,double > **)&jarg1;
  if (!arg1) {
    SWIG_JavaThrowException(jenv, SWIG_JavaNullPointerException, "vfncs::ArithUnaryFunction< double,double > const & reference is null");
    return 0;
  } 
  arg2 = *(vfncs::ArithUnaryFunction< double,double > **)&jarg2;
  if (!arg2) {
    SWIG_JavaThrowException(jenv, SWIG_JavaNullPointerException, "vfncs::ArithUnaryFunction< double,double > const & reference is null");
    return 0;
  } 
  result = vfncs::SWIGTEMPLATEDISAMBIGUATOR make_Multiplies< reald,reald,reald,reald >((vfncs::ArithUnaryFunction< double,double > const &)*arg1,(vfncs::ArithUnaryFunction< double,double > const &)*arg2);
  *(vfncs::ArithUnaryFunction< vfncs::arith_traits< double,double >::argument_type,vfncs::arith_traits< double,double >::result_type > **)&jresult = new vfncs::ArithUnaryFunction< vfncs::arith_traits< double,double >::argument_type,vfncs::arith_traits< double,double >::result_type >((const vfncs::ArithUnaryFunction< vfncs::arith_traits< double,double >::argument_type,vfncs::arith_traits< double,double >::result_type > &)result); 
  return jresult;
}


SWIGEXPORT jlong JNICALL Java_template_1typedef_template_1typedefJNI_UnaryFunction_1float_1float_1SWIGUpcast(JNIEnv *jenv, jclass jcls, jlong jarg1) {
    jlong baseptr = 0;
    (void)jenv;
    (void)jcls;
    *(vfncs::UnaryFunctionBase **)&baseptr = *(vfncs::UnaryFunction< float,float > **)&jarg1;
    return baseptr;
}

SWIGEXPORT jlong JNICALL Java_template_1typedef_template_1typedefJNI_ArithUnaryFunction_1float_1float_1SWIGUpcast(JNIEnv *jenv, jclass jcls, jlong jarg1) {
    jlong baseptr = 0;
    (void)jenv;
    (void)jcls;
    *(vfncs::UnaryFunction< float,float > **)&baseptr = *(vfncs::ArithUnaryFunction< float,float > **)&jarg1;
    return baseptr;
}

SWIGEXPORT jlong JNICALL Java_template_1typedef_template_1typedefJNI_UnaryFunction_1reald_1reald_1SWIGUpcast(JNIEnv *jenv, jclass jcls, jlong jarg1) {
    jlong baseptr = 0;
    (void)jenv;
    (void)jcls;
    *(vfncs::UnaryFunctionBase **)&baseptr = *(vfncs::UnaryFunction< reald,reald > **)&jarg1;
    return baseptr;
}

SWIGEXPORT jlong JNICALL Java_template_1typedef_template_1typedefJNI_ArithUnaryFunction_1reald_1reald_1SWIGUpcast(JNIEnv *jenv, jclass jcls, jlong jarg1) {
    jlong baseptr = 0;
    (void)jenv;
    (void)jcls;
    *(vfncs::UnaryFunction< reald,reald > **)&baseptr = *(vfncs::ArithUnaryFunction< reald,reald > **)&jarg1;
    return baseptr;
}

SWIGEXPORT jlong JNICALL Java_template_1typedef_template_1typedefJNI_UnaryFunction_1float_1reald_1SWIGUpcast(JNIEnv *jenv, jclass jcls, jlong jarg1) {
    jlong baseptr = 0;
    (void)jenv;
    (void)jcls;
    *(vfncs::UnaryFunctionBase **)&baseptr = *(vfncs::UnaryFunction< float,reald > **)&jarg1;
    return baseptr;
}

SWIGEXPORT jlong JNICALL Java_template_1typedef_template_1typedefJNI_ArithUnaryFunction_1float_1reald_1SWIGUpcast(JNIEnv *jenv, jclass jcls, jlong jarg1) {
    jlong baseptr = 0;
    (void)jenv;
    (void)jcls;
    *(vfncs::UnaryFunction< float,reald > **)&baseptr = *(vfncs::ArithUnaryFunction< float,reald > **)&jarg1;
    return baseptr;
}

#ifdef __cplusplus
}
#endif

