/* ----------------------------------------------------------------------------
 * This file was automatically generated by SWIG (http://www.swig.org).
 * Version 2.0.10
 *
 * Do not make changes to this file unless you know what you are doing--modify
 * the SWIG interface file instead.
 * ----------------------------------------------------------------------------- */

package li_carrays;

public class XYArray {
  private long swigCPtr;
  protected boolean swigCMemOwn;

  protected XYArray(long cPtr, boolean cMemoryOwn) {
    swigCMemOwn = cMemoryOwn;
    swigCPtr = cPtr;
  }

  protected static long getCPtr(XYArray obj) {
    return (obj == null) ? 0 : obj.swigCPtr;
  }

  protected void finalize() {
    delete();
  }

  public synchronized void delete() {
    if (swigCPtr != 0) {
      if (swigCMemOwn) {
        swigCMemOwn = false;
        li_carraysJNI.delete_XYArray(swigCPtr);
      }
      swigCPtr = 0;
    }
  }

  public XYArray(int nelements) {
    this(li_carraysJNI.new_XYArray(nelements), true);
  }

  public XY getitem(int index) {
    return new XY(li_carraysJNI.XYArray_getitem(swigCPtr, this, index), true);
  }

  public void setitem(int index, XY value) {
    li_carraysJNI.XYArray_setitem(swigCPtr, this, index, XY.getCPtr(value), value);
  }

  public XY cast() {
    long cPtr = li_carraysJNI.XYArray_cast(swigCPtr, this);
    return (cPtr == 0) ? null : new XY(cPtr, false);
  }

  public static XYArray frompointer(XY t) {
    long cPtr = li_carraysJNI.XYArray_frompointer(XY.getCPtr(t), t);
    return (cPtr == 0) ? null : new XYArray(cPtr, false);
  }

}
