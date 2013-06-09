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


  const void* ref_pointer(const void*& a) {
    return a;
  }

  struct A
  {
  };
  
  const A* ref_pointer(A* const& a) {
    return a;
  }

  const A** ref_pointer_1(const A**& a) {
    return a;
  }

  A* pointer_1(A* a) {
    return a;
  }

  const A& ref_const(const A& a) {
    return a;
  }

  enum Hello { hi,hello };

  int sint(int a) {
    return a;
  }

  const int& ref_int(const int& a) {
    return a;
  }

  Hello senum(Hello a) {
    return a;
  }
  
  const Hello& ref_enum(const Hello& a) {
    return a;
  }  

  typedef A *Aptr;
  const Aptr& rptr_const(const Aptr& a) {
    return a;
  }

  const Aptr& rptr_const2(const Aptr& a) {
    return a;
  }

  const void*& rptr_void(const void*& a) {
    return a;
  }

  const A& cref_a(const A& a) {
    return a;
  }

  A& ref_a(A& a) {
    return a;
  }


  template <class T> struct NameT {
  };
  
  
  typedef char name[8];
  typedef char namea[];

  typedef NameT<char> name_t[8];
  
  char* test_a(char hello[8],
	       char hi[],
	       const char chello[8],
	       const char chi[]) {
    return hi;
  }

  int test_b(name n2) {
    return 1;
  }

/* gcc doesn't like this one. Removing until reason resolved.*/
  int test_c(const name& n1) {
    return 1;
  }

  int test_d(name* n1) {
    return 1;
  }

  int test_e(const name_t& n1) {
    return 1;
  }

  int test_f(name_t n1) {
    return 1;
  }

  int test_g(name_t* n1) {
    return 1;
  }

  struct Foo 
  {
    int foo(const Aptr&a);
    int foon(const char (&a)[8]);
  };

  inline int Foo::foo(A* const& a) { return 1; }



  inline int Foo::foon(const name& a) { return a[0]; }


#define ARRAY_LEN_X 2
#define ARRAY_LEN_Y 4

typedef enum {One, Two, Three, Four, Five} finger;

typedef struct {
    double         double_field;
} SimpleStruct;

char           array_c [ARRAY_LEN_X][ARRAY_LEN_Y];
signed char    array_sc[ARRAY_LEN_X][ARRAY_LEN_Y];
unsigned char  array_uc[ARRAY_LEN_X][ARRAY_LEN_Y];
short          array_s [ARRAY_LEN_X][ARRAY_LEN_Y];
unsigned short array_us[ARRAY_LEN_X][ARRAY_LEN_Y];
int            array_i [ARRAY_LEN_X][ARRAY_LEN_Y];
unsigned int   array_ui[ARRAY_LEN_X][ARRAY_LEN_Y];
long           array_l [ARRAY_LEN_X][ARRAY_LEN_Y];
unsigned long  array_ul[ARRAY_LEN_X][ARRAY_LEN_Y];
long long      array_ll[ARRAY_LEN_X][ARRAY_LEN_Y];
float          array_f [ARRAY_LEN_X][ARRAY_LEN_Y];
double         array_d [ARRAY_LEN_X][ARRAY_LEN_Y];
SimpleStruct   array_struct[ARRAY_LEN_X][ARRAY_LEN_Y];
SimpleStruct*  array_structpointers[ARRAY_LEN_X][ARRAY_LEN_Y];
int*           array_ipointers [ARRAY_LEN_X][ARRAY_LEN_Y];
finger         array_enum[ARRAY_LEN_X][ARRAY_LEN_Y];
finger*        array_enumpointers[ARRAY_LEN_X][ARRAY_LEN_Y];
const int      array_const_i[ARRAY_LEN_X][ARRAY_LEN_Y] = { {10, 11, 12, 13}, {14, 15, 16, 17} };

void fn_taking_arrays(SimpleStruct array_struct[ARRAY_LEN_X][ARRAY_LEN_Y]) {}

int get_2d_array(int (*array)[ARRAY_LEN_Y], int x, int y){
    return array[x][y];
}


#ifdef __cplusplus
extern "C" {
#endif

SWIGEXPORT jlong JNICALL Java_mixed_1types_mixed_1typesJNI_ref_1pointer_1_1SWIG_10(JNIEnv *jenv, jclass jcls, jlong jarg1) {
  jlong jresult = 0 ;
  void **arg1 = 0 ;
  void *result = 0 ;
  
  (void)jenv;
  (void)jcls;
  arg1 = *(void ***)&jarg1;
  if (!arg1) {
    SWIG_JavaThrowException(jenv, SWIG_JavaNullPointerException, "void const *& reference is null");
    return 0;
  } 
  result = (void *)ref_pointer((void const *&)*arg1);
  *(void **)&jresult = result; 
  return jresult;
}


SWIGEXPORT jlong JNICALL Java_mixed_1types_mixed_1typesJNI_new_1A(JNIEnv *jenv, jclass jcls) {
  jlong jresult = 0 ;
  A *result = 0 ;
  
  (void)jenv;
  (void)jcls;
  result = (A *)new A();
  *(A **)&jresult = result; 
  return jresult;
}


SWIGEXPORT void JNICALL Java_mixed_1types_mixed_1typesJNI_delete_1A(JNIEnv *jenv, jclass jcls, jlong jarg1) {
  A *arg1 = (A *) 0 ;
  
  (void)jenv;
  (void)jcls;
  arg1 = *(A **)&jarg1; 
  delete arg1;
}


SWIGEXPORT jlong JNICALL Java_mixed_1types_mixed_1typesJNI_ref_1pointer_1_1SWIG_11(JNIEnv *jenv, jclass jcls, jlong jarg1, jobject jarg1_) {
  jlong jresult = 0 ;
  A **arg1 = 0 ;
  A *temp1 = 0 ;
  A *result = 0 ;
  
  (void)jenv;
  (void)jcls;
  (void)jarg1_;
  temp1 = *(A **)&jarg1;
  arg1 = (A **)&temp1; 
  result = (A *)ref_pointer((A *const &)*arg1);
  *(A **)&jresult = result; 
  return jresult;
}


SWIGEXPORT jlong JNICALL Java_mixed_1types_mixed_1typesJNI_ref_1pointer_11(JNIEnv *jenv, jclass jcls, jlong jarg1) {
  jlong jresult = 0 ;
  A ***arg1 = 0 ;
  A **result = 0 ;
  
  (void)jenv;
  (void)jcls;
  arg1 = *(A ****)&jarg1;
  if (!arg1) {
    SWIG_JavaThrowException(jenv, SWIG_JavaNullPointerException, "A const **& reference is null");
    return 0;
  } 
  result = (A **)ref_pointer_1((A const **&)*arg1);
  *(A ***)&jresult = result; 
  return jresult;
}


SWIGEXPORT jlong JNICALL Java_mixed_1types_mixed_1typesJNI_pointer_11(JNIEnv *jenv, jclass jcls, jlong jarg1, jobject jarg1_) {
  jlong jresult = 0 ;
  A *arg1 = (A *) 0 ;
  A *result = 0 ;
  
  (void)jenv;
  (void)jcls;
  (void)jarg1_;
  arg1 = *(A **)&jarg1; 
  result = (A *)pointer_1(arg1);
  *(A **)&jresult = result; 
  return jresult;
}


SWIGEXPORT jlong JNICALL Java_mixed_1types_mixed_1typesJNI_ref_1const(JNIEnv *jenv, jclass jcls, jlong jarg1, jobject jarg1_) {
  jlong jresult = 0 ;
  A *arg1 = 0 ;
  A *result = 0 ;
  
  (void)jenv;
  (void)jcls;
  (void)jarg1_;
  arg1 = *(A **)&jarg1;
  if (!arg1) {
    SWIG_JavaThrowException(jenv, SWIG_JavaNullPointerException, "A const & reference is null");
    return 0;
  } 
  result = (A *) &ref_const((A const &)*arg1);
  *(A **)&jresult = result; 
  return jresult;
}


SWIGEXPORT jint JNICALL Java_mixed_1types_mixed_1typesJNI_sint(JNIEnv *jenv, jclass jcls, jint jarg1) {
  jint jresult = 0 ;
  int arg1 ;
  int result;
  
  (void)jenv;
  (void)jcls;
  arg1 = (int)jarg1; 
  result = (int)sint(arg1);
  jresult = (jint)result; 
  return jresult;
}


SWIGEXPORT jint JNICALL Java_mixed_1types_mixed_1typesJNI_ref_1int(JNIEnv *jenv, jclass jcls, jint jarg1) {
  jint jresult = 0 ;
  int *arg1 = 0 ;
  int temp1 ;
  int *result = 0 ;
  
  (void)jenv;
  (void)jcls;
  temp1 = (int)jarg1; 
  arg1 = &temp1; 
  result = (int *) &ref_int((int const &)*arg1);
  jresult = (jint)*result; 
  return jresult;
}


SWIGEXPORT jint JNICALL Java_mixed_1types_mixed_1typesJNI_senum(JNIEnv *jenv, jclass jcls, jint jarg1) {
  jint jresult = 0 ;
  Hello arg1 ;
  Hello result;
  
  (void)jenv;
  (void)jcls;
  arg1 = (Hello)jarg1; 
  result = (Hello)senum(arg1);
  jresult = (jint)result; 
  return jresult;
}


SWIGEXPORT jint JNICALL Java_mixed_1types_mixed_1typesJNI_ref_1enum(JNIEnv *jenv, jclass jcls, jint jarg1) {
  jint jresult = 0 ;
  Hello *arg1 = 0 ;
  Hello temp1 ;
  Hello *result = 0 ;
  
  (void)jenv;
  (void)jcls;
  temp1 = (Hello)jarg1; 
  arg1 = &temp1; 
  result = (Hello *) &ref_enum((enum Hello const &)*arg1);
  jresult = (jint)*result; 
  return jresult;
}


SWIGEXPORT jlong JNICALL Java_mixed_1types_mixed_1typesJNI_rptr_1const(JNIEnv *jenv, jclass jcls, jlong jarg1, jobject jarg1_) {
  jlong jresult = 0 ;
  Aptr *arg1 = 0 ;
  Aptr temp1 = 0 ;
  Aptr *result = 0 ;
  
  (void)jenv;
  (void)jcls;
  (void)jarg1_;
  temp1 = *(Aptr *)&jarg1;
  arg1 = (Aptr *)&temp1; 
  result = (Aptr *) &rptr_const((A *const &)*arg1);
  *(Aptr *)&jresult = *result; 
  return jresult;
}


SWIGEXPORT jlong JNICALL Java_mixed_1types_mixed_1typesJNI_rptr_1const2(JNIEnv *jenv, jclass jcls, jlong jarg1, jobject jarg1_) {
  jlong jresult = 0 ;
  Aptr *arg1 = 0 ;
  Aptr temp1 = 0 ;
  Aptr *result = 0 ;
  
  (void)jenv;
  (void)jcls;
  (void)jarg1_;
  temp1 = *(Aptr *)&jarg1;
  arg1 = (Aptr *)&temp1; 
  result = (Aptr *) &rptr_const2((A *const &)*arg1);
  *(Aptr *)&jresult = *result; 
  return jresult;
}


SWIGEXPORT jlong JNICALL Java_mixed_1types_mixed_1typesJNI_rptr_1void(JNIEnv *jenv, jclass jcls, jlong jarg1) {
  jlong jresult = 0 ;
  void **arg1 = 0 ;
  void **result = 0 ;
  
  (void)jenv;
  (void)jcls;
  arg1 = *(void ***)&jarg1;
  if (!arg1) {
    SWIG_JavaThrowException(jenv, SWIG_JavaNullPointerException, "void const *& reference is null");
    return 0;
  } 
  result = (void **) &rptr_void((void const *&)*arg1);
  *(void ***)&jresult = result; 
  return jresult;
}


SWIGEXPORT jlong JNICALL Java_mixed_1types_mixed_1typesJNI_cref_1a(JNIEnv *jenv, jclass jcls, jlong jarg1, jobject jarg1_) {
  jlong jresult = 0 ;
  A *arg1 = 0 ;
  A *result = 0 ;
  
  (void)jenv;
  (void)jcls;
  (void)jarg1_;
  arg1 = *(A **)&jarg1;
  if (!arg1) {
    SWIG_JavaThrowException(jenv, SWIG_JavaNullPointerException, "A const & reference is null");
    return 0;
  } 
  result = (A *) &cref_a((A const &)*arg1);
  *(A **)&jresult = result; 
  return jresult;
}


SWIGEXPORT jlong JNICALL Java_mixed_1types_mixed_1typesJNI_ref_1a(JNIEnv *jenv, jclass jcls, jlong jarg1, jobject jarg1_) {
  jlong jresult = 0 ;
  A *arg1 = 0 ;
  A *result = 0 ;
  
  (void)jenv;
  (void)jcls;
  (void)jarg1_;
  arg1 = *(A **)&jarg1;
  if (!arg1) {
    SWIG_JavaThrowException(jenv, SWIG_JavaNullPointerException, "A & reference is null");
    return 0;
  } 
  result = (A *) &ref_a(*arg1);
  *(A **)&jresult = result; 
  return jresult;
}


SWIGEXPORT jstring JNICALL Java_mixed_1types_mixed_1typesJNI_test_1a(JNIEnv *jenv, jclass jcls, jstring jarg1, jstring jarg2, jstring jarg3, jstring jarg4) {
  jstring jresult = 0 ;
  char *arg1 ;
  char *arg2 ;
  char *arg3 ;
  char *arg4 ;
  char *result = 0 ;
  
  (void)jenv;
  (void)jcls;
  arg1 = 0;
  if (jarg1) {
    arg1 = (char *)jenv->GetStringUTFChars(jarg1, 0);
    if (!arg1) return 0;
  }
  arg2 = 0;
  if (jarg2) {
    arg2 = (char *)jenv->GetStringUTFChars(jarg2, 0);
    if (!arg2) return 0;
  }
  arg3 = 0;
  if (jarg3) {
    arg3 = (char *)jenv->GetStringUTFChars(jarg3, 0);
    if (!arg3) return 0;
  }
  arg4 = 0;
  if (jarg4) {
    arg4 = (char *)jenv->GetStringUTFChars(jarg4, 0);
    if (!arg4) return 0;
  }
  result = (char *)test_a(arg1,arg2,(char const (*))arg3,(char const (*))arg4);
  if (result) jresult = jenv->NewStringUTF((const char *)result);
  
  
  
  
  if (arg1) jenv->ReleaseStringUTFChars(jarg1, (const char *)arg1);
  if (arg2) jenv->ReleaseStringUTFChars(jarg2, (const char *)arg2);
  if (arg3) jenv->ReleaseStringUTFChars(jarg3, (const char *)arg3);
  if (arg4) jenv->ReleaseStringUTFChars(jarg4, (const char *)arg4);
  return jresult;
}


SWIGEXPORT jint JNICALL Java_mixed_1types_mixed_1typesJNI_test_1b(JNIEnv *jenv, jclass jcls, jstring jarg1) {
  jint jresult = 0 ;
  char *arg1 ;
  int result;
  
  (void)jenv;
  (void)jcls;
  arg1 = 0;
  if (jarg1) {
    arg1 = (char *)jenv->GetStringUTFChars(jarg1, 0);
    if (!arg1) return 0;
  }
  result = (int)test_b(arg1);
  jresult = (jint)result; 
  
  if (arg1) jenv->ReleaseStringUTFChars(jarg1, (const char *)arg1);
  return jresult;
}


SWIGEXPORT jint JNICALL Java_mixed_1types_mixed_1typesJNI_test_1c(JNIEnv *jenv, jclass jcls, jlong jarg1) {
  jint jresult = 0 ;
  name *arg1 = 0 ;
  int result;
  
  (void)jenv;
  (void)jcls;
  arg1 = *(name **)&jarg1;
  if (!arg1) {
    SWIG_JavaThrowException(jenv, SWIG_JavaNullPointerException, "name const & reference is null");
    return 0;
  } 
  result = (int)test_c((char const (&)[8])*arg1);
  jresult = (jint)result; 
  return jresult;
}


SWIGEXPORT jint JNICALL Java_mixed_1types_mixed_1typesJNI_test_1d(JNIEnv *jenv, jclass jcls, jlong jarg1) {
  jint jresult = 0 ;
  name *arg1 = (name *) 0 ;
  int result;
  
  (void)jenv;
  (void)jcls;
  arg1 = *(name **)&jarg1; 
  result = (int)test_d((char (*)[8])arg1);
  jresult = (jint)result; 
  return jresult;
}


SWIGEXPORT jint JNICALL Java_mixed_1types_mixed_1typesJNI_test_1e(JNIEnv *jenv, jclass jcls, jlong jarg1) {
  jint jresult = 0 ;
  name_t *arg1 = 0 ;
  int result;
  
  (void)jenv;
  (void)jcls;
  arg1 = *(name_t **)&jarg1;
  if (!arg1) {
    SWIG_JavaThrowException(jenv, SWIG_JavaNullPointerException, "name_t const & reference is null");
    return 0;
  } 
  result = (int)test_e((NameT< char > const (&)[8])*arg1);
  jresult = (jint)result; 
  return jresult;
}


SWIGEXPORT jint JNICALL Java_mixed_1types_mixed_1typesJNI_test_1f(JNIEnv *jenv, jclass jcls, jlong jarg1) {
  jint jresult = 0 ;
  NameT< char > *arg1 ;
  int result;
  
  (void)jenv;
  (void)jcls;
  arg1 = *(NameT< char > **)&jarg1; 
  result = (int)test_f(arg1);
  jresult = (jint)result; 
  
  return jresult;
}


SWIGEXPORT jint JNICALL Java_mixed_1types_mixed_1typesJNI_test_1g(JNIEnv *jenv, jclass jcls, jlong jarg1) {
  jint jresult = 0 ;
  name_t *arg1 = (name_t *) 0 ;
  int result;
  
  (void)jenv;
  (void)jcls;
  arg1 = *(name_t **)&jarg1; 
  result = (int)test_g((NameT< char > (*)[8])arg1);
  jresult = (jint)result; 
  return jresult;
}


SWIGEXPORT jint JNICALL Java_mixed_1types_mixed_1typesJNI_Foo_1foo(JNIEnv *jenv, jclass jcls, jlong jarg1, jobject jarg1_, jlong jarg2, jobject jarg2_) {
  jint jresult = 0 ;
  Foo *arg1 = (Foo *) 0 ;
  Aptr *arg2 = 0 ;
  Aptr temp2 = 0 ;
  int result;
  
  (void)jenv;
  (void)jcls;
  (void)jarg1_;
  (void)jarg2_;
  arg1 = *(Foo **)&jarg1; 
  temp2 = *(Aptr *)&jarg2;
  arg2 = (Aptr *)&temp2; 
  result = (int)(arg1)->foo((Aptr const &)*arg2);
  jresult = (jint)result; 
  return jresult;
}


SWIGEXPORT jint JNICALL Java_mixed_1types_mixed_1typesJNI_Foo_1foon(JNIEnv *jenv, jclass jcls, jlong jarg1, jobject jarg1_, jlong jarg2) {
  jint jresult = 0 ;
  Foo *arg1 = (Foo *) 0 ;
  char (*arg2)[8] = 0 ;
  int result;
  
  (void)jenv;
  (void)jcls;
  (void)jarg1_;
  arg1 = *(Foo **)&jarg1; 
  arg2 = *(char (**)[8])&jarg2;
  if (!arg2) {
    SWIG_JavaThrowException(jenv, SWIG_JavaNullPointerException, "char const (&)[8] reference is null");
    return 0;
  } 
  result = (int)(arg1)->foon((char const (&)[8])*arg2);
  jresult = (jint)result; 
  return jresult;
}


SWIGEXPORT jlong JNICALL Java_mixed_1types_mixed_1typesJNI_new_1Foo(JNIEnv *jenv, jclass jcls) {
  jlong jresult = 0 ;
  Foo *result = 0 ;
  
  (void)jenv;
  (void)jcls;
  result = (Foo *)new Foo();
  *(Foo **)&jresult = result; 
  return jresult;
}


SWIGEXPORT void JNICALL Java_mixed_1types_mixed_1typesJNI_delete_1Foo(JNIEnv *jenv, jclass jcls, jlong jarg1) {
  Foo *arg1 = (Foo *) 0 ;
  
  (void)jenv;
  (void)jcls;
  arg1 = *(Foo **)&jarg1; 
  delete arg1;
}


SWIGEXPORT jint JNICALL Java_mixed_1types_mixed_1typesJNI_ARRAY_1LEN_1X_1get(JNIEnv *jenv, jclass jcls) {
  jint jresult = 0 ;
  int result;
  
  (void)jenv;
  (void)jcls;
  result = (int)(2);
  jresult = (jint)result; 
  return jresult;
}


SWIGEXPORT jint JNICALL Java_mixed_1types_mixed_1typesJNI_ARRAY_1LEN_1Y_1get(JNIEnv *jenv, jclass jcls) {
  jint jresult = 0 ;
  int result;
  
  (void)jenv;
  (void)jcls;
  result = (int)(4);
  jresult = (jint)result; 
  return jresult;
}


SWIGEXPORT void JNICALL Java_mixed_1types_mixed_1typesJNI_SimpleStruct_1double_1field_1set(JNIEnv *jenv, jclass jcls, jlong jarg1, jobject jarg1_, jdouble jarg2) {
  SimpleStruct *arg1 = (SimpleStruct *) 0 ;
  double arg2 ;
  
  (void)jenv;
  (void)jcls;
  (void)jarg1_;
  arg1 = *(SimpleStruct **)&jarg1; 
  arg2 = (double)jarg2; 
  if (arg1) (arg1)->double_field = arg2;
}


SWIGEXPORT jdouble JNICALL Java_mixed_1types_mixed_1typesJNI_SimpleStruct_1double_1field_1get(JNIEnv *jenv, jclass jcls, jlong jarg1, jobject jarg1_) {
  jdouble jresult = 0 ;
  SimpleStruct *arg1 = (SimpleStruct *) 0 ;
  double result;
  
  (void)jenv;
  (void)jcls;
  (void)jarg1_;
  arg1 = *(SimpleStruct **)&jarg1; 
  result = (double) ((arg1)->double_field);
  jresult = (jdouble)result; 
  return jresult;
}


SWIGEXPORT jlong JNICALL Java_mixed_1types_mixed_1typesJNI_new_1SimpleStruct(JNIEnv *jenv, jclass jcls) {
  jlong jresult = 0 ;
  SimpleStruct *result = 0 ;
  
  (void)jenv;
  (void)jcls;
  result = (SimpleStruct *)new SimpleStruct();
  *(SimpleStruct **)&jresult = result; 
  return jresult;
}


SWIGEXPORT void JNICALL Java_mixed_1types_mixed_1typesJNI_delete_1SimpleStruct(JNIEnv *jenv, jclass jcls, jlong jarg1) {
  SimpleStruct *arg1 = (SimpleStruct *) 0 ;
  
  (void)jenv;
  (void)jcls;
  arg1 = *(SimpleStruct **)&jarg1; 
  delete arg1;
}


SWIGEXPORT void JNICALL Java_mixed_1types_mixed_1typesJNI_array_1c_1set(JNIEnv *jenv, jclass jcls, jlong jarg1) {
  char (*arg1)[4] ;
  
  (void)jenv;
  (void)jcls;
  arg1 = *(char (**)[4])&jarg1; 
  {
    char (*inp)[4] = (char (*)[4])(arg1);
    char (*dest)[4] = (char (*)[4])(array_c);
    size_t ii = 0;
    for (; ii < 2; ++ii) {
      char *ip = inp[ii];
      char *dp = dest[ii];
      size_t jj = 0;
      for (; jj < 4; ++jj) dp[jj] = ip[jj];
    }
  }
  
}


SWIGEXPORT jlong JNICALL Java_mixed_1types_mixed_1typesJNI_array_1c_1get(JNIEnv *jenv, jclass jcls) {
  jlong jresult = 0 ;
  char (*result)[4] = 0 ;
  
  (void)jenv;
  (void)jcls;
  result = (char (*)[4])(char (*)[4])array_c;
  *(char (**)[4])&jresult = result; 
  return jresult;
}


SWIGEXPORT void JNICALL Java_mixed_1types_mixed_1typesJNI_array_1sc_1set(JNIEnv *jenv, jclass jcls, jlong jarg1) {
  signed char (*arg1)[4] ;
  
  (void)jenv;
  (void)jcls;
  arg1 = *(signed char (**)[4])&jarg1; 
  {
    signed char (*inp)[4] = (signed char (*)[4])(arg1);
    signed char (*dest)[4] = (signed char (*)[4])(array_sc);
    size_t ii = 0;
    for (; ii < 2; ++ii) {
      signed char *ip = inp[ii];
      signed char *dp = dest[ii];
      size_t jj = 0;
      for (; jj < 4; ++jj) dp[jj] = ip[jj];
    }
  }
  
}


SWIGEXPORT jlong JNICALL Java_mixed_1types_mixed_1typesJNI_array_1sc_1get(JNIEnv *jenv, jclass jcls) {
  jlong jresult = 0 ;
  signed char (*result)[4] = 0 ;
  
  (void)jenv;
  (void)jcls;
  result = (signed char (*)[4])(signed char (*)[4])array_sc;
  *(signed char (**)[4])&jresult = result; 
  return jresult;
}


SWIGEXPORT void JNICALL Java_mixed_1types_mixed_1typesJNI_array_1uc_1set(JNIEnv *jenv, jclass jcls, jlong jarg1) {
  unsigned char (*arg1)[4] ;
  
  (void)jenv;
  (void)jcls;
  arg1 = *(unsigned char (**)[4])&jarg1; 
  {
    unsigned char (*inp)[4] = (unsigned char (*)[4])(arg1);
    unsigned char (*dest)[4] = (unsigned char (*)[4])(array_uc);
    size_t ii = 0;
    for (; ii < 2; ++ii) {
      unsigned char *ip = inp[ii];
      unsigned char *dp = dest[ii];
      size_t jj = 0;
      for (; jj < 4; ++jj) dp[jj] = ip[jj];
    }
  }
  
}


SWIGEXPORT jlong JNICALL Java_mixed_1types_mixed_1typesJNI_array_1uc_1get(JNIEnv *jenv, jclass jcls) {
  jlong jresult = 0 ;
  unsigned char (*result)[4] = 0 ;
  
  (void)jenv;
  (void)jcls;
  result = (unsigned char (*)[4])(unsigned char (*)[4])array_uc;
  *(unsigned char (**)[4])&jresult = result; 
  return jresult;
}


SWIGEXPORT void JNICALL Java_mixed_1types_mixed_1typesJNI_array_1s_1set(JNIEnv *jenv, jclass jcls, jlong jarg1) {
  short (*arg1)[4] ;
  
  (void)jenv;
  (void)jcls;
  arg1 = *(short (**)[4])&jarg1; 
  {
    short (*inp)[4] = (short (*)[4])(arg1);
    short (*dest)[4] = (short (*)[4])(array_s);
    size_t ii = 0;
    for (; ii < 2; ++ii) {
      short *ip = inp[ii];
      short *dp = dest[ii];
      size_t jj = 0;
      for (; jj < 4; ++jj) dp[jj] = ip[jj];
    }
  }
  
}


SWIGEXPORT jlong JNICALL Java_mixed_1types_mixed_1typesJNI_array_1s_1get(JNIEnv *jenv, jclass jcls) {
  jlong jresult = 0 ;
  short (*result)[4] = 0 ;
  
  (void)jenv;
  (void)jcls;
  result = (short (*)[4])(short (*)[4])array_s;
  *(short (**)[4])&jresult = result; 
  return jresult;
}


SWIGEXPORT void JNICALL Java_mixed_1types_mixed_1typesJNI_array_1us_1set(JNIEnv *jenv, jclass jcls, jlong jarg1) {
  unsigned short (*arg1)[4] ;
  
  (void)jenv;
  (void)jcls;
  arg1 = *(unsigned short (**)[4])&jarg1; 
  {
    unsigned short (*inp)[4] = (unsigned short (*)[4])(arg1);
    unsigned short (*dest)[4] = (unsigned short (*)[4])(array_us);
    size_t ii = 0;
    for (; ii < 2; ++ii) {
      unsigned short *ip = inp[ii];
      unsigned short *dp = dest[ii];
      size_t jj = 0;
      for (; jj < 4; ++jj) dp[jj] = ip[jj];
    }
  }
  
}


SWIGEXPORT jlong JNICALL Java_mixed_1types_mixed_1typesJNI_array_1us_1get(JNIEnv *jenv, jclass jcls) {
  jlong jresult = 0 ;
  unsigned short (*result)[4] = 0 ;
  
  (void)jenv;
  (void)jcls;
  result = (unsigned short (*)[4])(unsigned short (*)[4])array_us;
  *(unsigned short (**)[4])&jresult = result; 
  return jresult;
}


SWIGEXPORT void JNICALL Java_mixed_1types_mixed_1typesJNI_array_1i_1set(JNIEnv *jenv, jclass jcls, jlong jarg1) {
  int (*arg1)[4] ;
  
  (void)jenv;
  (void)jcls;
  arg1 = *(int (**)[4])&jarg1; 
  {
    int (*inp)[4] = (int (*)[4])(arg1);
    int (*dest)[4] = (int (*)[4])(array_i);
    size_t ii = 0;
    for (; ii < 2; ++ii) {
      int *ip = inp[ii];
      int *dp = dest[ii];
      size_t jj = 0;
      for (; jj < 4; ++jj) dp[jj] = ip[jj];
    }
  }
  
}


SWIGEXPORT jlong JNICALL Java_mixed_1types_mixed_1typesJNI_array_1i_1get(JNIEnv *jenv, jclass jcls) {
  jlong jresult = 0 ;
  int (*result)[4] = 0 ;
  
  (void)jenv;
  (void)jcls;
  result = (int (*)[4])(int (*)[4])array_i;
  *(int (**)[4])&jresult = result; 
  return jresult;
}


SWIGEXPORT void JNICALL Java_mixed_1types_mixed_1typesJNI_array_1ui_1set(JNIEnv *jenv, jclass jcls, jlong jarg1) {
  unsigned int (*arg1)[4] ;
  
  (void)jenv;
  (void)jcls;
  arg1 = *(unsigned int (**)[4])&jarg1; 
  {
    unsigned int (*inp)[4] = (unsigned int (*)[4])(arg1);
    unsigned int (*dest)[4] = (unsigned int (*)[4])(array_ui);
    size_t ii = 0;
    for (; ii < 2; ++ii) {
      unsigned int *ip = inp[ii];
      unsigned int *dp = dest[ii];
      size_t jj = 0;
      for (; jj < 4; ++jj) dp[jj] = ip[jj];
    }
  }
  
}


SWIGEXPORT jlong JNICALL Java_mixed_1types_mixed_1typesJNI_array_1ui_1get(JNIEnv *jenv, jclass jcls) {
  jlong jresult = 0 ;
  unsigned int (*result)[4] = 0 ;
  
  (void)jenv;
  (void)jcls;
  result = (unsigned int (*)[4])(unsigned int (*)[4])array_ui;
  *(unsigned int (**)[4])&jresult = result; 
  return jresult;
}


SWIGEXPORT void JNICALL Java_mixed_1types_mixed_1typesJNI_array_1l_1set(JNIEnv *jenv, jclass jcls, jlong jarg1) {
  long (*arg1)[4] ;
  
  (void)jenv;
  (void)jcls;
  arg1 = *(long (**)[4])&jarg1; 
  {
    long (*inp)[4] = (long (*)[4])(arg1);
    long (*dest)[4] = (long (*)[4])(array_l);
    size_t ii = 0;
    for (; ii < 2; ++ii) {
      long *ip = inp[ii];
      long *dp = dest[ii];
      size_t jj = 0;
      for (; jj < 4; ++jj) dp[jj] = ip[jj];
    }
  }
  
}


SWIGEXPORT jlong JNICALL Java_mixed_1types_mixed_1typesJNI_array_1l_1get(JNIEnv *jenv, jclass jcls) {
  jlong jresult = 0 ;
  long (*result)[4] = 0 ;
  
  (void)jenv;
  (void)jcls;
  result = (long (*)[4])(long (*)[4])array_l;
  *(long (**)[4])&jresult = result; 
  return jresult;
}


SWIGEXPORT void JNICALL Java_mixed_1types_mixed_1typesJNI_array_1ul_1set(JNIEnv *jenv, jclass jcls, jlong jarg1) {
  unsigned long (*arg1)[4] ;
  
  (void)jenv;
  (void)jcls;
  arg1 = *(unsigned long (**)[4])&jarg1; 
  {
    unsigned long (*inp)[4] = (unsigned long (*)[4])(arg1);
    unsigned long (*dest)[4] = (unsigned long (*)[4])(array_ul);
    size_t ii = 0;
    for (; ii < 2; ++ii) {
      unsigned long *ip = inp[ii];
      unsigned long *dp = dest[ii];
      size_t jj = 0;
      for (; jj < 4; ++jj) dp[jj] = ip[jj];
    }
  }
  
}


SWIGEXPORT jlong JNICALL Java_mixed_1types_mixed_1typesJNI_array_1ul_1get(JNIEnv *jenv, jclass jcls) {
  jlong jresult = 0 ;
  unsigned long (*result)[4] = 0 ;
  
  (void)jenv;
  (void)jcls;
  result = (unsigned long (*)[4])(unsigned long (*)[4])array_ul;
  *(unsigned long (**)[4])&jresult = result; 
  return jresult;
}


SWIGEXPORT void JNICALL Java_mixed_1types_mixed_1typesJNI_array_1ll_1set(JNIEnv *jenv, jclass jcls, jlong jarg1) {
  long long (*arg1)[4] ;
  
  (void)jenv;
  (void)jcls;
  arg1 = *(long long (**)[4])&jarg1; 
  {
    long long (*inp)[4] = (long long (*)[4])(arg1);
    long long (*dest)[4] = (long long (*)[4])(array_ll);
    size_t ii = 0;
    for (; ii < 2; ++ii) {
      long long *ip = inp[ii];
      long long *dp = dest[ii];
      size_t jj = 0;
      for (; jj < 4; ++jj) dp[jj] = ip[jj];
    }
  }
  
}


SWIGEXPORT jlong JNICALL Java_mixed_1types_mixed_1typesJNI_array_1ll_1get(JNIEnv *jenv, jclass jcls) {
  jlong jresult = 0 ;
  long long (*result)[4] = 0 ;
  
  (void)jenv;
  (void)jcls;
  result = (long long (*)[4])(long long (*)[4])array_ll;
  *(long long (**)[4])&jresult = result; 
  return jresult;
}


SWIGEXPORT void JNICALL Java_mixed_1types_mixed_1typesJNI_array_1f_1set(JNIEnv *jenv, jclass jcls, jlong jarg1) {
  float (*arg1)[4] ;
  
  (void)jenv;
  (void)jcls;
  arg1 = *(float (**)[4])&jarg1; 
  {
    float (*inp)[4] = (float (*)[4])(arg1);
    float (*dest)[4] = (float (*)[4])(array_f);
    size_t ii = 0;
    for (; ii < 2; ++ii) {
      float *ip = inp[ii];
      float *dp = dest[ii];
      size_t jj = 0;
      for (; jj < 4; ++jj) dp[jj] = ip[jj];
    }
  }
  
}


SWIGEXPORT jlong JNICALL Java_mixed_1types_mixed_1typesJNI_array_1f_1get(JNIEnv *jenv, jclass jcls) {
  jlong jresult = 0 ;
  float (*result)[4] = 0 ;
  
  (void)jenv;
  (void)jcls;
  result = (float (*)[4])(float (*)[4])array_f;
  *(float (**)[4])&jresult = result; 
  return jresult;
}


SWIGEXPORT void JNICALL Java_mixed_1types_mixed_1typesJNI_array_1d_1set(JNIEnv *jenv, jclass jcls, jlong jarg1) {
  double (*arg1)[4] ;
  
  (void)jenv;
  (void)jcls;
  arg1 = *(double (**)[4])&jarg1; 
  {
    double (*inp)[4] = (double (*)[4])(arg1);
    double (*dest)[4] = (double (*)[4])(array_d);
    size_t ii = 0;
    for (; ii < 2; ++ii) {
      double *ip = inp[ii];
      double *dp = dest[ii];
      size_t jj = 0;
      for (; jj < 4; ++jj) dp[jj] = ip[jj];
    }
  }
  
}


SWIGEXPORT jlong JNICALL Java_mixed_1types_mixed_1typesJNI_array_1d_1get(JNIEnv *jenv, jclass jcls) {
  jlong jresult = 0 ;
  double (*result)[4] = 0 ;
  
  (void)jenv;
  (void)jcls;
  result = (double (*)[4])(double (*)[4])array_d;
  *(double (**)[4])&jresult = result; 
  return jresult;
}


SWIGEXPORT void JNICALL Java_mixed_1types_mixed_1typesJNI_array_1struct_1set(JNIEnv *jenv, jclass jcls, jlong jarg1) {
  SimpleStruct (*arg1)[4] ;
  
  (void)jenv;
  (void)jcls;
  arg1 = *(SimpleStruct (**)[4])&jarg1; 
  {
    SimpleStruct (*inp)[4] = (SimpleStruct (*)[4])(arg1);
    SimpleStruct (*dest)[4] = (SimpleStruct (*)[4])(array_struct);
    size_t ii = 0;
    for (; ii < 2; ++ii) {
      SimpleStruct *ip = inp[ii];
      SimpleStruct *dp = dest[ii];
      size_t jj = 0;
      for (; jj < 4; ++jj) dp[jj] = ip[jj];
    }
  }
  
}


SWIGEXPORT jlong JNICALL Java_mixed_1types_mixed_1typesJNI_array_1struct_1get(JNIEnv *jenv, jclass jcls) {
  jlong jresult = 0 ;
  SimpleStruct (*result)[4] = 0 ;
  
  (void)jenv;
  (void)jcls;
  result = (SimpleStruct (*)[4])(SimpleStruct (*)[4])array_struct;
  *(SimpleStruct (**)[4])&jresult = result; 
  return jresult;
}


SWIGEXPORT void JNICALL Java_mixed_1types_mixed_1typesJNI_array_1structpointers_1set(JNIEnv *jenv, jclass jcls, jlong jarg1) {
  SimpleStruct *(*arg1)[4] ;
  
  (void)jenv;
  (void)jcls;
  arg1 = *(SimpleStruct *(**)[4])&jarg1; 
  {
    SimpleStruct * (*inp)[4] = (SimpleStruct * (*)[4])(arg1);
    SimpleStruct * (*dest)[4] = (SimpleStruct * (*)[4])(array_structpointers);
    size_t ii = 0;
    for (; ii < 2; ++ii) {
      SimpleStruct * *ip = inp[ii];
      SimpleStruct * *dp = dest[ii];
      size_t jj = 0;
      for (; jj < 4; ++jj) dp[jj] = ip[jj];
    }
  }
  
}


SWIGEXPORT jlong JNICALL Java_mixed_1types_mixed_1typesJNI_array_1structpointers_1get(JNIEnv *jenv, jclass jcls) {
  jlong jresult = 0 ;
  SimpleStruct *(*result)[4] = 0 ;
  
  (void)jenv;
  (void)jcls;
  result = (SimpleStruct *(*)[4])(SimpleStruct *(*)[4])array_structpointers;
  *(SimpleStruct *(**)[4])&jresult = result; 
  return jresult;
}


SWIGEXPORT void JNICALL Java_mixed_1types_mixed_1typesJNI_array_1ipointers_1set(JNIEnv *jenv, jclass jcls, jlong jarg1) {
  int *(*arg1)[4] ;
  
  (void)jenv;
  (void)jcls;
  arg1 = *(int *(**)[4])&jarg1; 
  {
    int * (*inp)[4] = (int * (*)[4])(arg1);
    int * (*dest)[4] = (int * (*)[4])(array_ipointers);
    size_t ii = 0;
    for (; ii < 2; ++ii) {
      int * *ip = inp[ii];
      int * *dp = dest[ii];
      size_t jj = 0;
      for (; jj < 4; ++jj) dp[jj] = ip[jj];
    }
  }
  
}


SWIGEXPORT jlong JNICALL Java_mixed_1types_mixed_1typesJNI_array_1ipointers_1get(JNIEnv *jenv, jclass jcls) {
  jlong jresult = 0 ;
  int *(*result)[4] = 0 ;
  
  (void)jenv;
  (void)jcls;
  result = (int *(*)[4])(int *(*)[4])array_ipointers;
  *(int *(**)[4])&jresult = result; 
  return jresult;
}


SWIGEXPORT void JNICALL Java_mixed_1types_mixed_1typesJNI_array_1enum_1set(JNIEnv *jenv, jclass jcls, jlong jarg1) {
  finger (*arg1)[4] ;
  
  (void)jenv;
  (void)jcls;
  arg1 = *(finger (**)[4])&jarg1; 
  {
    finger (*inp)[4] = (finger (*)[4])(arg1);
    finger (*dest)[4] = (finger (*)[4])(array_enum);
    size_t ii = 0;
    for (; ii < 2; ++ii) {
      finger *ip = inp[ii];
      finger *dp = dest[ii];
      size_t jj = 0;
      for (; jj < 4; ++jj) dp[jj] = ip[jj];
    }
  }
  
}


SWIGEXPORT jlong JNICALL Java_mixed_1types_mixed_1typesJNI_array_1enum_1get(JNIEnv *jenv, jclass jcls) {
  jlong jresult = 0 ;
  finger (*result)[4] = 0 ;
  
  (void)jenv;
  (void)jcls;
  result = (finger (*)[4])(finger (*)[4])array_enum;
  *(finger (**)[4])&jresult = result; 
  return jresult;
}


SWIGEXPORT void JNICALL Java_mixed_1types_mixed_1typesJNI_array_1enumpointers_1set(JNIEnv *jenv, jclass jcls, jlong jarg1) {
  finger *(*arg1)[4] ;
  
  (void)jenv;
  (void)jcls;
  arg1 = *(finger *(**)[4])&jarg1; 
  {
    finger * (*inp)[4] = (finger * (*)[4])(arg1);
    finger * (*dest)[4] = (finger * (*)[4])(array_enumpointers);
    size_t ii = 0;
    for (; ii < 2; ++ii) {
      finger * *ip = inp[ii];
      finger * *dp = dest[ii];
      size_t jj = 0;
      for (; jj < 4; ++jj) dp[jj] = ip[jj];
    }
  }
  
}


SWIGEXPORT jlong JNICALL Java_mixed_1types_mixed_1typesJNI_array_1enumpointers_1get(JNIEnv *jenv, jclass jcls) {
  jlong jresult = 0 ;
  finger *(*result)[4] = 0 ;
  
  (void)jenv;
  (void)jcls;
  result = (finger *(*)[4])(finger *(*)[4])array_enumpointers;
  *(finger *(**)[4])&jresult = result; 
  return jresult;
}


SWIGEXPORT jlong JNICALL Java_mixed_1types_mixed_1typesJNI_array_1const_1i_1get(JNIEnv *jenv, jclass jcls) {
  jlong jresult = 0 ;
  int (*result)[4] = 0 ;
  
  (void)jenv;
  (void)jcls;
  result = (int (*)[4])(int (*)[4])array_const_i;
  *(int (**)[4])&jresult = result; 
  return jresult;
}


SWIGEXPORT void JNICALL Java_mixed_1types_mixed_1typesJNI_fn_1taking_1arrays(JNIEnv *jenv, jclass jcls, jlong jarg1) {
  SimpleStruct (*arg1)[4] ;
  
  (void)jenv;
  (void)jcls;
  arg1 = *(SimpleStruct (**)[4])&jarg1; 
  fn_taking_arrays((SimpleStruct (*)[4])arg1);
  
}


SWIGEXPORT jint JNICALL Java_mixed_1types_mixed_1typesJNI_get_12d_1array(JNIEnv *jenv, jclass jcls, jlong jarg1, jint jarg2, jint jarg3) {
  jint jresult = 0 ;
  int (*arg1)[4] = (int (*)[4]) 0 ;
  int arg2 ;
  int arg3 ;
  int result;
  
  (void)jenv;
  (void)jcls;
  arg1 = *(int (**)[4])&jarg1; 
  arg2 = (int)jarg2; 
  arg3 = (int)jarg3; 
  result = (int)get_2d_array((int (*)[4])arg1,arg2,arg3);
  jresult = (jint)result; 
  return jresult;
}


#ifdef __cplusplus
}
#endif
