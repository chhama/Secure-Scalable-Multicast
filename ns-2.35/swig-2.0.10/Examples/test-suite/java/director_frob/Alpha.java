/* ----------------------------------------------------------------------------
 * This file was automatically generated by SWIG (http://www.swig.org).
 * Version 2.0.10
 *
 * Do not make changes to this file unless you know what you are doing--modify
 * the SWIG interface file instead.
 * ----------------------------------------------------------------------------- */

package director_frob;

public class Alpha {
  private long swigCPtr;
  protected boolean swigCMemOwn;

  protected Alpha(long cPtr, boolean cMemoryOwn) {
    swigCMemOwn = cMemoryOwn;
    swigCPtr = cPtr;
  }

  protected static long getCPtr(Alpha obj) {
    return (obj == null) ? 0 : obj.swigCPtr;
  }

  protected void finalize() {
    delete();
  }

  public synchronized void delete() {
    if (swigCPtr != 0) {
      if (swigCMemOwn) {
        swigCMemOwn = false;
        director_frobJNI.delete_Alpha(swigCPtr);
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
    director_frobJNI.Alpha_change_ownership(this, swigCPtr, false);
  }

  public void swigTakeOwnership() {
    swigCMemOwn = true;
    director_frobJNI.Alpha_change_ownership(this, swigCPtr, true);
  }

  public String abs_method() {
    return director_frobJNI.Alpha_abs_method(swigCPtr, this);
  }

  public Alpha() {
    this(director_frobJNI.new_Alpha(), true);
    director_frobJNI.Alpha_director_connect(this, swigCPtr, swigCMemOwn, true);
  }

}