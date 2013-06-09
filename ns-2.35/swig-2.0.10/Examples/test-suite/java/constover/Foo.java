/* ----------------------------------------------------------------------------
 * This file was automatically generated by SWIG (http://www.swig.org).
 * Version 2.0.10
 *
 * Do not make changes to this file unless you know what you are doing--modify
 * the SWIG interface file instead.
 * ----------------------------------------------------------------------------- */

package constover;

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
        constoverJNI.delete_Foo(swigCPtr);
      }
      swigCPtr = 0;
    }
  }

  public Foo() {
    this(constoverJNI.new_Foo(), true);
  }

  public String test(String x) {
    return constoverJNI.Foo_test(swigCPtr, this, x);
  }

  public String test_pconst(String x) {
    return constoverJNI.Foo_test_pconst(swigCPtr, this, x);
  }

  public String test_constm(String x) {
    return constoverJNI.Foo_test_constm(swigCPtr, this, x);
  }

  public String test_pconstm(String x) {
    return constoverJNI.Foo_test_pconstm(swigCPtr, this, x);
  }

}
