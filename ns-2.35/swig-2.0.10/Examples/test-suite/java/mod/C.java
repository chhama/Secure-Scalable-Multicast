/* ----------------------------------------------------------------------------
 * This file was automatically generated by SWIG (http://www.swig.org).
 * Version 2.0.10
 *
 * Do not make changes to this file unless you know what you are doing--modify
 * the SWIG interface file instead.
 * ----------------------------------------------------------------------------- */

package mod;

public class C extends B {
  private long swigCPtr;

  protected C(long cPtr, boolean cMemoryOwn) {
    super(mod_bJNI.C_SWIGUpcast(cPtr), cMemoryOwn);
    swigCPtr = cPtr;
  }

  protected static long getCPtr(C obj) {
    return (obj == null) ? 0 : obj.swigCPtr;
  }

  protected void finalize() {
    delete();
  }

  public synchronized void delete() {
    if (swigCPtr != 0) {
      if (swigCMemOwn) {
        swigCMemOwn = false;
        mod_bJNI.delete_C(swigCPtr);
      }
      swigCPtr = 0;
    }
    super.delete();
  }

  public C() {
    this(mod_bJNI.new_C(), true);
  }

}
