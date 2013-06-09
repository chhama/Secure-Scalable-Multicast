/* ----------------------------------------------------------------------------
 * This file was automatically generated by SWIG (http://www.swig.org).
 * Version 2.0.10
 *
 * Do not make changes to this file unless you know what you are doing--modify
 * the SWIG interface file instead.
 * ----------------------------------------------------------------------------- */

package contract;

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
        contractJNI.delete_Foo(swigCPtr);
      }
      swigCPtr = 0;
    }
  }

  public int test_preassert(int x, int y) {
    return contractJNI.Foo_test_preassert(swigCPtr, this, x, y);
  }

  public int test_postassert(int x) {
    return contractJNI.Foo_test_postassert(swigCPtr, this, x);
  }

  public int test_prepost(int x, int y) {
    return contractJNI.Foo_test_prepost(swigCPtr, this, x, y);
  }

  public static int stest_prepost(int x, int y) {
    return contractJNI.Foo_stest_prepost(x, y);
  }

  public Foo() {
    this(contractJNI.new_Foo(), true);
  }

}
