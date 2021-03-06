/* ----------------------------------------------------------------------------
 * This file was automatically generated by SWIG (http://www.swig.org).
 * Version 2.0.10
 *
 * Do not make changes to this file unless you know what you are doing--modify
 * the SWIG interface file instead.
 * ----------------------------------------------------------------------------- */

package newobject1;

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
        newobject1JNI.delete_Foo(swigCPtr);
      }
      swigCPtr = 0;
    }
  }

  public static Foo makeFoo() {
    long cPtr = newobject1JNI.Foo_makeFoo();
    return (cPtr == 0) ? null : new Foo(cPtr, true);
  }

  public Foo makeMore() {
    long cPtr = newobject1JNI.Foo_makeMore(swigCPtr, this);
    return (cPtr == 0) ? null : new Foo(cPtr, true);
  }

  public static int fooCount() {
    return newobject1JNI.Foo_fooCount();
  }

}
