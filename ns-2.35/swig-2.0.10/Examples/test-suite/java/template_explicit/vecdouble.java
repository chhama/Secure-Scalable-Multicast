/* ----------------------------------------------------------------------------
 * This file was automatically generated by SWIG (http://www.swig.org).
 * Version 2.0.10
 *
 * Do not make changes to this file unless you know what you are doing--modify
 * the SWIG interface file instead.
 * ----------------------------------------------------------------------------- */

package template_explicit;

public class vecdouble {
  private long swigCPtr;
  protected boolean swigCMemOwn;

  protected vecdouble(long cPtr, boolean cMemoryOwn) {
    swigCMemOwn = cMemoryOwn;
    swigCPtr = cPtr;
  }

  protected static long getCPtr(vecdouble obj) {
    return (obj == null) ? 0 : obj.swigCPtr;
  }

  protected void finalize() {
    delete();
  }

  public synchronized void delete() {
    if (swigCPtr != 0) {
      if (swigCMemOwn) {
        swigCMemOwn = false;
        template_explicitJNI.delete_vecdouble(swigCPtr);
      }
      swigCPtr = 0;
    }
  }

  public vecdouble(int _sz) {
    this(template_explicitJNI.new_vecdouble(_sz), true);
  }

  public SWIGTYPE_p_double get(int index) {
    return new SWIGTYPE_p_double(template_explicitJNI.vecdouble_get(swigCPtr, this, index), false);
  }

  public void set(int index, SWIGTYPE_p_double val) {
    template_explicitJNI.vecdouble_set(swigCPtr, this, index, SWIGTYPE_p_double.getCPtr(val));
  }

  public void testconst(double x) {
    template_explicitJNI.vecdouble_testconst(swigCPtr, this, x);
  }

}
