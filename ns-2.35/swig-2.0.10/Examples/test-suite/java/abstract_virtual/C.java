/* ----------------------------------------------------------------------------
 * This file was automatically generated by SWIG (http://www.swig.org).
 * Version 2.0.10
 *
 * Do not make changes to this file unless you know what you are doing--modify
 * the SWIG interface file instead.
 * ----------------------------------------------------------------------------- */

package abstract_virtual;

public class C extends A {
  private long swigCPtr;

  protected C(long cPtr, boolean cMemoryOwn) {
    super(abstract_virtualJNI.C_SWIGUpcast(cPtr), cMemoryOwn);
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
        abstract_virtualJNI.delete_C(swigCPtr);
      }
      swigCPtr = 0;
    }
    super.delete();
  }

}
