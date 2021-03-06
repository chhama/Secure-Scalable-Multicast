/* ----------------------------------------------------------------------------
 * This file was automatically generated by SWIG (http://www.swig.org).
 * Version 2.0.10
 * 
 * This file is not intended to be easily readable and contains a number of 
 * coding conventions designed to improve portability and efficiency. Do not make
 * changes to this file unless you know what you are doing--modify the SWIG 
 * interface file instead. 
 * ----------------------------------------------------------------------------- */

#ifndef SWIG_DIRECTOR_PROTECTED_WRAP_H_
#define SWIG_DIRECTOR_PROTECTED_WRAP_H_

class SwigDirector_Foo : public Foo, public Swig::Director {

public:
    SwigDirector_Foo(zval *self TSRMLS_DC);
    virtual ~SwigDirector_Foo();
    virtual std::string pong();
    virtual std::string ping();
    virtual std::string pang();
    virtual std::string pangSwigPublic() {
      return Foo::pang();
    }
    virtual std::string used();
    virtual std::string usedSwigPublic() {
      return Foo::used();
    }
    virtual std::string cheer();
    virtual std::string cheerSwigPublic() {
      return Foo::cheer();
    }
};
class SwigDirector_Bar : public Bar, public Swig::Director {

public:
    SwigDirector_Bar(zval *self TSRMLS_DC);
    virtual ~SwigDirector_Bar();
    virtual std::string pong();
    virtual std::string ping();
    virtual std::string pingSwigPublic() {
      return Bar::ping();
    }
    virtual std::string pang();
    virtual std::string pangSwigPublic() {
      return Foo::pang();
    }
    virtual std::string used();
    virtual std::string cheer();
    virtual std::string cheerSwigPublic() {
      return Bar::cheer();
    }
};
class SwigDirector_A : public A, public Swig::Director {

public:
    SwigDirector_A(zval *self TSRMLS_DC);
    virtual ~SwigDirector_A();
    virtual void draw();
    virtual void drawSwigPublic() {
      A::draw();
    }
};
class SwigDirector_B : public B, public Swig::Director {

public:
    SwigDirector_B(zval *self TSRMLS_DC);
    virtual ~SwigDirector_B();
    virtual void draw();
    virtual void drawSwigPublic() {
      B::draw();
    }
};

#endif
