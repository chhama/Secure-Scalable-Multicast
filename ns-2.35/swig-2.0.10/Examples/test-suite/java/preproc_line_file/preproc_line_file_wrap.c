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


const int thing27 = -1;
const int thing28 = -2;


struct SillyStruct {
  int num;
  /* static const int line_num = __LINE__; */
};


#define SILLY_CLASS struct SillyMacroClass { int num; };
SILLY_CLASS


#ifdef SWIG
%define BODY
  int num;
  static const int LINE_NUM = __LINE__;
%enddef
%define KLASS(NAME)
struct NAME {
  BODY
};
%enddef
#else
#define KLASS(NAME) \
struct NAME { \
  int num; \
};
#endif
KLASS(SillyMultipleMacroStruct)



#define INLINE_FILE __FILE__
#define INLINE_LINE __LINE__


KLASS(Slash)


#ifdef __cplusplus
extern "C" {
#endif

SWIGEXPORT jint JNICALL Java_preproc_1line_1file_preproc_1line_1fileJNI_MYLINE_1get(JNIEnv *jenv, jclass jcls) {
  jint jresult = 0 ;
  int result;
  
  (void)jenv;
  (void)jcls;
  result = (int)(4);
  jresult = (jint)result; 
  return jresult;
}


SWIGEXPORT jint JNICALL Java_preproc_1line_1file_preproc_1line_1fileJNI_MYLINE_1ADJUSTED_1get(JNIEnv *jenv, jclass jcls) {
  jint jresult = 0 ;
  int result;
  
  (void)jenv;
  (void)jcls;
  result = (int)(5+100);
  jresult = (jint)result; 
  return jresult;
}


SWIGEXPORT jstring JNICALL Java_preproc_1line_1file_preproc_1line_1fileJNI_MYFILE_1get(JNIEnv *jenv, jclass jcls) {
  jstring jresult = 0 ;
  char *result = 0 ;
  
  (void)jenv;
  (void)jcls;
  result = (char *)("../../../../Examples/test-suite/preproc_line_file.i");
  if (result) jresult = (*jenv)->NewStringUTF(jenv, (const char *)result);
  return jresult;
}


SWIGEXPORT jstring JNICALL Java_preproc_1line_1file_preproc_1line_1fileJNI_MYFILE_1ADJUSTED_1get(JNIEnv *jenv, jclass jcls) {
  jstring jresult = 0 ;
  char *result = 0 ;
  
  (void)jenv;
  (void)jcls;
  result = (char *)("../../../../Examples/test-suite/preproc_line_file.i.bak");
  if (result) jresult = (*jenv)->NewStringUTF(jenv, (const char *)result);
  return jresult;
}


SWIGEXPORT jstring JNICALL Java_preproc_1line_1file_preproc_1line_1fileJNI_MY_1STRINGNUM_1A_1get(JNIEnv *jenv, jclass jcls) {
  jstring jresult = 0 ;
  char *result = 0 ;
  
  (void)jenv;
  (void)jcls;
  result = (char *)("my15");
  if (result) jresult = (*jenv)->NewStringUTF(jenv, (const char *)result);
  return jresult;
}


SWIGEXPORT jstring JNICALL Java_preproc_1line_1file_preproc_1line_1fileJNI_MY_1STRINGNUM_1B_1get(JNIEnv *jenv, jclass jcls) {
  jstring jresult = 0 ;
  char *result = 0 ;
  
  (void)jenv;
  (void)jcls;
  result = (char *)("my16");
  if (result) jresult = (*jenv)->NewStringUTF(jenv, (const char *)result);
  return jresult;
}


SWIGEXPORT jint JNICALL Java_preproc_1line_1file_preproc_1line_1fileJNI_thing27_1get(JNIEnv *jenv, jclass jcls) {
  jint jresult = 0 ;
  int result;
  
  (void)jenv;
  (void)jcls;
  result = (int)(int)thing27;
  jresult = (jint)result; 
  return jresult;
}


SWIGEXPORT jint JNICALL Java_preproc_1line_1file_preproc_1line_1fileJNI_thing28_1get(JNIEnv *jenv, jclass jcls) {
  jint jresult = 0 ;
  int result;
  
  (void)jenv;
  (void)jcls;
  result = (int)(int)thing28;
  jresult = (jint)result; 
  return jresult;
}


SWIGEXPORT jint JNICALL Java_preproc_1line_1file_preproc_1line_1fileJNI_MYLINE2_1get(JNIEnv *jenv, jclass jcls) {
  jint jresult = 0 ;
  int result;
  
  (void)jenv;
  (void)jcls;
  result = (int)(30);
  jresult = (jint)result; 
  return jresult;
}


SWIGEXPORT void JNICALL Java_preproc_1line_1file_preproc_1line_1fileJNI_SillyStruct_1num_1set(JNIEnv *jenv, jclass jcls, jlong jarg1, jobject jarg1_, jint jarg2) {
  struct SillyStruct *arg1 = (struct SillyStruct *) 0 ;
  int arg2 ;
  
  (void)jenv;
  (void)jcls;
  (void)jarg1_;
  arg1 = *(struct SillyStruct **)&jarg1; 
  arg2 = (int)jarg2; 
  if (arg1) (arg1)->num = arg2;
}


SWIGEXPORT jint JNICALL Java_preproc_1line_1file_preproc_1line_1fileJNI_SillyStruct_1num_1get(JNIEnv *jenv, jclass jcls, jlong jarg1, jobject jarg1_) {
  jint jresult = 0 ;
  struct SillyStruct *arg1 = (struct SillyStruct *) 0 ;
  int result;
  
  (void)jenv;
  (void)jcls;
  (void)jarg1_;
  arg1 = *(struct SillyStruct **)&jarg1; 
  result = (int) ((arg1)->num);
  jresult = (jint)result; 
  return jresult;
}


SWIGEXPORT jlong JNICALL Java_preproc_1line_1file_preproc_1line_1fileJNI_new_1SillyStruct(JNIEnv *jenv, jclass jcls) {
  jlong jresult = 0 ;
  struct SillyStruct *result = 0 ;
  
  (void)jenv;
  (void)jcls;
  result = (struct SillyStruct *)calloc(1, sizeof(struct SillyStruct));
  *(struct SillyStruct **)&jresult = result; 
  return jresult;
}


SWIGEXPORT void JNICALL Java_preproc_1line_1file_preproc_1line_1fileJNI_delete_1SillyStruct(JNIEnv *jenv, jclass jcls, jlong jarg1) {
  struct SillyStruct *arg1 = (struct SillyStruct *) 0 ;
  
  (void)jenv;
  (void)jcls;
  arg1 = *(struct SillyStruct **)&jarg1; 
  free((char *) arg1);
}


SWIGEXPORT void JNICALL Java_preproc_1line_1file_preproc_1line_1fileJNI_SillyMacroClass_1num_1set(JNIEnv *jenv, jclass jcls, jlong jarg1, jobject jarg1_, jint jarg2) {
  struct SillyMacroClass *arg1 = (struct SillyMacroClass *) 0 ;
  int arg2 ;
  
  (void)jenv;
  (void)jcls;
  (void)jarg1_;
  arg1 = *(struct SillyMacroClass **)&jarg1; 
  arg2 = (int)jarg2; 
  if (arg1) (arg1)->num = arg2;
}


SWIGEXPORT jint JNICALL Java_preproc_1line_1file_preproc_1line_1fileJNI_SillyMacroClass_1num_1get(JNIEnv *jenv, jclass jcls, jlong jarg1, jobject jarg1_) {
  jint jresult = 0 ;
  struct SillyMacroClass *arg1 = (struct SillyMacroClass *) 0 ;
  int result;
  
  (void)jenv;
  (void)jcls;
  (void)jarg1_;
  arg1 = *(struct SillyMacroClass **)&jarg1; 
  result = (int) ((arg1)->num);
  jresult = (jint)result; 
  return jresult;
}


SWIGEXPORT jlong JNICALL Java_preproc_1line_1file_preproc_1line_1fileJNI_new_1SillyMacroClass(JNIEnv *jenv, jclass jcls) {
  jlong jresult = 0 ;
  struct SillyMacroClass *result = 0 ;
  
  (void)jenv;
  (void)jcls;
  result = (struct SillyMacroClass *)calloc(1, sizeof(struct SillyMacroClass));
  *(struct SillyMacroClass **)&jresult = result; 
  return jresult;
}


SWIGEXPORT void JNICALL Java_preproc_1line_1file_preproc_1line_1fileJNI_delete_1SillyMacroClass(JNIEnv *jenv, jclass jcls, jlong jarg1) {
  struct SillyMacroClass *arg1 = (struct SillyMacroClass *) 0 ;
  
  (void)jenv;
  (void)jcls;
  arg1 = *(struct SillyMacroClass **)&jarg1; 
  free((char *) arg1);
}


SWIGEXPORT void JNICALL Java_preproc_1line_1file_preproc_1line_1fileJNI_SillyMultipleMacroStruct_1num_1set(JNIEnv *jenv, jclass jcls, jlong jarg1, jobject jarg1_, jint jarg2) {
  struct SillyMultipleMacroStruct *arg1 = (struct SillyMultipleMacroStruct *) 0 ;
  int arg2 ;
  
  (void)jenv;
  (void)jcls;
  (void)jarg1_;
  arg1 = *(struct SillyMultipleMacroStruct **)&jarg1; 
  arg2 = (int)jarg2; 
  if (arg1) (arg1)->num = arg2;
}


SWIGEXPORT jint JNICALL Java_preproc_1line_1file_preproc_1line_1fileJNI_SillyMultipleMacroStruct_1num_1get(JNIEnv *jenv, jclass jcls, jlong jarg1, jobject jarg1_) {
  jint jresult = 0 ;
  struct SillyMultipleMacroStruct *arg1 = (struct SillyMultipleMacroStruct *) 0 ;
  int result;
  
  (void)jenv;
  (void)jcls;
  (void)jarg1_;
  arg1 = *(struct SillyMultipleMacroStruct **)&jarg1; 
  result = (int) ((arg1)->num);
  jresult = (jint)result; 
  return jresult;
}


SWIGEXPORT jlong JNICALL Java_preproc_1line_1file_preproc_1line_1fileJNI_new_1SillyMultipleMacroStruct(JNIEnv *jenv, jclass jcls) {
  jlong jresult = 0 ;
  struct SillyMultipleMacroStruct *result = 0 ;
  
  (void)jenv;
  (void)jcls;
  result = (struct SillyMultipleMacroStruct *)calloc(1, sizeof(struct SillyMultipleMacroStruct));
  *(struct SillyMultipleMacroStruct **)&jresult = result; 
  return jresult;
}


SWIGEXPORT void JNICALL Java_preproc_1line_1file_preproc_1line_1fileJNI_delete_1SillyMultipleMacroStruct(JNIEnv *jenv, jclass jcls, jlong jarg1) {
  struct SillyMultipleMacroStruct *arg1 = (struct SillyMultipleMacroStruct *) 0 ;
  
  (void)jenv;
  (void)jcls;
  arg1 = *(struct SillyMultipleMacroStruct **)&jarg1; 
  free((char *) arg1);
}


SWIGEXPORT void JNICALL Java_preproc_1line_1file_preproc_1line_1fileJNI_Slash_1num_1set(JNIEnv *jenv, jclass jcls, jlong jarg1, jobject jarg1_, jint jarg2) {
  struct Slash *arg1 = (struct Slash *) 0 ;
  int arg2 ;
  
  (void)jenv;
  (void)jcls;
  (void)jarg1_;
  arg1 = *(struct Slash **)&jarg1; 
  arg2 = (int)jarg2; 
  if (arg1) (arg1)->num = arg2;
}


SWIGEXPORT jint JNICALL Java_preproc_1line_1file_preproc_1line_1fileJNI_Slash_1num_1get(JNIEnv *jenv, jclass jcls, jlong jarg1, jobject jarg1_) {
  jint jresult = 0 ;
  struct Slash *arg1 = (struct Slash *) 0 ;
  int result;
  
  (void)jenv;
  (void)jcls;
  (void)jarg1_;
  arg1 = *(struct Slash **)&jarg1; 
  result = (int) ((arg1)->num);
  jresult = (jint)result; 
  return jresult;
}


SWIGEXPORT jlong JNICALL Java_preproc_1line_1file_preproc_1line_1fileJNI_new_1Slash(JNIEnv *jenv, jclass jcls) {
  jlong jresult = 0 ;
  struct Slash *result = 0 ;
  
  (void)jenv;
  (void)jcls;
  result = (struct Slash *)calloc(1, sizeof(struct Slash));
  *(struct Slash **)&jresult = result; 
  return jresult;
}


SWIGEXPORT void JNICALL Java_preproc_1line_1file_preproc_1line_1fileJNI_delete_1Slash(JNIEnv *jenv, jclass jcls, jlong jarg1) {
  struct Slash *arg1 = (struct Slash *) 0 ;
  
  (void)jenv;
  (void)jcls;
  arg1 = *(struct Slash **)&jarg1; 
  free((char *) arg1);
}


#ifdef __cplusplus
}
#endif

