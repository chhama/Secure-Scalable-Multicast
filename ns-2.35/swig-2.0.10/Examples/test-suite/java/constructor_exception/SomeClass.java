/* ----------------------------------------------------------------------------
 * This file was automatically generated by SWIG (http://www.swig.org).
 * Version 2.0.10
 *
 * Do not make changes to this file unless you know what you are doing--modify
 * the SWIG interface file instead.
 * ----------------------------------------------------------------------------- */

package constructor_exception;

public class SomeClass {
  private long swigCPtr;
  protected boolean swigCMemOwn;

  protected SomeClass(long cPtr, boolean cMemoryOwn) {
    swigCMemOwn = cMemoryOwn;
    swigCPtr = cPtr;
  }

  protected static long getCPtr(SomeClass obj) {
    return (obj == null) ? 0 : obj.swigCPtr;
  }

  protected void finalize() {
    delete();
  }

  public synchronized void delete() {
    if (swigCPtr != 0) {
      if (swigCMemOwn) {
        swigCMemOwn = false;
        constructor_exceptionJNI.delete_SomeClass(swigCPtr);
      }
      swigCPtr = 0;
    }
  }

  public SomeClass(int x) {
    this(constructor_exceptionJNI.new_SomeClass(x), true);
  }

}
