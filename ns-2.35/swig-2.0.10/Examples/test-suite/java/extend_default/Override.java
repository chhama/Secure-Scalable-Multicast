/* ----------------------------------------------------------------------------
 * This file was automatically generated by SWIG (http://www.swig.org).
 * Version 2.0.10
 *
 * Do not make changes to this file unless you know what you are doing--modify
 * the SWIG interface file instead.
 * ----------------------------------------------------------------------------- */

package extend_default;

public class Override {
  private long swigCPtr;
  protected boolean swigCMemOwn;

  protected Override(long cPtr, boolean cMemoryOwn) {
    swigCMemOwn = cMemoryOwn;
    swigCPtr = cPtr;
  }

  protected static long getCPtr(Override obj) {
    return (obj == null) ? 0 : obj.swigCPtr;
  }

  protected void finalize() {
    delete();
  }

  public synchronized void delete() {
    if (swigCPtr != 0) {
      if (swigCMemOwn) {
        swigCMemOwn = false;
        extend_defaultJNI.delete_Override(swigCPtr);
      }
      swigCPtr = 0;
    }
  }

  public int over() {
    return extend_defaultJNI.Override_over__SWIG_0(swigCPtr, this);
  }

  public int ride(int a) {
    return extend_defaultJNI.Override_ride__SWIG_0(swigCPtr, this, a);
  }

  public int ride() {
    return extend_defaultJNI.Override_ride__SWIG_1(swigCPtr, this);
  }

  public int overload() {
    return extend_defaultJNI.Override_overload__SWIG_0(swigCPtr, this);
  }

  public int over(int a) {
    return extend_defaultJNI.Override_over__SWIG_1(swigCPtr, this, a);
  }

  public int overload(int a) {
    return extend_defaultJNI.Override_overload__SWIG_1(swigCPtr, this, a);
  }

  public Override() {
    this(extend_defaultJNI.new_Override(), true);
  }

}
