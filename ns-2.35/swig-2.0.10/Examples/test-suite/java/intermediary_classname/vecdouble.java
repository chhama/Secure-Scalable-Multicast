/* ----------------------------------------------------------------------------
 * This file was automatically generated by SWIG (http://www.swig.org).
 * Version 2.0.10
 *
 * Do not make changes to this file unless you know what you are doing--modify
 * the SWIG interface file instead.
 * ----------------------------------------------------------------------------- */

package intermediary_classname;

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
        intermediary_classname.delete_vecdouble(swigCPtr);
      }
      swigCPtr = 0;
    }
  }

  public vecdouble(int _sz) {
    this(intermediary_classname.new_vecdouble(_sz), true);
  }

  public SWIGTYPE_p_double get(int index) {
    return new SWIGTYPE_p_double(intermediary_classname.vecdouble_get(swigCPtr, this, index), false);
  }

  public void set(int index, SWIGTYPE_p_double val) {
    intermediary_classname.vecdouble_set(swigCPtr, this, index, SWIGTYPE_p_double.getCPtr(val));
  }

  public void testconst(double x) {
    intermediary_classname.vecdouble_testconst(swigCPtr, this, x);
  }

}
