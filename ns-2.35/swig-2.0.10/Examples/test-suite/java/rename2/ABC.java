/* ----------------------------------------------------------------------------
 * This file was automatically generated by SWIG (http://www.swig.org).
 * Version 2.0.10
 *
 * Do not make changes to this file unless you know what you are doing--modify
 * the SWIG interface file instead.
 * ----------------------------------------------------------------------------- */

package rename2;

public class ABC {
  private long swigCPtr;
  protected boolean swigCMemOwn;

  protected ABC(long cPtr, boolean cMemoryOwn) {
    swigCMemOwn = cMemoryOwn;
    swigCPtr = cPtr;
  }

  protected static long getCPtr(ABC obj) {
    return (obj == null) ? 0 : obj.swigCPtr;
  }

  protected void finalize() {
    delete();
  }

  public synchronized void delete() {
    if (swigCPtr != 0) {
      if (swigCMemOwn) {
        swigCMemOwn = false;
        rename2JNI.delete_ABC(swigCPtr);
      }
      swigCPtr = 0;
    }
  }

  public void methodABC(ABC a) {
    rename2JNI.ABC_methodABC(swigCPtr, this, ABC.getCPtr(a), a);
  }

  public void methodKlass(Klass k) {
    rename2JNI.ABC_methodKlass(swigCPtr, this, Klass.getCPtr(k), k);
  }

  public ABC opABC() {
    return new ABC(rename2JNI.ABC_opABC(swigCPtr, this), true);
  }

  public Klass opKlass() {
    return new Klass(rename2JNI.ABC_opKlass(swigCPtr, this), true);
  }

  public ABC() {
    this(rename2JNI.new_ABC(), true);
  }

}
