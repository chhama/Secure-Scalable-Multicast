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



int test_preassert(int x, int y) {
   if ((x > 0) && (y > 0)) return 1;
   return 0;
}

int test_postassert(int x) {
    return x;
}

int test_prepost(int x, int y) {
    return x+y;    
}


class Foo {
public:
        virtual ~Foo() { }
  
	virtual int test_preassert(int x, int y) {
            if ((x > 0) && (y > 0)) return 1;
            return 0;
	}   
	virtual int test_postassert(int x) {
	  return x;
	}
	virtual int test_prepost(int x, int y) {
	  return x+y;
	}
	static int stest_prepost(int x, int y) {
	  return x+y;
	}
 };

class Bar : public Foo {
public:
	virtual int test_prepost(int x, int y) {
	  return x+y;
	}
};



  class A {
   public:
    virtual ~A() {}
    virtual int foo(int a, int b, int c, int d, int e) {
      if ((a > 0) && (b > 0) && (c > 0) && (d > 0) && (e > 0)) {
	return 1;
      }
      return 0;
    }
  };

  class B {
   public:
    virtual ~B() {}
    virtual int bar(int a, int b, int c, int d, int e) {
      if ((a > 0) && (b > 0) && (c > 0) && (d > 0) && (e > 0)) {
	return 1;
      }
      return 0;
    }
  };

  class C : public A, public B {
   public:
    virtual int foo(int a, int b, int c, int d, int e) {
      return A::foo(a,b,c,d,e);
    }
    virtual int bar(int a, int b, int c, int d, int e) {
      return B::bar(a,b,c,d,e);
    }
  };
  
  class D : public C {
   public:
    virtual int foo(int a, int b, int c, int d, int e) {
      return C::foo(a,b,c,d,e);
    }
    virtual int bar(int a, int b, int c, int d, int e) {
      return C::bar(a,b,c,d,e);
    }
  };
  

struct E {
  int m_i;
  void manipulate_i(int i) {
  }
};


namespace myNames {

class myClass
{
    public:
    	myClass(int i) {}
};

}


#ifdef __cplusplus
extern "C" {
#endif

SWIGEXPORT jint JNICALL Java_contract_contractJNI_test_1preassert(JNIEnv *jenv, jclass jcls, jint jarg1, jint jarg2) {
  jint jresult = 0 ;
  int arg1 ;
  int arg2 ;
  int result;
  
  (void)jenv;
  (void)jcls;
  arg1 = (int)jarg1; 
  arg2 = (int)jarg2; 
  SWIG_contract_assert(0, (arg1>0)&&(arg2>0), "Contract violation: require: (arg1>0)&&(arg2>0)");
  
  result = (int)test_preassert(arg1,arg2);
  jresult = (jint)result; 
  return jresult;
}


SWIGEXPORT jint JNICALL Java_contract_contractJNI_test_1postassert(JNIEnv *jenv, jclass jcls, jint jarg1) {
  jint jresult = 0 ;
  int arg1 ;
  int result;
  
  (void)jenv;
  (void)jcls;
  arg1 = (int)jarg1; 
  result = (int)test_postassert(arg1);
  SWIG_contract_assert(0, (result>0), "Contract violation: ensure: (result>0)");
  
  jresult = (jint)result; 
  return jresult;
}


SWIGEXPORT jint JNICALL Java_contract_contractJNI_test_1prepost(JNIEnv *jenv, jclass jcls, jint jarg1, jint jarg2) {
  jint jresult = 0 ;
  int arg1 ;
  int arg2 ;
  int result;
  
  (void)jenv;
  (void)jcls;
  arg1 = (int)jarg1; 
  arg2 = (int)jarg2; 
  SWIG_contract_assert(0, (arg1>0), "Contract violation: require: (arg1>0)");
  
  result = (int)test_prepost(arg1,arg2);
  SWIG_contract_assert(0, (result>0), "Contract violation: ensure: (result>0)");
  
  jresult = (jint)result; 
  return jresult;
}


SWIGEXPORT void JNICALL Java_contract_contractJNI_delete_1Foo(JNIEnv *jenv, jclass jcls, jlong jarg1) {
  Foo *arg1 = (Foo *) 0 ;
  
  (void)jenv;
  (void)jcls;
  arg1 = *(Foo **)&jarg1; 
  delete arg1;
}


SWIGEXPORT jint JNICALL Java_contract_contractJNI_Foo_1test_1preassert(JNIEnv *jenv, jclass jcls, jlong jarg1, jobject jarg1_, jint jarg2, jint jarg3) {
  jint jresult = 0 ;
  Foo *arg1 = (Foo *) 0 ;
  int arg2 ;
  int arg3 ;
  int result;
  
  (void)jenv;
  (void)jcls;
  (void)jarg1_;
  arg1 = *(Foo **)&jarg1; 
  arg2 = (int)jarg2; 
  arg3 = (int)jarg3; 
  SWIG_contract_assert(0, (arg2>0)&&(arg3>0), "Contract violation: require: (arg2>0)&&(arg3>0)");
  
  result = (int)(arg1)->test_preassert(arg2,arg3);
  jresult = (jint)result; 
  return jresult;
}


SWIGEXPORT jint JNICALL Java_contract_contractJNI_Foo_1test_1postassert(JNIEnv *jenv, jclass jcls, jlong jarg1, jobject jarg1_, jint jarg2) {
  jint jresult = 0 ;
  Foo *arg1 = (Foo *) 0 ;
  int arg2 ;
  int result;
  
  (void)jenv;
  (void)jcls;
  (void)jarg1_;
  arg1 = *(Foo **)&jarg1; 
  arg2 = (int)jarg2; 
  result = (int)(arg1)->test_postassert(arg2);
  SWIG_contract_assert(0, (result>0), "Contract violation: ensure: (result>0)");
  
  jresult = (jint)result; 
  return jresult;
}


SWIGEXPORT jint JNICALL Java_contract_contractJNI_Foo_1test_1prepost(JNIEnv *jenv, jclass jcls, jlong jarg1, jobject jarg1_, jint jarg2, jint jarg3) {
  jint jresult = 0 ;
  Foo *arg1 = (Foo *) 0 ;
  int arg2 ;
  int arg3 ;
  int result;
  
  (void)jenv;
  (void)jcls;
  (void)jarg1_;
  arg1 = *(Foo **)&jarg1; 
  arg2 = (int)jarg2; 
  arg3 = (int)jarg3; 
  SWIG_contract_assert(0, (arg2>0), "Contract violation: require: (arg2>0)");
  
  result = (int)(arg1)->test_prepost(arg2,arg3);
  SWIG_contract_assert(0, (result>0), "Contract violation: ensure: (result>0)");
  
  jresult = (jint)result; 
  return jresult;
}


SWIGEXPORT jint JNICALL Java_contract_contractJNI_Foo_1stest_1prepost(JNIEnv *jenv, jclass jcls, jint jarg1, jint jarg2) {
  jint jresult = 0 ;
  int arg1 ;
  int arg2 ;
  int result;
  
  (void)jenv;
  (void)jcls;
  arg1 = (int)jarg1; 
  arg2 = (int)jarg2; 
  SWIG_contract_assert(0, (arg1>0), "Contract violation: require: (arg1>0)");
  
  result = (int)Foo::stest_prepost(arg1,arg2);
  SWIG_contract_assert(0, (result>0), "Contract violation: ensure: (result>0)");
  
  jresult = (jint)result; 
  return jresult;
}


SWIGEXPORT jlong JNICALL Java_contract_contractJNI_new_1Foo(JNIEnv *jenv, jclass jcls) {
  jlong jresult = 0 ;
  Foo *result = 0 ;
  
  (void)jenv;
  (void)jcls;
  result = (Foo *)new Foo();
  *(Foo **)&jresult = result; 
  return jresult;
}


SWIGEXPORT jint JNICALL Java_contract_contractJNI_Bar_1test_1prepost(JNIEnv *jenv, jclass jcls, jlong jarg1, jobject jarg1_, jint jarg2, jint jarg3) {
  jint jresult = 0 ;
  Bar *arg1 = (Bar *) 0 ;
  int arg2 ;
  int arg3 ;
  int result;
  
  (void)jenv;
  (void)jcls;
  (void)jarg1_;
  arg1 = *(Bar **)&jarg1; 
  arg2 = (int)jarg2; 
  arg3 = (int)jarg3; 
  SWIG_contract_assert(0, ((arg3>0)) && ((arg2>0)), "Contract violation: require: (arg3>0) && [(arg2>0) from Foo]");
  
  result = (int)(arg1)->test_prepost(arg2,arg3);
  SWIG_contract_assert(0, (result>0), "Contract violation: ensure: [(result>0) from Foo]");
  
  jresult = (jint)result; 
  return jresult;
}


SWIGEXPORT jlong JNICALL Java_contract_contractJNI_new_1Bar(JNIEnv *jenv, jclass jcls) {
  jlong jresult = 0 ;
  Bar *result = 0 ;
  
  (void)jenv;
  (void)jcls;
  result = (Bar *)new Bar();
  *(Bar **)&jresult = result; 
  return jresult;
}


SWIGEXPORT void JNICALL Java_contract_contractJNI_delete_1Bar(JNIEnv *jenv, jclass jcls, jlong jarg1) {
  Bar *arg1 = (Bar *) 0 ;
  
  (void)jenv;
  (void)jcls;
  arg1 = *(Bar **)&jarg1; 
  delete arg1;
}


SWIGEXPORT void JNICALL Java_contract_contractJNI_delete_1A(JNIEnv *jenv, jclass jcls, jlong jarg1) {
  A *arg1 = (A *) 0 ;
  
  (void)jenv;
  (void)jcls;
  arg1 = *(A **)&jarg1; 
  delete arg1;
}


SWIGEXPORT jint JNICALL Java_contract_contractJNI_A_1foo(JNIEnv *jenv, jclass jcls, jlong jarg1, jobject jarg1_, jint jarg2, jint jarg3, jint jarg4, jint jarg5, jint jarg6) {
  jint jresult = 0 ;
  A *arg1 = (A *) 0 ;
  int arg2 ;
  int arg3 ;
  int arg4 ;
  int arg5 ;
  int arg6 ;
  int result;
  
  (void)jenv;
  (void)jcls;
  (void)jarg1_;
  arg1 = *(A **)&jarg1; 
  arg2 = (int)jarg2; 
  arg3 = (int)jarg3; 
  arg4 = (int)jarg4; 
  arg5 = (int)jarg5; 
  arg6 = (int)jarg6; 
  SWIG_contract_assert(0, (arg2>0)&&(arg3>0), "Contract violation: require: (arg2>0)&&(arg3>0)");
  
  result = (int)(arg1)->foo(arg2,arg3,arg4,arg5,arg6);
  SWIG_contract_assert(0, (result>0), "Contract violation: ensure: (result>0)");
  
  jresult = (jint)result; 
  return jresult;
}


SWIGEXPORT jlong JNICALL Java_contract_contractJNI_new_1A(JNIEnv *jenv, jclass jcls) {
  jlong jresult = 0 ;
  A *result = 0 ;
  
  (void)jenv;
  (void)jcls;
  result = (A *)new A();
  *(A **)&jresult = result; 
  return jresult;
}


SWIGEXPORT void JNICALL Java_contract_contractJNI_delete_1B(JNIEnv *jenv, jclass jcls, jlong jarg1) {
  B *arg1 = (B *) 0 ;
  
  (void)jenv;
  (void)jcls;
  arg1 = *(B **)&jarg1; 
  delete arg1;
}


SWIGEXPORT jint JNICALL Java_contract_contractJNI_B_1bar(JNIEnv *jenv, jclass jcls, jlong jarg1, jobject jarg1_, jint jarg2, jint jarg3, jint jarg4, jint jarg5, jint jarg6) {
  jint jresult = 0 ;
  B *arg1 = (B *) 0 ;
  int arg2 ;
  int arg3 ;
  int arg4 ;
  int arg5 ;
  int arg6 ;
  int result;
  
  (void)jenv;
  (void)jcls;
  (void)jarg1_;
  arg1 = *(B **)&jarg1; 
  arg2 = (int)jarg2; 
  arg3 = (int)jarg3; 
  arg4 = (int)jarg4; 
  arg5 = (int)jarg5; 
  arg6 = (int)jarg6; 
  SWIG_contract_assert(0, (arg5>0)&&(arg6>0), "Contract violation: require: (arg5>0)&&(arg6>0)");
  
  result = (int)(arg1)->bar(arg2,arg3,arg4,arg5,arg6);
  SWIG_contract_assert(0, (result>0), "Contract violation: ensure: (result>0)");
  
  jresult = (jint)result; 
  return jresult;
}


SWIGEXPORT jlong JNICALL Java_contract_contractJNI_new_1B(JNIEnv *jenv, jclass jcls) {
  jlong jresult = 0 ;
  B *result = 0 ;
  
  (void)jenv;
  (void)jcls;
  result = (B *)new B();
  *(B **)&jresult = result; 
  return jresult;
}


SWIGEXPORT jint JNICALL Java_contract_contractJNI_C_1foo(JNIEnv *jenv, jclass jcls, jlong jarg1, jobject jarg1_, jint jarg2, jint jarg3, jint jarg4, jint jarg5, jint jarg6) {
  jint jresult = 0 ;
  C *arg1 = (C *) 0 ;
  int arg2 ;
  int arg3 ;
  int arg4 ;
  int arg5 ;
  int arg6 ;
  int result;
  
  (void)jenv;
  (void)jcls;
  (void)jarg1_;
  arg1 = *(C **)&jarg1; 
  arg2 = (int)jarg2; 
  arg3 = (int)jarg3; 
  arg4 = (int)jarg4; 
  arg5 = (int)jarg5; 
  arg6 = (int)jarg6; 
  SWIG_contract_assert(0, ((arg4>0)&&(arg5>0)) && ((arg2>0)&&(arg3>0)), "Contract violation: require: (arg4>0)&&(arg5>0) && [(arg2>0)&&(arg3>0) from A]");
  
  result = (int)(arg1)->foo(arg2,arg3,arg4,arg5,arg6);
  SWIG_contract_assert(0, ((result>0)) || ((result>0)), "Contract violation: ensure: (result>0) || [(result>0) from A]");
  
  jresult = (jint)result; 
  return jresult;
}


SWIGEXPORT jint JNICALL Java_contract_contractJNI_C_1bar(JNIEnv *jenv, jclass jcls, jlong jarg1, jobject jarg1_, jint jarg2, jint jarg3, jint jarg4, jint jarg5, jint jarg6) {
  jint jresult = 0 ;
  C *arg1 = (C *) 0 ;
  int arg2 ;
  int arg3 ;
  int arg4 ;
  int arg5 ;
  int arg6 ;
  int result;
  
  (void)jenv;
  (void)jcls;
  (void)jarg1_;
  arg1 = *(C **)&jarg1; 
  arg2 = (int)jarg2; 
  arg3 = (int)jarg3; 
  arg4 = (int)jarg4; 
  arg5 = (int)jarg5; 
  arg6 = (int)jarg6; 
  SWIG_contract_assert(0, ((arg5>0)&&(arg6>0)) && ((arg5>0)&&(arg6>0)), "Contract violation: require: (arg5>0)&&(arg6>0) && [(arg5>0)&&(arg6>0) from B]");
  
  result = (int)(arg1)->bar(arg2,arg3,arg4,arg5,arg6);
  SWIG_contract_assert(0, ((result>0)) || ((result>0)), "Contract violation: ensure: (result>0) || [(result>0) from B]");
  
  jresult = (jint)result; 
  return jresult;
}


SWIGEXPORT jlong JNICALL Java_contract_contractJNI_new_1C(JNIEnv *jenv, jclass jcls) {
  jlong jresult = 0 ;
  C *result = 0 ;
  
  (void)jenv;
  (void)jcls;
  result = (C *)new C();
  *(C **)&jresult = result; 
  return jresult;
}


SWIGEXPORT void JNICALL Java_contract_contractJNI_delete_1C(JNIEnv *jenv, jclass jcls, jlong jarg1) {
  C *arg1 = (C *) 0 ;
  
  (void)jenv;
  (void)jcls;
  arg1 = *(C **)&jarg1; 
  delete arg1;
}


SWIGEXPORT jint JNICALL Java_contract_contractJNI_D_1foo(JNIEnv *jenv, jclass jcls, jlong jarg1, jobject jarg1_, jint jarg2, jint jarg3, jint jarg4, jint jarg5, jint jarg6) {
  jint jresult = 0 ;
  D *arg1 = (D *) 0 ;
  int arg2 ;
  int arg3 ;
  int arg4 ;
  int arg5 ;
  int arg6 ;
  int result;
  
  (void)jenv;
  (void)jcls;
  (void)jarg1_;
  arg1 = *(D **)&jarg1; 
  arg2 = (int)jarg2; 
  arg3 = (int)jarg3; 
  arg4 = (int)jarg4; 
  arg5 = (int)jarg5; 
  arg6 = (int)jarg6; 
  SWIG_contract_assert(0, ((arg6>0)) && (((arg4>0)&&(arg5>0)) && ((arg2>0)&&(arg3>0))), "Contract violation: require: (arg6>0) && [(arg4>0)&&(arg5>0) && [(arg2>0)&&(arg3>0) from A] from C]");
  
  result = (int)(arg1)->foo(arg2,arg3,arg4,arg5,arg6);
  SWIG_contract_assert(0, ((result>0)) || ((result>0)), "Contract violation: ensure: [(result>0) || [(result>0) from A] from C]");
  
  jresult = (jint)result; 
  return jresult;
}


SWIGEXPORT jint JNICALL Java_contract_contractJNI_D_1bar(JNIEnv *jenv, jclass jcls, jlong jarg1, jobject jarg1_, jint jarg2, jint jarg3, jint jarg4, jint jarg5, jint jarg6) {
  jint jresult = 0 ;
  D *arg1 = (D *) 0 ;
  int arg2 ;
  int arg3 ;
  int arg4 ;
  int arg5 ;
  int arg6 ;
  int result;
  
  (void)jenv;
  (void)jcls;
  (void)jarg1_;
  arg1 = *(D **)&jarg1; 
  arg2 = (int)jarg2; 
  arg3 = (int)jarg3; 
  arg4 = (int)jarg4; 
  arg5 = (int)jarg5; 
  arg6 = (int)jarg6; 
  SWIG_contract_assert(0, ((arg2>0)&&(arg3>0)&&(arg4>0)) && (((arg5>0)&&(arg6>0)) && ((arg5>0)&&(arg6>0))), "Contract violation: require: (arg2>0)&&(arg3>0)&&(arg4>0) && [(arg5>0)&&(arg6>0) && [(arg5>0)&&(arg6>0) from B] from C]");
  
  result = (int)(arg1)->bar(arg2,arg3,arg4,arg5,arg6);
  SWIG_contract_assert(0, ((result>0)) || ((result>0)), "Contract violation: ensure: [(result>0) || [(result>0) from B] from C]");
  
  jresult = (jint)result; 
  return jresult;
}


SWIGEXPORT jlong JNICALL Java_contract_contractJNI_new_1D(JNIEnv *jenv, jclass jcls) {
  jlong jresult = 0 ;
  D *result = 0 ;
  
  (void)jenv;
  (void)jcls;
  result = (D *)new D();
  *(D **)&jresult = result; 
  return jresult;
}


SWIGEXPORT void JNICALL Java_contract_contractJNI_delete_1D(JNIEnv *jenv, jclass jcls, jlong jarg1) {
  D *arg1 = (D *) 0 ;
  
  (void)jenv;
  (void)jcls;
  arg1 = *(D **)&jarg1; 
  delete arg1;
}


SWIGEXPORT void JNICALL Java_contract_contractJNI_E_1m_1i_1set(JNIEnv *jenv, jclass jcls, jlong jarg1, jobject jarg1_, jint jarg2) {
  E *arg1 = (E *) 0 ;
  int arg2 ;
  
  (void)jenv;
  (void)jcls;
  (void)jarg1_;
  arg1 = *(E **)&jarg1; 
  arg2 = (int)jarg2; 
  if (arg1) (arg1)->m_i = arg2;
}


SWIGEXPORT jint JNICALL Java_contract_contractJNI_E_1m_1i_1get(JNIEnv *jenv, jclass jcls, jlong jarg1, jobject jarg1_) {
  jint jresult = 0 ;
  E *arg1 = (E *) 0 ;
  int result;
  
  (void)jenv;
  (void)jcls;
  (void)jarg1_;
  arg1 = *(E **)&jarg1; 
  result = (int) ((arg1)->m_i);
  jresult = (jint)result; 
  return jresult;
}


SWIGEXPORT void JNICALL Java_contract_contractJNI_E_1manipulate_1i(JNIEnv *jenv, jclass jcls, jlong jarg1, jobject jarg1_, jint jarg2) {
  E *arg1 = (E *) 0 ;
  int arg2 ;
  
  (void)jenv;
  (void)jcls;
  (void)jarg1_;
  arg1 = *(E **)&jarg1; 
  arg2 = (int)jarg2; 
  SWIG_contract_assert(, (arg2<=arg1->m_i), "Contract violation: require: (arg2<=arg1->m_i)");
  
  (arg1)->manipulate_i(arg2);
}


SWIGEXPORT jlong JNICALL Java_contract_contractJNI_new_1E(JNIEnv *jenv, jclass jcls) {
  jlong jresult = 0 ;
  E *result = 0 ;
  
  (void)jenv;
  (void)jcls;
  result = (E *)new E();
  *(E **)&jresult = result; 
  return jresult;
}


SWIGEXPORT void JNICALL Java_contract_contractJNI_delete_1E(JNIEnv *jenv, jclass jcls, jlong jarg1) {
  E *arg1 = (E *) 0 ;
  
  (void)jenv;
  (void)jcls;
  arg1 = *(E **)&jarg1; 
  delete arg1;
}


SWIGEXPORT jlong JNICALL Java_contract_contractJNI_new_1myClass(JNIEnv *jenv, jclass jcls, jint jarg1) {
  jlong jresult = 0 ;
  int arg1 ;
  myNames::myClass *result = 0 ;
  
  (void)jenv;
  (void)jcls;
  arg1 = (int)jarg1; 
  SWIG_contract_assert(0, (arg1>0), "Contract violation: require: (arg1>0)");
  
  result = (myNames::myClass *)new myNames::myClass(arg1);
  *(myNames::myClass **)&jresult = result; 
  return jresult;
}


SWIGEXPORT void JNICALL Java_contract_contractJNI_delete_1myClass(JNIEnv *jenv, jclass jcls, jlong jarg1) {
  myNames::myClass *arg1 = (myNames::myClass *) 0 ;
  
  (void)jenv;
  (void)jcls;
  arg1 = *(myNames::myClass **)&jarg1; 
  delete arg1;
}


SWIGEXPORT jlong JNICALL Java_contract_contractJNI_Bar_1SWIGUpcast(JNIEnv *jenv, jclass jcls, jlong jarg1) {
    jlong baseptr = 0;
    (void)jenv;
    (void)jcls;
    *(Foo **)&baseptr = *(Bar **)&jarg1;
    return baseptr;
}

SWIGEXPORT jlong JNICALL Java_contract_contractJNI_C_1SWIGUpcast(JNIEnv *jenv, jclass jcls, jlong jarg1) {
    jlong baseptr = 0;
    (void)jenv;
    (void)jcls;
    *(A **)&baseptr = *(C **)&jarg1;
    return baseptr;
}

SWIGEXPORT jlong JNICALL Java_contract_contractJNI_D_1SWIGUpcast(JNIEnv *jenv, jclass jcls, jlong jarg1) {
    jlong baseptr = 0;
    (void)jenv;
    (void)jcls;
    *(C **)&baseptr = *(D **)&jarg1;
    return baseptr;
}

#ifdef __cplusplus
}
#endif

