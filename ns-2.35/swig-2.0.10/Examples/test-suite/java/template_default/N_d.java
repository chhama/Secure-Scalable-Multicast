/* ----------------------------------------------------------------------------
 * This file was automatically generated by SWIG (http://www.swig.org).
 * Version 2.0.10
 *
 * Do not make changes to this file unless you know what you are doing--modify
 * the SWIG interface file instead.
 * ----------------------------------------------------------------------------- */

package template_default;

public class N_d {
  private long swigCPtr;
  protected boolean swigCMemOwn;

  protected N_d(long cPtr, boolean cMemoryOwn) {
    swigCMemOwn = cMemoryOwn;
    swigCPtr = cPtr;
  }

  protected static long getCPtr(N_d obj) {
    return (obj == null) ? 0 : obj.swigCPtr;
  }

  protected void finalize() {
    delete();
  }

  public synchronized void delete() {
    if (swigCPtr != 0) {
      if (swigCMemOwn) {
        swigCMemOwn = false;
        template_defaultJNI.delete_N_d(swigCPtr);
      }
      swigCPtr = 0;
    }
  }

  public int bar() {
    return template_defaultJNI.N_d_bar(swigCPtr, this);
  }

  public N_d() {
    this(template_defaultJNI.new_N_d(), true);
  }

}
