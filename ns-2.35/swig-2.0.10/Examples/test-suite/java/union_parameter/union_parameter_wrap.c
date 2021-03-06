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



typedef unsigned char Uint8;

typedef struct SDL_ActiveEvent {
        Uint8 type;     /* SDL_ACTIVEEVENT */
        Uint8 gain;     /* Whether given states were gained or lost (1/0) */
        Uint8 state;    /* A mask of the focus states */
} SDL_ActiveEvent;

/* Keyboard event structure */
typedef struct SDL_KeyboardEvent {
        Uint8 type;     /* SDL_KEYDOWN or SDL_KEYUP */
        int which;    /* The keyboard device index */
        int state;    /* SDL_PRESSED or SDL_RELEASED */
} SDL_KeyboardEvent;

typedef union {
        Uint8 type;
        SDL_ActiveEvent active;
        SDL_KeyboardEvent key;
} SDL_Event;

int SDL_PollEvent (SDL_Event *ev) {
    static int toggle = 0;
    if (toggle == 0) {
        ev->type = 1;
        ev->active.gain = 20;
        ev->active.state = 30;
    } else {
        ev->type = 2;
        ev->key.which = 2000;
        ev->key.state = 3000;
    }
    toggle = 1 - toggle;
    return 1;
}



#ifdef __cplusplus
extern "C" {
#endif

SWIGEXPORT void JNICALL Java_union_1parameter_union_1parameterJNI_SDL_1ActiveEvent_1type_1set(JNIEnv *jenv, jclass jcls, jlong jarg1, jobject jarg1_, jshort jarg2) {
  struct SDL_ActiveEvent *arg1 = (struct SDL_ActiveEvent *) 0 ;
  Uint8 arg2 ;
  
  (void)jenv;
  (void)jcls;
  (void)jarg1_;
  arg1 = *(struct SDL_ActiveEvent **)&jarg1; 
  arg2 = (Uint8)jarg2; 
  if (arg1) (arg1)->type = arg2;
}


SWIGEXPORT jshort JNICALL Java_union_1parameter_union_1parameterJNI_SDL_1ActiveEvent_1type_1get(JNIEnv *jenv, jclass jcls, jlong jarg1, jobject jarg1_) {
  jshort jresult = 0 ;
  struct SDL_ActiveEvent *arg1 = (struct SDL_ActiveEvent *) 0 ;
  Uint8 result;
  
  (void)jenv;
  (void)jcls;
  (void)jarg1_;
  arg1 = *(struct SDL_ActiveEvent **)&jarg1; 
  result = (Uint8) ((arg1)->type);
  jresult = (jshort)result; 
  return jresult;
}


SWIGEXPORT void JNICALL Java_union_1parameter_union_1parameterJNI_SDL_1ActiveEvent_1gain_1set(JNIEnv *jenv, jclass jcls, jlong jarg1, jobject jarg1_, jshort jarg2) {
  struct SDL_ActiveEvent *arg1 = (struct SDL_ActiveEvent *) 0 ;
  Uint8 arg2 ;
  
  (void)jenv;
  (void)jcls;
  (void)jarg1_;
  arg1 = *(struct SDL_ActiveEvent **)&jarg1; 
  arg2 = (Uint8)jarg2; 
  if (arg1) (arg1)->gain = arg2;
}


SWIGEXPORT jshort JNICALL Java_union_1parameter_union_1parameterJNI_SDL_1ActiveEvent_1gain_1get(JNIEnv *jenv, jclass jcls, jlong jarg1, jobject jarg1_) {
  jshort jresult = 0 ;
  struct SDL_ActiveEvent *arg1 = (struct SDL_ActiveEvent *) 0 ;
  Uint8 result;
  
  (void)jenv;
  (void)jcls;
  (void)jarg1_;
  arg1 = *(struct SDL_ActiveEvent **)&jarg1; 
  result = (Uint8) ((arg1)->gain);
  jresult = (jshort)result; 
  return jresult;
}


SWIGEXPORT void JNICALL Java_union_1parameter_union_1parameterJNI_SDL_1ActiveEvent_1state_1set(JNIEnv *jenv, jclass jcls, jlong jarg1, jobject jarg1_, jshort jarg2) {
  struct SDL_ActiveEvent *arg1 = (struct SDL_ActiveEvent *) 0 ;
  Uint8 arg2 ;
  
  (void)jenv;
  (void)jcls;
  (void)jarg1_;
  arg1 = *(struct SDL_ActiveEvent **)&jarg1; 
  arg2 = (Uint8)jarg2; 
  if (arg1) (arg1)->state = arg2;
}


SWIGEXPORT jshort JNICALL Java_union_1parameter_union_1parameterJNI_SDL_1ActiveEvent_1state_1get(JNIEnv *jenv, jclass jcls, jlong jarg1, jobject jarg1_) {
  jshort jresult = 0 ;
  struct SDL_ActiveEvent *arg1 = (struct SDL_ActiveEvent *) 0 ;
  Uint8 result;
  
  (void)jenv;
  (void)jcls;
  (void)jarg1_;
  arg1 = *(struct SDL_ActiveEvent **)&jarg1; 
  result = (Uint8) ((arg1)->state);
  jresult = (jshort)result; 
  return jresult;
}


SWIGEXPORT jlong JNICALL Java_union_1parameter_union_1parameterJNI_new_1SDL_1ActiveEvent(JNIEnv *jenv, jclass jcls) {
  jlong jresult = 0 ;
  struct SDL_ActiveEvent *result = 0 ;
  
  (void)jenv;
  (void)jcls;
  result = (struct SDL_ActiveEvent *)calloc(1, sizeof(struct SDL_ActiveEvent));
  *(struct SDL_ActiveEvent **)&jresult = result; 
  return jresult;
}


SWIGEXPORT void JNICALL Java_union_1parameter_union_1parameterJNI_delete_1SDL_1ActiveEvent(JNIEnv *jenv, jclass jcls, jlong jarg1) {
  struct SDL_ActiveEvent *arg1 = (struct SDL_ActiveEvent *) 0 ;
  
  (void)jenv;
  (void)jcls;
  arg1 = *(struct SDL_ActiveEvent **)&jarg1; 
  free((char *) arg1);
}


SWIGEXPORT void JNICALL Java_union_1parameter_union_1parameterJNI_SDL_1KeyboardEvent_1type_1set(JNIEnv *jenv, jclass jcls, jlong jarg1, jobject jarg1_, jshort jarg2) {
  struct SDL_KeyboardEvent *arg1 = (struct SDL_KeyboardEvent *) 0 ;
  Uint8 arg2 ;
  
  (void)jenv;
  (void)jcls;
  (void)jarg1_;
  arg1 = *(struct SDL_KeyboardEvent **)&jarg1; 
  arg2 = (Uint8)jarg2; 
  if (arg1) (arg1)->type = arg2;
}


SWIGEXPORT jshort JNICALL Java_union_1parameter_union_1parameterJNI_SDL_1KeyboardEvent_1type_1get(JNIEnv *jenv, jclass jcls, jlong jarg1, jobject jarg1_) {
  jshort jresult = 0 ;
  struct SDL_KeyboardEvent *arg1 = (struct SDL_KeyboardEvent *) 0 ;
  Uint8 result;
  
  (void)jenv;
  (void)jcls;
  (void)jarg1_;
  arg1 = *(struct SDL_KeyboardEvent **)&jarg1; 
  result = (Uint8) ((arg1)->type);
  jresult = (jshort)result; 
  return jresult;
}


SWIGEXPORT void JNICALL Java_union_1parameter_union_1parameterJNI_SDL_1KeyboardEvent_1which_1set(JNIEnv *jenv, jclass jcls, jlong jarg1, jobject jarg1_, jint jarg2) {
  struct SDL_KeyboardEvent *arg1 = (struct SDL_KeyboardEvent *) 0 ;
  int arg2 ;
  
  (void)jenv;
  (void)jcls;
  (void)jarg1_;
  arg1 = *(struct SDL_KeyboardEvent **)&jarg1; 
  arg2 = (int)jarg2; 
  if (arg1) (arg1)->which = arg2;
}


SWIGEXPORT jint JNICALL Java_union_1parameter_union_1parameterJNI_SDL_1KeyboardEvent_1which_1get(JNIEnv *jenv, jclass jcls, jlong jarg1, jobject jarg1_) {
  jint jresult = 0 ;
  struct SDL_KeyboardEvent *arg1 = (struct SDL_KeyboardEvent *) 0 ;
  int result;
  
  (void)jenv;
  (void)jcls;
  (void)jarg1_;
  arg1 = *(struct SDL_KeyboardEvent **)&jarg1; 
  result = (int) ((arg1)->which);
  jresult = (jint)result; 
  return jresult;
}


SWIGEXPORT void JNICALL Java_union_1parameter_union_1parameterJNI_SDL_1KeyboardEvent_1state_1set(JNIEnv *jenv, jclass jcls, jlong jarg1, jobject jarg1_, jint jarg2) {
  struct SDL_KeyboardEvent *arg1 = (struct SDL_KeyboardEvent *) 0 ;
  int arg2 ;
  
  (void)jenv;
  (void)jcls;
  (void)jarg1_;
  arg1 = *(struct SDL_KeyboardEvent **)&jarg1; 
  arg2 = (int)jarg2; 
  if (arg1) (arg1)->state = arg2;
}


SWIGEXPORT jint JNICALL Java_union_1parameter_union_1parameterJNI_SDL_1KeyboardEvent_1state_1get(JNIEnv *jenv, jclass jcls, jlong jarg1, jobject jarg1_) {
  jint jresult = 0 ;
  struct SDL_KeyboardEvent *arg1 = (struct SDL_KeyboardEvent *) 0 ;
  int result;
  
  (void)jenv;
  (void)jcls;
  (void)jarg1_;
  arg1 = *(struct SDL_KeyboardEvent **)&jarg1; 
  result = (int) ((arg1)->state);
  jresult = (jint)result; 
  return jresult;
}


SWIGEXPORT jlong JNICALL Java_union_1parameter_union_1parameterJNI_new_1SDL_1KeyboardEvent(JNIEnv *jenv, jclass jcls) {
  jlong jresult = 0 ;
  struct SDL_KeyboardEvent *result = 0 ;
  
  (void)jenv;
  (void)jcls;
  result = (struct SDL_KeyboardEvent *)calloc(1, sizeof(struct SDL_KeyboardEvent));
  *(struct SDL_KeyboardEvent **)&jresult = result; 
  return jresult;
}


SWIGEXPORT void JNICALL Java_union_1parameter_union_1parameterJNI_delete_1SDL_1KeyboardEvent(JNIEnv *jenv, jclass jcls, jlong jarg1) {
  struct SDL_KeyboardEvent *arg1 = (struct SDL_KeyboardEvent *) 0 ;
  
  (void)jenv;
  (void)jcls;
  arg1 = *(struct SDL_KeyboardEvent **)&jarg1; 
  free((char *) arg1);
}


SWIGEXPORT void JNICALL Java_union_1parameter_union_1parameterJNI_SDL_1Event_1type_1set(JNIEnv *jenv, jclass jcls, jlong jarg1, jobject jarg1_, jshort jarg2) {
  SDL_Event *arg1 = (SDL_Event *) 0 ;
  Uint8 arg2 ;
  
  (void)jenv;
  (void)jcls;
  (void)jarg1_;
  arg1 = *(SDL_Event **)&jarg1; 
  arg2 = (Uint8)jarg2; 
  if (arg1) (arg1)->type = arg2;
}


SWIGEXPORT jshort JNICALL Java_union_1parameter_union_1parameterJNI_SDL_1Event_1type_1get(JNIEnv *jenv, jclass jcls, jlong jarg1, jobject jarg1_) {
  jshort jresult = 0 ;
  SDL_Event *arg1 = (SDL_Event *) 0 ;
  Uint8 result;
  
  (void)jenv;
  (void)jcls;
  (void)jarg1_;
  arg1 = *(SDL_Event **)&jarg1; 
  result = (Uint8) ((arg1)->type);
  jresult = (jshort)result; 
  return jresult;
}


SWIGEXPORT void JNICALL Java_union_1parameter_union_1parameterJNI_SDL_1Event_1active_1set(JNIEnv *jenv, jclass jcls, jlong jarg1, jobject jarg1_, jlong jarg2, jobject jarg2_) {
  SDL_Event *arg1 = (SDL_Event *) 0 ;
  SDL_ActiveEvent *arg2 = (SDL_ActiveEvent *) 0 ;
  
  (void)jenv;
  (void)jcls;
  (void)jarg1_;
  (void)jarg2_;
  arg1 = *(SDL_Event **)&jarg1; 
  arg2 = *(SDL_ActiveEvent **)&jarg2; 
  if (arg1) (arg1)->active = *arg2;
}


SWIGEXPORT jlong JNICALL Java_union_1parameter_union_1parameterJNI_SDL_1Event_1active_1get(JNIEnv *jenv, jclass jcls, jlong jarg1, jobject jarg1_) {
  jlong jresult = 0 ;
  SDL_Event *arg1 = (SDL_Event *) 0 ;
  SDL_ActiveEvent *result = 0 ;
  
  (void)jenv;
  (void)jcls;
  (void)jarg1_;
  arg1 = *(SDL_Event **)&jarg1; 
  result = (SDL_ActiveEvent *)& ((arg1)->active);
  *(SDL_ActiveEvent **)&jresult = result; 
  return jresult;
}


SWIGEXPORT void JNICALL Java_union_1parameter_union_1parameterJNI_SDL_1Event_1key_1set(JNIEnv *jenv, jclass jcls, jlong jarg1, jobject jarg1_, jlong jarg2, jobject jarg2_) {
  SDL_Event *arg1 = (SDL_Event *) 0 ;
  SDL_KeyboardEvent *arg2 = (SDL_KeyboardEvent *) 0 ;
  
  (void)jenv;
  (void)jcls;
  (void)jarg1_;
  (void)jarg2_;
  arg1 = *(SDL_Event **)&jarg1; 
  arg2 = *(SDL_KeyboardEvent **)&jarg2; 
  if (arg1) (arg1)->key = *arg2;
}


SWIGEXPORT jlong JNICALL Java_union_1parameter_union_1parameterJNI_SDL_1Event_1key_1get(JNIEnv *jenv, jclass jcls, jlong jarg1, jobject jarg1_) {
  jlong jresult = 0 ;
  SDL_Event *arg1 = (SDL_Event *) 0 ;
  SDL_KeyboardEvent *result = 0 ;
  
  (void)jenv;
  (void)jcls;
  (void)jarg1_;
  arg1 = *(SDL_Event **)&jarg1; 
  result = (SDL_KeyboardEvent *)& ((arg1)->key);
  *(SDL_KeyboardEvent **)&jresult = result; 
  return jresult;
}


SWIGEXPORT jlong JNICALL Java_union_1parameter_union_1parameterJNI_new_1SDL_1Event(JNIEnv *jenv, jclass jcls) {
  jlong jresult = 0 ;
  SDL_Event *result = 0 ;
  
  (void)jenv;
  (void)jcls;
  result = (SDL_Event *)calloc(1, sizeof(SDL_Event));
  *(SDL_Event **)&jresult = result; 
  return jresult;
}


SWIGEXPORT void JNICALL Java_union_1parameter_union_1parameterJNI_delete_1SDL_1Event(JNIEnv *jenv, jclass jcls, jlong jarg1) {
  SDL_Event *arg1 = (SDL_Event *) 0 ;
  
  (void)jenv;
  (void)jcls;
  arg1 = *(SDL_Event **)&jarg1; 
  free((char *) arg1);
}


SWIGEXPORT jint JNICALL Java_union_1parameter_union_1parameterJNI_SDL_1PollEvent(JNIEnv *jenv, jclass jcls, jlong jarg1, jobject jarg1_) {
  jint jresult = 0 ;
  SDL_Event *arg1 = (SDL_Event *) 0 ;
  int result;
  
  (void)jenv;
  (void)jcls;
  (void)jarg1_;
  arg1 = *(SDL_Event **)&jarg1; 
  result = (int)SDL_PollEvent(arg1);
  jresult = (jint)result; 
  return jresult;
}


#ifdef __cplusplus
}
#endif

