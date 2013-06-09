/* ----------------------------------------------------------------------------
 * This file was automatically generated by SWIG (http://www.swig.org).
 * Version 2.0.10
 * 
 * This file is not intended to be easily readable and contains a number of 
 * coding conventions designed to improve portability and efficiency. Do not make
 * changes to this file unless you know what you are doing--modify the SWIG 
 * interface file instead. 
 * ----------------------------------------------------------------------------- */

#ifndef SWIG_ALLPROTECTED_WRAP_H_
#define SWIG_ALLPROTECTED_WRAP_H_

class SwigDirector_PublicBase : public PublicBase, public Swig::Director {

public:
    SwigDirector_PublicBase(zval *self, char const *s TSRMLS_DC);
    virtual ~SwigDirector_PublicBase();
    virtual std::string virtualMethod() const;
};
class SwigDirector_ProtectedBase : public ProtectedBase, public Swig::Director {

public:
    SwigDirector_ProtectedBase(zval *self, char const *s TSRMLS_DC);
    virtual ~SwigDirector_ProtectedBase();
    virtual std::string virtualMethod() const;
    virtual std::string virtualMethodSwigPublic() const {
      return ProtectedBase::virtualMethod();
    }
    using ProtectedBase::instanceMethod;
    using ProtectedBase::instanceOverloaded;
    using ProtectedBase::staticMethod;
    using ProtectedBase::staticOverloaded;
    using ProtectedBase::instanceMemberVariable;
    using ProtectedBase::staticMemberVariable;
    using ProtectedBase::staticConstMemberVariable;
    using ProtectedBase::anEnum;
    using ProtectedBase::stringMember;
    using ProtectedBase::IntegerType;
};

#endif