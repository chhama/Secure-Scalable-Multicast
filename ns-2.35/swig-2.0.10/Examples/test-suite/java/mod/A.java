/* ----------------------------------------------------------------------------
 * This file was automatically generated by SWIG (http://www.swig.org).
 * Version 2.0.10
 *
 * Do not make changes to this file unless you know what you are doing--modify
 * the SWIG interface file instead.
 * ----------------------------------------------------------------------------- */

package mod;

public class A {
  private long swigCPtr;
  protected boolean swigCMemOwn;

  protected A(long cPtr, boolean cMemoryOwn) {
    swigCMemOwn = cMemoryOwn;
    swigCPtr = cPtr;
  }

  protected static long getCPtr(A obj) {
    return (obj == null) ? 0 : obj.swigCPtr;
  }

  protected void finalize() {
    delete();
  }

  public synchronized void delete() {
    if (swigCPtr != 0) {
      if (swigCMemOwn) {
        swigCMemOwn = false;
        mod_aJNI.delete_A(swigCPtr);
      }
      swigCPtr = 0;
    }
  }

  public A() {
    this(mod_aJNI.new_A(), true);
  }

  public SWIGTYPE_p_C GetC() {
    long cPtr = mod_aJNI.A_GetC(swigCPtr, this);
    return (cPtr == 0) ? null : new SWIGTYPE_p_C(cPtr, false);
  }

  public void DoSomething(A a) {
    mod_aJNI.A_DoSomething(swigCPtr, this, A.getCPtr(a), a);
  }

}
