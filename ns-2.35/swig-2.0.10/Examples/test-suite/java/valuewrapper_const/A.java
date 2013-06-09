/* ----------------------------------------------------------------------------
 * This file was automatically generated by SWIG (http://www.swig.org).
 * Version 2.0.10
 *
 * Do not make changes to this file unless you know what you are doing--modify
 * the SWIG interface file instead.
 * ----------------------------------------------------------------------------- */

package valuewrapper_const;

public class A {
  private long swigCPtr;
  protected boolean swigCMemOwn;

  protected A(long cPtr, boolean cMemoryOwn) {
    swigCMemOwn = cMemoryOwn;
    swigCPtr = cPtr;
  }

  protected static long getCPtr(A obj) {
    return (obj == null) ? 0 : obj.swigCPtr;
  }

  protected void finalize() {
    delete();
  }

  public synchronized void delete() {
    if (swigCPtr != 0) {
      if (swigCMemOwn) {
        swigCMemOwn = false;
        valuewrapper_constJNI.delete_A(swigCPtr);
      }
      swigCPtr = 0;
    }
  }

  public A(B b) {
    this(valuewrapper_constJNI.new_A(B.getCPtr(b), b), true);
  }

  public B GetB() {
    return new B(valuewrapper_constJNI.A_GetB(swigCPtr, this), true);
  }

  public B GetBconst() {
    return new B(valuewrapper_constJNI.A_GetBconst(swigCPtr, this), true);
  }

  public B GetBGlobalQualifier() {
    return new B(valuewrapper_constJNI.A_GetBGlobalQualifier(swigCPtr, this), true);
  }

  public B GetBconstGlobalGlobalQualifier() {
    return new B(valuewrapper_constJNI.A_GetBconstGlobalGlobalQualifier(swigCPtr, this), true);
  }

}
