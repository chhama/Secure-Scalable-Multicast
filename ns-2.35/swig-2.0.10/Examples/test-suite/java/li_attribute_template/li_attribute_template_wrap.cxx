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


#include <stdexcept>


#include <stdio.h>


#include <string>


  class Foo {
  public:
        Foo( int _value ) { value = _value; }
        int value;
  };

  template< class T1, class T2>
  struct pair{
     pair( T1 t1, T2 t2 ):
        first(t1), second(t2) {;}

     T1 first;
     T2 second;
  };

  template< class T1, class T2>
  struct C
  {
    C(int a, int b, int c) :
        _a(a), _b(b), _c(c), _d(a), _e(b),
        _f(a,b), _g(b,c)
    {

/*
        _f.first = _a;
        _f.second = _b;

        _g.first = _b;
        _g.second = _c;
*/

    }

    int get_value() const
    {
      return _a;
    }

    void set_value(int aa)
    {
      _a = aa;
    }

    /* only one ref method */
    int& get_ref()
    {
      return _b;
    }

    Foo get_class_value() const { return _d; }
    void set_class_value( Foo foo) { _d = foo; }

    const Foo& get_class_ref() const { return _e; }
    void set_class_ref( const Foo& foo ) { _e = foo; }

    pair<T1,T2> get_template_value() const { return _f; }
    void set_template_value( const pair<T1,T2> f ) { _f = f; }

    const pair<T1,T2>& get_template_ref() const { return _g; }
    void set_template_ref( const pair<T1,T2>& g ) {  _g = g; }

    std::string get_string() { return str; }
    void set_string(std::string other) { str = other; }

  private:
    int _a;
    int _b;
    int _c;
    Foo _d;
    Foo _e;
    pair<T1,T2> _f;
    pair<T1,T2> _g;

    std::string str;
  };



#define C_Sl_int_Sc_int_Sg__a_get(self_) self_->get_value()
#define C_Sl_int_Sc_int_Sg__a_set(self_, val_) self_->set_value(val_)
  

#define C_Sl_int_Sc_int_Sg__b_get(self_) self_->get_ref()
#define C_Sl_int_Sc_int_Sg__b_set(self_, val_) self_->get_ref() = val_
  

#define C_Sl_int_Sc_int_Sg__str_get(self_) *new std::string(self_->get_string())
  

#define C_Sl_int_Sc_int_Sg__str_set(self_, val_) self_->set_string(val_)
    

#define C_Sl_int_Sc_int_Sg__d_get(self_) new Foo(self_->get_class_value())
  

#define C_Sl_int_Sc_int_Sg__d_set(self_, val_) self_->set_class_value(*val_)
    

#define C_Sl_int_Sc_int_Sg__e_get(self_) &self_->get_class_ref()
#define C_Sl_int_Sc_int_Sg__e_set(self_, val_) self_->set_class_ref(*val_)
  

#define C_Sl_int_Sc_int_Sg__f_get(self_) new pair<int,int>(self_->get_template_value())
  

#define C_Sl_int_Sc_int_Sg__f_set(self_, val_) self_->set_template_value(*val_)
    

#define C_Sl_int_Sc_int_Sg__g_get(self_) &self_->get_template_ref()
#define C_Sl_int_Sc_int_Sg__g_set(self_, val_) self_->set_template_ref(*val_)
  

#ifdef __cplusplus
extern "C" {
#endif

SWIGEXPORT jlong JNICALL Java_li_1attribute_1template_li_1attribute_1templateJNI_new_1Foo(JNIEnv *jenv, jclass jcls, jint jarg1) {
  jlong jresult = 0 ;
  int arg1 ;
  Foo *result = 0 ;
  
  (void)jenv;
  (void)jcls;
  arg1 = (int)jarg1; 
  result = (Foo *)new Foo(arg1);
  *(Foo **)&jresult = result; 
  return jresult;
}


SWIGEXPORT void JNICALL Java_li_1attribute_1template_li_1attribute_1templateJNI_Foo_1value_1set(JNIEnv *jenv, jclass jcls, jlong jarg1, jobject jarg1_, jint jarg2) {
  Foo *arg1 = (Foo *) 0 ;
  int arg2 ;
  
  (void)jenv;
  (void)jcls;
  (void)jarg1_;
  arg1 = *(Foo **)&jarg1; 
  arg2 = (int)jarg2; 
  if (arg1) (arg1)->value = arg2;
}


SWIGEXPORT jint JNICALL Java_li_1attribute_1template_li_1attribute_1templateJNI_Foo_1value_1get(JNIEnv *jenv, jclass jcls, jlong jarg1, jobject jarg1_) {
  jint jresult = 0 ;
  Foo *arg1 = (Foo *) 0 ;
  int result;
  
  (void)jenv;
  (void)jcls;
  (void)jarg1_;
  arg1 = *(Foo **)&jarg1; 
  result = (int) ((arg1)->value);
  jresult = (jint)result; 
  return jresult;
}


SWIGEXPORT void JNICALL Java_li_1attribute_1template_li_1attribute_1templateJNI_delete_1Foo(JNIEnv *jenv, jclass jcls, jlong jarg1) {
  Foo *arg1 = (Foo *) 0 ;
  
  (void)jenv;
  (void)jcls;
  arg1 = *(Foo **)&jarg1; 
  delete arg1;
}


SWIGEXPORT jlong JNICALL Java_li_1attribute_1template_li_1attribute_1templateJNI_new_1pair_1intint(JNIEnv *jenv, jclass jcls, jint jarg1, jint jarg2) {
  jlong jresult = 0 ;
  int arg1 ;
  int arg2 ;
  pair< int,int > *result = 0 ;
  
  (void)jenv;
  (void)jcls;
  arg1 = (int)jarg1; 
  arg2 = (int)jarg2; 
  result = (pair< int,int > *)new pair< int,int >(arg1,arg2);
  *(pair< int,int > **)&jresult = result; 
  return jresult;
}


SWIGEXPORT void JNICALL Java_li_1attribute_1template_li_1attribute_1templateJNI_pair_1intint_1first_1set(JNIEnv *jenv, jclass jcls, jlong jarg1, jobject jarg1_, jint jarg2) {
  pair< int,int > *arg1 = (pair< int,int > *) 0 ;
  int arg2 ;
  
  (void)jenv;
  (void)jcls;
  (void)jarg1_;
  arg1 = *(pair< int,int > **)&jarg1; 
  arg2 = (int)jarg2; 
  if (arg1) (arg1)->first = arg2;
}


SWIGEXPORT jint JNICALL Java_li_1attribute_1template_li_1attribute_1templateJNI_pair_1intint_1first_1get(JNIEnv *jenv, jclass jcls, jlong jarg1, jobject jarg1_) {
  jint jresult = 0 ;
  pair< int,int > *arg1 = (pair< int,int > *) 0 ;
  int result;
  
  (void)jenv;
  (void)jcls;
  (void)jarg1_;
  arg1 = *(pair< int,int > **)&jarg1; 
  result = (int) ((arg1)->first);
  jresult = (jint)result; 
  return jresult;
}


SWIGEXPORT void JNICALL Java_li_1attribute_1template_li_1attribute_1templateJNI_pair_1intint_1second_1set(JNIEnv *jenv, jclass jcls, jlong jarg1, jobject jarg1_, jint jarg2) {
  pair< int,int > *arg1 = (pair< int,int > *) 0 ;
  int arg2 ;
  
  (void)jenv;
  (void)jcls;
  (void)jarg1_;
  arg1 = *(pair< int,int > **)&jarg1; 
  arg2 = (int)jarg2; 
  if (arg1) (arg1)->second = arg2;
}


SWIGEXPORT jint JNICALL Java_li_1attribute_1template_li_1attribute_1templateJNI_pair_1intint_1second_1get(JNIEnv *jenv, jclass jcls, jlong jarg1, jobject jarg1_) {
  jint jresult = 0 ;
  pair< int,int > *arg1 = (pair< int,int > *) 0 ;
  int result;
  
  (void)jenv;
  (void)jcls;
  (void)jarg1_;
  arg1 = *(pair< int,int > **)&jarg1; 
  result = (int) ((arg1)->second);
  jresult = (jint)result; 
  return jresult;
}


SWIGEXPORT void JNICALL Java_li_1attribute_1template_li_1attribute_1templateJNI_delete_1pair_1intint(JNIEnv *jenv, jclass jcls, jlong jarg1) {
  pair< int,int > *arg1 = (pair< int,int > *) 0 ;
  
  (void)jenv;
  (void)jcls;
  arg1 = *(pair< int,int > **)&jarg1; 
  delete arg1;
}


SWIGEXPORT jlong JNICALL Java_li_1attribute_1template_li_1attribute_1templateJNI_new_1Cintint(JNIEnv *jenv, jclass jcls, jint jarg1, jint jarg2, jint jarg3) {
  jlong jresult = 0 ;
  int arg1 ;
  int arg2 ;
  int arg3 ;
  C< int,int > *result = 0 ;
  
  (void)jenv;
  (void)jcls;
  arg1 = (int)jarg1; 
  arg2 = (int)jarg2; 
  arg3 = (int)jarg3; 
  result = (C< int,int > *)new C< int,int >(arg1,arg2,arg3);
  *(C< int,int > **)&jresult = result; 
  return jresult;
}


SWIGEXPORT void JNICALL Java_li_1attribute_1template_li_1attribute_1templateJNI_Cintint_1a_1set(JNIEnv *jenv, jclass jcls, jlong jarg1, jobject jarg1_, jint jarg2) {
  C< int,int > *arg1 = (C< int,int > *) 0 ;
  int arg2 ;
  
  (void)jenv;
  (void)jcls;
  (void)jarg1_;
  arg1 = *(C< int,int > **)&jarg1; 
  arg2 = (int)jarg2; 
  C_Sl_int_Sc_int_Sg__a_set(arg1,arg2);
}


SWIGEXPORT jint JNICALL Java_li_1attribute_1template_li_1attribute_1templateJNI_Cintint_1a_1get(JNIEnv *jenv, jclass jcls, jlong jarg1, jobject jarg1_) {
  jint jresult = 0 ;
  C< int,int > *arg1 = (C< int,int > *) 0 ;
  int result;
  
  (void)jenv;
  (void)jcls;
  (void)jarg1_;
  arg1 = *(C< int,int > **)&jarg1; 
  result = (int)C_Sl_int_Sc_int_Sg__a_get(arg1);
  jresult = (jint)result; 
  return jresult;
}


SWIGEXPORT void JNICALL Java_li_1attribute_1template_li_1attribute_1templateJNI_Cintint_1b_1set(JNIEnv *jenv, jclass jcls, jlong jarg1, jobject jarg1_, jint jarg2) {
  C< int,int > *arg1 = (C< int,int > *) 0 ;
  int arg2 ;
  
  (void)jenv;
  (void)jcls;
  (void)jarg1_;
  arg1 = *(C< int,int > **)&jarg1; 
  arg2 = (int)jarg2; 
  C_Sl_int_Sc_int_Sg__b_set(arg1,arg2);
}


SWIGEXPORT jint JNICALL Java_li_1attribute_1template_li_1attribute_1templateJNI_Cintint_1b_1get(JNIEnv *jenv, jclass jcls, jlong jarg1, jobject jarg1_) {
  jint jresult = 0 ;
  C< int,int > *arg1 = (C< int,int > *) 0 ;
  int result;
  
  (void)jenv;
  (void)jcls;
  (void)jarg1_;
  arg1 = *(C< int,int > **)&jarg1; 
  result = (int)C_Sl_int_Sc_int_Sg__b_get(arg1);
  jresult = (jint)result; 
  return jresult;
}


SWIGEXPORT void JNICALL Java_li_1attribute_1template_li_1attribute_1templateJNI_Cintint_1str_1set(JNIEnv *jenv, jclass jcls, jlong jarg1, jobject jarg1_, jstring jarg2) {
  C< int,int > *arg1 = (C< int,int > *) 0 ;
  std::string *arg2 = 0 ;
  
  (void)jenv;
  (void)jcls;
  (void)jarg1_;
  arg1 = *(C< int,int > **)&jarg1; 
  if(!jarg2) {
    SWIG_JavaThrowException(jenv, SWIG_JavaNullPointerException, "null string");
    return ;
  }
  const char *arg2_pstr = (const char *)jenv->GetStringUTFChars(jarg2, 0); 
  if (!arg2_pstr) return ;
  std::string arg2_str(arg2_pstr);
  arg2 = &arg2_str;
  jenv->ReleaseStringUTFChars(jarg2, arg2_pstr); 
  C_Sl_int_Sc_int_Sg__str_set(arg1,(std::string const &)*arg2);
}


SWIGEXPORT jstring JNICALL Java_li_1attribute_1template_li_1attribute_1templateJNI_Cintint_1str_1get(JNIEnv *jenv, jclass jcls, jlong jarg1, jobject jarg1_) {
  jstring jresult = 0 ;
  C< int,int > *arg1 = (C< int,int > *) 0 ;
  std::string *result = 0 ;
  
  (void)jenv;
  (void)jcls;
  (void)jarg1_;
  arg1 = *(C< int,int > **)&jarg1; 
  result = (std::string *) &C_Sl_int_Sc_int_Sg__str_get(arg1);
  jresult = jenv->NewStringUTF(result->c_str()); 
  delete result;// my newfree override
  return jresult;
}


SWIGEXPORT void JNICALL Java_li_1attribute_1template_li_1attribute_1templateJNI_Cintint_1d_1set(JNIEnv *jenv, jclass jcls, jlong jarg1, jobject jarg1_, jlong jarg2, jobject jarg2_) {
  C< int,int > *arg1 = (C< int,int > *) 0 ;
  Foo *arg2 = (Foo *) 0 ;
  
  (void)jenv;
  (void)jcls;
  (void)jarg1_;
  (void)jarg2_;
  arg1 = *(C< int,int > **)&jarg1; 
  arg2 = *(Foo **)&jarg2; 
  C_Sl_int_Sc_int_Sg__d_set(arg1,arg2);
}


SWIGEXPORT jlong JNICALL Java_li_1attribute_1template_li_1attribute_1templateJNI_Cintint_1d_1get(JNIEnv *jenv, jclass jcls, jlong jarg1, jobject jarg1_) {
  jlong jresult = 0 ;
  C< int,int > *arg1 = (C< int,int > *) 0 ;
  Foo *result = 0 ;
  
  (void)jenv;
  (void)jcls;
  (void)jarg1_;
  arg1 = *(C< int,int > **)&jarg1; 
  result = (Foo *)C_Sl_int_Sc_int_Sg__d_get(arg1);
  *(Foo **)&jresult = result; 
  return jresult;
}


SWIGEXPORT void JNICALL Java_li_1attribute_1template_li_1attribute_1templateJNI_Cintint_1e_1set(JNIEnv *jenv, jclass jcls, jlong jarg1, jobject jarg1_, jlong jarg2, jobject jarg2_) {
  C< int,int > *arg1 = (C< int,int > *) 0 ;
  Foo *arg2 = (Foo *) 0 ;
  
  (void)jenv;
  (void)jcls;
  (void)jarg1_;
  (void)jarg2_;
  arg1 = *(C< int,int > **)&jarg1; 
  arg2 = *(Foo **)&jarg2; 
  C_Sl_int_Sc_int_Sg__e_set(arg1,arg2);
}


SWIGEXPORT jlong JNICALL Java_li_1attribute_1template_li_1attribute_1templateJNI_Cintint_1e_1get(JNIEnv *jenv, jclass jcls, jlong jarg1, jobject jarg1_) {
  jlong jresult = 0 ;
  C< int,int > *arg1 = (C< int,int > *) 0 ;
  Foo *result = 0 ;
  
  (void)jenv;
  (void)jcls;
  (void)jarg1_;
  arg1 = *(C< int,int > **)&jarg1; 
  result = (Foo *)C_Sl_int_Sc_int_Sg__e_get(arg1);
  *(Foo **)&jresult = result; 
  return jresult;
}


SWIGEXPORT void JNICALL Java_li_1attribute_1template_li_1attribute_1templateJNI_Cintint_1f_1set(JNIEnv *jenv, jclass jcls, jlong jarg1, jobject jarg1_, jlong jarg2, jobject jarg2_) {
  C< int,int > *arg1 = (C< int,int > *) 0 ;
  pair< int,int > *arg2 = (pair< int,int > *) 0 ;
  
  (void)jenv;
  (void)jcls;
  (void)jarg1_;
  (void)jarg2_;
  arg1 = *(C< int,int > **)&jarg1; 
  arg2 = *(pair< int,int > **)&jarg2; 
  C_Sl_int_Sc_int_Sg__f_set(arg1,arg2);
}


SWIGEXPORT jlong JNICALL Java_li_1attribute_1template_li_1attribute_1templateJNI_Cintint_1f_1get(JNIEnv *jenv, jclass jcls, jlong jarg1, jobject jarg1_) {
  jlong jresult = 0 ;
  C< int,int > *arg1 = (C< int,int > *) 0 ;
  pair< int,int > *result = 0 ;
  
  (void)jenv;
  (void)jcls;
  (void)jarg1_;
  arg1 = *(C< int,int > **)&jarg1; 
  result = (pair< int,int > *)C_Sl_int_Sc_int_Sg__f_get(arg1);
  *(pair< int,int > **)&jresult = result; 
  return jresult;
}


SWIGEXPORT void JNICALL Java_li_1attribute_1template_li_1attribute_1templateJNI_Cintint_1g_1set(JNIEnv *jenv, jclass jcls, jlong jarg1, jobject jarg1_, jlong jarg2, jobject jarg2_) {
  C< int,int > *arg1 = (C< int,int > *) 0 ;
  pair< int,int > *arg2 = (pair< int,int > *) 0 ;
  
  (void)jenv;
  (void)jcls;
  (void)jarg1_;
  (void)jarg2_;
  arg1 = *(C< int,int > **)&jarg1; 
  arg2 = *(pair< int,int > **)&jarg2; 
  C_Sl_int_Sc_int_Sg__g_set(arg1,arg2);
}


SWIGEXPORT jlong JNICALL Java_li_1attribute_1template_li_1attribute_1templateJNI_Cintint_1g_1get(JNIEnv *jenv, jclass jcls, jlong jarg1, jobject jarg1_) {
  jlong jresult = 0 ;
  C< int,int > *arg1 = (C< int,int > *) 0 ;
  pair< int,int > *result = 0 ;
  
  (void)jenv;
  (void)jcls;
  (void)jarg1_;
  arg1 = *(C< int,int > **)&jarg1; 
  result = (pair< int,int > *)C_Sl_int_Sc_int_Sg__g_get(arg1);
  *(pair< int,int > **)&jresult = result; 
  return jresult;
}


SWIGEXPORT void JNICALL Java_li_1attribute_1template_li_1attribute_1templateJNI_delete_1Cintint(JNIEnv *jenv, jclass jcls, jlong jarg1) {
  C< int,int > *arg1 = (C< int,int > *) 0 ;
  
  (void)jenv;
  (void)jcls;
  arg1 = *(C< int,int > **)&jarg1; 
  delete arg1;
}


#ifdef __cplusplus
}
#endif

