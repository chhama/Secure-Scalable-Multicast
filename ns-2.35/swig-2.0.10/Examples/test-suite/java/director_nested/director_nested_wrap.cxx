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
#define SWIG_DIRECTORS


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

/* -----------------------------------------------------------------------------
 * director.swg
 *
 * This file contains support for director classes that proxy
 * method calls from C++ to Java extensions.
 * ----------------------------------------------------------------------------- */

#ifdef __cplusplus

#if defined(DEBUG_DIRECTOR_OWNED)
#include <iostream>
#endif

namespace Swig {
  /* Java object wrapper */
  class JObjectWrapper {
  public:
    JObjectWrapper() : jthis_(NULL), weak_global_(true) {
    }

    ~JObjectWrapper() {
      jthis_ = NULL;
      weak_global_ = true;
    }

    bool set(JNIEnv *jenv, jobject jobj, bool mem_own, bool weak_global) {
      if (!jthis_) {
        weak_global_ = weak_global || !mem_own; // hold as weak global if explicitly requested or not owned
        if (jobj)
          jthis_ = weak_global_ ? jenv->NewWeakGlobalRef(jobj) : jenv->NewGlobalRef(jobj);
#if defined(DEBUG_DIRECTOR_OWNED)
        std::cout << "JObjectWrapper::set(" << jobj << ", " << (weak_global ? "weak_global" : "global_ref") << ") -> " << jthis_ << std::endl;
#endif
        return true;
      } else {
#if defined(DEBUG_DIRECTOR_OWNED)
        std::cout << "JObjectWrapper::set(" << jobj << ", " << (weak_global ? "weak_global" : "global_ref") << ") -> already set" << std::endl;
#endif
        return false;
      }
    }

    jobject get(JNIEnv *jenv) const {
#if defined(DEBUG_DIRECTOR_OWNED)
      std::cout << "JObjectWrapper::get(";
      if (jthis_)
        std::cout << jthis_;
      else
        std::cout << "null";
      std::cout << ") -> return new local ref" << std::endl;
#endif
      return (jthis_ ? jenv->NewLocalRef(jthis_) : jthis_);
    }

    void release(JNIEnv *jenv) {
#if defined(DEBUG_DIRECTOR_OWNED)
      std::cout << "JObjectWrapper::release(" << jthis_ << "): " << (weak_global_ ? "weak global ref" : "global ref") << std::endl;
#endif
      if (jthis_) {
        if (weak_global_) {
          if (jenv->IsSameObject(jthis_, NULL) == JNI_FALSE)
            jenv->DeleteWeakGlobalRef((jweak)jthis_);
        } else
          jenv->DeleteGlobalRef(jthis_);
      }

      jthis_ = NULL;
      weak_global_ = true;
    }

    /* Only call peek if you know what you are doing wrt to weak/global references */
    jobject peek() {
      return jthis_;
    }

    /* Java proxy releases ownership of C++ object, C++ object is now
       responsible for destruction (creates NewGlobalRef to pin Java
       proxy) */
    void java_change_ownership(JNIEnv *jenv, jobject jself, bool take_or_release) {
      if (take_or_release) {  /* Java takes ownership of C++ object's lifetime. */
        if (!weak_global_) {
          jenv->DeleteGlobalRef(jthis_);
          jthis_ = jenv->NewWeakGlobalRef(jself);
          weak_global_ = true;
        }
      } else { /* Java releases ownership of C++ object's lifetime */
        if (weak_global_) {
          jenv->DeleteWeakGlobalRef((jweak)jthis_);
          jthis_ = jenv->NewGlobalRef(jself);
          weak_global_ = false;
        }
      }
    }

  private:
    /* pointer to Java object */
    jobject jthis_;
    /* Local or global reference flag */
    bool weak_global_;
  };

  /* director base class */
  class Director {
    /* pointer to Java virtual machine */
    JavaVM *swig_jvm_;

  protected:
#if defined (_MSC_VER) && (_MSC_VER<1300)
    class JNIEnvWrapper;
    friend class JNIEnvWrapper;
#endif
    /* Utility class for managing the JNI environment */
    class JNIEnvWrapper {
      const Director *director_;
      JNIEnv *jenv_;
      int env_status;
    public:
      JNIEnvWrapper(const Director *director) : director_(director), jenv_(0), env_status(0) {
#if defined(__ANDROID__)
        JNIEnv **jenv = &jenv_;
#else
        void **jenv = (void **)&jenv_;
#endif
        env_status = director_->swig_jvm_->GetEnv((void **)&jenv_, JNI_VERSION_1_2);
#if defined(SWIG_JAVA_ATTACH_CURRENT_THREAD_AS_DAEMON)
        // Attach a daemon thread to the JVM. Useful when the JVM should not wait for 
        // the thread to exit upon shutdown. Only for jdk-1.4 and later.
        director_->swig_jvm_->AttachCurrentThreadAsDaemon(jenv, NULL);
#else
        director_->swig_jvm_->AttachCurrentThread(jenv, NULL);
#endif
      }
      ~JNIEnvWrapper() {
#if !defined(SWIG_JAVA_NO_DETACH_CURRENT_THREAD)
        // Some JVMs, eg jdk-1.4.2 and lower on Solaris have a bug and crash with the DetachCurrentThread call.
        // However, without this call, the JVM hangs on exit when the thread was not created by the JVM and creates a memory leak.
        if (env_status == JNI_EDETACHED)
          director_->swig_jvm_->DetachCurrentThread();
#endif
      }
      JNIEnv *getJNIEnv() const {
        return jenv_;
      }
    };

    /* Java object wrapper */
    JObjectWrapper swig_self_;

    /* Disconnect director from Java object */
    void swig_disconnect_director_self(const char *disconn_method) {
      JNIEnvWrapper jnienv(this) ;
      JNIEnv *jenv = jnienv.getJNIEnv() ;
      jobject jobj = swig_self_.get(jenv);
#if defined(DEBUG_DIRECTOR_OWNED)
      std::cout << "Swig::Director::disconnect_director_self(" << jobj << ")" << std::endl;
#endif
      if (jobj && jenv->IsSameObject(jobj, NULL) == JNI_FALSE) {
        jmethodID disconn_meth = jenv->GetMethodID(jenv->GetObjectClass(jobj), disconn_method, "()V");
        if (disconn_meth) {
#if defined(DEBUG_DIRECTOR_OWNED)
          std::cout << "Swig::Director::disconnect_director_self upcall to " << disconn_method << std::endl;
#endif
          jenv->CallVoidMethod(jobj, disconn_meth);
        }
      }
      jenv->DeleteLocalRef(jobj);
    }

  public:
    Director(JNIEnv *jenv) : swig_jvm_((JavaVM *) NULL), swig_self_() {
      /* Acquire the Java VM pointer */
      jenv->GetJavaVM(&swig_jvm_);
    }

    virtual ~Director() {
      JNIEnvWrapper jnienv(this) ;
      JNIEnv *jenv = jnienv.getJNIEnv() ;
      swig_self_.release(jenv);
    }

    bool swig_set_self(JNIEnv *jenv, jobject jself, bool mem_own, bool weak_global) {
      return swig_self_.set(jenv, jself, mem_own, weak_global);
    }

    jobject swig_get_self(JNIEnv *jenv) const {
      return swig_self_.get(jenv);
    }

    // Change C++ object's ownership, relative to Java
    void swig_java_change_ownership(JNIEnv *jenv, jobject jself, bool take_or_release) {
      swig_self_.java_change_ownership(jenv, jself, take_or_release);
    }
  };
}

#endif /* __cplusplus */


namespace Swig {
  namespace {
    jclass jclass_director_nestedJNI = NULL;
    jmethodID director_methids[7];
  }
}

#include <string>
#include <iostream>


#include <string>


  template <class C>
    class Foo {
    public:
      virtual ~Foo() {}
      
      std::string advance() 
      {
	return "Foo::advance;" + do_advance();
      }  

    protected:
      virtual std::string do_advance() = 0;
    };



  class Bar : public Foo<int>
  {
  public:
    
    std::string step() 
    {
      return "Bar::step;" + advance();    
    }
    
  protected:
    std::string do_advance() 
    {
      return "Bar::do_advance;" + do_step();
    }
    



    virtual std::string do_step() const = 0;



  };  
  
  template <class C>
    class FooBar : public Bar
    {
    public:
      virtual C get_value() const = 0;

      virtual const char * get_name() 
      {
	return "FooBar::get_name";
      }

      const char *name() 
      {
	return get_name();
      }
      
      static FooBar *get_self(FooBar *a)
      {
	return a;
      }
      
    };



/* ---------------------------------------------------
 * C++ director class methods
 * --------------------------------------------------- */

#include "director_nested_wrap.h"

SwigDirector_Foo_int::SwigDirector_Foo_int(JNIEnv *jenv) : Foo< int >(), Swig::Director(jenv) {
}

SwigDirector_Foo_int::~SwigDirector_Foo_int() {
  swig_disconnect_director_self("swigDirectorDisconnect");
}


std::string SwigDirector_Foo_int::do_advance() {
  std::string c_result ;
  jstring jresult = 0 ;
  JNIEnvWrapper swigjnienv(this) ;
  JNIEnv * jenv = swigjnienv.getJNIEnv() ;
  jobject swigjobj = (jobject) NULL ;
  
  if (!swig_override[0]) {
    SWIG_JavaThrowException(JNIEnvWrapper(this).getJNIEnv(), SWIG_JavaDirectorPureVirtual, "Attempted to invoke pure virtual method Foo< int >::do_advance.");
    return c_result;
  }
  swigjobj = swig_get_self(jenv);
  if (swigjobj && jenv->IsSameObject(swigjobj, NULL) == JNI_FALSE) {
    jresult = (jstring) jenv->CallStaticObjectMethod(Swig::jclass_director_nestedJNI, Swig::director_methids[0], swigjobj);
    if (jenv->ExceptionCheck() == JNI_TRUE) return c_result;
    if(!jresult) {
      SWIG_JavaThrowException(jenv, SWIG_JavaNullPointerException, "null string");
      return c_result;
    } 
    const char *c_result_pstr = (const char *)jenv->GetStringUTFChars(jresult, 0); 
    if (!c_result_pstr) return c_result;
    c_result.assign(c_result_pstr);
    jenv->ReleaseStringUTFChars(jresult, c_result_pstr); 
  } else {
    SWIG_JavaThrowException(jenv, SWIG_JavaNullPointerException, "null upcall object");
  }
  if (swigjobj) jenv->DeleteLocalRef(swigjobj);
  return c_result;
}

void SwigDirector_Foo_int::swig_connect_director(JNIEnv *jenv, jobject jself, jclass jcls, bool swig_mem_own, bool weak_global) {
  static struct {
    const char *mname;
    const char *mdesc;
    jmethodID base_methid;
  } methods[] = {
    {
      "do_advance", "()Ljava/lang/String;", NULL 
    }
  };
  
  static jclass baseclass = 0 ;
  
  if (swig_set_self(jenv, jself, swig_mem_own, weak_global)) {
    if (!baseclass) {
      baseclass = jenv->FindClass("director_nested/Foo_int");
      if (!baseclass) return;
      baseclass = (jclass) jenv->NewGlobalRef(baseclass);
    }
    bool derived = (jenv->IsSameObject(baseclass, jcls) ? false : true);
    for (int i = 0; i < 1; ++i) {
      if (!methods[i].base_methid) {
        methods[i].base_methid = jenv->GetMethodID(baseclass, methods[i].mname, methods[i].mdesc);
        if (!methods[i].base_methid) return;
      }
      swig_override[i] = false;
      if (derived) {
        jmethodID methid = jenv->GetMethodID(jcls, methods[i].mname, methods[i].mdesc);
        swig_override[i] = (methid != methods[i].base_methid);
        jenv->ExceptionClear();
      }
    }
  }
}


SwigDirector_Bar::SwigDirector_Bar(JNIEnv *jenv) : Bar(), Swig::Director(jenv) {
}

SwigDirector_Bar::~SwigDirector_Bar() {
  swig_disconnect_director_self("swigDirectorDisconnect");
}


std::string SwigDirector_Bar::do_advance() {
  std::string c_result ;
  jstring jresult = 0 ;
  JNIEnvWrapper swigjnienv(this) ;
  JNIEnv * jenv = swigjnienv.getJNIEnv() ;
  jobject swigjobj = (jobject) NULL ;
  
  if (!swig_override[0]) {
    return Bar::do_advance();
  }
  swigjobj = swig_get_self(jenv);
  if (swigjobj && jenv->IsSameObject(swigjobj, NULL) == JNI_FALSE) {
    jresult = (jstring) jenv->CallStaticObjectMethod(Swig::jclass_director_nestedJNI, Swig::director_methids[1], swigjobj);
    if (jenv->ExceptionCheck() == JNI_TRUE) return c_result;
    if(!jresult) {
      SWIG_JavaThrowException(jenv, SWIG_JavaNullPointerException, "null string");
      return c_result;
    } 
    const char *c_result_pstr = (const char *)jenv->GetStringUTFChars(jresult, 0); 
    if (!c_result_pstr) return c_result;
    c_result.assign(c_result_pstr);
    jenv->ReleaseStringUTFChars(jresult, c_result_pstr); 
  } else {
    SWIG_JavaThrowException(jenv, SWIG_JavaNullPointerException, "null upcall object");
  }
  if (swigjobj) jenv->DeleteLocalRef(swigjobj);
  return c_result;
}

std::string SwigDirector_Bar::do_step() const {
  std::string c_result ;
  jstring jresult = 0 ;
  JNIEnvWrapper swigjnienv(this) ;
  JNIEnv * jenv = swigjnienv.getJNIEnv() ;
  jobject swigjobj = (jobject) NULL ;
  
  if (!swig_override[1]) {
    SWIG_JavaThrowException(JNIEnvWrapper(this).getJNIEnv(), SWIG_JavaDirectorPureVirtual, "Attempted to invoke pure virtual method Bar::do_step.");
    return c_result;
  }
  swigjobj = swig_get_self(jenv);
  if (swigjobj && jenv->IsSameObject(swigjobj, NULL) == JNI_FALSE) {
    jresult = (jstring) jenv->CallStaticObjectMethod(Swig::jclass_director_nestedJNI, Swig::director_methids[2], swigjobj);
    if (jenv->ExceptionCheck() == JNI_TRUE) return c_result;
    if(!jresult) {
      SWIG_JavaThrowException(jenv, SWIG_JavaNullPointerException, "null string");
      return c_result;
    } 
    const char *c_result_pstr = (const char *)jenv->GetStringUTFChars(jresult, 0); 
    if (!c_result_pstr) return c_result;
    c_result.assign(c_result_pstr);
    jenv->ReleaseStringUTFChars(jresult, c_result_pstr); 
  } else {
    SWIG_JavaThrowException(jenv, SWIG_JavaNullPointerException, "null upcall object");
  }
  if (swigjobj) jenv->DeleteLocalRef(swigjobj);
  return c_result;
}

void SwigDirector_Bar::swig_connect_director(JNIEnv *jenv, jobject jself, jclass jcls, bool swig_mem_own, bool weak_global) {
  static struct {
    const char *mname;
    const char *mdesc;
    jmethodID base_methid;
  } methods[] = {
    {
      "do_advance", "()Ljava/lang/String;", NULL 
    },
    {
      "do_step", "()Ljava/lang/String;", NULL 
    }
  };
  
  static jclass baseclass = 0 ;
  
  if (swig_set_self(jenv, jself, swig_mem_own, weak_global)) {
    if (!baseclass) {
      baseclass = jenv->FindClass("director_nested/Bar");
      if (!baseclass) return;
      baseclass = (jclass) jenv->NewGlobalRef(baseclass);
    }
    bool derived = (jenv->IsSameObject(baseclass, jcls) ? false : true);
    for (int i = 0; i < 2; ++i) {
      if (!methods[i].base_methid) {
        methods[i].base_methid = jenv->GetMethodID(baseclass, methods[i].mname, methods[i].mdesc);
        if (!methods[i].base_methid) return;
      }
      swig_override[i] = false;
      if (derived) {
        jmethodID methid = jenv->GetMethodID(jcls, methods[i].mname, methods[i].mdesc);
        swig_override[i] = (methid != methods[i].base_methid);
        jenv->ExceptionClear();
      }
    }
  }
}


SwigDirector_FooBar_int::SwigDirector_FooBar_int(JNIEnv *jenv) : FooBar< int >(), Swig::Director(jenv) {
}

SwigDirector_FooBar_int::~SwigDirector_FooBar_int() {
  swig_disconnect_director_self("swigDirectorDisconnect");
}


std::string SwigDirector_FooBar_int::do_advance() {
  std::string c_result ;
  jstring jresult = 0 ;
  JNIEnvWrapper swigjnienv(this) ;
  JNIEnv * jenv = swigjnienv.getJNIEnv() ;
  jobject swigjobj = (jobject) NULL ;
  
  if (!swig_override[0]) {
    return Bar::do_advance();
  }
  swigjobj = swig_get_self(jenv);
  if (swigjobj && jenv->IsSameObject(swigjobj, NULL) == JNI_FALSE) {
    jresult = (jstring) jenv->CallStaticObjectMethod(Swig::jclass_director_nestedJNI, Swig::director_methids[3], swigjobj);
    if (jenv->ExceptionCheck() == JNI_TRUE) return c_result;
    if(!jresult) {
      SWIG_JavaThrowException(jenv, SWIG_JavaNullPointerException, "null string");
      return c_result;
    } 
    const char *c_result_pstr = (const char *)jenv->GetStringUTFChars(jresult, 0); 
    if (!c_result_pstr) return c_result;
    c_result.assign(c_result_pstr);
    jenv->ReleaseStringUTFChars(jresult, c_result_pstr); 
  } else {
    SWIG_JavaThrowException(jenv, SWIG_JavaNullPointerException, "null upcall object");
  }
  if (swigjobj) jenv->DeleteLocalRef(swigjobj);
  return c_result;
}

std::string SwigDirector_FooBar_int::do_step() const {
  std::string c_result ;
  jstring jresult = 0 ;
  JNIEnvWrapper swigjnienv(this) ;
  JNIEnv * jenv = swigjnienv.getJNIEnv() ;
  jobject swigjobj = (jobject) NULL ;
  
  if (!swig_override[1]) {
    SWIG_JavaThrowException(JNIEnvWrapper(this).getJNIEnv(), SWIG_JavaDirectorPureVirtual, "Attempted to invoke pure virtual method FooBar< int >::do_step.");
    return c_result;
  }
  swigjobj = swig_get_self(jenv);
  if (swigjobj && jenv->IsSameObject(swigjobj, NULL) == JNI_FALSE) {
    jresult = (jstring) jenv->CallStaticObjectMethod(Swig::jclass_director_nestedJNI, Swig::director_methids[4], swigjobj);
    if (jenv->ExceptionCheck() == JNI_TRUE) return c_result;
    if(!jresult) {
      SWIG_JavaThrowException(jenv, SWIG_JavaNullPointerException, "null string");
      return c_result;
    } 
    const char *c_result_pstr = (const char *)jenv->GetStringUTFChars(jresult, 0); 
    if (!c_result_pstr) return c_result;
    c_result.assign(c_result_pstr);
    jenv->ReleaseStringUTFChars(jresult, c_result_pstr); 
  } else {
    SWIG_JavaThrowException(jenv, SWIG_JavaNullPointerException, "null upcall object");
  }
  if (swigjobj) jenv->DeleteLocalRef(swigjobj);
  return c_result;
}

int SwigDirector_FooBar_int::get_value() const {
  int c_result = SwigValueInit< int >() ;
  jint jresult = 0 ;
  JNIEnvWrapper swigjnienv(this) ;
  JNIEnv * jenv = swigjnienv.getJNIEnv() ;
  jobject swigjobj = (jobject) NULL ;
  
  if (!swig_override[2]) {
    SWIG_JavaThrowException(JNIEnvWrapper(this).getJNIEnv(), SWIG_JavaDirectorPureVirtual, "Attempted to invoke pure virtual method FooBar< int >::get_value.");
    return c_result;
  }
  swigjobj = swig_get_self(jenv);
  if (swigjobj && jenv->IsSameObject(swigjobj, NULL) == JNI_FALSE) {
    jresult = (jint) jenv->CallStaticIntMethod(Swig::jclass_director_nestedJNI, Swig::director_methids[5], swigjobj);
    if (jenv->ExceptionCheck() == JNI_TRUE) return c_result;
    c_result = (int)jresult; 
  } else {
    SWIG_JavaThrowException(jenv, SWIG_JavaNullPointerException, "null upcall object");
  }
  if (swigjobj) jenv->DeleteLocalRef(swigjobj);
  return c_result;
}

char const *SwigDirector_FooBar_int::get_name() {
  char *c_result = 0 ;
  jstring jresult = 0 ;
  JNIEnvWrapper swigjnienv(this) ;
  JNIEnv * jenv = swigjnienv.getJNIEnv() ;
  jobject swigjobj = (jobject) NULL ;
  
  if (!swig_override[3]) {
    return FooBar< int >::get_name();
  }
  swigjobj = swig_get_self(jenv);
  if (swigjobj && jenv->IsSameObject(swigjobj, NULL) == JNI_FALSE) {
    jresult = (jstring) jenv->CallStaticObjectMethod(Swig::jclass_director_nestedJNI, Swig::director_methids[6], swigjobj);
    if (jenv->ExceptionCheck() == JNI_TRUE) return (char const *)c_result;
    c_result = 0;
    if (jresult) {
      c_result = (char *)jenv->GetStringUTFChars(jresult, 0);
      if (!c_result) return (char const *)c_result;
    }
  } else {
    SWIG_JavaThrowException(jenv, SWIG_JavaNullPointerException, "null upcall object");
  }
  if (swigjobj) jenv->DeleteLocalRef(swigjobj);
  return (char const *)c_result;
}

void SwigDirector_FooBar_int::swig_connect_director(JNIEnv *jenv, jobject jself, jclass jcls, bool swig_mem_own, bool weak_global) {
  static struct {
    const char *mname;
    const char *mdesc;
    jmethodID base_methid;
  } methods[] = {
    {
      "do_advance", "()Ljava/lang/String;", NULL 
    },
    {
      "do_step", "()Ljava/lang/String;", NULL 
    },
    {
      "get_value", "()I", NULL 
    },
    {
      "get_name", "()Ljava/lang/String;", NULL 
    }
  };
  
  static jclass baseclass = 0 ;
  
  if (swig_set_self(jenv, jself, swig_mem_own, weak_global)) {
    if (!baseclass) {
      baseclass = jenv->FindClass("director_nested/FooBar_int");
      if (!baseclass) return;
      baseclass = (jclass) jenv->NewGlobalRef(baseclass);
    }
    bool derived = (jenv->IsSameObject(baseclass, jcls) ? false : true);
    for (int i = 0; i < 4; ++i) {
      if (!methods[i].base_methid) {
        methods[i].base_methid = jenv->GetMethodID(baseclass, methods[i].mname, methods[i].mdesc);
        if (!methods[i].base_methid) return;
      }
      swig_override[i] = false;
      if (derived) {
        jmethodID methid = jenv->GetMethodID(jcls, methods[i].mname, methods[i].mdesc);
        swig_override[i] = (methid != methods[i].base_methid);
        jenv->ExceptionClear();
      }
    }
  }
}



#ifdef __cplusplus
extern "C" {
#endif

SWIGEXPORT void JNICALL Java_director_1nested_director_1nestedJNI_delete_1Foo_1int(JNIEnv *jenv, jclass jcls, jlong jarg1) {
  Foo< int > *arg1 = (Foo< int > *) 0 ;
  
  (void)jenv;
  (void)jcls;
  arg1 = *(Foo< int > **)&jarg1; 
  delete arg1;
}


SWIGEXPORT jstring JNICALL Java_director_1nested_director_1nestedJNI_Foo_1int_1advance(JNIEnv *jenv, jclass jcls, jlong jarg1, jobject jarg1_) {
  jstring jresult = 0 ;
  Foo< int > *arg1 = (Foo< int > *) 0 ;
  std::string result;
  
  (void)jenv;
  (void)jcls;
  (void)jarg1_;
  arg1 = *(Foo< int > **)&jarg1; 
  result = (arg1)->advance();
  jresult = jenv->NewStringUTF((&result)->c_str()); 
  return jresult;
}


SWIGEXPORT jstring JNICALL Java_director_1nested_director_1nestedJNI_Foo_1int_1do_1advance(JNIEnv *jenv, jclass jcls, jlong jarg1, jobject jarg1_) {
  jstring jresult = 0 ;
  Foo< int > *arg1 = (Foo< int > *) 0 ;
  SwigDirector_Foo_int *darg = 0;
  std::string result;
  
  (void)jenv;
  (void)jcls;
  (void)jarg1_;
  arg1 = *(Foo< int > **)&jarg1; 
  darg = dynamic_cast<SwigDirector_Foo_int *>(arg1);
  result = (darg)->do_advance();
  jresult = jenv->NewStringUTF((&result)->c_str()); 
  return jresult;
}


SWIGEXPORT jlong JNICALL Java_director_1nested_director_1nestedJNI_new_1Foo_1int(JNIEnv *jenv, jclass jcls) {
  jlong jresult = 0 ;
  Foo< int > *result = 0 ;
  
  (void)jenv;
  (void)jcls;
  result = (Foo< int > *)new SwigDirector_Foo_int(jenv);
  *(Foo< int > **)&jresult = result; 
  return jresult;
}


SWIGEXPORT void JNICALL Java_director_1nested_director_1nestedJNI_Foo_1int_1director_1connect(JNIEnv *jenv, jclass jcls, jobject jself, jlong objarg, jboolean jswig_mem_own, jboolean jweak_global) {
  Foo< int > *obj = *((Foo< int > **)&objarg);
  (void)jcls;
  SwigDirector_Foo_int *director = dynamic_cast<SwigDirector_Foo_int *>(obj);
  if (director) {
    director->swig_connect_director(jenv, jself, jenv->GetObjectClass(jself), (jswig_mem_own == JNI_TRUE), (jweak_global == JNI_TRUE));
  }
}


SWIGEXPORT void JNICALL Java_director_1nested_director_1nestedJNI_Foo_1int_1change_1ownership(JNIEnv *jenv, jclass jcls, jobject jself, jlong objarg, jboolean jtake_or_release) {
  Foo< int > *obj = *((Foo< int > **)&objarg);
  SwigDirector_Foo_int *director = dynamic_cast<SwigDirector_Foo_int *>(obj);
  (void)jcls;
  if (director) {
    director->swig_java_change_ownership(jenv, jself, jtake_or_release ? true : false);
  }
}


SWIGEXPORT jstring JNICALL Java_director_1nested_director_1nestedJNI_Bar_1step(JNIEnv *jenv, jclass jcls, jlong jarg1, jobject jarg1_) {
  jstring jresult = 0 ;
  Bar *arg1 = (Bar *) 0 ;
  std::string result;
  
  (void)jenv;
  (void)jcls;
  (void)jarg1_;
  arg1 = *(Bar **)&jarg1; 
  result = (arg1)->step();
  jresult = jenv->NewStringUTF((&result)->c_str()); 
  return jresult;
}


SWIGEXPORT jstring JNICALL Java_director_1nested_director_1nestedJNI_Bar_1do_1advance(JNIEnv *jenv, jclass jcls, jlong jarg1, jobject jarg1_) {
  jstring jresult = 0 ;
  Bar *arg1 = (Bar *) 0 ;
  SwigDirector_Bar *darg = 0;
  std::string result;
  
  (void)jenv;
  (void)jcls;
  (void)jarg1_;
  arg1 = *(Bar **)&jarg1; 
  darg = dynamic_cast<SwigDirector_Bar *>(arg1);
  result = (darg)->do_advance();
  jresult = jenv->NewStringUTF((&result)->c_str()); 
  return jresult;
}


SWIGEXPORT jstring JNICALL Java_director_1nested_director_1nestedJNI_Bar_1do_1advanceSwigExplicitBar(JNIEnv *jenv, jclass jcls, jlong jarg1, jobject jarg1_) {
  jstring jresult = 0 ;
  Bar *arg1 = (Bar *) 0 ;
  SwigDirector_Bar *darg = 0;
  std::string result;
  
  (void)jenv;
  (void)jcls;
  (void)jarg1_;
  arg1 = *(Bar **)&jarg1; 
  darg = dynamic_cast<SwigDirector_Bar *>(arg1);
  result = (darg)->do_advanceSwigPublic();
  jresult = jenv->NewStringUTF((&result)->c_str()); 
  return jresult;
}


SWIGEXPORT jstring JNICALL Java_director_1nested_director_1nestedJNI_Bar_1do_1step(JNIEnv *jenv, jclass jcls, jlong jarg1, jobject jarg1_) {
  jstring jresult = 0 ;
  Bar *arg1 = (Bar *) 0 ;
  SwigDirector_Bar *darg = 0;
  std::string result;
  
  (void)jenv;
  (void)jcls;
  (void)jarg1_;
  arg1 = *(Bar **)&jarg1; 
  darg = dynamic_cast<SwigDirector_Bar *>(arg1);
  result = ((SwigDirector_Bar const *)darg)->do_step();
  jresult = jenv->NewStringUTF((&result)->c_str()); 
  return jresult;
}


SWIGEXPORT jlong JNICALL Java_director_1nested_director_1nestedJNI_new_1Bar(JNIEnv *jenv, jclass jcls) {
  jlong jresult = 0 ;
  Bar *result = 0 ;
  
  (void)jenv;
  (void)jcls;
  result = (Bar *)new SwigDirector_Bar(jenv);
  *(Bar **)&jresult = result; 
  return jresult;
}


SWIGEXPORT void JNICALL Java_director_1nested_director_1nestedJNI_delete_1Bar(JNIEnv *jenv, jclass jcls, jlong jarg1) {
  Bar *arg1 = (Bar *) 0 ;
  
  (void)jenv;
  (void)jcls;
  arg1 = *(Bar **)&jarg1; 
  delete arg1;
}


SWIGEXPORT void JNICALL Java_director_1nested_director_1nestedJNI_Bar_1director_1connect(JNIEnv *jenv, jclass jcls, jobject jself, jlong objarg, jboolean jswig_mem_own, jboolean jweak_global) {
  Bar *obj = *((Bar **)&objarg);
  (void)jcls;
  SwigDirector_Bar *director = dynamic_cast<SwigDirector_Bar *>(obj);
  if (director) {
    director->swig_connect_director(jenv, jself, jenv->GetObjectClass(jself), (jswig_mem_own == JNI_TRUE), (jweak_global == JNI_TRUE));
  }
}


SWIGEXPORT void JNICALL Java_director_1nested_director_1nestedJNI_Bar_1change_1ownership(JNIEnv *jenv, jclass jcls, jobject jself, jlong objarg, jboolean jtake_or_release) {
  Bar *obj = *((Bar **)&objarg);
  SwigDirector_Bar *director = dynamic_cast<SwigDirector_Bar *>(obj);
  (void)jcls;
  if (director) {
    director->swig_java_change_ownership(jenv, jself, jtake_or_release ? true : false);
  }
}


SWIGEXPORT jint JNICALL Java_director_1nested_director_1nestedJNI_FooBar_1int_1get_1value(JNIEnv *jenv, jclass jcls, jlong jarg1, jobject jarg1_) {
  jint jresult = 0 ;
  FooBar< int > *arg1 = (FooBar< int > *) 0 ;
  int result;
  
  (void)jenv;
  (void)jcls;
  (void)jarg1_;
  arg1 = *(FooBar< int > **)&jarg1; 
  result = (int)((FooBar< int > const *)arg1)->get_value();
  jresult = (jint)result; 
  return jresult;
}


SWIGEXPORT jstring JNICALL Java_director_1nested_director_1nestedJNI_FooBar_1int_1get_1name(JNIEnv *jenv, jclass jcls, jlong jarg1, jobject jarg1_) {
  jstring jresult = 0 ;
  FooBar< int > *arg1 = (FooBar< int > *) 0 ;
  char *result = 0 ;
  
  (void)jenv;
  (void)jcls;
  (void)jarg1_;
  arg1 = *(FooBar< int > **)&jarg1; 
  result = (char *)(arg1)->get_name();
  if (result) jresult = jenv->NewStringUTF((const char *)result);
  return jresult;
}


SWIGEXPORT jstring JNICALL Java_director_1nested_director_1nestedJNI_FooBar_1int_1get_1nameSwigExplicitFooBar_1int(JNIEnv *jenv, jclass jcls, jlong jarg1, jobject jarg1_) {
  jstring jresult = 0 ;
  FooBar< int > *arg1 = (FooBar< int > *) 0 ;
  char *result = 0 ;
  
  (void)jenv;
  (void)jcls;
  (void)jarg1_;
  arg1 = *(FooBar< int > **)&jarg1; 
  result = (char *)(arg1)->FooBar< int >::get_name();
  if (result) jresult = jenv->NewStringUTF((const char *)result);
  return jresult;
}


SWIGEXPORT jstring JNICALL Java_director_1nested_director_1nestedJNI_FooBar_1int_1name(JNIEnv *jenv, jclass jcls, jlong jarg1, jobject jarg1_) {
  jstring jresult = 0 ;
  FooBar< int > *arg1 = (FooBar< int > *) 0 ;
  char *result = 0 ;
  
  (void)jenv;
  (void)jcls;
  (void)jarg1_;
  arg1 = *(FooBar< int > **)&jarg1; 
  result = (char *)(arg1)->name();
  if (result) jresult = jenv->NewStringUTF((const char *)result);
  return jresult;
}


SWIGEXPORT jlong JNICALL Java_director_1nested_director_1nestedJNI_FooBar_1int_1get_1self(JNIEnv *jenv, jclass jcls, jlong jarg1, jobject jarg1_) {
  jlong jresult = 0 ;
  FooBar< int > *arg1 = (FooBar< int > *) 0 ;
  FooBar< int > *result = 0 ;
  
  (void)jenv;
  (void)jcls;
  (void)jarg1_;
  arg1 = *(FooBar< int > **)&jarg1; 
  result = (FooBar< int > *)FooBar< int >::SWIGTEMPLATEDISAMBIGUATOR get_self(arg1);
  *(FooBar< int > **)&jresult = result; 
  return jresult;
}


SWIGEXPORT jlong JNICALL Java_director_1nested_director_1nestedJNI_new_1FooBar_1int(JNIEnv *jenv, jclass jcls) {
  jlong jresult = 0 ;
  FooBar< int > *result = 0 ;
  
  (void)jenv;
  (void)jcls;
  result = (FooBar< int > *)new SwigDirector_FooBar_int(jenv);
  *(FooBar< int > **)&jresult = result; 
  return jresult;
}


SWIGEXPORT void JNICALL Java_director_1nested_director_1nestedJNI_delete_1FooBar_1int(JNIEnv *jenv, jclass jcls, jlong jarg1) {
  FooBar< int > *arg1 = (FooBar< int > *) 0 ;
  
  (void)jenv;
  (void)jcls;
  arg1 = *(FooBar< int > **)&jarg1; 
  delete arg1;
}


SWIGEXPORT void JNICALL Java_director_1nested_director_1nestedJNI_FooBar_1int_1director_1connect(JNIEnv *jenv, jclass jcls, jobject jself, jlong objarg, jboolean jswig_mem_own, jboolean jweak_global) {
  FooBar< int > *obj = *((FooBar< int > **)&objarg);
  (void)jcls;
  SwigDirector_FooBar_int *director = dynamic_cast<SwigDirector_FooBar_int *>(obj);
  if (director) {
    director->swig_connect_director(jenv, jself, jenv->GetObjectClass(jself), (jswig_mem_own == JNI_TRUE), (jweak_global == JNI_TRUE));
  }
}


SWIGEXPORT void JNICALL Java_director_1nested_director_1nestedJNI_FooBar_1int_1change_1ownership(JNIEnv *jenv, jclass jcls, jobject jself, jlong objarg, jboolean jtake_or_release) {
  FooBar< int > *obj = *((FooBar< int > **)&objarg);
  SwigDirector_FooBar_int *director = dynamic_cast<SwigDirector_FooBar_int *>(obj);
  (void)jcls;
  if (director) {
    director->swig_java_change_ownership(jenv, jself, jtake_or_release ? true : false);
  }
}


SWIGEXPORT jlong JNICALL Java_director_1nested_director_1nestedJNI_Bar_1SWIGUpcast(JNIEnv *jenv, jclass jcls, jlong jarg1) {
    jlong baseptr = 0;
    (void)jenv;
    (void)jcls;
    *(Foo< int > **)&baseptr = *(Bar **)&jarg1;
    return baseptr;
}

SWIGEXPORT jlong JNICALL Java_director_1nested_director_1nestedJNI_FooBar_1int_1SWIGUpcast(JNIEnv *jenv, jclass jcls, jlong jarg1) {
    jlong baseptr = 0;
    (void)jenv;
    (void)jcls;
    *(Bar **)&baseptr = *(FooBar< int > **)&jarg1;
    return baseptr;
}

SWIGEXPORT void JNICALL Java_director_1nested_director_1nestedJNI_swig_1module_1init(JNIEnv *jenv, jclass jcls) {
  int i;
  
  static struct {
    const char *method;
    const char *signature;
  } methods[7] = {
    {
      "SwigDirector_Foo_int_do_advance", "(Ldirector_nested/Foo_int;)Ljava/lang/String;" 
    },
    {
      "SwigDirector_Bar_do_advance", "(Ldirector_nested/Bar;)Ljava/lang/String;" 
    },
    {
      "SwigDirector_Bar_do_step", "(Ldirector_nested/Bar;)Ljava/lang/String;" 
    },
    {
      "SwigDirector_FooBar_int_do_advance", "(Ldirector_nested/FooBar_int;)Ljava/lang/String;" 
    },
    {
      "SwigDirector_FooBar_int_do_step", "(Ldirector_nested/FooBar_int;)Ljava/lang/String;" 
    },
    {
      "SwigDirector_FooBar_int_get_value", "(Ldirector_nested/FooBar_int;)I" 
    },
    {
      "SwigDirector_FooBar_int_get_name", "(Ldirector_nested/FooBar_int;)Ljava/lang/String;" 
    }
  };
  Swig::jclass_director_nestedJNI = (jclass) jenv->NewGlobalRef(jcls);
  if (!Swig::jclass_director_nestedJNI) return;
  for (i = 0; i < (int) (sizeof(methods)/sizeof(methods[0])); ++i) {
    Swig::director_methids[i] = jenv->GetStaticMethodID(jcls, methods[i].method, methods[i].signature);
    if (!Swig::director_methids[i]) return;
  }
}


#ifdef __cplusplus
}
#endif

