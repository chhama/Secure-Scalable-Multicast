/* ----------------------------------------------------------------------------
 * This file was automatically generated by SWIG (http://www.swig.org).
 * Version 2.0.10
 * 
 * This file is not intended to be easily readable and contains a number of 
 * coding conventions designed to improve portability and efficiency. Do not make
 * changes to this file unless you know what you are doing--modify the SWIG 
 * interface file instead. 
 * ----------------------------------------------------------------------------- */

#ifndef SWIG_director_ignore_WRAP_H_
#define SWIG_director_ignore_WRAP_H_

class SwigDirector_DIgnores : public DIgnores, public Swig::Director {

public:
    void swig_connect_director(JNIEnv *jenv, jobject jself, jclass jcls, bool swig_mem_own, bool weak_global);
    SwigDirector_DIgnores(JNIEnv *jenv);
    virtual ~SwigDirector_DIgnores();
    virtual void OverloadedMethod(int n, int xoffset = 0, int yoffset = 0);
    virtual void OverloadedMethod(bool b);
    virtual int Triple(int n);
    virtual int &References(int &n);
    virtual int *Pointers(int *n);
    virtual double PublicMethod1();
    virtual double PublicPureVirtualMethod1();
    virtual void PublicMethod2();
    virtual void PublicPureVirtualMethod2();
    virtual void TempMethod();
    virtual void OverloadedProtectedMethod(int n, int xoffset = 0, int yoffset = 0);
    virtual void OverloadedProtectedMethodSwigPublic(int n, int xoffset = 0, int yoffset = 0) {
      DIgnores::OverloadedProtectedMethod(n,xoffset,yoffset);
    }
    virtual void OverloadedProtectedMethod();
    virtual void OverloadedProtectedMethodSwigPublic() {
      DIgnores::OverloadedProtectedMethod();
    }
    virtual double ProtectedMethod1();
    virtual double ProtectedMethod1SwigPublic() {
      return DIgnores::ProtectedMethod1();
    }
    virtual double ProtectedPureVirtualMethod1();
    virtual void ProtectedMethod2();
    virtual void ProtectedMethod2SwigPublic() {
      DIgnores::ProtectedMethod2();
    }
    virtual void ProtectedPureVirtualMethod2();
public:
    bool swig_overrides(int n) {
      return (n < 4 ? swig_override[n] : false);
    }
protected:
    bool swig_override[4];
};

class SwigDirector_DAbstractIgnores : public DAbstractIgnores, public Swig::Director {

public:
    void swig_connect_director(JNIEnv *jenv, jobject jself, jclass jcls, bool swig_mem_own, bool weak_global);
    SwigDirector_DAbstractIgnores(JNIEnv *jenv);
    virtual ~SwigDirector_DAbstractIgnores();
    virtual double OverloadedMethod(int n, int xoffset = 0, int yoffset = 0);
    virtual double OverloadedMethod(bool b);
    virtual int Quadruple(int n);
    virtual int &References(int &n);
    virtual int *Pointers(int *n);
    virtual double OverloadedProtectedMethod(int n, int xoffset = 0, int yoffset = 0);
    virtual double OverloadedProtectedMethod();
public:
    bool swig_overrides(int n) {
      return (n < 3 ? swig_override[n] : false);
    }
protected:
    bool swig_override[3];
};

class SwigDirector_DTemplateAbstractIgnoresInt : public DTemplateAbstractIgnores< int >, public Swig::Director {

public:
    void swig_connect_director(JNIEnv *jenv, jobject jself, jclass jcls, bool swig_mem_own, bool weak_global);
    SwigDirector_DTemplateAbstractIgnoresInt(JNIEnv *jenv);
    virtual ~SwigDirector_DTemplateAbstractIgnoresInt();
    virtual double OverloadedMethod(int n, int xoffset = 0, int yoffset = 0);
    virtual double OverloadedMethod(bool b);
    virtual int Quadruple(int n);
    virtual int &References(int &n);
    virtual int *Pointers(int *n);
    virtual double OverloadedProtectedMethod(int n, int xoffset = 0, int yoffset = 0);
    virtual double OverloadedProtectedMethod();
public:
    bool swig_overrides(int n) {
      return (n < 3 ? swig_override[n] : false);
    }
protected:
    bool swig_override[3];
};

class SwigDirector_DIgnoreConstructor : public DIgnoreConstructor, public Swig::Director {

public:
    void swig_connect_director(JNIEnv *jenv, jobject jself, jclass jcls, bool swig_mem_own, bool weak_global);
    SwigDirector_DIgnoreConstructor(JNIEnv *jenv, std::string s, int i);
    virtual ~SwigDirector_DIgnoreConstructor();
public:
    bool swig_overrides(int n) {
      return false;
    }
};

class SwigDirector_DIgnoreOnlyConstructor : public DIgnoreOnlyConstructor, public Swig::Director {

public:
    void swig_connect_director(JNIEnv *jenv, jobject jself, jclass jcls, bool swig_mem_own, bool weak_global);
    virtual ~SwigDirector_DIgnoreOnlyConstructor();
public:
    bool swig_overrides(int n) {
      return false;
    }
};


#endif
