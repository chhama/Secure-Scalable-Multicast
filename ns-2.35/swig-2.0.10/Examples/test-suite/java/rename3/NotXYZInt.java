/* ----------------------------------------------------------------------------
 * This file was automatically generated by SWIG (http://www.swig.org).
 * Version 2.0.10
 *
 * Do not make changes to this file unless you know what you are doing--modify
 * the SWIG interface file instead.
 * ----------------------------------------------------------------------------- */

package rename3;

public class NotXYZInt {
  private long swigCPtr;
  protected boolean swigCMemOwn;

  protected NotXYZInt(long cPtr, boolean cMemoryOwn) {
    swigCMemOwn = cMemoryOwn;
    swigCPtr = cPtr;
  }

  protected static long getCPtr(NotXYZInt obj) {
    return (obj == null) ? 0 : obj.swigCPtr;
  }

  protected void finalize() {
    delete();
  }

  public synchronized void delete() {
    if (swigCPtr != 0) {
      if (swigCMemOwn) {
        swigCMemOwn = false;
        rename3JNI.delete_NotXYZInt(swigCPtr);
      }
      swigCPtr = 0;
    }
  }

  public NotXYZInt() {
    this(rename3JNI.new_NotXYZInt(), true);
  }

}