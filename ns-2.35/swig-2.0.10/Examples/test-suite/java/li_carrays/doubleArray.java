/* ----------------------------------------------------------------------------
 * This file was automatically generated by SWIG (http://www.swig.org).
 * Version 2.0.10
 *
 * Do not make changes to this file unless you know what you are doing--modify
 * the SWIG interface file instead.
 * ----------------------------------------------------------------------------- */

package li_carrays;

public class doubleArray {
  private long swigCPtr;
  protected boolean swigCMemOwn;

  protected doubleArray(long cPtr, boolean cMemoryOwn) {
    swigCMemOwn = cMemoryOwn;
    swigCPtr = cPtr;
  }

  protected static long getCPtr(doubleArray obj) {
    return (obj == null) ? 0 : obj.swigCPtr;
  }

  protected void finalize() {
    delete();
  }

  public synchronized void delete() {
    if (swigCPtr != 0) {
      if (swigCMemOwn) {
        swigCMemOwn = false;
        li_carraysJNI.delete_doubleArray(swigCPtr);
      }
      swigCPtr = 0;
    }
  }

  public doubleArray(int nelements) {
    this(li_carraysJNI.new_doubleArray(nelements), true);
  }

  public double getitem(int index) {
    return li_carraysJNI.doubleArray_getitem(swigCPtr, this, index);
  }

  public void setitem(int index, double value) {
    li_carraysJNI.doubleArray_setitem(swigCPtr, this, index, value);
  }

  public SWIGTYPE_p_double cast() {
    long cPtr = li_carraysJNI.doubleArray_cast(swigCPtr, this);
    return (cPtr == 0) ? null : new SWIGTYPE_p_double(cPtr, false);
  }

  public static doubleArray frompointer(SWIGTYPE_p_double t) {
    long cPtr = li_carraysJNI.doubleArray_frompointer(SWIGTYPE_p_double.getCPtr(t));
    return (cPtr == 0) ? null : new doubleArray(cPtr, false);
  }

}