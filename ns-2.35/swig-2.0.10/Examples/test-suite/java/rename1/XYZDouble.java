/* ----------------------------------------------------------------------------
 * This file was automatically generated by SWIG (http://www.swig.org).
 * Version 2.0.10
 *
 * Do not make changes to this file unless you know what you are doing--modify
 * the SWIG interface file instead.
 * ----------------------------------------------------------------------------- */

package rename1;

public class XYZDouble {
  private long swigCPtr;
  protected boolean swigCMemOwn;

  protected XYZDouble(long cPtr, boolean cMemoryOwn) {
    swigCMemOwn = cMemoryOwn;
    swigCPtr = cPtr;
  }

  protected static long getCPtr(XYZDouble obj) {
    return (obj == null) ? 0 : obj.swigCPtr;
  }

  protected void finalize() {
    delete();
  }

  public synchronized void delete() {
    if (swigCPtr != 0) {
      if (swigCMemOwn) {
        swigCMemOwn = false;
        rename1JNI.delete_XYZDouble(swigCPtr);
      }
      swigCPtr = 0;
    }
  }

  public NotXYZInt opIntPtrA() {
    long cPtr = rename1JNI.XYZDouble_opIntPtrA(swigCPtr, this);
    return (cPtr == 0) ? null : new NotXYZInt(cPtr, false);
  }

  public XYZInt opIntPtrB() {
    long cPtr = rename1JNI.XYZDouble_opIntPtrB(swigCPtr, this);
    return (cPtr == 0) ? null : new XYZInt(cPtr, false);
  }

  public Another opAnother1() {
    return new Another(rename1JNI.XYZDouble_opAnother1(swigCPtr, this), true);
  }

  public void tMethod1(double i) {
    rename1JNI.XYZDouble_tMethod1(swigCPtr, this, i);
  }

  public void tMethodNotXYZ1(NotXYZDouble i) {
    rename1JNI.XYZDouble_tMethodNotXYZ1(swigCPtr, this, NotXYZDouble.getCPtr(i), i);
  }

  public void tMethodXYZ1(XYZDouble i) {
    rename1JNI.XYZDouble_tMethodXYZ1(swigCPtr, this, XYZDouble.getCPtr(i), i);
  }

  public double opT1() {
    return rename1JNI.XYZDouble_opT1(swigCPtr, this);
  }

  public NotXYZDouble opNotXYZ1() {
    return new NotXYZDouble(rename1JNI.XYZDouble_opNotXYZ1(swigCPtr, this), true);
  }

  public XYZDouble opXYZ1() {
    return new XYZDouble(rename1JNI.XYZDouble_opXYZ1(swigCPtr, this), true);
  }

  public XYZDouble() {
    this(rename1JNI.new_XYZDouble(), true);
  }

}
