/* ----------------------------------------------------------------------------
 * This file was automatically generated by SWIG (http://www.swig.org).
 * Version 2.0.10
 *
 * Do not make changes to this file unless you know what you are doing--modify
 * the SWIG interface file instead.
 * ----------------------------------------------------------------------------- */

package constructor_explicit;

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
        constructor_explicitJNI.delete_Foo(swigCPtr);
      }
      swigCPtr = 0;
    }
  }

  public Foo() {
    this(constructor_explicitJNI.new_Foo__SWIG_0(), true);
  }

  public Foo(int arg0) {
    this(constructor_explicitJNI.new_Foo__SWIG_1(arg0), true);
  }

}
