/* ----------------------------------------------------------------------------
 * This file was automatically generated by SWIG (http://www.swig.org).
 * Version 2.0.10
 *
 * Do not make changes to this file unless you know what you are doing--modify
 * the SWIG interface file instead.
 * ----------------------------------------------------------------------------- */

package rename1;

public class NotXYZEnu {
  private long swigCPtr;
  protected boolean swigCMemOwn;

  protected NotXYZEnu(long cPtr, boolean cMemoryOwn) {
    swigCMemOwn = cMemoryOwn;
    swigCPtr = cPtr;
  }

  protected static long getCPtr(NotXYZEnu obj) {
    return (obj == null) ? 0 : obj.swigCPtr;
  }

  protected void finalize() {
    delete();
  }

  public synchronized void delete() {
    if (swigCPtr != 0) {
      if (swigCMemOwn) {
        swigCMemOwn = false;
        rename1JNI.delete_NotXYZEnu(swigCPtr);
      }
      swigCPtr = 0;
    }
  }

  public NotXYZEnu() {
    this(rename1JNI.new_NotXYZEnu(), true);
  }

}