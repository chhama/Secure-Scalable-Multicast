/* ----------------------------------------------------------------------------
 * This file was automatically generated by SWIG (http://www.swig.org).
 * Version 2.0.10
 *
 * Do not make changes to this file unless you know what you are doing--modify
 * the SWIG interface file instead.
 * ----------------------------------------------------------------------------- */

package constructor_copy;

public class ModelUtils_i {
  private long swigCPtr;
  protected boolean swigCMemOwn;

  protected ModelUtils_i(long cPtr, boolean cMemoryOwn) {
    swigCMemOwn = cMemoryOwn;
    swigCPtr = cPtr;
  }

  protected static long getCPtr(ModelUtils_i obj) {
    return (obj == null) ? 0 : obj.swigCPtr;
  }

  protected void finalize() {
    delete();
  }

  public synchronized void delete() {
    if (swigCPtr != 0) {
      if (swigCMemOwn) {
        swigCMemOwn = false;
        constructor_copyJNI.delete_ModelUtils_i(swigCPtr);
      }
      swigCPtr = 0;
    }
  }

  public ModelUtils_i() {
    this(constructor_copyJNI.new_ModelUtils_i__SWIG_0(), true);
  }

  public ModelUtils_i(ModelUtils_i other) {
    this(constructor_copyJNI.new_ModelUtils_i__SWIG_1(ModelUtils_i.getCPtr(other), other), true);
  }

}
