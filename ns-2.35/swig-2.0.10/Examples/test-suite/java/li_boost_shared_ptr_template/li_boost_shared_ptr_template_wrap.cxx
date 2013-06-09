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


#include <boost/shared_ptr.hpp>

#ifdef SWIGR
  // remove naming conflict with R symbol
#define INTEGER MYINTEGER
#endif

  typedef int INTEGER;

  template <class T> 
    class Base {
  public:
    virtual T bar() {return 1;}
  };

  template <class T> 
    class Derived : public Base<T> {
  public:
    virtual T bar() {return 2;}
  };
  
  INTEGER bar_getter(Base<INTEGER>& foo) {
    return foo.bar();
  }



struct SWIG_null_deleter {
  void operator() (void const *) const {
  }
};
#define SWIG_NO_NULL_DELETER_0 , SWIG_null_deleter()
#define SWIG_NO_NULL_DELETER_1
#define SWIG_NO_NULL_DELETER_SWIG_POINTER_NEW
#define SWIG_NO_NULL_DELETER_SWIG_POINTER_OWN


namespace Space {
typedef int INT_TYPEDEF;
template <class X, class T = int> 
class BaseDefault {
  public:
  virtual T bar2() {return 3;}
};

template <class X, class T = int> 
class DerivedDefault : public BaseDefault<X, T> {
  public:
  virtual T bar2() {return 4;}
};
template <class X> 
class DerivedDefault2 : public BaseDefault<X> {
  public:
  virtual int bar2() {return 4;}
};

int bar2_getter(BaseDefault<short>& foo) {
  return foo.bar2();
}
}


#ifdef __cplusplus
extern "C" {
#endif

SWIGEXPORT jint JNICALL Java_li_1boost_1shared_1ptr_1template_li_1boost_1shared_1ptr_1templateJNI_bar_1getter(JNIEnv *jenv, jclass jcls, jlong jarg1, jobject jarg1_) {
  jint jresult = 0 ;
  Base< INTEGER > *arg1 = 0 ;
  INTEGER result;
  
  (void)jenv;
  (void)jcls;
  (void)jarg1_;
  
  arg1 = (Base< INTEGER > *)((*(boost::shared_ptr<  Base<INTEGER> > **)&jarg1) ? (*(boost::shared_ptr<  Base<INTEGER> > **)&jarg1)->get() : 0);
  if (!arg1) {
    SWIG_JavaThrowException(jenv, SWIG_JavaNullPointerException, "Base< INTEGER > & reference is null");
    return 0;
  } 
  result = (INTEGER)bar_getter(*arg1);
  jresult = (jint)result; 
  return jresult;
}


SWIGEXPORT jint JNICALL Java_li_1boost_1shared_1ptr_1template_li_1boost_1shared_1ptr_1templateJNI_BaseINTEGER_1bar(JNIEnv *jenv, jclass jcls, jlong jarg1, jobject jarg1_) {
  jint jresult = 0 ;
  Base< INTEGER > *arg1 = (Base< INTEGER > *) 0 ;
  boost::shared_ptr< Base< INTEGER > > *smartarg1 = 0 ;
  int result;
  
  (void)jenv;
  (void)jcls;
  (void)jarg1_;
  
  smartarg1 = *(boost::shared_ptr<  Base<INTEGER> > **)&jarg1;
  arg1 = (Base<INTEGER> *)(smartarg1 ? smartarg1->get() : 0); 
  result = (int)(arg1)->bar();
  jresult = (jint)result; 
  return jresult;
}


SWIGEXPORT jlong JNICALL Java_li_1boost_1shared_1ptr_1template_li_1boost_1shared_1ptr_1templateJNI_new_1BaseINTEGER(JNIEnv *jenv, jclass jcls) {
  jlong jresult = 0 ;
  Base< INTEGER > *result = 0 ;
  
  (void)jenv;
  (void)jcls;
  result = (Base< INTEGER > *)new Base< INTEGER >();
  
  *(boost::shared_ptr<  Base<INTEGER> > **)&jresult = result ? new boost::shared_ptr<  Base<INTEGER> >(result SWIG_NO_NULL_DELETER_1) : 0;
  
  return jresult;
}


SWIGEXPORT void JNICALL Java_li_1boost_1shared_1ptr_1template_li_1boost_1shared_1ptr_1templateJNI_delete_1BaseINTEGER(JNIEnv *jenv, jclass jcls, jlong jarg1) {
  Base< INTEGER > *arg1 = (Base< INTEGER > *) 0 ;
  boost::shared_ptr< Base< INTEGER > > *smartarg1 = 0 ;
  
  (void)jenv;
  (void)jcls;
  
  smartarg1 = *(boost::shared_ptr<  Base<INTEGER> > **)&jarg1;
  arg1 = (Base<INTEGER> *)(smartarg1 ? smartarg1->get() : 0); 
  (void)arg1; delete smartarg1;
}


SWIGEXPORT jint JNICALL Java_li_1boost_1shared_1ptr_1template_li_1boost_1shared_1ptr_1templateJNI_DerivedINTEGER_1bar(JNIEnv *jenv, jclass jcls, jlong jarg1, jobject jarg1_) {
  jint jresult = 0 ;
  Derived< INTEGER > *arg1 = (Derived< INTEGER > *) 0 ;
  boost::shared_ptr< Derived< INTEGER > > *smartarg1 = 0 ;
  int result;
  
  (void)jenv;
  (void)jcls;
  (void)jarg1_;
  
  smartarg1 = *(boost::shared_ptr<  Derived<INTEGER> > **)&jarg1;
  arg1 = (Derived<INTEGER> *)(smartarg1 ? smartarg1->get() : 0); 
  result = (int)(arg1)->bar();
  jresult = (jint)result; 
  return jresult;
}


SWIGEXPORT jlong JNICALL Java_li_1boost_1shared_1ptr_1template_li_1boost_1shared_1ptr_1templateJNI_new_1DerivedINTEGER(JNIEnv *jenv, jclass jcls) {
  jlong jresult = 0 ;
  Derived< INTEGER > *result = 0 ;
  
  (void)jenv;
  (void)jcls;
  result = (Derived< INTEGER > *)new Derived< INTEGER >();
  
  *(boost::shared_ptr<  Derived<INTEGER> > **)&jresult = result ? new boost::shared_ptr<  Derived<INTEGER> >(result SWIG_NO_NULL_DELETER_1) : 0;
  
  return jresult;
}


SWIGEXPORT void JNICALL Java_li_1boost_1shared_1ptr_1template_li_1boost_1shared_1ptr_1templateJNI_delete_1DerivedINTEGER(JNIEnv *jenv, jclass jcls, jlong jarg1) {
  Derived< INTEGER > *arg1 = (Derived< INTEGER > *) 0 ;
  boost::shared_ptr< Derived< INTEGER > > *smartarg1 = 0 ;
  
  (void)jenv;
  (void)jcls;
  
  smartarg1 = *(boost::shared_ptr<  Derived<INTEGER> > **)&jarg1;
  arg1 = (Derived<INTEGER> *)(smartarg1 ? smartarg1->get() : 0); 
  (void)arg1; delete smartarg1;
}


SWIGEXPORT jint JNICALL Java_li_1boost_1shared_1ptr_1template_li_1boost_1shared_1ptr_1templateJNI_bar2_1getter(JNIEnv *jenv, jclass jcls, jlong jarg1, jobject jarg1_) {
  jint jresult = 0 ;
  Space::BaseDefault< short,int > *arg1 = 0 ;
  int result;
  
  (void)jenv;
  (void)jcls;
  (void)jarg1_;
  
  arg1 = (Space::BaseDefault< short,int > *)((*(boost::shared_ptr<  Space::BaseDefault<short> > **)&jarg1) ? (*(boost::shared_ptr<  Space::BaseDefault<short> > **)&jarg1)->get() : 0);
  if (!arg1) {
    SWIG_JavaThrowException(jenv, SWIG_JavaNullPointerException, "Space::BaseDefault< short,int > & reference is null");
    return 0;
  } 
  result = (int)Space::bar2_getter(*arg1);
  jresult = (jint)result; 
  return jresult;
}


SWIGEXPORT jint JNICALL Java_li_1boost_1shared_1ptr_1template_li_1boost_1shared_1ptr_1templateJNI_BaseDefaultInt_1bar2(JNIEnv *jenv, jclass jcls, jlong jarg1, jobject jarg1_) {
  jint jresult = 0 ;
  Space::BaseDefault< short > *arg1 = (Space::BaseDefault< short > *) 0 ;
  boost::shared_ptr< Space::BaseDefault< short > > *smartarg1 = 0 ;
  int result;
  
  (void)jenv;
  (void)jcls;
  (void)jarg1_;
  
  smartarg1 = *(boost::shared_ptr<  Space::BaseDefault<short> > **)&jarg1;
  arg1 = (Space::BaseDefault<short> *)(smartarg1 ? smartarg1->get() : 0); 
  result = (int)(arg1)->bar2();
  jresult = (jint)result; 
  return jresult;
}


SWIGEXPORT jlong JNICALL Java_li_1boost_1shared_1ptr_1template_li_1boost_1shared_1ptr_1templateJNI_new_1BaseDefaultInt(JNIEnv *jenv, jclass jcls) {
  jlong jresult = 0 ;
  Space::BaseDefault< short > *result = 0 ;
  
  (void)jenv;
  (void)jcls;
  result = (Space::BaseDefault< short > *)new Space::BaseDefault< short >();
  
  *(boost::shared_ptr<  Space::BaseDefault<short> > **)&jresult = result ? new boost::shared_ptr<  Space::BaseDefault<short> >(result SWIG_NO_NULL_DELETER_1) : 0;
  
  return jresult;
}


SWIGEXPORT void JNICALL Java_li_1boost_1shared_1ptr_1template_li_1boost_1shared_1ptr_1templateJNI_delete_1BaseDefaultInt(JNIEnv *jenv, jclass jcls, jlong jarg1) {
  Space::BaseDefault< short > *arg1 = (Space::BaseDefault< short > *) 0 ;
  boost::shared_ptr< Space::BaseDefault< short > > *smartarg1 = 0 ;
  
  (void)jenv;
  (void)jcls;
  
  smartarg1 = *(boost::shared_ptr<  Space::BaseDefault<short> > **)&jarg1;
  arg1 = (Space::BaseDefault<short> *)(smartarg1 ? smartarg1->get() : 0); 
  (void)arg1; delete smartarg1;
}


SWIGEXPORT jint JNICALL Java_li_1boost_1shared_1ptr_1template_li_1boost_1shared_1ptr_1templateJNI_DerivedDefaultInt_1bar2(JNIEnv *jenv, jclass jcls, jlong jarg1, jobject jarg1_) {
  jint jresult = 0 ;
  Space::DerivedDefault< short > *arg1 = (Space::DerivedDefault< short > *) 0 ;
  boost::shared_ptr< Space::DerivedDefault< short > > *smartarg1 = 0 ;
  int result;
  
  (void)jenv;
  (void)jcls;
  (void)jarg1_;
  
  smartarg1 = *(boost::shared_ptr<  Space::DerivedDefault<short> > **)&jarg1;
  arg1 = (Space::DerivedDefault<short> *)(smartarg1 ? smartarg1->get() : 0); 
  result = (int)(arg1)->bar2();
  jresult = (jint)result; 
  return jresult;
}


SWIGEXPORT jlong JNICALL Java_li_1boost_1shared_1ptr_1template_li_1boost_1shared_1ptr_1templateJNI_new_1DerivedDefaultInt(JNIEnv *jenv, jclass jcls) {
  jlong jresult = 0 ;
  Space::DerivedDefault< short > *result = 0 ;
  
  (void)jenv;
  (void)jcls;
  result = (Space::DerivedDefault< short > *)new Space::DerivedDefault< short >();
  
  *(boost::shared_ptr<  Space::DerivedDefault<short> > **)&jresult = result ? new boost::shared_ptr<  Space::DerivedDefault<short> >(result SWIG_NO_NULL_DELETER_1) : 0;
  
  return jresult;
}


SWIGEXPORT void JNICALL Java_li_1boost_1shared_1ptr_1template_li_1boost_1shared_1ptr_1templateJNI_delete_1DerivedDefaultInt(JNIEnv *jenv, jclass jcls, jlong jarg1) {
  Space::DerivedDefault< short > *arg1 = (Space::DerivedDefault< short > *) 0 ;
  boost::shared_ptr< Space::DerivedDefault< short > > *smartarg1 = 0 ;
  
  (void)jenv;
  (void)jcls;
  
  smartarg1 = *(boost::shared_ptr<  Space::DerivedDefault<short> > **)&jarg1;
  arg1 = (Space::DerivedDefault<short> *)(smartarg1 ? smartarg1->get() : 0); 
  (void)arg1; delete smartarg1;
}


SWIGEXPORT jint JNICALL Java_li_1boost_1shared_1ptr_1template_li_1boost_1shared_1ptr_1templateJNI_DerivedDefaultInt2_1bar2(JNIEnv *jenv, jclass jcls, jlong jarg1, jobject jarg1_) {
  jint jresult = 0 ;
  Space::DerivedDefault2< short > *arg1 = (Space::DerivedDefault2< short > *) 0 ;
  boost::shared_ptr< Space::DerivedDefault2< short > > *smartarg1 = 0 ;
  int result;
  
  (void)jenv;
  (void)jcls;
  (void)jarg1_;
  
  smartarg1 = *(boost::shared_ptr<  Space::DerivedDefault2<short> > **)&jarg1;
  arg1 = (Space::DerivedDefault2<short> *)(smartarg1 ? smartarg1->get() : 0); 
  result = (int)(arg1)->bar2();
  jresult = (jint)result; 
  return jresult;
}


SWIGEXPORT jlong JNICALL Java_li_1boost_1shared_1ptr_1template_li_1boost_1shared_1ptr_1templateJNI_new_1DerivedDefaultInt2(JNIEnv *jenv, jclass jcls) {
  jlong jresult = 0 ;
  Space::DerivedDefault2< short > *result = 0 ;
  
  (void)jenv;
  (void)jcls;
  result = (Space::DerivedDefault2< short > *)new Space::DerivedDefault2< short >();
  
  *(boost::shared_ptr<  Space::DerivedDefault2<short> > **)&jresult = result ? new boost::shared_ptr<  Space::DerivedDefault2<short> >(result SWIG_NO_NULL_DELETER_1) : 0;
  
  return jresult;
}


SWIGEXPORT void JNICALL Java_li_1boost_1shared_1ptr_1template_li_1boost_1shared_1ptr_1templateJNI_delete_1DerivedDefaultInt2(JNIEnv *jenv, jclass jcls, jlong jarg1) {
  Space::DerivedDefault2< short > *arg1 = (Space::DerivedDefault2< short > *) 0 ;
  boost::shared_ptr< Space::DerivedDefault2< short > > *smartarg1 = 0 ;
  
  (void)jenv;
  (void)jcls;
  
  smartarg1 = *(boost::shared_ptr<  Space::DerivedDefault2<short> > **)&jarg1;
  arg1 = (Space::DerivedDefault2<short> *)(smartarg1 ? smartarg1->get() : 0); 
  (void)arg1; delete smartarg1;
}


SWIGEXPORT jlong JNICALL Java_li_1boost_1shared_1ptr_1template_li_1boost_1shared_1ptr_1templateJNI_DerivedINTEGER_1SWIGSmartPtrUpcast(JNIEnv *jenv, jclass jcls, jlong jarg1) {
    jlong baseptr = 0;
    boost::shared_ptr< Derived< INTEGER > > *argp1;
    (void)jenv;
    (void)jcls;
    argp1 = *(boost::shared_ptr< Derived< INTEGER > > **)&jarg1;
    *(boost::shared_ptr< Derived< INTEGER > > **)&baseptr = argp1 ? new boost::shared_ptr< Derived< INTEGER > >(*argp1) : 0;
    return baseptr;
}

SWIGEXPORT jlong JNICALL Java_li_1boost_1shared_1ptr_1template_li_1boost_1shared_1ptr_1templateJNI_DerivedDefaultInt_1SWIGSmartPtrUpcast(JNIEnv *jenv, jclass jcls, jlong jarg1) {
    jlong baseptr = 0;
    boost::shared_ptr< Space::DerivedDefault< short > > *argp1;
    (void)jenv;
    (void)jcls;
    argp1 = *(boost::shared_ptr< Space::DerivedDefault< short > > **)&jarg1;
    *(boost::shared_ptr< Space::DerivedDefault< short > > **)&baseptr = argp1 ? new boost::shared_ptr< Space::DerivedDefault< short > >(*argp1) : 0;
    return baseptr;
}

SWIGEXPORT jlong JNICALL Java_li_1boost_1shared_1ptr_1template_li_1boost_1shared_1ptr_1templateJNI_DerivedDefaultInt2_1SWIGSmartPtrUpcast(JNIEnv *jenv, jclass jcls, jlong jarg1) {
    jlong baseptr = 0;
    boost::shared_ptr< Space::DerivedDefault2< short > > *argp1;
    (void)jenv;
    (void)jcls;
    argp1 = *(boost::shared_ptr< Space::DerivedDefault2< short > > **)&jarg1;
    *(boost::shared_ptr< Space::DerivedDefault2< short > > **)&baseptr = argp1 ? new boost::shared_ptr< Space::DerivedDefault2< short > >(*argp1) : 0;
    return baseptr;
}

#ifdef __cplusplus
}
#endif
