/* ----------------------------------------------------------------------------
 * This file was automatically generated by SWIG (http://www.swig.org).
 * Version 2.0.10
 *
 * Do not make changes to this file unless you know what you are doing--modify
 * the SWIG interface file instead.
 * ----------------------------------------------------------------------------- */

package using_inherit;

public class Bar extends Foo {
  private long swigCPtr;

  protected Bar(long cPtr, boolean cMemoryOwn) {
    super(using_inheritJNI.Bar_SWIGUpcast(cPtr), cMemoryOwn);
    swigCPtr = cPtr;
  }

  protected static long getCPtr(Bar obj) {
    return (obj == null) ? 0 : obj.swigCPtr;
  }

  protected void finalize() {
    delete();
  }

  public synchronized void delete() {
    if (swigCPtr != 0) {
      if (swigCMemOwn) {
        swigCMemOwn = false;
        using_inheritJNI.delete_Bar(swigCPtr);
      }
      swigCPtr = 0;
    }
    super.delete();
  }

  public int test(int x) {
    return using_inheritJNI.Bar_test_SWIG_0_0(swigCPtr, this, x);
  }

  public double test(double x) {
    return using_inheritJNI.Bar_test_SWIG_0_1(swigCPtr, this, x);
  }

  public Bar() {
    this(using_inheritJNI.new_Bar(), true);
  }

}
