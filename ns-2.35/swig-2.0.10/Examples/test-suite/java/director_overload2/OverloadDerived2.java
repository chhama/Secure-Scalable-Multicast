/* ----------------------------------------------------------------------------
 * This file was automatically generated by SWIG (http://www.swig.org).
 * Version 2.0.10
 *
 * Do not make changes to this file unless you know what you are doing--modify
 * the SWIG interface file instead.
 * ----------------------------------------------------------------------------- */

package director_overload2;

public class OverloadDerived2 extends OverloadBase {
  private long swigCPtr;

  protected OverloadDerived2(long cPtr, boolean cMemoryOwn) {
    super(director_overload2JNI.OverloadDerived2_SWIGUpcast(cPtr), cMemoryOwn);
    swigCPtr = cPtr;
  }

  protected static long getCPtr(OverloadDerived2 obj) {
    return (obj == null) ? 0 : obj.swigCPtr;
  }

  protected void finalize() {
    delete();
  }

  public synchronized void delete() {
    if (swigCPtr != 0) {
      if (swigCMemOwn) {
        swigCMemOwn = false;
        director_overload2JNI.delete_OverloadDerived2(swigCPtr);
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
    director_overload2JNI.OverloadDerived2_change_ownership(this, swigCPtr, false);
  }

  public void swigTakeOwnership() {
    swigCMemOwn = true;
    director_overload2JNI.OverloadDerived2_change_ownership(this, swigCPtr, true);
  }

  public void nnn() {
    if (getClass() == OverloadDerived2.class) director_overload2JNI.OverloadDerived2_nnn(swigCPtr, this); else director_overload2JNI.OverloadDerived2_nnnSwigExplicitOverloadDerived2(swigCPtr, this);
  }

  public OverloadDerived2() {
    this(director_overload2JNI.new_OverloadDerived2(), true);
    director_overload2JNI.OverloadDerived2_director_connect(this, swigCPtr, swigCMemOwn, true);
  }

}
