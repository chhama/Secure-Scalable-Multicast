/* ----------------------------------------------------------------------------
 * This file was automatically generated by SWIG (http://www.swig.org).
 * Version 2.0.10
 *
 * Do not make changes to this file unless you know what you are doing--modify
 * the SWIG interface file instead.
 * ----------------------------------------------------------------------------- */

package rename1;

public class XYZEnu {
  private long swigCPtr;
  protected boolean swigCMemOwn;

  protected XYZEnu(long cPtr, boolean cMemoryOwn) {
    swigCMemOwn = cMemoryOwn;
    swigCPtr = cPtr;
  }

  protected static long getCPtr(XYZEnu obj) {
    return (obj == null) ? 0 : obj.swigCPtr;
  }

  protected void finalize() {
    delete();
  }

  public synchronized void delete() {
    if (swigCPtr != 0) {
      if (swigCMemOwn) {
        swigCMemOwn = false;
        rename1JNI.delete_XYZEnu(swigCPtr);
      }
      swigCPtr = 0;
    }
  }

  public NotXYZInt opIntPtrA() {
    long cPtr = rename1JNI.XYZEnu_opIntPtrA(swigCPtr, this);
    return (cPtr == 0) ? null : new NotXYZInt(cPtr, false);
  }

  public XYZInt opIntPtrB() {
    long cPtr = rename1JNI.XYZEnu_opIntPtrB(swigCPtr, this);
    return (cPtr == 0) ? null : new XYZInt(cPtr, false);
  }

  public Another opAnother4() {
    return new Another(rename1JNI.XYZEnu_opAnother4(swigCPtr, this), true);
  }

  public void tMethod4(Enu i) {
    rename1JNI.XYZEnu_tMethod4(swigCPtr, this, i.swigValue());
  }

  public void tMethodNotXYZ4(NotXYZEnu i) {
    rename1JNI.XYZEnu_tMethodNotXYZ4(swigCPtr, this, NotXYZEnu.getCPtr(i), i);
  }

  public void tMethodXYZ4(XYZEnu i) {
    rename1JNI.XYZEnu_tMethodXYZ4(swigCPtr, this, XYZEnu.getCPtr(i), i);
  }

  public Enu opT4() {
    return Enu.swigToEnum(rename1JNI.XYZEnu_opT4(swigCPtr, this));
  }

  public NotXYZEnu opNotXYZ4() {
    return new NotXYZEnu(rename1JNI.XYZEnu_opNotXYZ4(swigCPtr, this), true);
  }

  public XYZEnu opXYZ4() {
    return new XYZEnu(rename1JNI.XYZEnu_opXYZ4(swigCPtr, this), true);
  }

  public XYZEnu() {
    this(rename1JNI.new_XYZEnu(), true);
  }

}
