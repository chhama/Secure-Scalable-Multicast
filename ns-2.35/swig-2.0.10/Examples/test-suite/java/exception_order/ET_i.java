/* ----------------------------------------------------------------------------
 * This file was automatically generated by SWIG (http://www.swig.org).
 * Version 2.0.10
 *
 * Do not make changes to this file unless you know what you are doing--modify
 * the SWIG interface file instead.
 * ----------------------------------------------------------------------------- */

package exception_order;

public class ET_i {
  private long swigCPtr;
  protected boolean swigCMemOwn;

  protected ET_i(long cPtr, boolean cMemoryOwn) {
    swigCMemOwn = cMemoryOwn;
    swigCPtr = cPtr;
  }

  protected static long getCPtr(ET_i obj) {
    return (obj == null) ? 0 : obj.swigCPtr;
  }

  protected void finalize() {
    delete();
  }

  public synchronized void delete() {
    if (swigCPtr != 0) {
      if (swigCMemOwn) {
        swigCMemOwn = false;
        exception_orderJNI.delete_ET_i(swigCPtr);
      }
      swigCPtr = 0;
    }
  }

  public ET_i() {
    this(exception_orderJNI.new_ET_i(), true);
  }

}
