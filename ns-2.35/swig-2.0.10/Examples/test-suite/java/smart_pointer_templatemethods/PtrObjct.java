/* ----------------------------------------------------------------------------
 * This file was automatically generated by SWIG (http://www.swig.org).
 * Version 2.0.10
 *
 * Do not make changes to this file unless you know what you are doing--modify
 * the SWIG interface file instead.
 * ----------------------------------------------------------------------------- */

package smart_pointer_templatemethods;

public class PtrObjct {
  private long swigCPtr;
  protected boolean swigCMemOwn;

  protected PtrObjct(long cPtr, boolean cMemoryOwn) {
    swigCMemOwn = cMemoryOwn;
    swigCPtr = cPtr;
  }

  protected static long getCPtr(PtrObjct obj) {
    return (obj == null) ? 0 : obj.swigCPtr;
  }

  protected void finalize() {
    delete();
  }

  public synchronized void delete() {
    if (swigCPtr != 0) {
      if (swigCMemOwn) {
        swigCMemOwn = false;
        smart_pointer_templatemethodsJNI.delete_PtrObjct(swigCPtr);
      }
      swigCPtr = 0;
    }
  }

  public PtrObjct() {
    this(smart_pointer_templatemethodsJNI.new_PtrObjct(), true);
  }

  public Objct __deref__() {
    long cPtr = smart_pointer_templatemethodsJNI.PtrObjct___deref__(swigCPtr, this);
    return (cPtr == 0) ? null : new Objct(cPtr, false);
  }

  public void DisposeObjct() {
    smart_pointer_templatemethodsJNI.PtrObjct_DisposeObjct(swigCPtr, this);
  }

  public PtrObjct QueryInterfaceObjct(InterfaceId iid) {
    return new PtrObjct(smart_pointer_templatemethodsJNI.PtrObjct_QueryInterfaceObjct(swigCPtr, this, InterfaceId.getCPtr(iid), iid), true);
  }

}
