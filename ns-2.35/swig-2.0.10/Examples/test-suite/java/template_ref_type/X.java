/* ----------------------------------------------------------------------------
 * This file was automatically generated by SWIG (http://www.swig.org).
 * Version 2.0.10
 *
 * Do not make changes to this file unless you know what you are doing--modify
 * the SWIG interface file instead.
 * ----------------------------------------------------------------------------- */

package template_ref_type;

public class X {
  private long swigCPtr;
  protected boolean swigCMemOwn;

  protected X(long cPtr, boolean cMemoryOwn) {
    swigCMemOwn = cMemoryOwn;
    swigCPtr = cPtr;
  }

  protected static long getCPtr(X obj) {
    return (obj == null) ? 0 : obj.swigCPtr;
  }

  protected void finalize() {
    delete();
  }

  public synchronized void delete() {
    if (swigCPtr != 0) {
      if (swigCMemOwn) {
        swigCMemOwn = false;
        template_ref_typeJNI.delete_X(swigCPtr);
      }
      swigCPtr = 0;
    }
  }

  public void set_i(long value) {
    template_ref_typeJNI.X__i_set(swigCPtr, this, value);
  }

  public long get_i() {
    return template_ref_typeJNI.X__i_get(swigCPtr, this);
  }

  public X() {
    this(template_ref_typeJNI.new_X(), true);
  }

}
