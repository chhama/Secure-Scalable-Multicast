/* ----------------------------------------------------------------------------
 * This file was automatically generated by SWIG (http://www.swig.org).
 * Version 2.0.10
 *
 * Do not make changes to this file unless you know what you are doing--modify
 * the SWIG interface file instead.
 * ----------------------------------------------------------------------------- */

package namespace_class;

public class BarT_H {
  private long swigCPtr;
  protected boolean swigCMemOwn;

  protected BarT_H(long cPtr, boolean cMemoryOwn) {
    swigCMemOwn = cMemoryOwn;
    swigCPtr = cPtr;
  }

  protected static long getCPtr(BarT_H obj) {
    return (obj == null) ? 0 : obj.swigCPtr;
  }

  protected void finalize() {
    delete();
  }

  public synchronized void delete() {
    if (swigCPtr != 0) {
      if (swigCMemOwn) {
        swigCMemOwn = false;
        namespace_classJNI.delete_BarT_H(swigCPtr);
      }
      swigCPtr = 0;
    }
  }

  public BarT_H() {
    this(namespace_classJNI.new_BarT_H(), true);
  }

}