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


#if defined(__SUNPRO_CC)
#pragma error_messages (off, badargtype2w) /* Formal argument ... is being passed extern "C" ... */
#pragma error_messages (off, wbadinit) /* Using extern "C" ... to initialize ... */
#pragma error_messages (off, wbadasg) /* Assigning extern "C" ... */
#endif


class Shape {
public:
  Shape() {
    nshapes++;
  }
  virtual ~Shape() {
    nshapes--;
  };
  double  x, y;   
  double  *z;

  void    move(double dx, double dy);
  virtual double area(void) = 0;
  virtual double perimeter(void) = 0;
  static  int nshapes;
};

class Circle : public Shape {
private:
  double radius;
public:
  Circle(double r) : radius(r) { };
  virtual double area(void);
  virtual double perimeter(void);
};
  
class Square : public Shape {
private:
  double width;
public:
  Square(double w) : width(w) { };
  virtual double area(void);
  virtual double perimeter(void);
};

extern double do_op(Shape *s, double (Shape::*m)(void));

/* Functions that return member pointers */

extern double (Shape::*areapt())(void);
extern double (Shape::*perimeterpt())(void);

/* Global variables that are member pointers */
extern double (Shape::*areavar)(void);
extern double (Shape::*perimetervar)(void);



/* Unpack binary data from a string */
SWIGINTERN const char * SWIG_UnpackData(const char *c, void *ptr, size_t sz) {
  register unsigned char *u = (unsigned char *) ptr;
  register const unsigned char *eu = u + sz;
  for (; u != eu; ++u) {
    register char d = *(c++);
    register unsigned char uu;
    if ((d >= '0') && (d <= '9'))
      uu = ((d - '0') << 4);
    else if ((d >= 'a') && (d <= 'f'))
      uu = ((d - ('a'-10)) << 4);
    else 
      return (char *) 0;
    d = *(c++);
    if ((d >= '0') && (d <= '9'))
      uu |= (d - '0');
    else if ((d >= 'a') && (d <= 'f'))
      uu |= (d - ('a'-10));
    else 
      return (char *) 0;
    *u = uu;
  }
  return c;
}


/* Pack binary data into a string */
SWIGINTERN char * SWIG_PackData(char *c, void *ptr, size_t sz) {
  static const char hex[17] = "0123456789abcdef";
  register const unsigned char *u = (unsigned char *) ptr;
  register const unsigned char *eu =  u + sz;
  for (; u != eu; ++u) {
    register unsigned char uu = *u;
    *(c++) = hex[(uu & 0xf0) >> 4];
    *(c++) = hex[uu & 0xf];
  }
  return c;
}


#  define SWIG_M_PI 3.14159265358979323846

/* Move the shape to a new location */
void Shape::move(double dx, double dy) {
  x += dx;
  y += dy;
}

int Shape::nshapes = 0;

double Circle::area(void) {
  return SWIG_M_PI*radius*radius;
}

double Circle::perimeter(void) {
  return 2*SWIG_M_PI*radius;
}

double Square::area(void) {
  return width*width;
}

double Square::perimeter(void) {
  return 4*width;
}

double do_op(Shape *s, double (Shape::*m)(void)) {
  return (s->*m)();
}

double (Shape::*areapt())(void) {
  return &Shape::area;
}

double (Shape::*perimeterpt())(void) {
  return &Shape::perimeter;
}

/* Member pointer variables */
double (Shape::*areavar)(void) = &Shape::area;
double (Shape::*perimetervar)(void) = &Shape::perimeter;



struct Funktions {
  int addByValue(const int &a, int b) { return a+b; }
  int * addByPointer(const int &a, int b) { static int val; val = a+b; return &val; }
  int & addByReference(const int &a, int b) { static int val; val = a+b; return val; }
};

int call1(int (Funktions::*d)(const int &, int), int a, int b) { Funktions f; return (f.*d)(a, b); }
int call2(int * (Funktions::*d)(const int &, int), int a, int b) { Funktions f; return *(f.*d)(a, b); }
int call3(int & (Funktions::*d)(const int &, int), int a, int b) { Funktions f; return (f.*d)(a, b); }


#ifdef __cplusplus
extern "C" {
#endif

SWIGEXPORT void JNICALL Java_member_1pointer_member_1pointerJNI_delete_1Shape(JNIEnv *jenv, jclass jcls, jlong jarg1) {
  Shape *arg1 = (Shape *) 0 ;
  
  (void)jenv;
  (void)jcls;
  arg1 = *(Shape **)&jarg1; 
  delete arg1;
}


SWIGEXPORT void JNICALL Java_member_1pointer_member_1pointerJNI_Shape_1x_1set(JNIEnv *jenv, jclass jcls, jlong jarg1, jobject jarg1_, jdouble jarg2) {
  Shape *arg1 = (Shape *) 0 ;
  double arg2 ;
  
  (void)jenv;
  (void)jcls;
  (void)jarg1_;
  arg1 = *(Shape **)&jarg1; 
  arg2 = (double)jarg2; 
  if (arg1) (arg1)->x = arg2;
}


SWIGEXPORT jdouble JNICALL Java_member_1pointer_member_1pointerJNI_Shape_1x_1get(JNIEnv *jenv, jclass jcls, jlong jarg1, jobject jarg1_) {
  jdouble jresult = 0 ;
  Shape *arg1 = (Shape *) 0 ;
  double result;
  
  (void)jenv;
  (void)jcls;
  (void)jarg1_;
  arg1 = *(Shape **)&jarg1; 
  result = (double) ((arg1)->x);
  jresult = (jdouble)result; 
  return jresult;
}


SWIGEXPORT void JNICALL Java_member_1pointer_member_1pointerJNI_Shape_1y_1set(JNIEnv *jenv, jclass jcls, jlong jarg1, jobject jarg1_, jdouble jarg2) {
  Shape *arg1 = (Shape *) 0 ;
  double arg2 ;
  
  (void)jenv;
  (void)jcls;
  (void)jarg1_;
  arg1 = *(Shape **)&jarg1; 
  arg2 = (double)jarg2; 
  if (arg1) (arg1)->y = arg2;
}


SWIGEXPORT jdouble JNICALL Java_member_1pointer_member_1pointerJNI_Shape_1y_1get(JNIEnv *jenv, jclass jcls, jlong jarg1, jobject jarg1_) {
  jdouble jresult = 0 ;
  Shape *arg1 = (Shape *) 0 ;
  double result;
  
  (void)jenv;
  (void)jcls;
  (void)jarg1_;
  arg1 = *(Shape **)&jarg1; 
  result = (double) ((arg1)->y);
  jresult = (jdouble)result; 
  return jresult;
}


SWIGEXPORT void JNICALL Java_member_1pointer_member_1pointerJNI_Shape_1z_1set(JNIEnv *jenv, jclass jcls, jlong jarg1, jobject jarg1_, jlong jarg2) {
  Shape *arg1 = (Shape *) 0 ;
  double *arg2 = (double *) 0 ;
  
  (void)jenv;
  (void)jcls;
  (void)jarg1_;
  arg1 = *(Shape **)&jarg1; 
  arg2 = *(double **)&jarg2; 
  if (arg1) (arg1)->z = arg2;
}


SWIGEXPORT jlong JNICALL Java_member_1pointer_member_1pointerJNI_Shape_1z_1get(JNIEnv *jenv, jclass jcls, jlong jarg1, jobject jarg1_) {
  jlong jresult = 0 ;
  Shape *arg1 = (Shape *) 0 ;
  double *result = 0 ;
  
  (void)jenv;
  (void)jcls;
  (void)jarg1_;
  arg1 = *(Shape **)&jarg1; 
  result = (double *) ((arg1)->z);
  *(double **)&jresult = result; 
  return jresult;
}


SWIGEXPORT void JNICALL Java_member_1pointer_member_1pointerJNI_Shape_1move(JNIEnv *jenv, jclass jcls, jlong jarg1, jobject jarg1_, jdouble jarg2, jdouble jarg3) {
  Shape *arg1 = (Shape *) 0 ;
  double arg2 ;
  double arg3 ;
  
  (void)jenv;
  (void)jcls;
  (void)jarg1_;
  arg1 = *(Shape **)&jarg1; 
  arg2 = (double)jarg2; 
  arg3 = (double)jarg3; 
  (arg1)->move(arg2,arg3);
}


SWIGEXPORT jdouble JNICALL Java_member_1pointer_member_1pointerJNI_Shape_1area(JNIEnv *jenv, jclass jcls, jlong jarg1, jobject jarg1_) {
  jdouble jresult = 0 ;
  Shape *arg1 = (Shape *) 0 ;
  double result;
  
  (void)jenv;
  (void)jcls;
  (void)jarg1_;
  arg1 = *(Shape **)&jarg1; 
  result = (double)(arg1)->area();
  jresult = (jdouble)result; 
  return jresult;
}


SWIGEXPORT jdouble JNICALL Java_member_1pointer_member_1pointerJNI_Shape_1perimeter(JNIEnv *jenv, jclass jcls, jlong jarg1, jobject jarg1_) {
  jdouble jresult = 0 ;
  Shape *arg1 = (Shape *) 0 ;
  double result;
  
  (void)jenv;
  (void)jcls;
  (void)jarg1_;
  arg1 = *(Shape **)&jarg1; 
  result = (double)(arg1)->perimeter();
  jresult = (jdouble)result; 
  return jresult;
}


SWIGEXPORT void JNICALL Java_member_1pointer_member_1pointerJNI_Shape_1nshapes_1set(JNIEnv *jenv, jclass jcls, jint jarg1) {
  int arg1 ;
  
  (void)jenv;
  (void)jcls;
  arg1 = (int)jarg1; 
  Shape::nshapes = arg1;
}


SWIGEXPORT jint JNICALL Java_member_1pointer_member_1pointerJNI_Shape_1nshapes_1get(JNIEnv *jenv, jclass jcls) {
  jint jresult = 0 ;
  int result;
  
  (void)jenv;
  (void)jcls;
  result = (int)Shape::nshapes;
  jresult = (jint)result; 
  return jresult;
}


SWIGEXPORT jlong JNICALL Java_member_1pointer_member_1pointerJNI_new_1Circle(JNIEnv *jenv, jclass jcls, jdouble jarg1) {
  jlong jresult = 0 ;
  double arg1 ;
  Circle *result = 0 ;
  
  (void)jenv;
  (void)jcls;
  arg1 = (double)jarg1; 
  result = (Circle *)new Circle(arg1);
  *(Circle **)&jresult = result; 
  return jresult;
}


SWIGEXPORT jdouble JNICALL Java_member_1pointer_member_1pointerJNI_Circle_1area(JNIEnv *jenv, jclass jcls, jlong jarg1, jobject jarg1_) {
  jdouble jresult = 0 ;
  Circle *arg1 = (Circle *) 0 ;
  double result;
  
  (void)jenv;
  (void)jcls;
  (void)jarg1_;
  arg1 = *(Circle **)&jarg1; 
  result = (double)(arg1)->area();
  jresult = (jdouble)result; 
  return jresult;
}


SWIGEXPORT jdouble JNICALL Java_member_1pointer_member_1pointerJNI_Circle_1perimeter(JNIEnv *jenv, jclass jcls, jlong jarg1, jobject jarg1_) {
  jdouble jresult = 0 ;
  Circle *arg1 = (Circle *) 0 ;
  double result;
  
  (void)jenv;
  (void)jcls;
  (void)jarg1_;
  arg1 = *(Circle **)&jarg1; 
  result = (double)(arg1)->perimeter();
  jresult = (jdouble)result; 
  return jresult;
}


SWIGEXPORT void JNICALL Java_member_1pointer_member_1pointerJNI_delete_1Circle(JNIEnv *jenv, jclass jcls, jlong jarg1) {
  Circle *arg1 = (Circle *) 0 ;
  
  (void)jenv;
  (void)jcls;
  arg1 = *(Circle **)&jarg1; 
  delete arg1;
}


SWIGEXPORT jlong JNICALL Java_member_1pointer_member_1pointerJNI_new_1Square(JNIEnv *jenv, jclass jcls, jdouble jarg1) {
  jlong jresult = 0 ;
  double arg1 ;
  Square *result = 0 ;
  
  (void)jenv;
  (void)jcls;
  arg1 = (double)jarg1; 
  result = (Square *)new Square(arg1);
  *(Square **)&jresult = result; 
  return jresult;
}


SWIGEXPORT jdouble JNICALL Java_member_1pointer_member_1pointerJNI_Square_1area(JNIEnv *jenv, jclass jcls, jlong jarg1, jobject jarg1_) {
  jdouble jresult = 0 ;
  Square *arg1 = (Square *) 0 ;
  double result;
  
  (void)jenv;
  (void)jcls;
  (void)jarg1_;
  arg1 = *(Square **)&jarg1; 
  result = (double)(arg1)->area();
  jresult = (jdouble)result; 
  return jresult;
}


SWIGEXPORT jdouble JNICALL Java_member_1pointer_member_1pointerJNI_Square_1perimeter(JNIEnv *jenv, jclass jcls, jlong jarg1, jobject jarg1_) {
  jdouble jresult = 0 ;
  Square *arg1 = (Square *) 0 ;
  double result;
  
  (void)jenv;
  (void)jcls;
  (void)jarg1_;
  arg1 = *(Square **)&jarg1; 
  result = (double)(arg1)->perimeter();
  jresult = (jdouble)result; 
  return jresult;
}


SWIGEXPORT void JNICALL Java_member_1pointer_member_1pointerJNI_delete_1Square(JNIEnv *jenv, jclass jcls, jlong jarg1) {
  Square *arg1 = (Square *) 0 ;
  
  (void)jenv;
  (void)jcls;
  arg1 = *(Square **)&jarg1; 
  delete arg1;
}


SWIGEXPORT jdouble JNICALL Java_member_1pointer_member_1pointerJNI_do_1op(JNIEnv *jenv, jclass jcls, jlong jarg1, jobject jarg1_, jstring jarg2) {
  jdouble jresult = 0 ;
  Shape *arg1 = (Shape *) 0 ;
  double (Shape::*arg2)(void) ;
  double result;
  
  (void)jenv;
  (void)jcls;
  (void)jarg1_;
  arg1 = *(Shape **)&jarg1; 
  {
    const char *temp = 0;
    if (jarg2) {
      temp = jenv->GetStringUTFChars(jarg2, 0);
      if (!temp) return 0;
    }
    SWIG_UnpackData(temp, (void *)&arg2, sizeof(arg2));
  }
  result = (double)do_op(arg1,arg2);
  jresult = (jdouble)result; 
  return jresult;
}


SWIGEXPORT jstring JNICALL Java_member_1pointer_member_1pointerJNI_areapt(JNIEnv *jenv, jclass jcls) {
  jstring jresult = 0 ;
  double (Shape::*result)(void);
  
  (void)jenv;
  (void)jcls;
  result = (double (Shape::*)(void))areapt();
  char buf[128];
  char *data = SWIG_PackData(buf, (void *)&result, sizeof(result));
  *data = '\0';
  jresult = jenv->NewStringUTF(buf);
  return jresult;
}


SWIGEXPORT jstring JNICALL Java_member_1pointer_member_1pointerJNI_perimeterpt(JNIEnv *jenv, jclass jcls) {
  jstring jresult = 0 ;
  double (Shape::*result)(void);
  
  (void)jenv;
  (void)jcls;
  result = (double (Shape::*)(void))perimeterpt();
  char buf[128];
  char *data = SWIG_PackData(buf, (void *)&result, sizeof(result));
  *data = '\0';
  jresult = jenv->NewStringUTF(buf);
  return jresult;
}


SWIGEXPORT void JNICALL Java_member_1pointer_member_1pointerJNI_areavar_1set(JNIEnv *jenv, jclass jcls, jstring jarg1) {
  double (Shape::*arg1)(void) ;
  
  (void)jenv;
  (void)jcls;
  {
    const char *temp = 0;
    if (jarg1) {
      temp = jenv->GetStringUTFChars(jarg1, 0);
      if (!temp) return ;
    }
    SWIG_UnpackData(temp, (void *)&arg1, sizeof(arg1));
  }
  areavar = arg1;
}


SWIGEXPORT jstring JNICALL Java_member_1pointer_member_1pointerJNI_areavar_1get(JNIEnv *jenv, jclass jcls) {
  jstring jresult = 0 ;
  double (Shape::*result)(void);
  
  (void)jenv;
  (void)jcls;
  result = (double (Shape::*)(void))areavar;
  char buf[128];
  char *data = SWIG_PackData(buf, (void *)&result, sizeof(result));
  *data = '\0';
  jresult = jenv->NewStringUTF(buf);
  return jresult;
}


SWIGEXPORT void JNICALL Java_member_1pointer_member_1pointerJNI_perimetervar_1set(JNIEnv *jenv, jclass jcls, jstring jarg1) {
  double (Shape::*arg1)(void) ;
  
  (void)jenv;
  (void)jcls;
  {
    const char *temp = 0;
    if (jarg1) {
      temp = jenv->GetStringUTFChars(jarg1, 0);
      if (!temp) return ;
    }
    SWIG_UnpackData(temp, (void *)&arg1, sizeof(arg1));
  }
  perimetervar = arg1;
}


SWIGEXPORT jstring JNICALL Java_member_1pointer_member_1pointerJNI_perimetervar_1get(JNIEnv *jenv, jclass jcls) {
  jstring jresult = 0 ;
  double (Shape::*result)(void);
  
  (void)jenv;
  (void)jcls;
  result = (double (Shape::*)(void))perimetervar;
  char buf[128];
  char *data = SWIG_PackData(buf, (void *)&result, sizeof(result));
  *data = '\0';
  jresult = jenv->NewStringUTF(buf);
  return jresult;
}


SWIGEXPORT jstring JNICALL Java_member_1pointer_member_1pointerJNI_AREAPT_1get(JNIEnv *jenv, jclass jcls) {
  jstring jresult = 0 ;
  double (Shape::*result)(void);
  
  (void)jenv;
  (void)jcls;
  result = (double (Shape::*)(void))(&Shape::area);
  char buf[128];
  char *data = SWIG_PackData(buf, (void *)&result, sizeof(result));
  *data = '\0';
  jresult = jenv->NewStringUTF(buf);
  return jresult;
}


SWIGEXPORT jstring JNICALL Java_member_1pointer_member_1pointerJNI_PERIMPT_1get(JNIEnv *jenv, jclass jcls) {
  jstring jresult = 0 ;
  double (Shape::*result)(void);
  
  (void)jenv;
  (void)jcls;
  result = (double (Shape::*)(void))(&Shape::perimeter);
  char buf[128];
  char *data = SWIG_PackData(buf, (void *)&result, sizeof(result));
  *data = '\0';
  jresult = jenv->NewStringUTF(buf);
  return jresult;
}


SWIGEXPORT jstring JNICALL Java_member_1pointer_member_1pointerJNI_NULLPT_1get(JNIEnv *jenv, jclass jcls) {
  jstring jresult = 0 ;
  double (Shape::*result)(void);
  
  (void)jenv;
  (void)jcls;
  result = (double (Shape::*)(void))(0);
  char buf[128];
  char *data = SWIG_PackData(buf, (void *)&result, sizeof(result));
  *data = '\0';
  jresult = jenv->NewStringUTF(buf);
  return jresult;
}


SWIGEXPORT jint JNICALL Java_member_1pointer_member_1pointerJNI_Funktions_1addByValue(JNIEnv *jenv, jclass jcls, jlong jarg1, jobject jarg1_, jint jarg2, jint jarg3) {
  jint jresult = 0 ;
  Funktions *arg1 = (Funktions *) 0 ;
  int *arg2 = 0 ;
  int arg3 ;
  int temp2 ;
  int result;
  
  (void)jenv;
  (void)jcls;
  (void)jarg1_;
  arg1 = *(Funktions **)&jarg1; 
  temp2 = (int)jarg2; 
  arg2 = &temp2; 
  arg3 = (int)jarg3; 
  result = (int)(arg1)->addByValue((int const &)*arg2,arg3);
  jresult = (jint)result; 
  return jresult;
}


SWIGEXPORT jlong JNICALL Java_member_1pointer_member_1pointerJNI_Funktions_1addByPointer(JNIEnv *jenv, jclass jcls, jlong jarg1, jobject jarg1_, jint jarg2, jint jarg3) {
  jlong jresult = 0 ;
  Funktions *arg1 = (Funktions *) 0 ;
  int *arg2 = 0 ;
  int arg3 ;
  int temp2 ;
  int *result = 0 ;
  
  (void)jenv;
  (void)jcls;
  (void)jarg1_;
  arg1 = *(Funktions **)&jarg1; 
  temp2 = (int)jarg2; 
  arg2 = &temp2; 
  arg3 = (int)jarg3; 
  result = (int *)(arg1)->addByPointer((int const &)*arg2,arg3);
  *(int **)&jresult = result; 
  return jresult;
}


SWIGEXPORT jlong JNICALL Java_member_1pointer_member_1pointerJNI_Funktions_1addByReference(JNIEnv *jenv, jclass jcls, jlong jarg1, jobject jarg1_, jint jarg2, jint jarg3) {
  jlong jresult = 0 ;
  Funktions *arg1 = (Funktions *) 0 ;
  int *arg2 = 0 ;
  int arg3 ;
  int temp2 ;
  int *result = 0 ;
  
  (void)jenv;
  (void)jcls;
  (void)jarg1_;
  arg1 = *(Funktions **)&jarg1; 
  temp2 = (int)jarg2; 
  arg2 = &temp2; 
  arg3 = (int)jarg3; 
  result = (int *) &(arg1)->addByReference((int const &)*arg2,arg3);
  *(int **)&jresult = result; 
  return jresult;
}


SWIGEXPORT jlong JNICALL Java_member_1pointer_member_1pointerJNI_new_1Funktions(JNIEnv *jenv, jclass jcls) {
  jlong jresult = 0 ;
  Funktions *result = 0 ;
  
  (void)jenv;
  (void)jcls;
  result = (Funktions *)new Funktions();
  *(Funktions **)&jresult = result; 
  return jresult;
}


SWIGEXPORT void JNICALL Java_member_1pointer_member_1pointerJNI_delete_1Funktions(JNIEnv *jenv, jclass jcls, jlong jarg1) {
  Funktions *arg1 = (Funktions *) 0 ;
  
  (void)jenv;
  (void)jcls;
  arg1 = *(Funktions **)&jarg1; 
  delete arg1;
}


SWIGEXPORT jint JNICALL Java_member_1pointer_member_1pointerJNI_call1(JNIEnv *jenv, jclass jcls, jstring jarg1, jint jarg2, jint jarg3) {
  jint jresult = 0 ;
  int (Funktions::*arg1)(int const &,int) ;
  int arg2 ;
  int arg3 ;
  int result;
  
  (void)jenv;
  (void)jcls;
  {
    const char *temp = 0;
    if (jarg1) {
      temp = jenv->GetStringUTFChars(jarg1, 0);
      if (!temp) return 0;
    }
    SWIG_UnpackData(temp, (void *)&arg1, sizeof(arg1));
  }
  arg2 = (int)jarg2; 
  arg3 = (int)jarg3; 
  result = (int)call1(arg1,arg2,arg3);
  jresult = (jint)result; 
  return jresult;
}


SWIGEXPORT jint JNICALL Java_member_1pointer_member_1pointerJNI_call2(JNIEnv *jenv, jclass jcls, jstring jarg1, jint jarg2, jint jarg3) {
  jint jresult = 0 ;
  int *(Funktions::*arg1)(int const &,int) ;
  int arg2 ;
  int arg3 ;
  int result;
  
  (void)jenv;
  (void)jcls;
  {
    const char *temp = 0;
    if (jarg1) {
      temp = jenv->GetStringUTFChars(jarg1, 0);
      if (!temp) return 0;
    }
    SWIG_UnpackData(temp, (void *)&arg1, sizeof(arg1));
  }
  arg2 = (int)jarg2; 
  arg3 = (int)jarg3; 
  result = (int)call2(arg1,arg2,arg3);
  jresult = (jint)result; 
  return jresult;
}


SWIGEXPORT jint JNICALL Java_member_1pointer_member_1pointerJNI_call3(JNIEnv *jenv, jclass jcls, jstring jarg1, jint jarg2, jint jarg3) {
  jint jresult = 0 ;
  int &(Funktions::*arg1)(int const &,int) ;
  int arg2 ;
  int arg3 ;
  int result;
  
  (void)jenv;
  (void)jcls;
  {
    const char *temp = 0;
    if (jarg1) {
      temp = jenv->GetStringUTFChars(jarg1, 0);
      if (!temp) return 0;
    }
    SWIG_UnpackData(temp, (void *)&arg1, sizeof(arg1));
  }
  arg2 = (int)jarg2; 
  arg3 = (int)jarg3; 
  result = (int)call3(arg1,arg2,arg3);
  jresult = (jint)result; 
  return jresult;
}


SWIGEXPORT jstring JNICALL Java_member_1pointer_member_1pointerJNI_ADD_1BY_1VALUE_1get(JNIEnv *jenv, jclass jcls) {
  jstring jresult = 0 ;
  int (Funktions::*result)(int const &,int);
  
  (void)jenv;
  (void)jcls;
  result = (int (Funktions::*)(int const &,int))(&Funktions::addByValue);
  char buf[128];
  char *data = SWIG_PackData(buf, (void *)&result, sizeof(result));
  *data = '\0';
  jresult = jenv->NewStringUTF(buf);
  return jresult;
}


SWIGEXPORT jstring JNICALL Java_member_1pointer_member_1pointerJNI_ADD_1BY_1POINTER_1get(JNIEnv *jenv, jclass jcls) {
  jstring jresult = 0 ;
  int *(Funktions::*result)(int const &,int);
  
  (void)jenv;
  (void)jcls;
  result = (int *(Funktions::*)(int const &,int))(&Funktions::addByPointer);
  char buf[128];
  char *data = SWIG_PackData(buf, (void *)&result, sizeof(result));
  *data = '\0';
  jresult = jenv->NewStringUTF(buf);
  return jresult;
}


SWIGEXPORT jstring JNICALL Java_member_1pointer_member_1pointerJNI_ADD_1BY_1REFERENCE_1get(JNIEnv *jenv, jclass jcls) {
  jstring jresult = 0 ;
  int &(Funktions::*result)(int const &,int);
  
  (void)jenv;
  (void)jcls;
  result = (int &(Funktions::*)(int const &,int))(&Funktions::addByReference);
  char buf[128];
  char *data = SWIG_PackData(buf, (void *)&result, sizeof(result));
  *data = '\0';
  jresult = jenv->NewStringUTF(buf);
  return jresult;
}


SWIGEXPORT jlong JNICALL Java_member_1pointer_member_1pointerJNI_Circle_1SWIGUpcast(JNIEnv *jenv, jclass jcls, jlong jarg1) {
    jlong baseptr = 0;
    (void)jenv;
    (void)jcls;
    *(Shape **)&baseptr = *(Circle **)&jarg1;
    return baseptr;
}

SWIGEXPORT jlong JNICALL Java_member_1pointer_member_1pointerJNI_Square_1SWIGUpcast(JNIEnv *jenv, jclass jcls, jlong jarg1) {
    jlong baseptr = 0;
    (void)jenv;
    (void)jcls;
    *(Shape **)&baseptr = *(Square **)&jarg1;
    return baseptr;
}

#ifdef __cplusplus
}
#endif

