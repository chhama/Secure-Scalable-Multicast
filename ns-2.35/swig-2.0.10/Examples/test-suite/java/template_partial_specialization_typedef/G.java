/* ----------------------------------------------------------------------------
 * This file was automatically generated by SWIG (http://www.swig.org).
 * Version 2.0.10
 *
 * Do not make changes to this file unless you know what you are doing--modify
 * the SWIG interface file instead.
 * ----------------------------------------------------------------------------- */

package template_partial_specialization_typedef;

public class G {
  private long swigCPtr;
  protected boolean swigCMemOwn;

  protected G(long cPtr, boolean cMemoryOwn) {
    swigCMemOwn = cMemoryOwn;
    swigCPtr = cPtr;
  }

  protected static long getCPtr(G obj) {
    return (obj == null) ? 0 : obj.swigCPtr;
  }

  protected void finalize() {
    delete();
  }

  public synchronized void delete() {
    if (swigCPtr != 0) {
      if (swigCMemOwn) {
        swigCMemOwn = false;
        template_partial_specialization_typedefJNI.delete_G(swigCPtr);
      }
      swigCPtr = 0;
    }
  }

  public void g() {
    template_partial_specialization_typedefJNI.G_g(swigCPtr, this);
  }

  public G() {
    this(template_partial_specialization_typedefJNI.new_G(), true);
  }

}
