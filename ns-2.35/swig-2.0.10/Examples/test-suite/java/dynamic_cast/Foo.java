/* ----------------------------------------------------------------------------
 * This file was automatically generated by SWIG (http://www.swig.org).
 * Version 2.0.10
 *
 * Do not make changes to this file unless you know what you are doing--modify
 * the SWIG interface file instead.
 * ----------------------------------------------------------------------------- */

package dynamic_cast;

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
        dynamic_castJNI.delete_Foo(swigCPtr);
      }
      swigCPtr = 0;
    }
  }

  public Foo blah() {
    long cPtr = dynamic_castJNI.Foo_blah(swigCPtr, this);
    return (cPtr == 0) ? null : new Foo(cPtr, false);
  }

  public Foo() {
    this(dynamic_castJNI.new_Foo(), true);
  }

}
