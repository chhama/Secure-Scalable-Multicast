/* ----------------------------------------------------------------------------
 * This file was automatically generated by SWIG (http://www.swig.org).
 * Version 2.0.10
 *
 * Do not make changes to this file unless you know what you are doing--modify
 * the SWIG interface file instead.
 * ----------------------------------------------------------------------------- */

package union_scope;

public class nRState {
  private long swigCPtr;
  protected boolean swigCMemOwn;

  protected nRState(long cPtr, boolean cMemoryOwn) {
    swigCMemOwn = cMemoryOwn;
    swigCPtr = cPtr;
  }

  protected static long getCPtr(nRState obj) {
    return (obj == null) ? 0 : obj.swigCPtr;
  }

  protected void finalize() {
    delete();
  }

  public synchronized void delete() {
    if (swigCPtr != 0) {
      if (swigCMemOwn) {
        swigCMemOwn = false;
        union_scopeJNI.delete_nRState(swigCPtr);
      }
      swigCPtr = 0;
    }
  }

  public nRState() {
    this(union_scopeJNI.new_nRState(), true);
  }

}
