/* ----------------------------------------------------------------------------
 * This file was automatically generated by SWIG (http://www.swig.org).
 * Version 2.0.10
 *
 * Do not make changes to this file unless you know what you are doing--modify
 * the SWIG interface file instead.
 * ----------------------------------------------------------------------------- */

package virtual_poly;

public class NInt extends NNumber {
  private long swigCPtr;

  protected NInt(long cPtr, boolean cMemoryOwn) {
    super(virtual_polyJNI.NInt_SWIGUpcast(cPtr), cMemoryOwn);
    swigCPtr = cPtr;
  }

  protected static long getCPtr(NInt obj) {
    return (obj == null) ? 0 : obj.swigCPtr;
  }

  protected void finalize() {
    delete();
  }

  public synchronized void delete() {
    if (swigCPtr != 0) {
      if (swigCMemOwn) {
        swigCMemOwn = false;
        virtual_polyJNI.delete_NInt(swigCPtr);
      }
      swigCPtr = 0;
    }
    super.delete();
  }

  public NInt(int v) {
    this(virtual_polyJNI.new_NInt(v), true);
  }

  public int get() {
    return virtual_polyJNI.NInt_get(swigCPtr, this);
  }

  public NNumber copy() {
    long cPtr = virtual_polyJNI.NInt_copy(swigCPtr, this);
    return (cPtr == 0) ? null : new NInt(cPtr, true);
  }

  public NNumber ref_this() {
    return new NInt(virtual_polyJNI.NInt_ref_this(swigCPtr, this), false);
  }

  public static NInt narrow(NNumber nn) {
    long cPtr = virtual_polyJNI.NInt_narrow(NNumber.getCPtr(nn), nn);
    return (cPtr == 0) ? null : new NInt(cPtr, false);
  }

}