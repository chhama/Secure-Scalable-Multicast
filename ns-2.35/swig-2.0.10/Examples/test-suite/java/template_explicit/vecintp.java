/* ----------------------------------------------------------------------------
 * This file was automatically generated by SWIG (http://www.swig.org).
 * Version 2.0.10
 *
 * Do not make changes to this file unless you know what you are doing--modify
 * the SWIG interface file instead.
 * ----------------------------------------------------------------------------- */

package template_explicit;

public class vecintp {
  private long swigCPtr;
  protected boolean swigCMemOwn;

  protected vecintp(long cPtr, boolean cMemoryOwn) {
    swigCMemOwn = cMemoryOwn;
    swigCPtr = cPtr;
  }

  protected static long getCPtr(vecintp obj) {
    return (obj == null) ? 0 : obj.swigCPtr;
  }

  protected void finalize() {
    delete();
  }

  public synchronized void delete() {
    if (swigCPtr != 0) {
      if (swigCMemOwn) {
        swigCMemOwn = false;
        template_explicitJNI.delete_vecintp(swigCPtr);
      }
      swigCPtr = 0;
    }
  }

  public vecintp(int _sz) {
    this(template_explicitJNI.new_vecintp(_sz), true);
  }

  public SWIGTYPE_p_p_a_10__int get(int index) {
    return new SWIGTYPE_p_p_a_10__int(template_explicitJNI.vecintp_get(swigCPtr, this, index), false);
  }

  public void set(int index, SWIGTYPE_p_p_a_10__int val) {
    template_explicitJNI.vecintp_set(swigCPtr, this, index, SWIGTYPE_p_p_a_10__int.getCPtr(val));
  }

  public void testconst(SWIGTYPE_p_a_10__int x) {
    template_explicitJNI.vecintp_testconst(swigCPtr, this, SWIGTYPE_p_a_10__int.getCPtr(x));
  }

}
