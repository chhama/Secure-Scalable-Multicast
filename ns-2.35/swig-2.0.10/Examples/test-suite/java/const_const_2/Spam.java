/* ----------------------------------------------------------------------------
 * This file was automatically generated by SWIG (http://www.swig.org).
 * Version 2.0.10
 *
 * Do not make changes to this file unless you know what you are doing--modify
 * the SWIG interface file instead.
 * ----------------------------------------------------------------------------- */

package const_const_2;

public class Spam {
  private long swigCPtr;
  protected boolean swigCMemOwn;

  protected Spam(long cPtr, boolean cMemoryOwn) {
    swigCMemOwn = cMemoryOwn;
    swigCPtr = cPtr;
  }

  protected static long getCPtr(Spam obj) {
    return (obj == null) ? 0 : obj.swigCPtr;
  }

  protected void finalize() {
    delete();
  }

  public synchronized void delete() {
    if (swigCPtr != 0) {
      if (swigCMemOwn) {
        swigCMemOwn = false;
        const_const_2JNI.delete_Spam(swigCPtr);
      }
      swigCPtr = 0;
    }
  }

  public Spam() {
    this(const_const_2JNI.new_Spam(), true);
  }

}
