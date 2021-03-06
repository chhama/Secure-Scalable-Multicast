/* ----------------------------------------------------------------------------
 * This file was automatically generated by SWIG (http://www.swig.org).
 * Version 2.0.10
 *
 * Do not make changes to this file unless you know what you are doing--modify
 * the SWIG interface file instead.
 * ----------------------------------------------------------------------------- */

package director_binary_string;

public class Callback {
  private long swigCPtr;
  protected boolean swigCMemOwn;

  protected Callback(long cPtr, boolean cMemoryOwn) {
    swigCMemOwn = cMemoryOwn;
    swigCPtr = cPtr;
  }

  protected static long getCPtr(Callback obj) {
    return (obj == null) ? 0 : obj.swigCPtr;
  }

  protected void finalize() {
    delete();
  }

  public synchronized void delete() {
    if (swigCPtr != 0) {
      if (swigCMemOwn) {
        swigCMemOwn = false;
        director_binary_stringJNI.delete_Callback(swigCPtr);
      }
      swigCPtr = 0;
    }
  }

  protected void swigDirectorDisconnect() {
    swigCMemOwn = false;
    delete();
  }

  public void swigReleaseOwnership() {
    swigCMemOwn = false;
    director_binary_stringJNI.Callback_change_ownership(this, swigCPtr, false);
  }

  public void swigTakeOwnership() {
    swigCMemOwn = true;
    director_binary_stringJNI.Callback_change_ownership(this, swigCPtr, true);
  }

  public void run(byte[] dataBufferAA, byte[] dataBufferBB) {
    if (getClass() == Callback.class) director_binary_stringJNI.Callback_run(swigCPtr, this, dataBufferAA, dataBufferBB); else director_binary_stringJNI.Callback_runSwigExplicitCallback(swigCPtr, this, dataBufferAA, dataBufferBB);
  }

  public Callback() {
    this(director_binary_stringJNI.new_Callback(), true);
    director_binary_stringJNI.Callback_director_connect(this, swigCPtr, swigCMemOwn, true);
  }

}
