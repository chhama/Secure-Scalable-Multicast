/* ----------------------------------------------------------------------------
 * This file was automatically generated by SWIG (http://www.swig.org).
 * Version 2.0.10
 *
 * Do not make changes to this file unless you know what you are doing--modify
 * the SWIG interface file instead.
 * ----------------------------------------------------------------------------- */

package template_partial_specialization_typedef;

public class BB {
  private long swigCPtr;
  protected boolean swigCMemOwn;

  protected BB(long cPtr, boolean cMemoryOwn) {
    swigCMemOwn = cMemoryOwn;
    swigCPtr = cPtr;
  }

  protected static long getCPtr(BB obj) {
    return (obj == null) ? 0 : obj.swigCPtr;
  }

  protected void finalize() {
    delete();
  }

  public synchronized void delete() {
    if (swigCPtr != 0) {
      if (swigCMemOwn) {
        swigCMemOwn = false;
        template_partial_specialization_typedefJNI.delete_BB(swigCPtr);
      }
      swigCPtr = 0;
    }
  }

  public void b() {
    template_partial_specialization_typedefJNI.BB_b(swigCPtr, this);
  }

  public BB() {
    this(template_partial_specialization_typedefJNI.new_BB(), true);
  }

}
