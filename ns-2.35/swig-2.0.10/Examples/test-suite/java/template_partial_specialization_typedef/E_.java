/* ----------------------------------------------------------------------------
 * This file was automatically generated by SWIG (http://www.swig.org).
 * Version 2.0.10
 *
 * Do not make changes to this file unless you know what you are doing--modify
 * the SWIG interface file instead.
 * ----------------------------------------------------------------------------- */

package template_partial_specialization_typedef;

public class E_ {
  private long swigCPtr;
  protected boolean swigCMemOwn;

  protected E_(long cPtr, boolean cMemoryOwn) {
    swigCMemOwn = cMemoryOwn;
    swigCPtr = cPtr;
  }

  protected static long getCPtr(E_ obj) {
    return (obj == null) ? 0 : obj.swigCPtr;
  }

  protected void finalize() {
    delete();
  }

  public synchronized void delete() {
    if (swigCPtr != 0) {
      if (swigCMemOwn) {
        swigCMemOwn = false;
        template_partial_specialization_typedefJNI.delete_E_(swigCPtr);
      }
      swigCPtr = 0;
    }
  }

  public void e() {
    template_partial_specialization_typedefJNI.E__e(swigCPtr, this);
  }

  public E_() {
    this(template_partial_specialization_typedefJNI.new_E_(), true);
  }

}
