/* ----------------------------------------------------------------------------
 * This file was automatically generated by SWIG (http://www.swig.org).
 * Version 2.0.10
 *
 * Do not make changes to this file unless you know what you are doing--modify
 * the SWIG interface file instead.
 * ----------------------------------------------------------------------------- */

package using2;

public class _FooImpl {
  private long swigCPtr;
  protected boolean swigCMemOwn;

  protected _FooImpl(long cPtr, boolean cMemoryOwn) {
    swigCMemOwn = cMemoryOwn;
    swigCPtr = cPtr;
  }

  protected static long getCPtr(_FooImpl obj) {
    return (obj == null) ? 0 : obj.swigCPtr;
  }

  protected void finalize() {
    delete();
  }

  public synchronized void delete() {
    if (swigCPtr != 0) {
      if (swigCMemOwn) {
        swigCMemOwn = false;
        using2JNI.delete__FooImpl(swigCPtr);
      }
      swigCPtr = 0;
    }
  }

  public _FooImpl() {
    this(using2JNI.new__FooImpl(), true);
  }

}
