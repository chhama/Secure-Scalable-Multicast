/* ----------------------------------------------------------------------------
 * This file was automatically generated by SWIG (http://www.swig.org).
 * Version 2.0.10
 *
 * Do not make changes to this file unless you know what you are doing--modify
 * the SWIG interface file instead.
 * ----------------------------------------------------------------------------- */

package template_typemaps;

public class Foo_I1 {
  private long swigCPtr;
  protected boolean swigCMemOwn;

  protected Foo_I1(long cPtr, boolean cMemoryOwn) {
    swigCMemOwn = cMemoryOwn;
    swigCPtr = cPtr;
  }

  protected static long getCPtr(Foo_I1 obj) {
    return (obj == null) ? 0 : obj.swigCPtr;
  }

  protected void finalize() {
    delete();
  }

  public synchronized void delete() {
    if (swigCPtr != 0) {
      if (swigCMemOwn) {
        swigCMemOwn = false;
        template_typemapsJNI.delete_Foo_I1(swigCPtr);
      }
      swigCPtr = 0;
    }
  }

  public void setVal(SWIGTYPE_p_Integer1 value) {
    template_typemapsJNI.Foo_I1_val_set(swigCPtr, this, SWIGTYPE_p_Integer1.getCPtr(value));
  }

  public SWIGTYPE_p_Integer1 getVal() {
    return new SWIGTYPE_p_Integer1(template_typemapsJNI.Foo_I1_val_get(swigCPtr, this), true);
  }

  public SWIGTYPE_p_Integer1 get_value() {
    return new SWIGTYPE_p_Integer1(template_typemapsJNI.Foo_I1_get_value(swigCPtr, this), true);
  }

  public void set_value(SWIGTYPE_p_Integer1 v) {
    template_typemapsJNI.Foo_I1_set_value(swigCPtr, this, SWIGTYPE_p_Integer1.getCPtr(v));
  }

  public Foo_I1() {
    this(template_typemapsJNI.new_Foo_I1(), true);
  }

}