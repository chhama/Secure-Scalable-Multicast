/* ----------------------------------------------------------------------------
 * This file was automatically generated by SWIG (http://www.swig.org).
 * Version 2.0.10
 *
 * Do not make changes to this file unless you know what you are doing--modify
 * the SWIG interface file instead.
 * ----------------------------------------------------------------------------- */

package using_composition;

public class Foo {
  private long swigCPtr;
  protected boolean swigCMemOwn;

  protected Foo(long cPtr, boolean cMemoryOwn) {
    swigCMemOwn = cMemoryOwn;
    swigCPtr = cPtr;
  }

  protected static long getCPtr(Foo obj) {
    return (obj == null) ? 0 : obj.swigCPtr;
  }

  protected void finalize() {
    delete();
  }

  public synchronized void delete() {
    if (swigCPtr != 0) {
      if (swigCMemOwn) {
        swigCMemOwn = false;
        using_compositionJNI.delete_Foo(swigCPtr);
      }
      swigCPtr = 0;
    }
  }

  public int blah(int x) {
    return using_compositionJNI.Foo_blah__SWIG_0(swigCPtr, this, x);
  }

  public String blah(String x) {
    return using_compositionJNI.Foo_blah__SWIG_1(swigCPtr, this, x);
  }

  public Foo() {
    this(using_compositionJNI.new_Foo(), true);
  }

}
