/* ----------------------------------------------------------------------------
 * This file was automatically generated by SWIG (http://www.swig.org).
 * Version 2.0.10
 *
 * Do not make changes to this file unless you know what you are doing--modify
 * the SWIG interface file instead.
 * ----------------------------------------------------------------------------- */

package template_extend_overload;

public class A_double {
  private long swigCPtr;
  protected boolean swigCMemOwn;

  protected A_double(long cPtr, boolean cMemoryOwn) {
    swigCMemOwn = cMemoryOwn;
    swigCPtr = cPtr;
  }

  protected static long getCPtr(A_double obj) {
    return (obj == null) ? 0 : obj.swigCPtr;
  }

  protected void finalize() {
    delete();
  }

  public synchronized void delete() {
    if (swigCPtr != 0) {
      if (swigCMemOwn) {
        swigCMemOwn = false;
        template_extend_overloadJNI.delete_A_double(swigCPtr);
      }
      swigCPtr = 0;
    }
  }

  public A_bool compose(SWIGTYPE_p_BT_double_bool_t f) {
    return new A_bool(template_extend_overloadJNI.A_double_compose__SWIG_0(swigCPtr, this, SWIGTYPE_p_BT_double_bool_t.getCPtr(f)), true);
  }

  public A_double compose(SWIGTYPE_p_BT_double_double_t f) {
    return new A_double(template_extend_overloadJNI.A_double_compose__SWIG_1(swigCPtr, this, SWIGTYPE_p_BT_double_double_t.getCPtr(f)), true);
  }

  public A_int compose(SWIGTYPE_p_BT_double_int_t f) {
    return new A_int(template_extend_overloadJNI.A_double_compose__SWIG_2(swigCPtr, this, SWIGTYPE_p_BT_double_int_t.getCPtr(f)), true);
  }

  public A_double() {
    this(template_extend_overloadJNI.new_A_double(), true);
  }

}