/* ----------------------------------------------------------------------------
 * This file was automatically generated by SWIG (http://www.swig.org).
 * Version 2.0.10
 *
 * Do not make changes to this file unless you know what you are doing--modify
 * the SWIG interface file instead.
 * ----------------------------------------------------------------------------- */

package virtual_poly;

public class NNumber {
  private long swigCPtr;
  protected boolean swigCMemOwn;

  protected NNumber(long cPtr, boolean cMemoryOwn) {
    swigCMemOwn = cMemoryOwn;
    swigCPtr = cPtr;
  }

  protected static long getCPtr(NNumber obj) {
    return (obj == null) ? 0 : obj.swigCPtr;
  }

  protected void finalize() {
    delete();
  }

  public synchronized void delete() {
    if (swigCPtr != 0) {
      if (swigCMemOwn) {
        swigCMemOwn = false;
        virtual_polyJNI.delete_NNumber(swigCPtr);
      }
      swigCPtr = 0;
    }
  }

  public NNumber copy() {
    long cPtr = virtual_polyJNI.NNumber_copy(swigCPtr, this);
    return (cPtr == 0) ? null : new NNumber(cPtr, true);
  }

  public NNumber ref_this() {
    return new NNumber(virtual_polyJNI.NNumber_ref_this(swigCPtr, this), false);
  }

  public NNumber nnumber() {
    long cPtr = virtual_polyJNI.NNumber_nnumber(swigCPtr, this);
    return (cPtr == 0) ? null : new NNumber(cPtr, false);
  }

}
