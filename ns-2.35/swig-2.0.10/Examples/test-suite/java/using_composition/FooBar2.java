/* ----------------------------------------------------------------------------
 * This file was automatically generated by SWIG (http://www.swig.org).
 * Version 2.0.10
 *
 * Do not make changes to this file unless you know what you are doing--modify
 * the SWIG interface file instead.
 * ----------------------------------------------------------------------------- */

package using_composition;

public class FooBar2 extends Foo {
  private long swigCPtr;

  protected FooBar2(long cPtr, boolean cMemoryOwn) {
    super(using_compositionJNI.FooBar2_SWIGUpcast(cPtr), cMemoryOwn);
    swigCPtr = cPtr;
  }

  protected static long getCPtr(FooBar2 obj) {
    return (obj == null) ? 0 : obj.swigCPtr;
  }

  protected void finalize() {
    delete();
  }

  public synchronized void delete() {
    if (swigCPtr != 0) {
      if (swigCMemOwn) {
        swigCMemOwn = false;
        using_compositionJNI.delete_FooBar2(swigCPtr);
      }
      swigCPtr = 0;
    }
    super.delete();
  }

  public String blah(String x) {
    return using_compositionJNI.FooBar2_blah__SWIG_0(swigCPtr, this, x);
  }

  public int blah(int x) {
    return using_compositionJNI.FooBar2_blah__SWIG_1_0(swigCPtr, this, x);
  }

  public double blah(double x) {
    return using_compositionJNI.FooBar2_blah__SWIG_2_0(swigCPtr, this, x);
  }

  public FooBar2() {
    this(using_compositionJNI.new_FooBar2(), true);
  }

}