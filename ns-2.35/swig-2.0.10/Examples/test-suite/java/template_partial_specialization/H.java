/* ----------------------------------------------------------------------------
 * This file was automatically generated by SWIG (http://www.swig.org).
 * Version 2.0.10
 *
 * Do not make changes to this file unless you know what you are doing--modify
 * the SWIG interface file instead.
 * ----------------------------------------------------------------------------- */

package template_partial_specialization;

public class H {
  private long swigCPtr;
  protected boolean swigCMemOwn;

  protected H(long cPtr, boolean cMemoryOwn) {
    swigCMemOwn = cMemoryOwn;
    swigCPtr = cPtr;
  }

  protected static long getCPtr(H obj) {
    return (obj == null) ? 0 : obj.swigCPtr;
  }

  protected void finalize() {
    delete();
  }

  public synchronized void delete() {
    if (swigCPtr != 0) {
      if (swigCMemOwn) {
        swigCMemOwn = false;
        template_partial_specializationJNI.delete_H(swigCPtr);
      }
      swigCPtr = 0;
    }
  }

  public void h() {
    template_partial_specializationJNI.H_h(swigCPtr, this);
  }

  public H() {
    this(template_partial_specializationJNI.new_H(), true);
  }

}
