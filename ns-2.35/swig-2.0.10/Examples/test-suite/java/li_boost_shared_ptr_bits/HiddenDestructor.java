/* ----------------------------------------------------------------------------
 * This file was automatically generated by SWIG (http://www.swig.org).
 * Version 2.0.10
 *
 * Do not make changes to this file unless you know what you are doing--modify
 * the SWIG interface file instead.
 * ----------------------------------------------------------------------------- */

package li_boost_shared_ptr_bits;

public class HiddenDestructor {
  private long swigCPtr;
  private boolean swigCMemOwn;

  protected HiddenDestructor(long cPtr, boolean cMemoryOwn) {
    swigCMemOwn = cMemoryOwn;
    swigCPtr = cPtr;
  }

  protected static long getCPtr(HiddenDestructor obj) {
    return (obj == null) ? 0 : obj.swigCPtr;
  }

  protected void finalize() {
    delete();
  }

  public synchronized void delete() {
    if (swigCPtr != 0) {
      if (swigCMemOwn) {
        swigCMemOwn = false;
        li_boost_shared_ptr_bitsJNI.delete_HiddenDestructor(swigCPtr);
      }
      swigCPtr = 0;
    }
  }

  public static HiddenDestructor create() {
    long cPtr = li_boost_shared_ptr_bitsJNI.HiddenDestructor_create();
    return (cPtr == 0) ? null : new HiddenDestructor(cPtr, true);
  }

  public void doit() {
    li_boost_shared_ptr_bitsJNI.HiddenDestructor_doit(swigCPtr, this);
  }

}