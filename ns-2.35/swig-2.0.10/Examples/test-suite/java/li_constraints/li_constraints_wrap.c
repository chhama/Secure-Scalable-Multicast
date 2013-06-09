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

  (*jenv)->ExceptionClear(jenv);
  excep = (*jenv)->FindClass(jenv, except_ptr->java_exception);
  if (excep)
    (*jenv)->ThrowNew(jenv, excep, msg);
}


/* Contract support */

#define SWIG_contract_assert(nullreturn, expr, msg) if (!(expr)) {SWIG_JavaThrowException(jenv, SWIG_JavaIllegalArgumentException, msg); return nullreturn; } else

/*  Errors in SWIG */
#define  SWIG_UnknownError    	   -1 
#define  SWIG_IOError        	   -2 
#define  SWIG_RuntimeError   	   -3 
#define  SWIG_IndexError     	   -4 
#define  SWIG_TypeError      	   -5 
#define  SWIG_DivisionByZero 	   -6 
#define  SWIG_OverflowError  	   -7 
#define  SWIG_SyntaxError    	   -8 
#define  SWIG_ValueError     	   -9 
#define  SWIG_SystemError    	   -10
#define  SWIG_AttributeError 	   -11
#define  SWIG_MemoryError    	   -12 
#define  SWIG_NullReferenceError   -13




SWIGINTERN void SWIG_JavaException(JNIEnv *jenv, int code, const char *msg) {
  SWIG_JavaExceptionCodes exception_code = SWIG_JavaUnknownError;
  switch(code) {
  case SWIG_MemoryError:
    exception_code = SWIG_JavaOutOfMemoryError;
    break;
  case SWIG_IOError:
    exception_code = SWIG_JavaIOException;
    break;
  case SWIG_SystemError:
  case SWIG_RuntimeError:
    exception_code = SWIG_JavaRuntimeException;
    break;
  case SWIG_OverflowError:
  case SWIG_IndexError:
    exception_code = SWIG_JavaIndexOutOfBoundsException;
    break;
  case SWIG_DivisionByZero:
    exception_code = SWIG_JavaArithmeticException;
    break;
  case SWIG_SyntaxError:
  case SWIG_ValueError:
  case SWIG_TypeError:
    exception_code = SWIG_JavaIllegalArgumentException;
    break;
  case SWIG_UnknownError:
  default:
    exception_code = SWIG_JavaUnknownError;
    break;
  }
  SWIG_JavaThrowException(jenv, exception_code, msg);
}


void test_nonnegative(double NONNEGATIVE) {
}

void test_nonpositive(double NONPOSITIVE) {
}

void test_positive(double POSITIVE) {
}

void test_negative(double POSITIVE) {
}

void test_nonzero(double NONZERO) {
}

void test_nonnull(void *NONNULL) {
}

/* These generated non-portable code and there isn't an obvious fix

void test_align8(void *ALIGN8) {
}

void test_align4(void *ALIGN4) {
}

void test_align2(void *ALIGN2) {
}
*/


#ifdef __cplusplus
extern "C" {
#endif

SWIGEXPORT void JNICALL Java_li_1constraints_li_1constraintsJNI_test_1nonnegative(JNIEnv *jenv, jclass jcls, jdouble jarg1) {
  double arg1 ;
  
  (void)jenv;
  (void)jcls;
  arg1 = (double)jarg1; 
  {
    if (arg1 < 0) {
      {
        SWIG_JavaException(jenv, SWIG_ValueError, "Expected a non-negative value."); return ; 
      };
    }
  }
  test_nonnegative(arg1);
}


SWIGEXPORT void JNICALL Java_li_1constraints_li_1constraintsJNI_test_1nonpositive(JNIEnv *jenv, jclass jcls, jdouble jarg1) {
  double arg1 ;
  
  (void)jenv;
  (void)jcls;
  arg1 = (double)jarg1; 
  {
    if (arg1 > 0) {
      {
        SWIG_JavaException(jenv, SWIG_ValueError, "Expected a non-positive value."); return ; 
      };
    }
  }
  test_nonpositive(arg1);
}


SWIGEXPORT void JNICALL Java_li_1constraints_li_1constraintsJNI_test_1positive(JNIEnv *jenv, jclass jcls, jdouble jarg1) {
  double arg1 ;
  
  (void)jenv;
  (void)jcls;
  arg1 = (double)jarg1; 
  {
    if (arg1 <= 0) {
      {
        SWIG_JavaException(jenv, SWIG_ValueError, "Expected a positive value."); return ; 
      };
    }
  }
  test_positive(arg1);
}


SWIGEXPORT void JNICALL Java_li_1constraints_li_1constraintsJNI_test_1negative(JNIEnv *jenv, jclass jcls, jdouble jarg1) {
  double arg1 ;
  
  (void)jenv;
  (void)jcls;
  arg1 = (double)jarg1; 
  {
    if (arg1 <= 0) {
      {
        SWIG_JavaException(jenv, SWIG_ValueError, "Expected a positive value."); return ; 
      };
    }
  }
  test_negative(arg1);
}


SWIGEXPORT void JNICALL Java_li_1constraints_li_1constraintsJNI_test_1nonzero(JNIEnv *jenv, jclass jcls, jdouble jarg1) {
  double arg1 ;
  
  (void)jenv;
  (void)jcls;
  arg1 = (double)jarg1; 
  {
    if (arg1 == 0) {
      {
        SWIG_JavaException(jenv, SWIG_ValueError, "Expected a nonzero value."); return ; 
      };
    }
  }
  test_nonzero(arg1);
}


SWIGEXPORT void JNICALL Java_li_1constraints_li_1constraintsJNI_test_1nonnull(JNIEnv *jenv, jclass jcls, jlong jarg1) {
  void *arg1 = (void *) 0 ;
  
  (void)jenv;
  (void)jcls;
  arg1 = *(void **)&jarg1; 
  {
    if (!arg1) {
      {
        SWIG_JavaException(jenv, SWIG_ValueError, "Received a NULL pointer."); return ; 
      };
    }
  }
  test_nonnull(arg1);
}


#ifdef __cplusplus
}
#endif

