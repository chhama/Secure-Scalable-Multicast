/* ----------------------------------------------------------------------------
 * This file was automatically generated by SWIG (http://www.swig.org).
 * Version 2.0.10
 *
 * Do not make changes to this file unless you know what you are doing--modify
 * the SWIG interface file instead.
 * ----------------------------------------------------------------------------- */

package typemap_various;

public class FooInt {
  private long swigCPtr;
  protected boolean swigCMemOwn;

  protected FooInt(long cPtr, boolean cMemoryOwn) {
    swigCMemOwn = cMemoryOwn;
    swigCPtr = cPtr;
  }

  protected static long getCPtr(FooInt obj) {
    return (obj == null) ? 0 : obj.swigCPtr;
  }

  protected void finalize() {
    delete();
  }

  public synchronized void delete() {
    if (swigCPtr != 0) {
      if (swigCMemOwn) {
        swigCMemOwn = false;
        typemap_variousJNI.delete_FooInt(swigCPtr);
      }
      swigCPtr = 0;
    }
  }

  public FooInt() {
    this(typemap_variousJNI.new_FooInt(), true);
  }

}
