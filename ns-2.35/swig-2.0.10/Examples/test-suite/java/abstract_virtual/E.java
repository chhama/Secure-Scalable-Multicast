/* ----------------------------------------------------------------------------
 * This file was automatically generated by SWIG (http://www.swig.org).
 * Version 2.0.10
 *
 * Do not make changes to this file unless you know what you are doing--modify
 * the SWIG interface file instead.
 * ----------------------------------------------------------------------------- */

package abstract_virtual;

public class E extends C {
  private long swigCPtr;

  protected E(long cPtr, boolean cMemoryOwn) {
    super(abstract_virtualJNI.E_SWIGUpcast(cPtr), cMemoryOwn);
    swigCPtr = cPtr;
  }

  protected static long getCPtr(E obj) {
    return (obj == null) ? 0 : obj.swigCPtr;
  }

  protected void finalize() {
    delete();
  }

  public synchronized void delete() {
    if (swigCPtr != 0) {
      if (swigCMemOwn) {
        swigCMemOwn = false;
        abstract_virtualJNI.delete_E(swigCPtr);
      }
      swigCPtr = 0;
    }
    super.delete();
  }

  public E() {
    this(abstract_virtualJNI.new_E(), true);
  }

}