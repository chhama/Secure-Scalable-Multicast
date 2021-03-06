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


namespace Standard {
  template <class T, class U > struct Pair {
    T first;
    U second;
  };
}


namespace Standard {
template<class Key, class T, class J = int> class Multimap {
  public:
    typedef Key key_type;
    typedef T mapped_type;

    class iterator {
    public:
      mapped_type mm;
      iterator(mapped_type m = mapped_type()) : mm(m) {}
    };

    mapped_type typemap_test(Standard::Pair<iterator,iterator> pp) { return pp.second.mm; }
    Standard::Pair<iterator,iterator>* make_dummy_pair() { return new Standard::Pair<iterator, iterator>(); }
  };
}


struct A {
    int val;
    A(int v = 0): val(v) {}
};


// For < int, A >
template<typename Key, typename T> Standard::Pair< typename Standard::Multimap< Key, T >::iterator, typename Standard::Multimap< Key, T >::iterator > default_general() {
  Standard::Pair< typename Standard::Multimap< Key, T >::iterator, typename Standard::Multimap< Key, T >::iterator > default_value;
  default_value.second.mm = A(1234);
  return default_value;
}
// For < A, int >
template<typename Key, typename T> Standard::Pair< typename Standard::Multimap< Key, T >::iterator, typename Standard::Multimap< Key, T >::iterator > default_A_int() {
  Standard::Pair< typename Standard::Multimap< Key, T >::iterator, typename Standard::Multimap< Key, T >::iterator > default_value;
  default_value.second.mm = 4321;
  return default_value;
}


typedef A AA;
namespace Space {
  typedef AA AB;
}



// Extend the test with some typedefs in the template parameters
Standard::Multimap< int, AA      >::mapped_type typedef_test1(Standard::Pair< Standard::Multimap< int, AA      >::iterator, Standard::Multimap< int, AA      >::iterator > pp) { return pp.second.mm; }
Standard::Multimap< int, A       >::mapped_type typedef_test2(Standard::Pair< Standard::Multimap< int, A       >::iterator, Standard::Multimap< int, A       >::iterator > pp) { return pp.second.mm; }
Standard::Multimap< int, AA, int >::mapped_type typedef_test3(Standard::Pair< Standard::Multimap< int, AA, int >::iterator, Standard::Multimap< int, AA, int >::iterator > pp) { return pp.second.mm; }
Standard::Multimap< int, A , int >::mapped_type typedef_test4(Standard::Pair< Standard::Multimap< int, A , int >::iterator, Standard::Multimap< int, A , int >::iterator > pp) { return pp.second.mm; }
using namespace Space;
Standard::Multimap< int, AB      >::mapped_type typedef_test5(Standard::Pair< Standard::Multimap< int, AB      >::iterator, Standard::Multimap< int, AB      >::iterator > pp) { return pp.second.mm; }
Standard::Multimap< int, AB, int >::mapped_type typedef_test6(Standard::Pair< Standard::Multimap< int, AB, int >::iterator, Standard::Multimap< int, AB, int >::iterator > pp) { return pp.second.mm; }


#ifdef __cplusplus
extern "C" {
#endif

SWIGEXPORT void JNICALL Java_template_1typemaps_1typedef_template_1typemaps_1typedefJNI_A_1val_1set(JNIEnv *jenv, jclass jcls, jlong jarg1, jobject jarg1_, jint jarg2) {
  A *arg1 = (A *) 0 ;
  int arg2 ;
  
  (void)jenv;
  (void)jcls;
  (void)jarg1_;
  arg1 = *(A **)&jarg1; 
  arg2 = (int)jarg2; 
  if (arg1) (arg1)->val = arg2;
}


SWIGEXPORT jint JNICALL Java_template_1typemaps_1typedef_template_1typemaps_1typedefJNI_A_1val_1get(JNIEnv *jenv, jclass jcls, jlong jarg1, jobject jarg1_) {
  jint jresult = 0 ;
  A *arg1 = (A *) 0 ;
  int result;
  
  (void)jenv;
  (void)jcls;
  (void)jarg1_;
  arg1 = *(A **)&jarg1; 
  result = (int) ((arg1)->val);
  jresult = (jint)result; 
  return jresult;
}


SWIGEXPORT jlong JNICALL Java_template_1typemaps_1typedef_template_1typemaps_1typedefJNI_new_1A_1_1SWIG_10(JNIEnv *jenv, jclass jcls, jint jarg1) {
  jlong jresult = 0 ;
  int arg1 ;
  A *result = 0 ;
  
  (void)jenv;
  (void)jcls;
  arg1 = (int)jarg1; 
  result = (A *)new A(arg1);
  *(A **)&jresult = result; 
  return jresult;
}


SWIGEXPORT jlong JNICALL Java_template_1typemaps_1typedef_template_1typemaps_1typedefJNI_new_1A_1_1SWIG_11(JNIEnv *jenv, jclass jcls) {
  jlong jresult = 0 ;
  A *result = 0 ;
  
  (void)jenv;
  (void)jcls;
  result = (A *)new A();
  *(A **)&jresult = result; 
  return jresult;
}


SWIGEXPORT void JNICALL Java_template_1typemaps_1typedef_template_1typemaps_1typedefJNI_delete_1A(JNIEnv *jenv, jclass jcls, jlong jarg1) {
  A *arg1 = (A *) 0 ;
  
  (void)jenv;
  (void)jcls;
  arg1 = *(A **)&jarg1; 
  delete arg1;
}


SWIGEXPORT void JNICALL Java_template_1typemaps_1typedef_template_1typemaps_1typedefJNI_PairIntA_1first_1set(JNIEnv *jenv, jclass jcls, jlong jarg1, jobject jarg1_, jint jarg2) {
  Standard::Pair< int,A > *arg1 = (Standard::Pair< int,A > *) 0 ;
  int arg2 ;
  
  (void)jenv;
  (void)jcls;
  (void)jarg1_;
  arg1 = *(Standard::Pair< int,A > **)&jarg1; 
  arg2 = (int)jarg2; 
  if (arg1) (arg1)->first = arg2;
}


SWIGEXPORT jint JNICALL Java_template_1typemaps_1typedef_template_1typemaps_1typedefJNI_PairIntA_1first_1get(JNIEnv *jenv, jclass jcls, jlong jarg1, jobject jarg1_) {
  jint jresult = 0 ;
  Standard::Pair< int,A > *arg1 = (Standard::Pair< int,A > *) 0 ;
  int result;
  
  (void)jenv;
  (void)jcls;
  (void)jarg1_;
  arg1 = *(Standard::Pair< int,A > **)&jarg1; 
  result = (int) ((arg1)->first);
  jresult = (jint)result; 
  return jresult;
}


SWIGEXPORT void JNICALL Java_template_1typemaps_1typedef_template_1typemaps_1typedefJNI_PairIntA_1second_1set(JNIEnv *jenv, jclass jcls, jlong jarg1, jobject jarg1_, jlong jarg2, jobject jarg2_) {
  Standard::Pair< int,A > *arg1 = (Standard::Pair< int,A > *) 0 ;
  A *arg2 = (A *) 0 ;
  
  (void)jenv;
  (void)jcls;
  (void)jarg1_;
  (void)jarg2_;
  arg1 = *(Standard::Pair< int,A > **)&jarg1; 
  arg2 = *(A **)&jarg2; 
  if (arg1) (arg1)->second = *arg2;
}


SWIGEXPORT jlong JNICALL Java_template_1typemaps_1typedef_template_1typemaps_1typedefJNI_PairIntA_1second_1get(JNIEnv *jenv, jclass jcls, jlong jarg1, jobject jarg1_) {
  jlong jresult = 0 ;
  Standard::Pair< int,A > *arg1 = (Standard::Pair< int,A > *) 0 ;
  A *result = 0 ;
  
  (void)jenv;
  (void)jcls;
  (void)jarg1_;
  arg1 = *(Standard::Pair< int,A > **)&jarg1; 
  result = (A *)& ((arg1)->second);
  *(A **)&jresult = result; 
  return jresult;
}


SWIGEXPORT jlong JNICALL Java_template_1typemaps_1typedef_template_1typemaps_1typedefJNI_new_1PairIntA(JNIEnv *jenv, jclass jcls) {
  jlong jresult = 0 ;
  Standard::Pair< int,A > *result = 0 ;
  
  (void)jenv;
  (void)jcls;
  result = (Standard::Pair< int,A > *)new Standard::Pair< int,A >();
  *(Standard::Pair< int,A > **)&jresult = result; 
  return jresult;
}


SWIGEXPORT void JNICALL Java_template_1typemaps_1typedef_template_1typemaps_1typedefJNI_delete_1PairIntA(JNIEnv *jenv, jclass jcls, jlong jarg1) {
  Standard::Pair< int,A > *arg1 = (Standard::Pair< int,A > *) 0 ;
  
  (void)jenv;
  (void)jcls;
  arg1 = *(Standard::Pair< int,A > **)&jarg1; 
  delete arg1;
}


SWIGEXPORT jlong JNICALL Java_template_1typemaps_1typedef_template_1typemaps_1typedefJNI_MultimapIntA_1typemap_1test(JNIEnv *jenv, jclass jcls, jlong jarg1, jobject jarg1_, jlong jarg2) {
  jlong jresult = 0 ;
  Standard::Multimap< int,A > *arg1 = (Standard::Multimap< int,A > *) 0 ;
  SwigValueWrapper< Standard::Pair< Standard::Multimap< int,A >::iterator,Standard::Multimap< int,A >::iterator > > arg2 ;
  Standard::Multimap< int,A >::mapped_type result;
  
  (void)jenv;
  (void)jcls;
  (void)jarg1_;
  arg1 = *(Standard::Multimap< int,A > **)&jarg1; 
  arg2 = default_general< int, A >();
  result = (arg1)->typemap_test(arg2);
  *(Standard::Multimap< int,A >::mapped_type **)&jresult = new Standard::Multimap< int,A >::mapped_type((const Standard::Multimap< int,A >::mapped_type &)result); 
  return jresult;
}


SWIGEXPORT jlong JNICALL Java_template_1typemaps_1typedef_template_1typemaps_1typedefJNI_MultimapIntA_1make_1dummy_1pair(JNIEnv *jenv, jclass jcls, jlong jarg1, jobject jarg1_) {
  jlong jresult = 0 ;
  Standard::Multimap< int,A > *arg1 = (Standard::Multimap< int,A > *) 0 ;
  Standard::Pair< Standard::Multimap< int,A >::iterator,Standard::Multimap< int,A >::iterator > *result = 0 ;
  
  (void)jenv;
  (void)jcls;
  (void)jarg1_;
  arg1 = *(Standard::Multimap< int,A > **)&jarg1; 
  result = (Standard::Pair< Standard::Multimap< int,A >::iterator,Standard::Multimap< int,A >::iterator > *)(arg1)->make_dummy_pair();
  *(Standard::Pair< Standard::Multimap< int,A >::iterator,Standard::Multimap< int,A >::iterator > **)&jresult = result; 
  return jresult;
}


SWIGEXPORT jlong JNICALL Java_template_1typemaps_1typedef_template_1typemaps_1typedefJNI_new_1MultimapIntA(JNIEnv *jenv, jclass jcls) {
  jlong jresult = 0 ;
  Standard::Multimap< int,A > *result = 0 ;
  
  (void)jenv;
  (void)jcls;
  result = (Standard::Multimap< int,A > *)new Standard::Multimap< int,A >();
  *(Standard::Multimap< int,A > **)&jresult = result; 
  return jresult;
}


SWIGEXPORT void JNICALL Java_template_1typemaps_1typedef_template_1typemaps_1typedefJNI_delete_1MultimapIntA(JNIEnv *jenv, jclass jcls, jlong jarg1) {
  Standard::Multimap< int,A > *arg1 = (Standard::Multimap< int,A > *) 0 ;
  
  (void)jenv;
  (void)jcls;
  arg1 = *(Standard::Multimap< int,A > **)&jarg1; 
  delete arg1;
}


SWIGEXPORT void JNICALL Java_template_1typemaps_1typedef_template_1typemaps_1typedefJNI_PairAInt_1first_1set(JNIEnv *jenv, jclass jcls, jlong jarg1, jobject jarg1_, jlong jarg2, jobject jarg2_) {
  Standard::Pair< A,int > *arg1 = (Standard::Pair< A,int > *) 0 ;
  A *arg2 = (A *) 0 ;
  
  (void)jenv;
  (void)jcls;
  (void)jarg1_;
  (void)jarg2_;
  arg1 = *(Standard::Pair< A,int > **)&jarg1; 
  arg2 = *(A **)&jarg2; 
  if (arg1) (arg1)->first = *arg2;
}


SWIGEXPORT jlong JNICALL Java_template_1typemaps_1typedef_template_1typemaps_1typedefJNI_PairAInt_1first_1get(JNIEnv *jenv, jclass jcls, jlong jarg1, jobject jarg1_) {
  jlong jresult = 0 ;
  Standard::Pair< A,int > *arg1 = (Standard::Pair< A,int > *) 0 ;
  A *result = 0 ;
  
  (void)jenv;
  (void)jcls;
  (void)jarg1_;
  arg1 = *(Standard::Pair< A,int > **)&jarg1; 
  result = (A *)& ((arg1)->first);
  *(A **)&jresult = result; 
  return jresult;
}


SWIGEXPORT void JNICALL Java_template_1typemaps_1typedef_template_1typemaps_1typedefJNI_PairAInt_1second_1set(JNIEnv *jenv, jclass jcls, jlong jarg1, jobject jarg1_, jint jarg2) {
  Standard::Pair< A,int > *arg1 = (Standard::Pair< A,int > *) 0 ;
  int arg2 ;
  
  (void)jenv;
  (void)jcls;
  (void)jarg1_;
  arg1 = *(Standard::Pair< A,int > **)&jarg1; 
  arg2 = (int)jarg2; 
  if (arg1) (arg1)->second = arg2;
}


SWIGEXPORT jint JNICALL Java_template_1typemaps_1typedef_template_1typemaps_1typedefJNI_PairAInt_1second_1get(JNIEnv *jenv, jclass jcls, jlong jarg1, jobject jarg1_) {
  jint jresult = 0 ;
  Standard::Pair< A,int > *arg1 = (Standard::Pair< A,int > *) 0 ;
  int result;
  
  (void)jenv;
  (void)jcls;
  (void)jarg1_;
  arg1 = *(Standard::Pair< A,int > **)&jarg1; 
  result = (int) ((arg1)->second);
  jresult = (jint)result; 
  return jresult;
}


SWIGEXPORT jlong JNICALL Java_template_1typemaps_1typedef_template_1typemaps_1typedefJNI_new_1PairAInt(JNIEnv *jenv, jclass jcls) {
  jlong jresult = 0 ;
  Standard::Pair< A,int > *result = 0 ;
  
  (void)jenv;
  (void)jcls;
  result = (Standard::Pair< A,int > *)new Standard::Pair< A,int >();
  *(Standard::Pair< A,int > **)&jresult = result; 
  return jresult;
}


SWIGEXPORT void JNICALL Java_template_1typemaps_1typedef_template_1typemaps_1typedefJNI_delete_1PairAInt(JNIEnv *jenv, jclass jcls, jlong jarg1) {
  Standard::Pair< A,int > *arg1 = (Standard::Pair< A,int > *) 0 ;
  
  (void)jenv;
  (void)jcls;
  arg1 = *(Standard::Pair< A,int > **)&jarg1; 
  delete arg1;
}


SWIGEXPORT jint JNICALL Java_template_1typemaps_1typedef_template_1typemaps_1typedefJNI_MultimapAInt_1typemap_1test(JNIEnv *jenv, jclass jcls, jlong jarg1, jobject jarg1_, jlong jarg2) {
  jint jresult = 0 ;
  Standard::Multimap< A,int > *arg1 = (Standard::Multimap< A,int > *) 0 ;
  SwigValueWrapper< Standard::Pair< Standard::Multimap< A,int >::iterator,Standard::Multimap< A,int >::iterator > > arg2 ;
  Standard::Multimap< A,int >::mapped_type result;
  
  (void)jenv;
  (void)jcls;
  (void)jarg1_;
  arg1 = *(Standard::Multimap< A,int > **)&jarg1; 
  arg2 = default_A_int< A, int >();
  result = (Standard::Multimap< A,int >::mapped_type)(arg1)->typemap_test(arg2);
  jresult = (jint)result; 
  return jresult;
}


SWIGEXPORT jlong JNICALL Java_template_1typemaps_1typedef_template_1typemaps_1typedefJNI_MultimapAInt_1make_1dummy_1pair(JNIEnv *jenv, jclass jcls, jlong jarg1, jobject jarg1_) {
  jlong jresult = 0 ;
  Standard::Multimap< A,int > *arg1 = (Standard::Multimap< A,int > *) 0 ;
  Standard::Pair< Standard::Multimap< A,int >::iterator,Standard::Multimap< A,int >::iterator > *result = 0 ;
  
  (void)jenv;
  (void)jcls;
  (void)jarg1_;
  arg1 = *(Standard::Multimap< A,int > **)&jarg1; 
  result = (Standard::Pair< Standard::Multimap< A,int >::iterator,Standard::Multimap< A,int >::iterator > *)(arg1)->make_dummy_pair();
  *(Standard::Pair< Standard::Multimap< A,int >::iterator,Standard::Multimap< A,int >::iterator > **)&jresult = result; 
  return jresult;
}


SWIGEXPORT jlong JNICALL Java_template_1typemaps_1typedef_template_1typemaps_1typedefJNI_new_1MultimapAInt(JNIEnv *jenv, jclass jcls) {
  jlong jresult = 0 ;
  Standard::Multimap< A,int > *result = 0 ;
  
  (void)jenv;
  (void)jcls;
  result = (Standard::Multimap< A,int > *)new Standard::Multimap< A,int >();
  *(Standard::Multimap< A,int > **)&jresult = result; 
  return jresult;
}


SWIGEXPORT void JNICALL Java_template_1typemaps_1typedef_template_1typemaps_1typedefJNI_delete_1MultimapAInt(JNIEnv *jenv, jclass jcls, jlong jarg1) {
  Standard::Multimap< A,int > *arg1 = (Standard::Multimap< A,int > *) 0 ;
  
  (void)jenv;
  (void)jcls;
  arg1 = *(Standard::Multimap< A,int > **)&jarg1; 
  delete arg1;
}


SWIGEXPORT jlong JNICALL Java_template_1typemaps_1typedef_template_1typemaps_1typedefJNI_typedef_1test1(JNIEnv *jenv, jclass jcls, jlong jarg1) {
  jlong jresult = 0 ;
  SwigValueWrapper< Standard::Pair< Standard::Multimap< int,A >::iterator,Standard::Multimap< int,A >::iterator > > arg1 ;
  Standard::Multimap< int,AA,int >::mapped_type result;
  
  (void)jenv;
  (void)jcls;
  arg1 = default_general< int, A >();
  result = typedef_test1(arg1);
  *(Standard::Multimap< int,AA,int >::mapped_type **)&jresult = new Standard::Multimap< int,AA,int >::mapped_type((const Standard::Multimap< int,AA,int >::mapped_type &)result); 
  return jresult;
}


SWIGEXPORT jlong JNICALL Java_template_1typemaps_1typedef_template_1typemaps_1typedefJNI_typedef_1test2(JNIEnv *jenv, jclass jcls, jlong jarg1) {
  jlong jresult = 0 ;
  SwigValueWrapper< Standard::Pair< Standard::Multimap< int,A >::iterator,Standard::Multimap< int,A >::iterator > > arg1 ;
  Standard::Multimap< int,A,int >::mapped_type result;
  
  (void)jenv;
  (void)jcls;
  arg1 = default_general< int, A >();
  result = typedef_test2(arg1);
  *(Standard::Multimap< int,A,int >::mapped_type **)&jresult = new Standard::Multimap< int,A,int >::mapped_type((const Standard::Multimap< int,A,int >::mapped_type &)result); 
  return jresult;
}


SWIGEXPORT jlong JNICALL Java_template_1typemaps_1typedef_template_1typemaps_1typedefJNI_typedef_1test3(JNIEnv *jenv, jclass jcls, jlong jarg1) {
  jlong jresult = 0 ;
  SwigValueWrapper< Standard::Pair< Standard::Multimap< int,A >::iterator,Standard::Multimap< int,A >::iterator > > arg1 ;
  Standard::Multimap< int,AA,int >::mapped_type result;
  
  (void)jenv;
  (void)jcls;
  arg1 = default_general< int, A >();
  result = typedef_test3(arg1);
  *(Standard::Multimap< int,AA,int >::mapped_type **)&jresult = new Standard::Multimap< int,AA,int >::mapped_type((const Standard::Multimap< int,AA,int >::mapped_type &)result); 
  return jresult;
}


SWIGEXPORT jlong JNICALL Java_template_1typemaps_1typedef_template_1typemaps_1typedefJNI_typedef_1test4(JNIEnv *jenv, jclass jcls, jlong jarg1) {
  jlong jresult = 0 ;
  SwigValueWrapper< Standard::Pair< Standard::Multimap< int,A >::iterator,Standard::Multimap< int,A >::iterator > > arg1 ;
  Standard::Multimap< int,A,int >::mapped_type result;
  
  (void)jenv;
  (void)jcls;
  arg1 = default_general< int, A >();
  result = typedef_test4(arg1);
  *(Standard::Multimap< int,A,int >::mapped_type **)&jresult = new Standard::Multimap< int,A,int >::mapped_type((const Standard::Multimap< int,A,int >::mapped_type &)result); 
  return jresult;
}


SWIGEXPORT jlong JNICALL Java_template_1typemaps_1typedef_template_1typemaps_1typedefJNI_typedef_1test5(JNIEnv *jenv, jclass jcls, jlong jarg1) {
  jlong jresult = 0 ;
  SwigValueWrapper< Standard::Pair< Standard::Multimap< int,A >::iterator,Standard::Multimap< int,A >::iterator > > arg1 ;
  Standard::Multimap< int,Space::AB,int >::mapped_type result;
  
  (void)jenv;
  (void)jcls;
  arg1 = default_general< int, A >();
  result = typedef_test5(arg1);
  *(Standard::Multimap< int,Space::AB,int >::mapped_type **)&jresult = new Standard::Multimap< int,Space::AB,int >::mapped_type((const Standard::Multimap< int,Space::AB,int >::mapped_type &)result); 
  return jresult;
}


SWIGEXPORT jlong JNICALL Java_template_1typemaps_1typedef_template_1typemaps_1typedefJNI_typedef_1test6(JNIEnv *jenv, jclass jcls, jlong jarg1) {
  jlong jresult = 0 ;
  SwigValueWrapper< Standard::Pair< Standard::Multimap< int,A >::iterator,Standard::Multimap< int,A >::iterator > > arg1 ;
  Standard::Multimap< int,Space::AB,int >::mapped_type result;
  
  (void)jenv;
  (void)jcls;
  arg1 = default_general< int, A >();
  result = typedef_test6(arg1);
  *(Standard::Multimap< int,Space::AB,int >::mapped_type **)&jresult = new Standard::Multimap< int,Space::AB,int >::mapped_type((const Standard::Multimap< int,Space::AB,int >::mapped_type &)result); 
  return jresult;
}


#ifdef __cplusplus
}
#endif

