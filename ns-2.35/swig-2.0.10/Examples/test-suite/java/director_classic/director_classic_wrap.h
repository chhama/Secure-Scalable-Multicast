/* ----------------------------------------------------------------------------
 * This file was automatically generated by SWIG (http://www.swig.org).
 * Version 2.0.10
 * 
 * This file is not intended to be easily readable and contains a number of 
 * coding conventions designed to improve portability and efficiency. Do not make
 * changes to this file unless you know what you are doing--modify the SWIG 
 * interface file instead. 
 * ----------------------------------------------------------------------------- */

#ifndef SWIG_director_classic_WRAP_H_
#define SWIG_director_classic_WRAP_H_

struct SwigDirector_Being : public Being, public Swig::Director {

public:
    void swig_connect_director(JNIEnv *jenv, jobject jself, jclass jcls, bool swig_mem_own, bool weak_global);
    SwigDirector_Being(JNIEnv *jenv);
    virtual std::string id();
    virtual ~SwigDirector_Being();
public:
    bool swig_overrides(int n) {
      return (n < 1 ? swig_override[n] : false);
    }
protected:
    bool swig_override[1];
};

struct SwigDirector_Person : public Person, public Swig::Director {

public:
    void swig_connect_director(JNIEnv *jenv, jobject jself, jclass jcls, bool swig_mem_own, bool weak_global);
    SwigDirector_Person(JNIEnv *jenv);
    virtual std::string id();
    virtual ~SwigDirector_Person();
public:
    bool swig_overrides(int n) {
      return (n < 1 ? swig_override[n] : false);
    }
protected:
    bool swig_override[1];
};

struct SwigDirector_Child : public Child, public Swig::Director {

public:
    void swig_connect_director(JNIEnv *jenv, jobject jself, jclass jcls, bool swig_mem_own, bool weak_global);
    SwigDirector_Child(JNIEnv *jenv);
    virtual std::string id();
    virtual ~SwigDirector_Child();
public:
    bool swig_overrides(int n) {
      return (n < 1 ? swig_override[n] : false);
    }
protected:
    bool swig_override[1];
};

struct SwigDirector_GrandChild : public GrandChild, public Swig::Director {

public:
    void swig_connect_director(JNIEnv *jenv, jobject jself, jclass jcls, bool swig_mem_own, bool weak_global);
    SwigDirector_GrandChild(JNIEnv *jenv);
    virtual std::string id();
    virtual ~SwigDirector_GrandChild();
public:
    bool swig_overrides(int n) {
      return (n < 1 ? swig_override[n] : false);
    }
protected:
    bool swig_override[1];
};

struct SwigDirector_OrphanPerson : public OrphanPerson, public Swig::Director {

public:
    void swig_connect_director(JNIEnv *jenv, jobject jself, jclass jcls, bool swig_mem_own, bool weak_global);
    SwigDirector_OrphanPerson(JNIEnv *jenv);
    virtual std::string id();
    virtual ~SwigDirector_OrphanPerson();
public:
    bool swig_overrides(int n) {
      return (n < 1 ? swig_override[n] : false);
    }
protected:
    bool swig_override[1];
};

struct SwigDirector_OrphanChild : public OrphanChild, public Swig::Director {

public:
    void swig_connect_director(JNIEnv *jenv, jobject jself, jclass jcls, bool swig_mem_own, bool weak_global);
    SwigDirector_OrphanChild(JNIEnv *jenv);
    virtual std::string id();
    virtual ~SwigDirector_OrphanChild();
public:
    bool swig_overrides(int n) {
      return (n < 1 ? swig_override[n] : false);
    }
protected:
    bool swig_override[1];
};


#endif
