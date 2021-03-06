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


#define OTHERLAND_MSG "Little message from the safe world."
#define CPLUSPLUS_MSG "A message from the deep dark world of C++, where anything is possible."
static char *global_str = NULL;
const int UINT_DIGITS = 10; // max unsigned int is 4294967295

bool check(const char *const str, unsigned int number) {
  static char expected[256];
  sprintf(expected, "%s%d", OTHERLAND_MSG, number);
  bool matches = (strcmp(str, expected) == 0);
  if (!matches) printf("Failed: [%s][%s]\n", str, expected);
  return matches;
}



// get functions
char *GetCharHeapString() {
  global_str = new char[sizeof(CPLUSPLUS_MSG)+1];
  strcpy(global_str, CPLUSPLUS_MSG);
  return global_str;
}

const char *GetConstCharProgramCodeString() {
  return CPLUSPLUS_MSG;
}

void DeleteCharHeapString() {
  delete[] global_str;
  global_str = NULL;
}

char *GetCharStaticString() {
  static char str[sizeof(CPLUSPLUS_MSG)+1];
  strcpy(str, CPLUSPLUS_MSG);
  return str;
}

char *GetCharStaticStringFixed() {
  static char str[] = CPLUSPLUS_MSG;
  return str;
}

const char *GetConstCharStaticStringFixed() {
  static const char str[] = CPLUSPLUS_MSG;
  return str;
}

// set functions
bool SetCharHeapString(char *str, unsigned int number) {
  delete[] global_str;
  global_str = new char[strlen(str)+UINT_DIGITS+1];
  strcpy(global_str, str);
  return check(global_str, number);
}

bool SetCharStaticString(char *str, unsigned int number) {
  static char static_str[] = CPLUSPLUS_MSG;
  strcpy(static_str, str);
  return check(static_str, number);
}

bool SetCharArrayStaticString(char str[], unsigned int number) {
  static char static_str[] = CPLUSPLUS_MSG;
  strcpy(static_str, str);
  return check(static_str, number);
}

bool SetConstCharHeapString(const char *str, unsigned int number) {
  delete[] global_str;
  global_str = new char[strlen(str)+UINT_DIGITS+1];
  strcpy(global_str, str);
  return check(global_str, number);
}

bool SetConstCharStaticString(const char *str, unsigned int number) {
  static char static_str[] = CPLUSPLUS_MSG;
  strcpy(static_str, str);
  return check(static_str, number);
}

bool SetConstCharArrayStaticString(const char str[], unsigned int number) {
  static char static_str[] = CPLUSPLUS_MSG;
  strcpy(static_str, str);
  return check(static_str, number);
}

bool SetCharConstStaticString(char *const str, unsigned int number) {
  static char static_str[] = CPLUSPLUS_MSG;
  strcpy(static_str, str);
  return check(static_str, number);
}

bool SetConstCharConstStaticString(const char *const str, unsigned int number) {
  static char static_str[] = CPLUSPLUS_MSG;
  strcpy(static_str, str);
  return check(static_str, number);
}

// get set function
char *CharPingPong(char *str) {
  return str;
}
char *CharArrayPingPong(char abcstr[]) {
  return abcstr;
}
char *CharArrayDimsPingPong(char abcstr[16]) {
  return abcstr;
}

// variables
char *global_char = NULL;
char global_char_array1[] = CPLUSPLUS_MSG;
char global_char_array2[sizeof(CPLUSPLUS_MSG)+1] = CPLUSPLUS_MSG;

const char *global_const_char = CPLUSPLUS_MSG;
const char global_const_char_array1[] = CPLUSPLUS_MSG;
const char global_const_char_array2[sizeof(CPLUSPLUS_MSG)+1] = CPLUSPLUS_MSG;



  char *GetNewCharString() {
    char *nstr = new char[sizeof(CPLUSPLUS_MSG)+1];
    strcpy(nstr, CPLUSPLUS_MSG);
    return nstr;
  }


  struct Formatpos;
  struct OBFormat;
  
  static int GetNextFormat(Formatpos& itr, const  char*& str,OBFormat*& pFormat) {
    return 0;
  }
  





// char *& tests
char *&GetCharPointerRef() {
  static char str[] = CPLUSPLUS_MSG;
  static char *ptr = str;
  return ptr;
}

bool SetCharPointerRef(char *&str, unsigned int number) {
  static char static_str[] = CPLUSPLUS_MSG;
  strcpy(static_str, str);
  return check(static_str, number);
}

const char *&GetConstCharPointerRef() {
  static const char str[] = CPLUSPLUS_MSG;
  static const char *ptr = str;
  return ptr;
}

bool SetConstCharPointerRef(const char *&str, unsigned int number) {
  static char static_str[] = CPLUSPLUS_MSG;
  strcpy(static_str, str);
  return check(static_str, number);
}



#ifdef __cplusplus
extern "C" {
#endif

SWIGEXPORT jstring JNICALL Java_char_1strings_char_1stringsJNI_GetCharHeapString(JNIEnv *jenv, jclass jcls) {
  jstring jresult = 0 ;
  char *result = 0 ;
  
  (void)jenv;
  (void)jcls;
  result = (char *)GetCharHeapString();
  if (result) jresult = jenv->NewStringUTF((const char *)result);
  return jresult;
}


SWIGEXPORT jstring JNICALL Java_char_1strings_char_1stringsJNI_GetConstCharProgramCodeString(JNIEnv *jenv, jclass jcls) {
  jstring jresult = 0 ;
  char *result = 0 ;
  
  (void)jenv;
  (void)jcls;
  result = (char *)GetConstCharProgramCodeString();
  if (result) jresult = jenv->NewStringUTF((const char *)result);
  return jresult;
}


SWIGEXPORT void JNICALL Java_char_1strings_char_1stringsJNI_DeleteCharHeapString(JNIEnv *jenv, jclass jcls) {
  (void)jenv;
  (void)jcls;
  DeleteCharHeapString();
}


SWIGEXPORT jstring JNICALL Java_char_1strings_char_1stringsJNI_GetCharStaticString(JNIEnv *jenv, jclass jcls) {
  jstring jresult = 0 ;
  char *result = 0 ;
  
  (void)jenv;
  (void)jcls;
  result = (char *)GetCharStaticString();
  if (result) jresult = jenv->NewStringUTF((const char *)result);
  return jresult;
}


SWIGEXPORT jstring JNICALL Java_char_1strings_char_1stringsJNI_GetCharStaticStringFixed(JNIEnv *jenv, jclass jcls) {
  jstring jresult = 0 ;
  char *result = 0 ;
  
  (void)jenv;
  (void)jcls;
  result = (char *)GetCharStaticStringFixed();
  if (result) jresult = jenv->NewStringUTF((const char *)result);
  return jresult;
}


SWIGEXPORT jstring JNICALL Java_char_1strings_char_1stringsJNI_GetConstCharStaticStringFixed(JNIEnv *jenv, jclass jcls) {
  jstring jresult = 0 ;
  char *result = 0 ;
  
  (void)jenv;
  (void)jcls;
  result = (char *)GetConstCharStaticStringFixed();
  if (result) jresult = jenv->NewStringUTF((const char *)result);
  return jresult;
}


SWIGEXPORT jboolean JNICALL Java_char_1strings_char_1stringsJNI_SetCharHeapString(JNIEnv *jenv, jclass jcls, jstring jarg1, jlong jarg2) {
  jboolean jresult = 0 ;
  char *arg1 = (char *) 0 ;
  unsigned int arg2 ;
  bool result;
  
  (void)jenv;
  (void)jcls;
  arg1 = 0;
  if (jarg1) {
    arg1 = (char *)jenv->GetStringUTFChars(jarg1, 0);
    if (!arg1) return 0;
  }
  arg2 = (unsigned int)jarg2; 
  result = (bool)SetCharHeapString(arg1,arg2);
  jresult = (jboolean)result; 
  if (arg1) jenv->ReleaseStringUTFChars(jarg1, (const char *)arg1);
  return jresult;
}


SWIGEXPORT jboolean JNICALL Java_char_1strings_char_1stringsJNI_SetCharStaticString(JNIEnv *jenv, jclass jcls, jstring jarg1, jlong jarg2) {
  jboolean jresult = 0 ;
  char *arg1 = (char *) 0 ;
  unsigned int arg2 ;
  bool result;
  
  (void)jenv;
  (void)jcls;
  arg1 = 0;
  if (jarg1) {
    arg1 = (char *)jenv->GetStringUTFChars(jarg1, 0);
    if (!arg1) return 0;
  }
  arg2 = (unsigned int)jarg2; 
  result = (bool)SetCharStaticString(arg1,arg2);
  jresult = (jboolean)result; 
  if (arg1) jenv->ReleaseStringUTFChars(jarg1, (const char *)arg1);
  return jresult;
}


SWIGEXPORT jboolean JNICALL Java_char_1strings_char_1stringsJNI_SetCharArrayStaticString(JNIEnv *jenv, jclass jcls, jstring jarg1, jlong jarg2) {
  jboolean jresult = 0 ;
  char *arg1 ;
  unsigned int arg2 ;
  bool result;
  
  (void)jenv;
  (void)jcls;
  arg1 = 0;
  if (jarg1) {
    arg1 = (char *)jenv->GetStringUTFChars(jarg1, 0);
    if (!arg1) return 0;
  }
  arg2 = (unsigned int)jarg2; 
  result = (bool)SetCharArrayStaticString(arg1,arg2);
  jresult = (jboolean)result; 
  
  if (arg1) jenv->ReleaseStringUTFChars(jarg1, (const char *)arg1);
  return jresult;
}


SWIGEXPORT jboolean JNICALL Java_char_1strings_char_1stringsJNI_SetConstCharHeapString(JNIEnv *jenv, jclass jcls, jstring jarg1, jlong jarg2) {
  jboolean jresult = 0 ;
  char *arg1 = (char *) 0 ;
  unsigned int arg2 ;
  bool result;
  
  (void)jenv;
  (void)jcls;
  arg1 = 0;
  if (jarg1) {
    arg1 = (char *)jenv->GetStringUTFChars(jarg1, 0);
    if (!arg1) return 0;
  }
  arg2 = (unsigned int)jarg2; 
  result = (bool)SetConstCharHeapString((char const *)arg1,arg2);
  jresult = (jboolean)result; 
  if (arg1) jenv->ReleaseStringUTFChars(jarg1, (const char *)arg1);
  return jresult;
}


SWIGEXPORT jboolean JNICALL Java_char_1strings_char_1stringsJNI_SetConstCharStaticString(JNIEnv *jenv, jclass jcls, jstring jarg1, jlong jarg2) {
  jboolean jresult = 0 ;
  char *arg1 = (char *) 0 ;
  unsigned int arg2 ;
  bool result;
  
  (void)jenv;
  (void)jcls;
  arg1 = 0;
  if (jarg1) {
    arg1 = (char *)jenv->GetStringUTFChars(jarg1, 0);
    if (!arg1) return 0;
  }
  arg2 = (unsigned int)jarg2; 
  result = (bool)SetConstCharStaticString((char const *)arg1,arg2);
  jresult = (jboolean)result; 
  if (arg1) jenv->ReleaseStringUTFChars(jarg1, (const char *)arg1);
  return jresult;
}


SWIGEXPORT jboolean JNICALL Java_char_1strings_char_1stringsJNI_SetConstCharArrayStaticString(JNIEnv *jenv, jclass jcls, jstring jarg1, jlong jarg2) {
  jboolean jresult = 0 ;
  char *arg1 ;
  unsigned int arg2 ;
  bool result;
  
  (void)jenv;
  (void)jcls;
  arg1 = 0;
  if (jarg1) {
    arg1 = (char *)jenv->GetStringUTFChars(jarg1, 0);
    if (!arg1) return 0;
  }
  arg2 = (unsigned int)jarg2; 
  result = (bool)SetConstCharArrayStaticString((char const (*))arg1,arg2);
  jresult = (jboolean)result; 
  
  if (arg1) jenv->ReleaseStringUTFChars(jarg1, (const char *)arg1);
  return jresult;
}


SWIGEXPORT jboolean JNICALL Java_char_1strings_char_1stringsJNI_SetCharConstStaticString(JNIEnv *jenv, jclass jcls, jstring jarg1, jlong jarg2) {
  jboolean jresult = 0 ;
  char *arg1 = (char *) (char *)0 ;
  unsigned int arg2 ;
  bool result;
  
  (void)jenv;
  (void)jcls;
  arg1 = 0;
  if (jarg1) {
    arg1 = (char *)jenv->GetStringUTFChars(jarg1, 0);
    if (!arg1) return 0;
  }
  arg2 = (unsigned int)jarg2; 
  result = (bool)SetCharConstStaticString(arg1,arg2);
  jresult = (jboolean)result; 
  if (arg1) jenv->ReleaseStringUTFChars(jarg1, (const char *)arg1);
  return jresult;
}


SWIGEXPORT jboolean JNICALL Java_char_1strings_char_1stringsJNI_SetConstCharConstStaticString(JNIEnv *jenv, jclass jcls, jstring jarg1, jlong jarg2) {
  jboolean jresult = 0 ;
  char *arg1 = (char *) (char *)0 ;
  unsigned int arg2 ;
  bool result;
  
  (void)jenv;
  (void)jcls;
  arg1 = 0;
  if (jarg1) {
    arg1 = (char *)jenv->GetStringUTFChars(jarg1, 0);
    if (!arg1) return 0;
  }
  arg2 = (unsigned int)jarg2; 
  result = (bool)SetConstCharConstStaticString((char const *)arg1,arg2);
  jresult = (jboolean)result; 
  if (arg1) jenv->ReleaseStringUTFChars(jarg1, (const char *)arg1);
  return jresult;
}


SWIGEXPORT jstring JNICALL Java_char_1strings_char_1stringsJNI_CharPingPong(JNIEnv *jenv, jclass jcls, jstring jarg1) {
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
  result = (char *)CharPingPong(arg1);
  if (result) jresult = jenv->NewStringUTF((const char *)result);
  if (arg1) jenv->ReleaseStringUTFChars(jarg1, (const char *)arg1);
  return jresult;
}


SWIGEXPORT jstring JNICALL Java_char_1strings_char_1stringsJNI_CharArrayPingPong(JNIEnv *jenv, jclass jcls, jstring jarg1) {
  jstring jresult = 0 ;
  char *arg1 ;
  char *result = 0 ;
  
  (void)jenv;
  (void)jcls;
  arg1 = 0;
  if (jarg1) {
    arg1 = (char *)jenv->GetStringUTFChars(jarg1, 0);
    if (!arg1) return 0;
  }
  result = (char *)CharArrayPingPong(arg1);
  if (result) jresult = jenv->NewStringUTF((const char *)result);
  
  if (arg1) jenv->ReleaseStringUTFChars(jarg1, (const char *)arg1);
  return jresult;
}


SWIGEXPORT jstring JNICALL Java_char_1strings_char_1stringsJNI_CharArrayDimsPingPong(JNIEnv *jenv, jclass jcls, jstring jarg1) {
  jstring jresult = 0 ;
  char *arg1 ;
  char *result = 0 ;
  
  (void)jenv;
  (void)jcls;
  arg1 = 0;
  if (jarg1) {
    arg1 = (char *)jenv->GetStringUTFChars(jarg1, 0);
    if (!arg1) return 0;
  }
  result = (char *)CharArrayDimsPingPong(arg1);
  if (result) jresult = jenv->NewStringUTF((const char *)result);
  
  if (arg1) jenv->ReleaseStringUTFChars(jarg1, (const char *)arg1);
  return jresult;
}


SWIGEXPORT void JNICALL Java_char_1strings_char_1stringsJNI_global_1char_1set(JNIEnv *jenv, jclass jcls, jstring jarg1) {
  char *arg1 = (char *) 0 ;
  
  (void)jenv;
  (void)jcls;
  arg1 = 0;
  if (jarg1) {
    arg1 = (char *)jenv->GetStringUTFChars(jarg1, 0);
    if (!arg1) return ;
  }
  {
    delete [] global_char;
    if (arg1) {
      global_char = (char *) (new char[strlen((const char *)arg1)+1]);
      strcpy((char *)global_char, (const char *)arg1);
    } else {
      global_char = 0;
    }
  }
  if (arg1) jenv->ReleaseStringUTFChars(jarg1, (const char *)arg1);
}


SWIGEXPORT jstring JNICALL Java_char_1strings_char_1stringsJNI_global_1char_1get(JNIEnv *jenv, jclass jcls) {
  jstring jresult = 0 ;
  char *result = 0 ;
  
  (void)jenv;
  (void)jcls;
  result = (char *)global_char;
  if (result) jresult = jenv->NewStringUTF((const char *)result);
  return jresult;
}


SWIGEXPORT void JNICALL Java_char_1strings_char_1stringsJNI_global_1char_1array1_1set(JNIEnv *jenv, jclass jcls, jstring jarg1) {
  char *arg1 ;
  
  (void)jenv;
  (void)jcls;
  arg1 = 0;
  if (jarg1) {
    arg1 = (char *)jenv->GetStringUTFChars(jarg1, 0);
    if (!arg1) return ;
  }
  {
    if (arg1) strcpy((char *)global_char_array1, (const char *)arg1);
    else global_char_array1[0] = 0;
  }
  
  if (arg1) jenv->ReleaseStringUTFChars(jarg1, (const char *)arg1);
}


SWIGEXPORT jstring JNICALL Java_char_1strings_char_1stringsJNI_global_1char_1array1_1get(JNIEnv *jenv, jclass jcls) {
  jstring jresult = 0 ;
  char *result = 0 ;
  
  (void)jenv;
  (void)jcls;
  result = (char *)(char *)global_char_array1;
  if (result) jresult = jenv->NewStringUTF((const char *)result);
  return jresult;
}


SWIGEXPORT void JNICALL Java_char_1strings_char_1stringsJNI_global_1char_1array2_1set(JNIEnv *jenv, jclass jcls, jstring jarg1) {
  char *arg1 ;
  
  (void)jenv;
  (void)jcls;
  arg1 = 0;
  if (jarg1) {
    arg1 = (char *)jenv->GetStringUTFChars(jarg1, 0);
    if (!arg1) return ;
  }
  {
    if(arg1) {
      strncpy((char*)global_char_array2, (const char *)arg1, sizeof(CPLUSPLUS_MSG)+1-1);
      global_char_array2[sizeof(CPLUSPLUS_MSG)+1-1] = 0;
    } else {
      global_char_array2[0] = 0;
    }
  }
  
  if (arg1) jenv->ReleaseStringUTFChars(jarg1, (const char *)arg1);
}


SWIGEXPORT jstring JNICALL Java_char_1strings_char_1stringsJNI_global_1char_1array2_1get(JNIEnv *jenv, jclass jcls) {
  jstring jresult = 0 ;
  char *result = 0 ;
  
  (void)jenv;
  (void)jcls;
  result = (char *)(char *)global_char_array2;
  if (result) jresult = jenv->NewStringUTF((const char *)result);
  return jresult;
}


SWIGEXPORT jstring JNICALL Java_char_1strings_char_1stringsJNI_global_1const_1char_1get(JNIEnv *jenv, jclass jcls) {
  jstring jresult = 0 ;
  char *result = 0 ;
  
  (void)jenv;
  (void)jcls;
  result = (char *)global_const_char;
  if (result) jresult = jenv->NewStringUTF((const char *)result);
  return jresult;
}


SWIGEXPORT jstring JNICALL Java_char_1strings_char_1stringsJNI_global_1const_1char_1array1_1get(JNIEnv *jenv, jclass jcls) {
  jstring jresult = 0 ;
  char *result = 0 ;
  
  (void)jenv;
  (void)jcls;
  result = (char *)(char *)global_const_char_array1;
  if (result) jresult = jenv->NewStringUTF((const char *)result);
  return jresult;
}


SWIGEXPORT jstring JNICALL Java_char_1strings_char_1stringsJNI_global_1const_1char_1array2_1get(JNIEnv *jenv, jclass jcls) {
  jstring jresult = 0 ;
  char *result = 0 ;
  
  (void)jenv;
  (void)jcls;
  result = (char *)(char *)global_const_char_array2;
  if (result) jresult = jenv->NewStringUTF((const char *)result);
  return jresult;
}


SWIGEXPORT jstring JNICALL Java_char_1strings_char_1stringsJNI_GetNewCharString(JNIEnv *jenv, jclass jcls) {
  jstring jresult = 0 ;
  char *result = 0 ;
  
  (void)jenv;
  (void)jcls;
  result = (char *)GetNewCharString();
  if (result) jresult = jenv->NewStringUTF((const char *)result);
  {
    /* hello */ delete[] result; 
  }
  return jresult;
}


SWIGEXPORT jint JNICALL Java_char_1strings_char_1stringsJNI_GetNextFormat(JNIEnv *jenv, jclass jcls, jlong jarg1, jstring jarg2, jlong jarg3) {
  jint jresult = 0 ;
  Formatpos *arg1 = 0 ;
  char **arg2 = 0 ;
  OBFormat **arg3 = 0 ;
  char *temp2 = 0 ;
  int result;
  
  (void)jenv;
  (void)jcls;
  arg1 = *(Formatpos **)&jarg1;
  if (!arg1) {
    SWIG_JavaThrowException(jenv, SWIG_JavaNullPointerException, "Formatpos & reference is null");
    return 0;
  } 
  arg2 = 0;
  if (jarg2) {
    temp2 = (char *)jenv->GetStringUTFChars(jarg2, 0);
    if (!temp2) return 0;
  }
  arg2 = &temp2;
  arg3 = *(OBFormat ***)&jarg3;
  if (!arg3) {
    SWIG_JavaThrowException(jenv, SWIG_JavaNullPointerException, "OBFormat *& reference is null");
    return 0;
  } 
  result = (int)GetNextFormat(*arg1,(char const *&)*arg2,*arg3);
  jresult = (jint)result; 
  if (arg2 && *arg2) jenv->ReleaseStringUTFChars(jarg2, (const char *)*arg2);
  return jresult;
}


SWIGEXPORT jstring JNICALL Java_char_1strings_char_1stringsJNI_GetCharPointerRef(JNIEnv *jenv, jclass jcls) {
  jstring jresult = 0 ;
  char **result = 0 ;
  
  (void)jenv;
  (void)jcls;
  result = (char **) &GetCharPointerRef();
  if (*result) jresult = jenv->NewStringUTF((const char *)*result);
  return jresult;
}


SWIGEXPORT jboolean JNICALL Java_char_1strings_char_1stringsJNI_SetCharPointerRef(JNIEnv *jenv, jclass jcls, jstring jarg1, jlong jarg2) {
  jboolean jresult = 0 ;
  char **arg1 = 0 ;
  unsigned int arg2 ;
  char *temp1 = 0 ;
  bool result;
  
  (void)jenv;
  (void)jcls;
  arg1 = 0;
  if (jarg1) {
    temp1 = (char *)jenv->GetStringUTFChars(jarg1, 0);
    if (!temp1) return 0;
  }
  arg1 = &temp1;
  arg2 = (unsigned int)jarg2; 
  result = (bool)SetCharPointerRef(*arg1,arg2);
  jresult = (jboolean)result; 
  if (arg1 && *arg1) jenv->ReleaseStringUTFChars(jarg1, (const char *)*arg1);
  return jresult;
}


SWIGEXPORT jstring JNICALL Java_char_1strings_char_1stringsJNI_GetConstCharPointerRef(JNIEnv *jenv, jclass jcls) {
  jstring jresult = 0 ;
  char **result = 0 ;
  
  (void)jenv;
  (void)jcls;
  result = (char **) &GetConstCharPointerRef();
  if (*result) jresult = jenv->NewStringUTF((const char *)*result);
  return jresult;
}


SWIGEXPORT jboolean JNICALL Java_char_1strings_char_1stringsJNI_SetConstCharPointerRef(JNIEnv *jenv, jclass jcls, jstring jarg1, jlong jarg2) {
  jboolean jresult = 0 ;
  char **arg1 = 0 ;
  unsigned int arg2 ;
  char *temp1 = 0 ;
  bool result;
  
  (void)jenv;
  (void)jcls;
  arg1 = 0;
  if (jarg1) {
    temp1 = (char *)jenv->GetStringUTFChars(jarg1, 0);
    if (!temp1) return 0;
  }
  arg1 = &temp1;
  arg2 = (unsigned int)jarg2; 
  result = (bool)SetConstCharPointerRef((char const *&)*arg1,arg2);
  jresult = (jboolean)result; 
  if (arg1 && *arg1) jenv->ReleaseStringUTFChars(jarg1, (const char *)*arg1);
  return jresult;
}


#ifdef __cplusplus
}
#endif

