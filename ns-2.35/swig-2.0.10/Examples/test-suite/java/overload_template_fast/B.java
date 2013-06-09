/* ----------------------------------------------------------------------------
 * This file was automatically generated by SWIG (http://www.swig.org).
 * Version 2.0.10
 *
 * Do not make changes to this file unless you know what you are doing--modify
 * the SWIG interface file instead.
 * ----------------------------------------------------------------------------- */

package overload_template_fast;

public class B {
  private long swigCPtr;
  protected boolean swigCMemOwn;

  protected B(long cPtr, boolean cMemoryOwn) {
    swigCMemOwn = cMemoryOwn;
    swigCPtr = cPtr;
  }

  protected static long getCPtr(B obj) {
    return (obj == null) ? 0 : obj.swigCPtr;
  }

  protected void finalize() {
    delete();
  }

  public synchronized void delete() {
    if (swigCPtr != 0) {
      if (swigCMemOwn) {
        swigCMemOwn = false;
        overload_template_fastJNI.delete_B(swigCPtr);
      }
      swigCPtr = 0;
    }
  }

  public void foo(double y) {
    overload_template_fastJNI.B_foo__SWIG_0(swigCPtr, this, y);
  }

  public void foo(int y) {
    overload_template_fastJNI.B_foo__SWIG_1(swigCPtr, this, y);
  }

  public void foo(char y) {
    overload_template_fastJNI.B_foo__SWIG_2(swigCPtr, this, y);
  }

  public B() {
    this(overload_template_fastJNI.new_B(), true);
  }

}
