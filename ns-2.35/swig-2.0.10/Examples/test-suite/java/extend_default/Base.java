/* ----------------------------------------------------------------------------
 * This file was automatically generated by SWIG (http://www.swig.org).
 * Version 2.0.10
 *
 * Do not make changes to this file unless you know what you are doing--modify
 * the SWIG interface file instead.
 * ----------------------------------------------------------------------------- */

package extend_default;

public class Base {
  private long swigCPtr;
  protected boolean swigCMemOwn;

  protected Base(long cPtr, boolean cMemoryOwn) {
    swigCMemOwn = cMemoryOwn;
    swigCPtr = cPtr;
  }

  protected static long getCPtr(Base obj) {
    return (obj == null) ? 0 : obj.swigCPtr;
  }

  protected void finalize() {
    delete();
  }

  public synchronized void delete() {
    if (swigCPtr != 0) {
      if (swigCMemOwn) {
        swigCMemOwn = false;
        extend_defaultJNI.delete_Base(swigCPtr);
      }
      swigCPtr = 0;
    }
  }

  public SWIGTYPE_p_int realvirtual(int a) {
    long cPtr = extend_defaultJNI.Base_realvirtual__SWIG_0(swigCPtr, this, a);
    return (cPtr == 0) ? null : new SWIGTYPE_p_int(cPtr, false);
  }

  public SWIGTYPE_p_int realvirtual() {
    long cPtr = extend_defaultJNI.Base_realvirtual__SWIG_1(swigCPtr, this);
    return (cPtr == 0) ? null : new SWIGTYPE_p_int(cPtr, false);
  }

  public SWIGTYPE_p_int virtualmethod(int a) {
    long cPtr = extend_defaultJNI.Base_virtualmethod__SWIG_0(swigCPtr, this, a);
    return (cPtr == 0) ? null : new SWIGTYPE_p_int(cPtr, false);
  }

  public SWIGTYPE_p_int virtualmethod() {
    long cPtr = extend_defaultJNI.Base_virtualmethod__SWIG_1(swigCPtr, this);
    return (cPtr == 0) ? null : new SWIGTYPE_p_int(cPtr, false);
  }

  public SWIGTYPE_p_int nonvirtual(int a) {
    long cPtr = extend_defaultJNI.Base_nonvirtual__SWIG_0(swigCPtr, this, a);
    return (cPtr == 0) ? null : new SWIGTYPE_p_int(cPtr, false);
  }

  public SWIGTYPE_p_int nonvirtual() {
    long cPtr = extend_defaultJNI.Base_nonvirtual__SWIG_1(swigCPtr, this);
    return (cPtr == 0) ? null : new SWIGTYPE_p_int(cPtr, false);
  }

  public static SWIGTYPE_p_int static_method(int a) {
    long cPtr = extend_defaultJNI.Base_static_method__SWIG_0(a);
    return (cPtr == 0) ? null : new SWIGTYPE_p_int(cPtr, false);
  }

  public static SWIGTYPE_p_int static_method() {
    long cPtr = extend_defaultJNI.Base_static_method__SWIG_1();
    return (cPtr == 0) ? null : new SWIGTYPE_p_int(cPtr, false);
  }

  public Base() {
    this(extend_defaultJNI.new_Base(), true);
  }

}