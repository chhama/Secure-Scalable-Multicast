/* ----------------------------------------------------------------------------
 * This file was automatically generated by SWIG (http://www.swig.org).
 * Version 2.0.10
 *
 * Do not make changes to this file unless you know what you are doing--modify
 * the SWIG interface file instead.
 * ----------------------------------------------------------------------------- */

package template_explicit;

public class vecint {
  private long swigCPtr;
  protected boolean swigCMemOwn;

  protected vecint(long cPtr, boolean cMemoryOwn) {
    swigCMemOwn = cMemoryOwn;
    swigCPtr = cPtr;
  }

  protected static long getCPtr(vecint obj) {
    return (obj == null) ? 0 : obj.swigCPtr;
  }

  protected void finalize() {
    delete();
  }

  public synchronized void delete() {
    if (swigCPtr != 0) {
      if (swigCMemOwn) {
        swigCMemOwn = false;
        template_explicitJNI.delete_vecint(swigCPtr);
      }
      swigCPtr = 0;
    }
  }

  public vecint(int _sz) {
    this(template_explicitJNI.new_vecint(_sz), true);
  }

  public SWIGTYPE_p_int get(int index) {
    return new SWIGTYPE_p_int(template_explicitJNI.vecint_get(swigCPtr, this, index), false);
  }

  public void set(int index, SWIGTYPE_p_int val) {
    template_explicitJNI.vecint_set(swigCPtr, this, index, SWIGTYPE_p_int.getCPtr(val));
  }

  public void testconst(int x) {
    template_explicitJNI.vecint_testconst(swigCPtr, this, x);
  }

}
