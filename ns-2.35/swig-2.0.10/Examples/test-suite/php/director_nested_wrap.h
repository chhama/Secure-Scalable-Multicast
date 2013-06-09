/* ----------------------------------------------------------------------------
 * This file was automatically generated by SWIG (http://www.swig.org).
 * Version 2.0.10
 * 
 * This file is not intended to be easily readable and contains a number of 
 * coding conventions designed to improve portability and efficiency. Do not make
 * changes to this file unless you know what you are doing--modify the SWIG 
 * interface file instead. 
 * ----------------------------------------------------------------------------- */

#ifndef SWIG_DIRECTOR_NESTED_WRAP_H_
#define SWIG_DIRECTOR_NESTED_WRAP_H_

class SwigDirector_Foo_int : public Foo< int >, public Swig::Director {

public:
    SwigDirector_Foo_int(zval *self TSRMLS_DC);
    virtual ~SwigDirector_Foo_int();
    virtual std::string do_advance();
};
class SwigDirector_Bar : public Bar, public Swig::Director {

public:
    SwigDirector_Bar(zval *self TSRMLS_DC);
    virtual ~SwigDirector_Bar();
    virtual std::string do_advance();
    virtual std::string do_advanceSwigPublic() {
      return Bar::do_advance();
    }
    virtual std::string do_step() const;
    virtual std::string do_stepSwigPublic() const {
      return Bar::do_step();
    }
};
class SwigDirector_FooBar_int : public FooBar< int >, public Swig::Director {

public:
    SwigDirector_FooBar_int(zval *self TSRMLS_DC);
    virtual ~SwigDirector_FooBar_int();
    virtual std::string do_advance();
    virtual std::string do_advanceSwigPublic() {
      return Bar::do_advance();
    }
    virtual std::string do_step() const;
    virtual std::string do_stepSwigPublic() const {
      return Bar::do_step();
    }
    virtual int get_value() const;
    virtual char const *get_name();
};

#endif
