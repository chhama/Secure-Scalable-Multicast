/* ----------------------------------------------------------------------------
 * This file was automatically generated by SWIG (http://www.swig.org).
 * Version 2.0.10
 *
 * Do not make changes to this file unless you know what you are doing--modify
 * the SWIG interface file instead.
 * ----------------------------------------------------------------------------- */

package template_specialization_defarg;

public class C_d {
  private long swigCPtr;
  protected boolean swigCMemOwn;

  protected C_d(long cPtr, boolean cMemoryOwn) {
    swigCMemOwn = cMemoryOwn;
    swigCPtr = cPtr;
  }

  protected static long getCPtr(C_d obj) {
    return (obj == null) ? 0 : obj.swigCPtr;
  }

  protected void finalize() {
    delete();
  }

  public synchronized void delete() {
    if (swigCPtr != 0) {
      if (swigCMemOwn) {
        swigCMemOwn = false;
        template_specialization_defargJNI.delete_C_d(swigCPtr);
      }
      swigCPtr = 0;
    }
  }

  public int hello() {
    return template_specialization_defargJNI.C_d_hello(swigCPtr, this);
  }

  public C_d(double a) {
    this(template_specialization_defargJNI.new_C_d(a), true);
  }

}