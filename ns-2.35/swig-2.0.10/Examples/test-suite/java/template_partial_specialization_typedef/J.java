/* ----------------------------------------------------------------------------
 * This file was automatically generated by SWIG (http://www.swig.org).
 * Version 2.0.10
 *
 * Do not make changes to this file unless you know what you are doing--modify
 * the SWIG interface file instead.
 * ----------------------------------------------------------------------------- */

package template_partial_specialization_typedef;

public class J {
  private long swigCPtr;
  protected boolean swigCMemOwn;

  protected J(long cPtr, boolean cMemoryOwn) {
    swigCMemOwn = cMemoryOwn;
    swigCPtr = cPtr;
  }

  protected static long getCPtr(J obj) {
    return (obj == null) ? 0 : obj.swigCPtr;
  }

  protected void finalize() {
    delete();
  }

  public synchronized void delete() {
    if (swigCPtr != 0) {
      if (swigCMemOwn) {
        swigCMemOwn = false;
        template_partial_specialization_typedefJNI.delete_J(swigCPtr);
      }
      swigCPtr = 0;
    }
  }

  public void j() {
    template_partial_specialization_typedefJNI.J_j(swigCPtr, this);
  }

  public J() {
    this(template_partial_specialization_typedefJNI.new_J(), true);
  }

}
