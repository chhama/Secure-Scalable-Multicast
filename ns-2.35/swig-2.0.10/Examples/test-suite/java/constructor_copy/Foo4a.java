/* ----------------------------------------------------------------------------
 * This file was automatically generated by SWIG (http://www.swig.org).
 * Version 2.0.10
 *
 * Do not make changes to this file unless you know what you are doing--modify
 * the SWIG interface file instead.
 * ----------------------------------------------------------------------------- */

package constructor_copy;

public class Foo4a {
  private long swigCPtr;
  protected boolean swigCMemOwn;

  protected Foo4a(long cPtr, boolean cMemoryOwn) {
    swigCMemOwn = cMemoryOwn;
    swigCPtr = cPtr;
  }

  protected static long getCPtr(Foo4a obj) {
    return (obj == null) ? 0 : obj.swigCPtr;
  }

  protected void finalize() {
    delete();
  }

  public synchronized void delete() {
    if (swigCPtr != 0) {
      if (swigCMemOwn) {
        swigCMemOwn = false;
        constructor_copyJNI.delete_Foo4a(swigCPtr);
      }
      swigCPtr = 0;
    }
  }

  public Foo4a() {
    this(constructor_copyJNI.new_Foo4a(), true);
  }

}