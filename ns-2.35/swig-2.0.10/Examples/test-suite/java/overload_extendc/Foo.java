/* ----------------------------------------------------------------------------
 * This file was automatically generated by SWIG (http://www.swig.org).
 * Version 2.0.10
 *
 * Do not make changes to this file unless you know what you are doing--modify
 * the SWIG interface file instead.
 * ----------------------------------------------------------------------------- */

package overload_extendc;

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
        overload_extendcJNI.delete_Foo(swigCPtr);
      }
      swigCPtr = 0;
    }
  }

  public void setDummy(int value) {
    overload_extendcJNI.Foo_dummy_set(swigCPtr, this, value);
  }

  public int getDummy() {
    return overload_extendcJNI.Foo_dummy_get(swigCPtr, this);
  }

  public int test(int x) {
    return overload_extendcJNI.Foo_test__SWIG_0(swigCPtr, this, x);
  }

  public int test(String s) {
    return overload_extendcJNI.Foo_test__SWIG_1(swigCPtr, this, s);
  }

  public int test(double x, double y) {
    return overload_extendcJNI.Foo_test__SWIG_2(swigCPtr, this, x, y);
  }

  public int test(String s, int int1, int int2) {
    return overload_extendcJNI.Foo_test__SWIG_3(swigCPtr, this, s, int1, int2);
  }

  public int test(Foo f, int i, int j) {
    return overload_extendcJNI.Foo_test__SWIG_4(swigCPtr, this, Foo.getCPtr(f), f, i, j);
  }

  public Foo() {
    this(overload_extendcJNI.new_Foo(), true);
  }

}
