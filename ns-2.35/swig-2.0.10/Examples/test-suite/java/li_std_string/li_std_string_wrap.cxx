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


#include <string>



std::string test_value(std::string x) {
   return x;
}

const std::string& test_const_reference(const std::string &x) {
   return x;
}

void test_pointer(std::string *x) {
}

std::string *test_pointer_out() {
   static std::string x = "x";
   return &x;
}

void test_const_pointer(const std::string *x) {
}

const std::string *test_const_pointer_out() {
   static std::string x = "x";
   return &x;
}

void test_reference(std::string &x) {
}

std::string& test_reference_out() {
   static std::string x = "test_reference_out message";
   return x;
}

std::string test_reference_input(std::string &input) {
  return input;
}

void test_reference_inout(std::string &inout) {
  inout += inout;
}

#if defined(_MSC_VER)
  #pragma warning(disable: 4290) // C++ exception specification ignored except to indicate a function is not __declspec(nothrow)
#endif

void test_throw() throw(std::string){
  static std::string x = "test_throw message";
  throw x;
}

void test_const_reference_throw() throw(const std::string &){
  static std::string x = "test_const_reference_throw message";
  throw x;
}

void test_pointer_throw() throw(std::string *) {
  throw new std::string("foo");
}

void test_const_pointer_throw() throw(const std::string *) {
  throw new std::string("foo");
}

#if defined(_MSC_VER)
  #pragma warning(default: 4290) // C++ exception specification ignored except to indicate a function is not __declspec(nothrow)
#endif



std::string GlobalString;
std::string GlobalString2 = "global string 2";
const std::string ConstGlobalString = "const global string";

struct Structure {
  std::string MemberString;
  std::string MemberString2;
  static std::string StaticMemberString;
  static std::string StaticMemberString2;

  const std::string ConstMemberString;
  static const std::string ConstStaticMemberString;

  Structure() : MemberString2("member string 2"), ConstMemberString("const member string") {}
};


  std::string Structure::StaticMemberString = "static member string";
  std::string Structure::StaticMemberString2 = "static member string 2";
  const std::string Structure::ConstStaticMemberString = "const static member string";


class Foo {
public:
   unsigned long long  test(unsigned long long l)
   {
       return l + 1;
   }
   std::string test(std::string l)
   {
       return l + "1";
   }

   unsigned long long  testl(unsigned long long l)
   {
       return l + 1;
   }

}; 


  std::string stdstring_empty() {
    return std::string();
  }

  char *c_empty() {
    return (char *)"";
  }

  char *c_null() {
    return 0;
  }

  const char *get_null(const char *a) {
    return a == 0 ? a : "non-null";
  }




#ifdef __cplusplus
extern "C" {
#endif

SWIGEXPORT jstring JNICALL Java_li_1std_1string_li_1std_1stringJNI_test_1value(JNIEnv *jenv, jclass jcls, jstring jarg1) {
  jstring jresult = 0 ;
  std::string arg1 ;
  std::string result;
  
  (void)jenv;
  (void)jcls;
  if(!jarg1) {
    SWIG_JavaThrowException(jenv, SWIG_JavaNullPointerException, "null string");
    return 0;
  } 
  const char *arg1_pstr = (const char *)jenv->GetStringUTFChars(jarg1, 0); 
  if (!arg1_pstr) return 0;
  (&arg1)->assign(arg1_pstr);
  jenv->ReleaseStringUTFChars(jarg1, arg1_pstr); 
  result = test_value(arg1);
  jresult = jenv->NewStringUTF((&result)->c_str()); 
  return jresult;
}


SWIGEXPORT jstring JNICALL Java_li_1std_1string_li_1std_1stringJNI_test_1const_1reference(JNIEnv *jenv, jclass jcls, jstring jarg1) {
  jstring jresult = 0 ;
  std::string *arg1 = 0 ;
  std::string *result = 0 ;
  
  (void)jenv;
  (void)jcls;
  if(!jarg1) {
    SWIG_JavaThrowException(jenv, SWIG_JavaNullPointerException, "null string");
    return 0;
  }
  const char *arg1_pstr = (const char *)jenv->GetStringUTFChars(jarg1, 0); 
  if (!arg1_pstr) return 0;
  std::string arg1_str(arg1_pstr);
  arg1 = &arg1_str;
  jenv->ReleaseStringUTFChars(jarg1, arg1_pstr); 
  result = (std::string *) &test_const_reference((std::string const &)*arg1);
  jresult = jenv->NewStringUTF(result->c_str()); 
  return jresult;
}


SWIGEXPORT void JNICALL Java_li_1std_1string_li_1std_1stringJNI_test_1pointer(JNIEnv *jenv, jclass jcls, jlong jarg1) {
  std::string *arg1 = (std::string *) 0 ;
  
  (void)jenv;
  (void)jcls;
  arg1 = *(std::string **)&jarg1; 
  test_pointer(arg1);
}


SWIGEXPORT jlong JNICALL Java_li_1std_1string_li_1std_1stringJNI_test_1pointer_1out(JNIEnv *jenv, jclass jcls) {
  jlong jresult = 0 ;
  std::string *result = 0 ;
  
  (void)jenv;
  (void)jcls;
  result = (std::string *)test_pointer_out();
  *(std::string **)&jresult = result; 
  return jresult;
}


SWIGEXPORT void JNICALL Java_li_1std_1string_li_1std_1stringJNI_test_1const_1pointer(JNIEnv *jenv, jclass jcls, jlong jarg1) {
  std::string *arg1 = (std::string *) 0 ;
  
  (void)jenv;
  (void)jcls;
  arg1 = *(std::string **)&jarg1; 
  test_const_pointer((std::string const *)arg1);
}


SWIGEXPORT jlong JNICALL Java_li_1std_1string_li_1std_1stringJNI_test_1const_1pointer_1out(JNIEnv *jenv, jclass jcls) {
  jlong jresult = 0 ;
  std::string *result = 0 ;
  
  (void)jenv;
  (void)jcls;
  result = (std::string *)test_const_pointer_out();
  *(std::string **)&jresult = result; 
  return jresult;
}


SWIGEXPORT void JNICALL Java_li_1std_1string_li_1std_1stringJNI_test_1reference(JNIEnv *jenv, jclass jcls, jlong jarg1) {
  std::string *arg1 = 0 ;
  
  (void)jenv;
  (void)jcls;
  arg1 = *(std::string **)&jarg1;
  if (!arg1) {
    SWIG_JavaThrowException(jenv, SWIG_JavaNullPointerException, "std::string & reference is null");
    return ;
  } 
  test_reference(*arg1);
}


SWIGEXPORT jlong JNICALL Java_li_1std_1string_li_1std_1stringJNI_test_1reference_1out(JNIEnv *jenv, jclass jcls) {
  jlong jresult = 0 ;
  std::string *result = 0 ;
  
  (void)jenv;
  (void)jcls;
  result = (std::string *) &test_reference_out();
  *(std::string **)&jresult = result; 
  return jresult;
}


SWIGEXPORT jstring JNICALL Java_li_1std_1string_li_1std_1stringJNI_test_1reference_1input(JNIEnv *jenv, jclass jcls, jlong jarg1) {
  jstring jresult = 0 ;
  std::string *arg1 = 0 ;
  std::string result;
  
  (void)jenv;
  (void)jcls;
  arg1 = *(std::string **)&jarg1;
  if (!arg1) {
    SWIG_JavaThrowException(jenv, SWIG_JavaNullPointerException, "std::string & reference is null");
    return 0;
  } 
  result = test_reference_input(*arg1);
  jresult = jenv->NewStringUTF((&result)->c_str()); 
  return jresult;
}


SWIGEXPORT void JNICALL Java_li_1std_1string_li_1std_1stringJNI_test_1reference_1inout(JNIEnv *jenv, jclass jcls, jlong jarg1) {
  std::string *arg1 = 0 ;
  
  (void)jenv;
  (void)jcls;
  arg1 = *(std::string **)&jarg1;
  if (!arg1) {
    SWIG_JavaThrowException(jenv, SWIG_JavaNullPointerException, "std::string & reference is null");
    return ;
  } 
  test_reference_inout(*arg1);
}


SWIGEXPORT void JNICALL Java_li_1std_1string_li_1std_1stringJNI_test_1throw(JNIEnv *jenv, jclass jcls) {
  (void)jenv;
  (void)jcls;
  try {
    test_throw();
  }
  catch(std::string &_e) {
    SWIG_JavaThrowException(jenv, SWIG_JavaRuntimeException, (&_e)->c_str());
    return ; 
  }
  
}


SWIGEXPORT void JNICALL Java_li_1std_1string_li_1std_1stringJNI_test_1const_1reference_1throw(JNIEnv *jenv, jclass jcls) {
  (void)jenv;
  (void)jcls;
  try {
    test_const_reference_throw();
  }
  catch(std::string const &_e) {
    SWIG_JavaThrowException(jenv, SWIG_JavaRuntimeException, (&_e)->c_str());
    return ; 
  }
  
}


SWIGEXPORT void JNICALL Java_li_1std_1string_li_1std_1stringJNI_test_1pointer_1throw(JNIEnv *jenv, jclass jcls) {
  (void)jenv;
  (void)jcls;
  try {
    test_pointer_throw();
  }
  catch(std::string *_e) {
    (void)_e;
    SWIG_JavaThrowException(jenv, SWIG_JavaRuntimeException, "C++ std::string * exception thrown");
    return ; 
  }
  
}


SWIGEXPORT void JNICALL Java_li_1std_1string_li_1std_1stringJNI_test_1const_1pointer_1throw(JNIEnv *jenv, jclass jcls) {
  (void)jenv;
  (void)jcls;
  try {
    test_const_pointer_throw();
  }
  catch(std::string const *_e) {
    (void)_e;
    SWIG_JavaThrowException(jenv, SWIG_JavaRuntimeException, "C++ std::string const * exception thrown");
    return ; 
  }
  
}


SWIGEXPORT void JNICALL Java_li_1std_1string_li_1std_1stringJNI_GlobalString_1set(JNIEnv *jenv, jclass jcls, jstring jarg1) {
  std::string *arg1 = 0 ;
  
  (void)jenv;
  (void)jcls;
  if(!jarg1) {
    SWIG_JavaThrowException(jenv, SWIG_JavaNullPointerException, "null string");
    return ;
  }
  const char *arg1_pstr = (const char *)jenv->GetStringUTFChars(jarg1, 0); 
  if (!arg1_pstr) return ;
  std::string arg1_str(arg1_pstr);
  arg1 = &arg1_str;
  jenv->ReleaseStringUTFChars(jarg1, arg1_pstr); 
  GlobalString = *arg1;
}


SWIGEXPORT jstring JNICALL Java_li_1std_1string_li_1std_1stringJNI_GlobalString_1get(JNIEnv *jenv, jclass jcls) {
  jstring jresult = 0 ;
  std::string *result = 0 ;
  
  (void)jenv;
  (void)jcls;
  result = (std::string *) &GlobalString;
  jresult = jenv->NewStringUTF(result->c_str()); 
  return jresult;
}


SWIGEXPORT void JNICALL Java_li_1std_1string_li_1std_1stringJNI_GlobalString2_1set(JNIEnv *jenv, jclass jcls, jstring jarg1) {
  std::string *arg1 = 0 ;
  
  (void)jenv;
  (void)jcls;
  if(!jarg1) {
    SWIG_JavaThrowException(jenv, SWIG_JavaNullPointerException, "null string");
    return ;
  }
  const char *arg1_pstr = (const char *)jenv->GetStringUTFChars(jarg1, 0); 
  if (!arg1_pstr) return ;
  std::string arg1_str(arg1_pstr);
  arg1 = &arg1_str;
  jenv->ReleaseStringUTFChars(jarg1, arg1_pstr); 
  GlobalString2 = *arg1;
}


SWIGEXPORT jstring JNICALL Java_li_1std_1string_li_1std_1stringJNI_GlobalString2_1get(JNIEnv *jenv, jclass jcls) {
  jstring jresult = 0 ;
  std::string *result = 0 ;
  
  (void)jenv;
  (void)jcls;
  result = (std::string *) &GlobalString2;
  jresult = jenv->NewStringUTF(result->c_str()); 
  return jresult;
}


SWIGEXPORT jstring JNICALL Java_li_1std_1string_li_1std_1stringJNI_ConstGlobalString_1get(JNIEnv *jenv, jclass jcls) {
  jstring jresult = 0 ;
  std::string *result = 0 ;
  
  (void)jenv;
  (void)jcls;
  result = (std::string *) &ConstGlobalString;
  jresult = jenv->NewStringUTF(result->c_str()); 
  return jresult;
}


SWIGEXPORT void JNICALL Java_li_1std_1string_li_1std_1stringJNI_Structure_1MemberString_1set(JNIEnv *jenv, jclass jcls, jlong jarg1, jobject jarg1_, jstring jarg2) {
  Structure *arg1 = (Structure *) 0 ;
  std::string *arg2 = 0 ;
  
  (void)jenv;
  (void)jcls;
  (void)jarg1_;
  arg1 = *(Structure **)&jarg1; 
  if(!jarg2) {
    SWIG_JavaThrowException(jenv, SWIG_JavaNullPointerException, "null string");
    return ;
  }
  const char *arg2_pstr = (const char *)jenv->GetStringUTFChars(jarg2, 0); 
  if (!arg2_pstr) return ;
  std::string arg2_str(arg2_pstr);
  arg2 = &arg2_str;
  jenv->ReleaseStringUTFChars(jarg2, arg2_pstr); 
  if (arg1) (arg1)->MemberString = *arg2;
}


SWIGEXPORT jstring JNICALL Java_li_1std_1string_li_1std_1stringJNI_Structure_1MemberString_1get(JNIEnv *jenv, jclass jcls, jlong jarg1, jobject jarg1_) {
  jstring jresult = 0 ;
  Structure *arg1 = (Structure *) 0 ;
  std::string *result = 0 ;
  
  (void)jenv;
  (void)jcls;
  (void)jarg1_;
  arg1 = *(Structure **)&jarg1; 
  result = (std::string *) & ((arg1)->MemberString);
  jresult = jenv->NewStringUTF(result->c_str()); 
  return jresult;
}


SWIGEXPORT void JNICALL Java_li_1std_1string_li_1std_1stringJNI_Structure_1MemberString2_1set(JNIEnv *jenv, jclass jcls, jlong jarg1, jobject jarg1_, jstring jarg2) {
  Structure *arg1 = (Structure *) 0 ;
  std::string *arg2 = 0 ;
  
  (void)jenv;
  (void)jcls;
  (void)jarg1_;
  arg1 = *(Structure **)&jarg1; 
  if(!jarg2) {
    SWIG_JavaThrowException(jenv, SWIG_JavaNullPointerException, "null string");
    return ;
  }
  const char *arg2_pstr = (const char *)jenv->GetStringUTFChars(jarg2, 0); 
  if (!arg2_pstr) return ;
  std::string arg2_str(arg2_pstr);
  arg2 = &arg2_str;
  jenv->ReleaseStringUTFChars(jarg2, arg2_pstr); 
  if (arg1) (arg1)->MemberString2 = *arg2;
}


SWIGEXPORT jstring JNICALL Java_li_1std_1string_li_1std_1stringJNI_Structure_1MemberString2_1get(JNIEnv *jenv, jclass jcls, jlong jarg1, jobject jarg1_) {
  jstring jresult = 0 ;
  Structure *arg1 = (Structure *) 0 ;
  std::string *result = 0 ;
  
  (void)jenv;
  (void)jcls;
  (void)jarg1_;
  arg1 = *(Structure **)&jarg1; 
  result = (std::string *) & ((arg1)->MemberString2);
  jresult = jenv->NewStringUTF(result->c_str()); 
  return jresult;
}


SWIGEXPORT void JNICALL Java_li_1std_1string_li_1std_1stringJNI_Structure_1StaticMemberString_1set(JNIEnv *jenv, jclass jcls, jstring jarg1) {
  std::string *arg1 = 0 ;
  
  (void)jenv;
  (void)jcls;
  if(!jarg1) {
    SWIG_JavaThrowException(jenv, SWIG_JavaNullPointerException, "null string");
    return ;
  }
  const char *arg1_pstr = (const char *)jenv->GetStringUTFChars(jarg1, 0); 
  if (!arg1_pstr) return ;
  std::string arg1_str(arg1_pstr);
  arg1 = &arg1_str;
  jenv->ReleaseStringUTFChars(jarg1, arg1_pstr); 
  Structure::StaticMemberString = *arg1;
}


SWIGEXPORT jstring JNICALL Java_li_1std_1string_li_1std_1stringJNI_Structure_1StaticMemberString_1get(JNIEnv *jenv, jclass jcls) {
  jstring jresult = 0 ;
  std::string *result = 0 ;
  
  (void)jenv;
  (void)jcls;
  result = (std::string *) &Structure::StaticMemberString;
  jresult = jenv->NewStringUTF(result->c_str()); 
  return jresult;
}


SWIGEXPORT void JNICALL Java_li_1std_1string_li_1std_1stringJNI_Structure_1StaticMemberString2_1set(JNIEnv *jenv, jclass jcls, jstring jarg1) {
  std::string *arg1 = 0 ;
  
  (void)jenv;
  (void)jcls;
  if(!jarg1) {
    SWIG_JavaThrowException(jenv, SWIG_JavaNullPointerException, "null string");
    return ;
  }
  const char *arg1_pstr = (const char *)jenv->GetStringUTFChars(jarg1, 0); 
  if (!arg1_pstr) return ;
  std::string arg1_str(arg1_pstr);
  arg1 = &arg1_str;
  jenv->ReleaseStringUTFChars(jarg1, arg1_pstr); 
  Structure::StaticMemberString2 = *arg1;
}


SWIGEXPORT jstring JNICALL Java_li_1std_1string_li_1std_1stringJNI_Structure_1StaticMemberString2_1get(JNIEnv *jenv, jclass jcls) {
  jstring jresult = 0 ;
  std::string *result = 0 ;
  
  (void)jenv;
  (void)jcls;
  result = (std::string *) &Structure::StaticMemberString2;
  jresult = jenv->NewStringUTF(result->c_str()); 
  return jresult;
}


SWIGEXPORT jstring JNICALL Java_li_1std_1string_li_1std_1stringJNI_Structure_1ConstMemberString_1get(JNIEnv *jenv, jclass jcls, jlong jarg1, jobject jarg1_) {
  jstring jresult = 0 ;
  Structure *arg1 = (Structure *) 0 ;
  std::string *result = 0 ;
  
  (void)jenv;
  (void)jcls;
  (void)jarg1_;
  arg1 = *(Structure **)&jarg1; 
  result = (std::string *) & ((arg1)->ConstMemberString);
  jresult = jenv->NewStringUTF(result->c_str()); 
  return jresult;
}


SWIGEXPORT jstring JNICALL Java_li_1std_1string_li_1std_1stringJNI_Structure_1ConstStaticMemberString_1get(JNIEnv *jenv, jclass jcls) {
  jstring jresult = 0 ;
  std::string *result = 0 ;
  
  (void)jenv;
  (void)jcls;
  result = (std::string *) &Structure::ConstStaticMemberString;
  jresult = jenv->NewStringUTF(result->c_str()); 
  return jresult;
}


SWIGEXPORT jlong JNICALL Java_li_1std_1string_li_1std_1stringJNI_new_1Structure(JNIEnv *jenv, jclass jcls) {
  jlong jresult = 0 ;
  Structure *result = 0 ;
  
  (void)jenv;
  (void)jcls;
  result = (Structure *)new Structure();
  *(Structure **)&jresult = result; 
  return jresult;
}


SWIGEXPORT void JNICALL Java_li_1std_1string_li_1std_1stringJNI_delete_1Structure(JNIEnv *jenv, jclass jcls, jlong jarg1) {
  Structure *arg1 = (Structure *) 0 ;
  
  (void)jenv;
  (void)jcls;
  arg1 = *(Structure **)&jarg1; 
  delete arg1;
}


SWIGEXPORT jobject JNICALL Java_li_1std_1string_li_1std_1stringJNI_Foo_1test_1_1SWIG_10(JNIEnv *jenv, jclass jcls, jlong jarg1, jobject jarg1_, jobject jarg2) {
  jobject jresult = 0 ;
  Foo *arg1 = (Foo *) 0 ;
  unsigned long long arg2 ;
  unsigned long long result;
  
  (void)jenv;
  (void)jcls;
  (void)jarg1_;
  arg1 = *(Foo **)&jarg1; 
  {
    jclass clazz;
    jmethodID mid;
    jbyteArray ba;
    jbyte* bae;
    jsize sz;
    int i;
    
    if (!jarg2) {
      SWIG_JavaThrowException(jenv, SWIG_JavaNullPointerException, "BigInteger null");
      return 0;
    }
    clazz = jenv->GetObjectClass(jarg2);
    mid = jenv->GetMethodID(clazz, "toByteArray", "()[B");
    ba = (jbyteArray)jenv->CallObjectMethod(jarg2, mid);
    bae = jenv->GetByteArrayElements(ba, 0);
    sz = jenv->GetArrayLength(ba);
    arg2 = 0;
    for(i=0; i<sz; i++) {
      arg2 = (arg2 << 8) | (unsigned long long)(unsigned char)bae[i];
    }
    jenv->ReleaseByteArrayElements(ba, bae, 0);
  }
  result = (unsigned long long)(arg1)->test(arg2);
  {
    jbyteArray ba = jenv->NewByteArray(9);
    jbyte* bae = jenv->GetByteArrayElements(ba, 0);
    jclass clazz = jenv->FindClass("java/math/BigInteger");
    jmethodID mid = jenv->GetMethodID(clazz, "<init>", "([B)V");
    jobject bigint;
    int i;
    
    bae[0] = 0;
    for(i=1; i<9; i++ ) {
      bae[i] = (jbyte)(result>>8*(8-i));
    }
    
    jenv->ReleaseByteArrayElements(ba, bae, 0);
    bigint = jenv->NewObject(clazz, mid, ba);
    jresult = bigint;
  }
  return jresult;
}


SWIGEXPORT jstring JNICALL Java_li_1std_1string_li_1std_1stringJNI_Foo_1test_1_1SWIG_11(JNIEnv *jenv, jclass jcls, jlong jarg1, jobject jarg1_, jstring jarg2) {
  jstring jresult = 0 ;
  Foo *arg1 = (Foo *) 0 ;
  std::string arg2 ;
  std::string result;
  
  (void)jenv;
  (void)jcls;
  (void)jarg1_;
  arg1 = *(Foo **)&jarg1; 
  if(!jarg2) {
    SWIG_JavaThrowException(jenv, SWIG_JavaNullPointerException, "null string");
    return 0;
  } 
  const char *arg2_pstr = (const char *)jenv->GetStringUTFChars(jarg2, 0); 
  if (!arg2_pstr) return 0;
  (&arg2)->assign(arg2_pstr);
  jenv->ReleaseStringUTFChars(jarg2, arg2_pstr); 
  result = (arg1)->test(arg2);
  jresult = jenv->NewStringUTF((&result)->c_str()); 
  return jresult;
}


SWIGEXPORT jobject JNICALL Java_li_1std_1string_li_1std_1stringJNI_Foo_1testl(JNIEnv *jenv, jclass jcls, jlong jarg1, jobject jarg1_, jobject jarg2) {
  jobject jresult = 0 ;
  Foo *arg1 = (Foo *) 0 ;
  unsigned long long arg2 ;
  unsigned long long result;
  
  (void)jenv;
  (void)jcls;
  (void)jarg1_;
  arg1 = *(Foo **)&jarg1; 
  {
    jclass clazz;
    jmethodID mid;
    jbyteArray ba;
    jbyte* bae;
    jsize sz;
    int i;
    
    if (!jarg2) {
      SWIG_JavaThrowException(jenv, SWIG_JavaNullPointerException, "BigInteger null");
      return 0;
    }
    clazz = jenv->GetObjectClass(jarg2);
    mid = jenv->GetMethodID(clazz, "toByteArray", "()[B");
    ba = (jbyteArray)jenv->CallObjectMethod(jarg2, mid);
    bae = jenv->GetByteArrayElements(ba, 0);
    sz = jenv->GetArrayLength(ba);
    arg2 = 0;
    for(i=0; i<sz; i++) {
      arg2 = (arg2 << 8) | (unsigned long long)(unsigned char)bae[i];
    }
    jenv->ReleaseByteArrayElements(ba, bae, 0);
  }
  result = (unsigned long long)(arg1)->testl(arg2);
  {
    jbyteArray ba = jenv->NewByteArray(9);
    jbyte* bae = jenv->GetByteArrayElements(ba, 0);
    jclass clazz = jenv->FindClass("java/math/BigInteger");
    jmethodID mid = jenv->GetMethodID(clazz, "<init>", "([B)V");
    jobject bigint;
    int i;
    
    bae[0] = 0;
    for(i=1; i<9; i++ ) {
      bae[i] = (jbyte)(result>>8*(8-i));
    }
    
    jenv->ReleaseByteArrayElements(ba, bae, 0);
    bigint = jenv->NewObject(clazz, mid, ba);
    jresult = bigint;
  }
  return jresult;
}


SWIGEXPORT jlong JNICALL Java_li_1std_1string_li_1std_1stringJNI_new_1Foo(JNIEnv *jenv, jclass jcls) {
  jlong jresult = 0 ;
  Foo *result = 0 ;
  
  (void)jenv;
  (void)jcls;
  result = (Foo *)new Foo();
  *(Foo **)&jresult = result; 
  return jresult;
}


SWIGEXPORT void JNICALL Java_li_1std_1string_li_1std_1stringJNI_delete_1Foo(JNIEnv *jenv, jclass jcls, jlong jarg1) {
  Foo *arg1 = (Foo *) 0 ;
  
  (void)jenv;
  (void)jcls;
  arg1 = *(Foo **)&jarg1; 
  delete arg1;
}


SWIGEXPORT jstring JNICALL Java_li_1std_1string_li_1std_1stringJNI_stdstring_1empty(JNIEnv *jenv, jclass jcls) {
  jstring jresult = 0 ;
  std::string result;
  
  (void)jenv;
  (void)jcls;
  result = stdstring_empty();
  jresult = jenv->NewStringUTF((&result)->c_str()); 
  return jresult;
}


SWIGEXPORT jstring JNICALL Java_li_1std_1string_li_1std_1stringJNI_c_1empty(JNIEnv *jenv, jclass jcls) {
  jstring jresult = 0 ;
  char *result = 0 ;
  
  (void)jenv;
  (void)jcls;
  result = (char *)c_empty();
  if (result) jresult = jenv->NewStringUTF((const char *)result);
  return jresult;
}


SWIGEXPORT jstring JNICALL Java_li_1std_1string_li_1std_1stringJNI_c_1null(JNIEnv *jenv, jclass jcls) {
  jstring jresult = 0 ;
  char *result = 0 ;
  
  (void)jenv;
  (void)jcls;
  result = (char *)c_null();
  if (result) jresult = jenv->NewStringUTF((const char *)result);
  return jresult;
}


SWIGEXPORT jstring JNICALL Java_li_1std_1string_li_1std_1stringJNI_get_1null(JNIEnv *jenv, jclass jcls, jstring jarg1) {
  jstring jresult = 0 ;
  char *arg1 = (char *) 0 ;
  char *result = 0 ;
  
  (void)jenv;
  (void)jcls;
  arg1 = 0;
  if (jarg1) {
    arg1 = (char *)jenv->GetStringUTFChars(jarg1, 0);
    if (!arg1) return 0;
  }
  result = (char *)get_null((char const *)arg1);
  if (result) jresult = jenv->NewStringUTF((const char *)result);
  if (arg1) jenv->ReleaseStringUTFChars(jarg1, (const char *)arg1);
  return jresult;
}


#ifdef __cplusplus
}
#endif

