/* ----------------------------------------------------------------------------
 * This file was automatically generated by SWIG (http://www.swig.org).
 * Version 2.0.10
 *
 * Do not make changes to this file unless you know what you are doing--modify
 * the SWIG interface file instead.
 * ----------------------------------------------------------------------------- */

package abstract_virtual;

public class D extends B {
  private long swigCPtr;

  protected D(long cPtr, boolean cMemoryOwn) {
    super(abstract_virtualJNI.D_SWIGUpcast(cPtr), cMemoryOwn);
    swigCPtr = cPtr;
  }

  protected static long getCPtr(D obj) {
    return (obj == null) ? 0 : obj.swigCPtr;
  }

  protected void finalize() {
    delete();
  }

  public synchronized void delete() {
    if (swigCPtr != 0) {
      if (swigCMemOwn) {
        swigCMemOwn = false;
        abstract_virtualJNI.delete_D(swigCPtr);
      }
      swigCPtr = 0;
    }
    super.delete();
  }

  public D() {
    this(abstract_virtualJNI.new_D(), true);
  }

}
