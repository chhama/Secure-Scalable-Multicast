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


namespace Outer1 {
  namespace Space1 {
    class Thing1 {};
  }
}
using namespace Outer1::Space1;
using Outer1::Space1::Thing1;
void useit1(Thing1 t) {}


namespace Outer2 {
  namespace Space2 {
    class Thing2 {};
  }
}
using namespace Outer2;
using Space2::Thing2;
void useit2(Thing2 t) {}


namespace Outer3 {
  namespace Space3 {
    namespace Middle3 {
      class Thing3 {};
    }
  }
}
using namespace Outer3;
using namespace Space3;
using Middle3::Thing3;
void useit3(Thing3 t) {}


namespace Outer4 {
  namespace Space4 {
    namespace Middle4 {
      class Thing4 {};
    }
  }
}
using namespace Outer4::Space4;
using Middle4::Thing4;
void useit4(Thing4 t) {}


namespace Outer5 {
  namespace Space5 {
    namespace Middle5 {
      namespace More5 {
        class Thing5 {};
      }
    }
  }
}
using namespace ::Outer5::Space5;
using namespace Middle5;
using More5::Thing5;
void useit5(Thing5 t) {}



namespace Outer6 {
  namespace Space6a {
    struct Thing6 {
      void a() {}
    };
  }
  namespace Space6b {
    struct Thing6 {
      void b() {}
    };
  }
}
using namespace Outer6::Space6b;
void useit6(Outer6::Space6a::Thing6 ta, Thing6 tb) {}

namespace Outer7 {
  namespace Space7 {
    namespace Middle7 {
      class Thing7;
    }
  }
}
using namespace Outer7::Space7;
class Middle7::Thing7 {};
using Middle7::Thing7;
void useit7(Thing7 t) {}
void useit7a(Outer7::Space7::Middle7::Thing7 t) {}
void useit7b(::Outer7::Space7::Middle7::Thing7 t) {}
void useit7c(Middle7::Thing7 t) {}
namespace Outer7 {
  namespace Space7 {
    void useit7d(Middle7::Thing7 t) {}
  }
}



#ifdef __cplusplus
extern "C" {
#endif

SWIGEXPORT jlong JNICALL Java_using_1directive_1and_1declaration_using_1directive_1and_1declarationJNI_new_1Thing1(JNIEnv *jenv, jclass jcls) {
  jlong jresult = 0 ;
  Outer1::Space1::Thing1 *result = 0 ;
  
  (void)jenv;
  (void)jcls;
  result = (Outer1::Space1::Thing1 *)new Outer1::Space1::Thing1();
  *(Outer1::Space1::Thing1 **)&jresult = result; 
  return jresult;
}


SWIGEXPORT void JNICALL Java_using_1directive_1and_1declaration_using_1directive_1and_1declarationJNI_delete_1Thing1(JNIEnv *jenv, jclass jcls, jlong jarg1) {
  Outer1::Space1::Thing1 *arg1 = (Outer1::Space1::Thing1 *) 0 ;
  
  (void)jenv;
  (void)jcls;
  arg1 = *(Outer1::Space1::Thing1 **)&jarg1; 
  delete arg1;
}


SWIGEXPORT void JNICALL Java_using_1directive_1and_1declaration_using_1directive_1and_1declarationJNI_useit1(JNIEnv *jenv, jclass jcls, jlong jarg1, jobject jarg1_) {
  Thing1 arg1 ;
  Thing1 *argp1 ;
  
  (void)jenv;
  (void)jcls;
  (void)jarg1_;
  argp1 = *(Thing1 **)&jarg1; 
  if (!argp1) {
    SWIG_JavaThrowException(jenv, SWIG_JavaNullPointerException, "Attempt to dereference null Thing1");
    return ;
  }
  arg1 = *argp1; 
  useit1(arg1);
}


SWIGEXPORT jlong JNICALL Java_using_1directive_1and_1declaration_using_1directive_1and_1declarationJNI_new_1Thing2(JNIEnv *jenv, jclass jcls) {
  jlong jresult = 0 ;
  Outer2::Space2::Thing2 *result = 0 ;
  
  (void)jenv;
  (void)jcls;
  result = (Outer2::Space2::Thing2 *)new Outer2::Space2::Thing2();
  *(Outer2::Space2::Thing2 **)&jresult = result; 
  return jresult;
}


SWIGEXPORT void JNICALL Java_using_1directive_1and_1declaration_using_1directive_1and_1declarationJNI_delete_1Thing2(JNIEnv *jenv, jclass jcls, jlong jarg1) {
  Outer2::Space2::Thing2 *arg1 = (Outer2::Space2::Thing2 *) 0 ;
  
  (void)jenv;
  (void)jcls;
  arg1 = *(Outer2::Space2::Thing2 **)&jarg1; 
  delete arg1;
}


SWIGEXPORT void JNICALL Java_using_1directive_1and_1declaration_using_1directive_1and_1declarationJNI_useit2(JNIEnv *jenv, jclass jcls, jlong jarg1, jobject jarg1_) {
  Thing2 arg1 ;
  Thing2 *argp1 ;
  
  (void)jenv;
  (void)jcls;
  (void)jarg1_;
  argp1 = *(Thing2 **)&jarg1; 
  if (!argp1) {
    SWIG_JavaThrowException(jenv, SWIG_JavaNullPointerException, "Attempt to dereference null Thing2");
    return ;
  }
  arg1 = *argp1; 
  useit2(arg1);
}


SWIGEXPORT jlong JNICALL Java_using_1directive_1and_1declaration_using_1directive_1and_1declarationJNI_new_1Thing3(JNIEnv *jenv, jclass jcls) {
  jlong jresult = 0 ;
  Outer3::Space3::Middle3::Thing3 *result = 0 ;
  
  (void)jenv;
  (void)jcls;
  result = (Outer3::Space3::Middle3::Thing3 *)new Outer3::Space3::Middle3::Thing3();
  *(Outer3::Space3::Middle3::Thing3 **)&jresult = result; 
  return jresult;
}


SWIGEXPORT void JNICALL Java_using_1directive_1and_1declaration_using_1directive_1and_1declarationJNI_delete_1Thing3(JNIEnv *jenv, jclass jcls, jlong jarg1) {
  Outer3::Space3::Middle3::Thing3 *arg1 = (Outer3::Space3::Middle3::Thing3 *) 0 ;
  
  (void)jenv;
  (void)jcls;
  arg1 = *(Outer3::Space3::Middle3::Thing3 **)&jarg1; 
  delete arg1;
}


SWIGEXPORT void JNICALL Java_using_1directive_1and_1declaration_using_1directive_1and_1declarationJNI_useit3(JNIEnv *jenv, jclass jcls, jlong jarg1, jobject jarg1_) {
  Thing3 arg1 ;
  Thing3 *argp1 ;
  
  (void)jenv;
  (void)jcls;
  (void)jarg1_;
  argp1 = *(Thing3 **)&jarg1; 
  if (!argp1) {
    SWIG_JavaThrowException(jenv, SWIG_JavaNullPointerException, "Attempt to dereference null Thing3");
    return ;
  }
  arg1 = *argp1; 
  useit3(arg1);
}


SWIGEXPORT jlong JNICALL Java_using_1directive_1and_1declaration_using_1directive_1and_1declarationJNI_new_1Thing4(JNIEnv *jenv, jclass jcls) {
  jlong jresult = 0 ;
  Outer4::Space4::Middle4::Thing4 *result = 0 ;
  
  (void)jenv;
  (void)jcls;
  result = (Outer4::Space4::Middle4::Thing4 *)new Outer4::Space4::Middle4::Thing4();
  *(Outer4::Space4::Middle4::Thing4 **)&jresult = result; 
  return jresult;
}


SWIGEXPORT void JNICALL Java_using_1directive_1and_1declaration_using_1directive_1and_1declarationJNI_delete_1Thing4(JNIEnv *jenv, jclass jcls, jlong jarg1) {
  Outer4::Space4::Middle4::Thing4 *arg1 = (Outer4::Space4::Middle4::Thing4 *) 0 ;
  
  (void)jenv;
  (void)jcls;
  arg1 = *(Outer4::Space4::Middle4::Thing4 **)&jarg1; 
  delete arg1;
}


SWIGEXPORT void JNICALL Java_using_1directive_1and_1declaration_using_1directive_1and_1declarationJNI_useit4(JNIEnv *jenv, jclass jcls, jlong jarg1, jobject jarg1_) {
  Thing4 arg1 ;
  Thing4 *argp1 ;
  
  (void)jenv;
  (void)jcls;
  (void)jarg1_;
  argp1 = *(Thing4 **)&jarg1; 
  if (!argp1) {
    SWIG_JavaThrowException(jenv, SWIG_JavaNullPointerException, "Attempt to dereference null Thing4");
    return ;
  }
  arg1 = *argp1; 
  useit4(arg1);
}


SWIGEXPORT jlong JNICALL Java_using_1directive_1and_1declaration_using_1directive_1and_1declarationJNI_new_1Thing5(JNIEnv *jenv, jclass jcls) {
  jlong jresult = 0 ;
  Outer5::Space5::Middle5::More5::Thing5 *result = 0 ;
  
  (void)jenv;
  (void)jcls;
  result = (Outer5::Space5::Middle5::More5::Thing5 *)new Outer5::Space5::Middle5::More5::Thing5();
  *(Outer5::Space5::Middle5::More5::Thing5 **)&jresult = result; 
  return jresult;
}


SWIGEXPORT void JNICALL Java_using_1directive_1and_1declaration_using_1directive_1and_1declarationJNI_delete_1Thing5(JNIEnv *jenv, jclass jcls, jlong jarg1) {
  Outer5::Space5::Middle5::More5::Thing5 *arg1 = (Outer5::Space5::Middle5::More5::Thing5 *) 0 ;
  
  (void)jenv;
  (void)jcls;
  arg1 = *(Outer5::Space5::Middle5::More5::Thing5 **)&jarg1; 
  delete arg1;
}


SWIGEXPORT void JNICALL Java_using_1directive_1and_1declaration_using_1directive_1and_1declarationJNI_useit5(JNIEnv *jenv, jclass jcls, jlong jarg1, jobject jarg1_) {
  Thing5 arg1 ;
  Thing5 *argp1 ;
  
  (void)jenv;
  (void)jcls;
  (void)jarg1_;
  argp1 = *(Thing5 **)&jarg1; 
  if (!argp1) {
    SWIG_JavaThrowException(jenv, SWIG_JavaNullPointerException, "Attempt to dereference null Thing5");
    return ;
  }
  arg1 = *argp1; 
  useit5(arg1);
}


SWIGEXPORT void JNICALL Java_using_1directive_1and_1declaration_using_1directive_1and_1declarationJNI_Thing6a_1a(JNIEnv *jenv, jclass jcls, jlong jarg1, jobject jarg1_) {
  Outer6::Space6a::Thing6 *arg1 = (Outer6::Space6a::Thing6 *) 0 ;
  
  (void)jenv;
  (void)jcls;
  (void)jarg1_;
  arg1 = *(Outer6::Space6a::Thing6 **)&jarg1; 
  (arg1)->a();
}


SWIGEXPORT jlong JNICALL Java_using_1directive_1and_1declaration_using_1directive_1and_1declarationJNI_new_1Thing6a(JNIEnv *jenv, jclass jcls) {
  jlong jresult = 0 ;
  Outer6::Space6a::Thing6 *result = 0 ;
  
  (void)jenv;
  (void)jcls;
  result = (Outer6::Space6a::Thing6 *)new Outer6::Space6a::Thing6();
  *(Outer6::Space6a::Thing6 **)&jresult = result; 
  return jresult;
}


SWIGEXPORT void JNICALL Java_using_1directive_1and_1declaration_using_1directive_1and_1declarationJNI_delete_1Thing6a(JNIEnv *jenv, jclass jcls, jlong jarg1) {
  Outer6::Space6a::Thing6 *arg1 = (Outer6::Space6a::Thing6 *) 0 ;
  
  (void)jenv;
  (void)jcls;
  arg1 = *(Outer6::Space6a::Thing6 **)&jarg1; 
  delete arg1;
}


SWIGEXPORT void JNICALL Java_using_1directive_1and_1declaration_using_1directive_1and_1declarationJNI_Thing6_1b(JNIEnv *jenv, jclass jcls, jlong jarg1, jobject jarg1_) {
  Outer6::Space6b::Thing6 *arg1 = (Outer6::Space6b::Thing6 *) 0 ;
  
  (void)jenv;
  (void)jcls;
  (void)jarg1_;
  arg1 = *(Outer6::Space6b::Thing6 **)&jarg1; 
  (arg1)->b();
}


SWIGEXPORT jlong JNICALL Java_using_1directive_1and_1declaration_using_1directive_1and_1declarationJNI_new_1Thing6(JNIEnv *jenv, jclass jcls) {
  jlong jresult = 0 ;
  Outer6::Space6b::Thing6 *result = 0 ;
  
  (void)jenv;
  (void)jcls;
  result = (Outer6::Space6b::Thing6 *)new Outer6::Space6b::Thing6();
  *(Outer6::Space6b::Thing6 **)&jresult = result; 
  return jresult;
}


SWIGEXPORT void JNICALL Java_using_1directive_1and_1declaration_using_1directive_1and_1declarationJNI_delete_1Thing6(JNIEnv *jenv, jclass jcls, jlong jarg1) {
  Outer6::Space6b::Thing6 *arg1 = (Outer6::Space6b::Thing6 *) 0 ;
  
  (void)jenv;
  (void)jcls;
  arg1 = *(Outer6::Space6b::Thing6 **)&jarg1; 
  delete arg1;
}


SWIGEXPORT void JNICALL Java_using_1directive_1and_1declaration_using_1directive_1and_1declarationJNI_useit6(JNIEnv *jenv, jclass jcls, jlong jarg1, jobject jarg1_, jlong jarg2, jobject jarg2_) {
  Outer6::Space6a::Thing6 arg1 ;
  Outer6::Space6b::Thing6 arg2 ;
  Outer6::Space6a::Thing6 *argp1 ;
  Outer6::Space6b::Thing6 *argp2 ;
  
  (void)jenv;
  (void)jcls;
  (void)jarg1_;
  (void)jarg2_;
  argp1 = *(Outer6::Space6a::Thing6 **)&jarg1; 
  if (!argp1) {
    SWIG_JavaThrowException(jenv, SWIG_JavaNullPointerException, "Attempt to dereference null Outer6::Space6a::Thing6");
    return ;
  }
  arg1 = *argp1; 
  argp2 = *(Outer6::Space6b::Thing6 **)&jarg2; 
  if (!argp2) {
    SWIG_JavaThrowException(jenv, SWIG_JavaNullPointerException, "Attempt to dereference null Outer6::Space6b::Thing6");
    return ;
  }
  arg2 = *argp2; 
  useit6(arg1,arg2);
}


SWIGEXPORT jlong JNICALL Java_using_1directive_1and_1declaration_using_1directive_1and_1declarationJNI_new_1Thing7(JNIEnv *jenv, jclass jcls) {
  jlong jresult = 0 ;
  Outer7::Space7::Middle7::Thing7 *result = 0 ;
  
  (void)jenv;
  (void)jcls;
  result = (Outer7::Space7::Middle7::Thing7 *)new Outer7::Space7::Middle7::Thing7();
  *(Outer7::Space7::Middle7::Thing7 **)&jresult = result; 
  return jresult;
}


SWIGEXPORT void JNICALL Java_using_1directive_1and_1declaration_using_1directive_1and_1declarationJNI_delete_1Thing7(JNIEnv *jenv, jclass jcls, jlong jarg1) {
  Outer7::Space7::Middle7::Thing7 *arg1 = (Outer7::Space7::Middle7::Thing7 *) 0 ;
  
  (void)jenv;
  (void)jcls;
  arg1 = *(Outer7::Space7::Middle7::Thing7 **)&jarg1; 
  delete arg1;
}


SWIGEXPORT void JNICALL Java_using_1directive_1and_1declaration_using_1directive_1and_1declarationJNI_useit7(JNIEnv *jenv, jclass jcls, jlong jarg1, jobject jarg1_) {
  Thing7 arg1 ;
  Thing7 *argp1 ;
  
  (void)jenv;
  (void)jcls;
  (void)jarg1_;
  argp1 = *(Thing7 **)&jarg1; 
  if (!argp1) {
    SWIG_JavaThrowException(jenv, SWIG_JavaNullPointerException, "Attempt to dereference null Thing7");
    return ;
  }
  arg1 = *argp1; 
  useit7(arg1);
}


SWIGEXPORT void JNICALL Java_using_1directive_1and_1declaration_using_1directive_1and_1declarationJNI_useit7a(JNIEnv *jenv, jclass jcls, jlong jarg1, jobject jarg1_) {
  Outer7::Space7::Middle7::Thing7 arg1 ;
  Outer7::Space7::Middle7::Thing7 *argp1 ;
  
  (void)jenv;
  (void)jcls;
  (void)jarg1_;
  argp1 = *(Outer7::Space7::Middle7::Thing7 **)&jarg1; 
  if (!argp1) {
    SWIG_JavaThrowException(jenv, SWIG_JavaNullPointerException, "Attempt to dereference null Outer7::Space7::Middle7::Thing7");
    return ;
  }
  arg1 = *argp1; 
  useit7a(arg1);
}


SWIGEXPORT void JNICALL Java_using_1directive_1and_1declaration_using_1directive_1and_1declarationJNI_useit7b(JNIEnv *jenv, jclass jcls, jlong jarg1, jobject jarg1_) {
  ::Outer7::Space7::Middle7::Thing7 arg1 ;
  ::Outer7::Space7::Middle7::Thing7 *argp1 ;
  
  (void)jenv;
  (void)jcls;
  (void)jarg1_;
  argp1 = *(::Outer7::Space7::Middle7::Thing7 **)&jarg1; 
  if (!argp1) {
    SWIG_JavaThrowException(jenv, SWIG_JavaNullPointerException, "Attempt to dereference null ::Outer7::Space7::Middle7::Thing7");
    return ;
  }
  arg1 = *argp1; 
  useit7b(arg1);
}


SWIGEXPORT void JNICALL Java_using_1directive_1and_1declaration_using_1directive_1and_1declarationJNI_useit7c(JNIEnv *jenv, jclass jcls, jlong jarg1, jobject jarg1_) {
  Middle7::Thing7 arg1 ;
  Middle7::Thing7 *argp1 ;
  
  (void)jenv;
  (void)jcls;
  (void)jarg1_;
  argp1 = *(Middle7::Thing7 **)&jarg1; 
  if (!argp1) {
    SWIG_JavaThrowException(jenv, SWIG_JavaNullPointerException, "Attempt to dereference null Middle7::Thing7");
    return ;
  }
  arg1 = *argp1; 
  useit7c(arg1);
}


SWIGEXPORT void JNICALL Java_using_1directive_1and_1declaration_using_1directive_1and_1declarationJNI_useit7d(JNIEnv *jenv, jclass jcls, jlong jarg1, jobject jarg1_) {
  Outer7::Space7::Middle7::Thing7 arg1 ;
  Outer7::Space7::Middle7::Thing7 *argp1 ;
  
  (void)jenv;
  (void)jcls;
  (void)jarg1_;
  argp1 = *(Outer7::Space7::Middle7::Thing7 **)&jarg1; 
  if (!argp1) {
    SWIG_JavaThrowException(jenv, SWIG_JavaNullPointerException, "Attempt to dereference null Outer7::Space7::Middle7::Thing7");
    return ;
  }
  arg1 = *argp1; 
  Outer7::Space7::useit7d(arg1);
}


#ifdef __cplusplus
}
#endif

