/* ----------------------------------------------------------------------------
 * This file was automatically generated by SWIG (http://www.swig.org).
 * Version 2.0.10
 *
 * Do not make changes to this file unless you know what you are doing--modify
 * the SWIG interface file instead.
 * ----------------------------------------------------------------------------- */

package rename4;

public class XYZKlass {
  private long swigCPtr;
  protected boolean swigCMemOwn;

  protected XYZKlass(long cPtr, boolean cMemoryOwn) {
    swigCMemOwn = cMemoryOwn;
    swigCPtr = cPtr;
  }

  protected static long getCPtr(XYZKlass obj) {
    return (obj == null) ? 0 : obj.swigCPtr;
  }

  protected void finalize() {
    delete();
  }

  public synchronized void delete() {
    if (swigCPtr != 0) {
      if (swigCMemOwn) {
        swigCMemOwn = false;
        rename4JNI.delete_XYZKlass(swigCPtr);
      }
      swigCPtr = 0;
    }
  }

  public NotXYZInt opIntPtrA() {
    long cPtr = rename4JNI.XYZKlass_opIntPtrA(swigCPtr, this);
    return (cPtr == 0) ? null : new NotXYZInt(cPtr, false);
  }

  public XYZInt opIntPtrB() {
    long cPtr = rename4JNI.XYZKlass_opIntPtrB(swigCPtr, this);
    return (cPtr == 0) ? null : new XYZInt(cPtr, false);
  }

  public Another opAnother3() {
    return new Another(rename4JNI.XYZKlass_opAnother3(swigCPtr, this), true);
  }

  public void tMethod3(Klass i) {
    rename4JNI.XYZKlass_tMethod3(swigCPtr, this, Klass.getCPtr(i), i);
  }

  public void tMethodNotXYZ3(NotXYZKlass i) {
    rename4JNI.XYZKlass_tMethodNotXYZ3(swigCPtr, this, NotXYZKlass.getCPtr(i), i);
  }

  public void tMethodXYZ3(XYZKlass i) {
    rename4JNI.XYZKlass_tMethodXYZ3(swigCPtr, this, XYZKlass.getCPtr(i), i);
  }

  public Klass opT3() {
    return new Klass(rename4JNI.XYZKlass_opT3(swigCPtr, this), true);
  }

  public NotXYZKlass opNotXYZ3() {
    return new NotXYZKlass(rename4JNI.XYZKlass_opNotXYZ3(swigCPtr, this), true);
  }

  public XYZKlass opXYZ3() {
    return new XYZKlass(rename4JNI.XYZKlass_opXYZ3(swigCPtr, this), true);
  }

  public XYZKlass() {
    this(rename4JNI.new_XYZKlass(), true);
  }

}
