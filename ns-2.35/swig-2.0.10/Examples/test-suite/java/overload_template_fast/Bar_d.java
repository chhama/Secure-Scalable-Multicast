/* ----------------------------------------------------------------------------
 * This file was automatically generated by SWIG (http://www.swig.org).
 * Version 2.0.10
 *
 * Do not make changes to this file unless you know what you are doing--modify
 * the SWIG interface file instead.
 * ----------------------------------------------------------------------------- */

package overload_template_fast;

public class Bar_d {
  private long swigCPtr;
  protected boolean swigCMemOwn;

  protected Bar_d(long cPtr, boolean cMemoryOwn) {
    swigCMemOwn = cMemoryOwn;
    swigCPtr = cPtr;
  }

  protected static long getCPtr(Bar_d obj) {
    return (obj == null) ? 0 : obj.swigCPtr;
  }

  protected void finalize() {
    delete();
  }

  public synchronized void delete() {
    if (swigCPtr != 0) {
      if (swigCMemOwn) {
        swigCMemOwn = false;
        overload_template_fastJNI.delete_Bar_d(swigCPtr);
      }
      swigCPtr = 0;
    }
  }

  public void foo(double t1) {
    overload_template_fastJNI.Bar_d_foo__SWIG_0(swigCPtr, this, t1);
  }

  public void foo(double t1, double t2) {
    overload_template_fastJNI.Bar_d_foo__SWIG_1(swigCPtr, this, t1, t2);
  }

  public void foo(int a, int b, int c) {
    overload_template_fastJNI.Bar_d_foo__SWIG_2(swigCPtr, this, a, b, c);
  }

  public Bar_d() {
    this(overload_template_fastJNI.new_Bar_d(), true);
  }

}
