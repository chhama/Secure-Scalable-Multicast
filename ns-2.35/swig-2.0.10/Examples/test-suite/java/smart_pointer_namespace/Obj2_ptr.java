/* ----------------------------------------------------------------------------
 * This file was automatically generated by SWIG (http://www.swig.org).
 * Version 2.0.10
 *
 * Do not make changes to this file unless you know what you are doing--modify
 * the SWIG interface file instead.
 * ----------------------------------------------------------------------------- */

package smart_pointer_namespace;

public class Obj2_ptr {
  private long swigCPtr;
  protected boolean swigCMemOwn;

  protected Obj2_ptr(long cPtr, boolean cMemoryOwn) {
    swigCMemOwn = cMemoryOwn;
    swigCPtr = cPtr;
  }

  protected static long getCPtr(Obj2_ptr obj) {
    return (obj == null) ? 0 : obj.swigCPtr;
  }

  protected void finalize() {
    delete();
  }

  public synchronized void delete() {
    if (swigCPtr != 0) {
      if (swigCMemOwn) {
        swigCMemOwn = false;
        smart_pointer_namespaceJNI.delete_Obj2_ptr(swigCPtr);
      }
      swigCPtr = 0;
    }
  }

  public Obj2_ptr(Obj2 tp) {
    this(smart_pointer_namespaceJNI.new_Obj2_ptr(Obj2.getCPtr(tp), tp), true);
  }

  public Obj2 __deref__() {
    long cPtr = smart_pointer_namespaceJNI.Obj2_ptr___deref__(swigCPtr, this);
    return (cPtr == 0) ? null : new Obj2(cPtr, false);
  }

  public void donothing() {
    smart_pointer_namespaceJNI.Obj2_ptr_donothing(swigCPtr, this);
  }

}
