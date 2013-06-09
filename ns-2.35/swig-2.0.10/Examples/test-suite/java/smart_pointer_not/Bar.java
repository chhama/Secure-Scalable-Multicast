/* ----------------------------------------------------------------------------
 * This file was automatically generated by SWIG (http://www.swig.org).
 * Version 2.0.10
 *
 * Do not make changes to this file unless you know what you are doing--modify
 * the SWIG interface file instead.
 * ----------------------------------------------------------------------------- */

package smart_pointer_not;

public class Bar {
  private long swigCPtr;
  protected boolean swigCMemOwn;

  protected Bar(long cPtr, boolean cMemoryOwn) {
    swigCMemOwn = cMemoryOwn;
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
        smart_pointer_notJNI.delete_Bar(swigCPtr);
      }
      swigCPtr = 0;
    }
  }

  public Bar(Foo f) {
    this(smart_pointer_notJNI.new_Bar(Foo.getCPtr(f), f), true);
  }

  public Foo __deref__() {
    return new Foo(smart_pointer_notJNI.Bar___deref__(swigCPtr, this), true);
  }

}