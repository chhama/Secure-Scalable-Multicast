/* ----------------------------------------------------------------------------
 * This file was automatically generated by SWIG (http://www.swig.org).
 * Version 2.0.10
 *
 * Do not make changes to this file unless you know what you are doing--modify
 * the SWIG interface file instead.
 * ----------------------------------------------------------------------------- */

package director_frob;

public class Delta extends Charlie {
  private long swigCPtr;

  protected Delta(long cPtr, boolean cMemoryOwn) {
    super(director_frobJNI.Delta_SWIGUpcast(cPtr), cMemoryOwn);
    swigCPtr = cPtr;
  }

  protected static long getCPtr(Delta obj) {
    return (obj == null) ? 0 : obj.swigCPtr;
  }

  protected void finalize() {
    delete();
  }

  public synchronized void delete() {
    if (swigCPtr != 0) {
      if (swigCMemOwn) {
        swigCMemOwn = false;
        director_frobJNI.delete_Delta(swigCPtr);
      }
      swigCPtr = 0;
    }
    super.delete();
  }

  protected void swigDirectorDisconnect() {
    swigCMemOwn = false;
    delete();
  }

  public void swigReleaseOwnership() {
    swigCMemOwn = false;
    director_frobJNI.Delta_change_ownership(this, swigCPtr, false);
  }

  public void swigTakeOwnership() {
    swigCMemOwn = true;
    director_frobJNI.Delta_change_ownership(this, swigCPtr, true);
  }

  public Delta() {
    this(director_frobJNI.new_Delta(), true);
    director_frobJNI.Delta_director_connect(this, swigCPtr, swigCMemOwn, true);
  }

}