/* ----------------------------------------------------------------------------
 * This file was automatically generated by SWIG (http://www.swig.org).
 * Version 2.0.10
 *
 * Do not make changes to this file unless you know what you are doing--modify
 * the SWIG interface file instead.
 * ----------------------------------------------------------------------------- */

package template_specialization_defarg;

public class C_i {
  private long swigCPtr;
  protected boolean swigCMemOwn;

  protected C_i(long cPtr, boolean cMemoryOwn) {
    swigCMemOwn = cMemoryOwn;
    swigCPtr = cPtr;
  }

  protected static long getCPtr(C_i obj) {
    return (obj == null) ? 0 : obj.swigCPtr;
  }

  protected void finalize() {
    delete();
  }

  public synchronized void delete() {
    if (swigCPtr != 0) {
      if (swigCMemOwn) {
        swigCMemOwn = false;
        template_specialization_defargJNI.delete_C_i(swigCPtr);
      }
      swigCPtr = 0;
    }
  }

  public int hi() {
    return template_specialization_defargJNI.C_i_hi(swigCPtr, this);
  }

  public C_i(int a) {
    this(template_specialization_defargJNI.new_C_i(a), true);
  }

}