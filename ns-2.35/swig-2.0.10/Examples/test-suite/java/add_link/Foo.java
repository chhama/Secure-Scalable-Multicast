/* ----------------------------------------------------------------------------
 * This file was automatically generated by SWIG (http://www.swig.org).
 * Version 2.0.10
 *
 * Do not make changes to this file unless you know what you are doing--modify
 * the SWIG interface file instead.
 * ----------------------------------------------------------------------------- */

package add_link;

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
        add_linkJNI.delete_Foo(swigCPtr);
      }
      swigCPtr = 0;
    }
  }

  public Foo() {
    this(add_linkJNI.new_Foo(), true);
  }

  public Foo blah() {
    long cPtr = add_linkJNI.Foo_blah(swigCPtr, this);
    return (cPtr == 0) ? null : new Foo(cPtr, false);
  }

}
