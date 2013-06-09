/* ----------------------------------------------------------------------------
 * This file was automatically generated by SWIG (http://www.swig.org).
 * Version 2.0.10
 * 
 * This file is not intended to be easily readable and contains a number of 
 * coding conventions designed to improve portability and efficiency. Do not make
 * changes to this file unless you know what you are doing--modify the SWIG 
 * interface file instead. 
 * ----------------------------------------------------------------------------- */

#ifndef SWIG_director_string_WRAP_H_
#define SWIG_director_string_WRAP_H_

struct SwigDirector_A : public A, public Swig::Director {

public:
    void swig_connect_director(JNIEnv *jenv, jobject jself, jclass jcls, bool swig_mem_own, bool weak_global);
    SwigDirector_A(JNIEnv *jenv, std::string const &first);
    virtual ~SwigDirector_A();
    virtual std::string const &get_first() const;
    virtual std::string const &get(int n) const;
    virtual std::string const &call_get_first() const;
    virtual std::string const &call_get(int n) const;
    virtual int string_length(std::string const &s) const;
    virtual void process_text(char const *text);
public:
    bool swig_overrides(int n) {
      return (n < 6 ? swig_override[n] : false);
    }
protected:
    bool swig_override[6];
};


#endif