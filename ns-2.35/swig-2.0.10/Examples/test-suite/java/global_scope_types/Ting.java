/* ----------------------------------------------------------------------------
 * This file was automatically generated by SWIG (http://www.swig.org).
 * Version 2.0.10
 *
 * Do not make changes to this file unless you know what you are doing--modify
 * the SWIG interface file instead.
 * ----------------------------------------------------------------------------- */

package global_scope_types;

public class Ting {
  private long swigCPtr;
  protected boolean swigCMemOwn;

  protected Ting(long cPtr, boolean cMemoryOwn) {
    swigCMemOwn = cMemoryOwn;
    swigCPtr = cPtr;
  }

  protected static long getCPtr(Ting obj) {
    return (obj == null) ? 0 : obj.swigCPtr;
  }

  protected void finalize() {
    delete();
  }

  public synchronized void delete() {
    if (swigCPtr != 0) {
      if (swigCMemOwn) {
        swigCMemOwn = false;
        global_scope_typesJNI.delete_Ting(swigCPtr);
      }
      swigCPtr = 0;
    }
  }

  public Ting() {
    this(global_scope_typesJNI.new_Ting(), true);
  }

}
