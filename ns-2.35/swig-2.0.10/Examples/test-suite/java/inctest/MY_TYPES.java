/* ----------------------------------------------------------------------------
 * This file was automatically generated by SWIG (http://www.swig.org).
 * Version 2.0.10
 *
 * Do not make changes to this file unless you know what you are doing--modify
 * the SWIG interface file instead.
 * ----------------------------------------------------------------------------- */

package inctest;

public class MY_TYPES {
  private long swigCPtr;
  protected boolean swigCMemOwn;

  protected MY_TYPES(long cPtr, boolean cMemoryOwn) {
    swigCMemOwn = cMemoryOwn;
    swigCPtr = cPtr;
  }

  protected static long getCPtr(MY_TYPES obj) {
    return (obj == null) ? 0 : obj.swigCPtr;
  }

  protected void finalize() {
    delete();
  }

  public synchronized void delete() {
    if (swigCPtr != 0) {
      if (swigCMemOwn) {
        swigCMemOwn = false;
        inctestJNI.delete_MY_TYPES(swigCPtr);
      }
      swigCPtr = 0;
    }
  }

  public MY_TYPES() {
    this(inctestJNI.new_MY_TYPES(), true);
  }

}
