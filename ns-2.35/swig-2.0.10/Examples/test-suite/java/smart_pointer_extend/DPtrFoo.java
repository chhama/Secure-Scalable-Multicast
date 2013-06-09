/* ----------------------------------------------------------------------------
 * This file was automatically generated by SWIG (http://www.swig.org).
 * Version 2.0.10
 *
 * Do not make changes to this file unless you know what you are doing--modify
 * the SWIG interface file instead.
 * ----------------------------------------------------------------------------- */

package smart_pointer_extend;

public class DPtrFoo {
  private long swigCPtr;
  protected boolean swigCMemOwn;

  protected DPtrFoo(long cPtr, boolean cMemoryOwn) {
    swigCMemOwn = cMemoryOwn;
    swigCPtr = cPtr;
  }

  protected static long getCPtr(DPtrFoo obj) {
    return (obj == null) ? 0 : obj.swigCPtr;
  }

  protected void finalize() {
    delete();
  }

  public synchronized void delete() {
    if (swigCPtr != 0) {
      if (swigCMemOwn) {
        swigCMemOwn = false;
        smart_pointer_extendJNI.delete_DPtrFoo(swigCPtr);
      }
      swigCPtr = 0;
    }
  }

  public DPtrFoo(DFoo ptr) {
    this(smart_pointer_extendJNI.new_DPtrFoo(DFoo.getCPtr(ptr), ptr), true);
  }

  public DFoo __deref__() {
    long cPtr = smart_pointer_extendJNI.DPtrFoo___deref__(swigCPtr, this);
    return (cPtr == 0) ? null : new DFoo(cPtr, false);
  }

  public void F() {
    smart_pointer_extendJNI.DPtrFoo_F(swigCPtr, this);
  }

  public int SExt(int i) {
    return smart_pointer_extendJNI.DPtrFoo_SExt__SWIG_0(swigCPtr, this, i);
  }

  public int SExt() {
    return smart_pointer_extendJNI.DPtrFoo_SExt__SWIG_1(swigCPtr, this);
  }

  public int Ext(int i) {
    return smart_pointer_extendJNI.DPtrFoo_Ext__SWIG_0(swigCPtr, this, i);
  }

  public int Ext() {
    return smart_pointer_extendJNI.DPtrFoo_Ext__SWIG_1(swigCPtr, this);
  }

}