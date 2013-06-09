/* ----------------------------------------------------------------------------
 * This file was automatically generated by SWIG (http://www.swig.org).
 * Version 2.0.10
 *
 * Do not make changes to this file unless you know what you are doing--modify
 * the SWIG interface file instead.
 * ----------------------------------------------------------------------------- */

package director_overload;

public class OverloadedPointers {
  private long swigCPtr;
  protected boolean swigCMemOwn;

  protected OverloadedPointers(long cPtr, boolean cMemoryOwn) {
    swigCMemOwn = cMemoryOwn;
    swigCPtr = cPtr;
  }

  protected static long getCPtr(OverloadedPointers obj) {
    return (obj == null) ? 0 : obj.swigCPtr;
  }

  protected void finalize() {
    delete();
  }

  public synchronized void delete() {
    if (swigCPtr != 0) {
      if (swigCMemOwn) {
        swigCMemOwn = false;
        director_overloadJNI.delete_OverloadedPointers(swigCPtr);
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
    director_overloadJNI.OverloadedPointers_change_ownership(this, swigCPtr, false);
  }

  public void swigTakeOwnership() {
    swigCMemOwn = true;
    director_overloadJNI.OverloadedPointers_change_ownership(this, swigCPtr, true);
  }

  public void method(SWIGTYPE_p_int p) {
    if (getClass() == OverloadedPointers.class) director_overloadJNI.OverloadedPointers_method__SWIG_0(swigCPtr, this, SWIGTYPE_p_int.getCPtr(p)); else director_overloadJNI.OverloadedPointers_methodSwigExplicitOverloadedPointers__SWIG_0(swigCPtr, this, SWIGTYPE_p_int.getCPtr(p));
  }

  public void method(SWIGTYPE_p_double p) {
    if (getClass() == OverloadedPointers.class) director_overloadJNI.OverloadedPointers_method__SWIG_1(swigCPtr, this, SWIGTYPE_p_double.getCPtr(p)); else director_overloadJNI.OverloadedPointers_methodSwigExplicitOverloadedPointers__SWIG_1(swigCPtr, this, SWIGTYPE_p_double.getCPtr(p));
  }

  public void method(SWIGTYPE_p_bool r) {
    if (getClass() == OverloadedPointers.class) director_overloadJNI.OverloadedPointers_method__SWIG_2(swigCPtr, this, SWIGTYPE_p_bool.getCPtr(r)); else director_overloadJNI.OverloadedPointers_methodSwigExplicitOverloadedPointers__SWIG_2(swigCPtr, this, SWIGTYPE_p_bool.getCPtr(r));
  }

  public void method(SWIGTYPE_p_short r) {
    if (getClass() == OverloadedPointers.class) director_overloadJNI.OverloadedPointers_method__SWIG_3(swigCPtr, this, SWIGTYPE_p_short.getCPtr(r)); else director_overloadJNI.OverloadedPointers_methodSwigExplicitOverloadedPointers__SWIG_3(swigCPtr, this, SWIGTYPE_p_short.getCPtr(r));
  }

  public void method(OverloadedClass p) {
    if (getClass() == OverloadedPointers.class) director_overloadJNI.OverloadedPointers_method__SWIG_4(swigCPtr, this, OverloadedClass.getCPtr(p), p); else director_overloadJNI.OverloadedPointers_methodSwigExplicitOverloadedPointers__SWIG_4(swigCPtr, this, OverloadedClass.getCPtr(p), p);
  }

  public void method(OverloadedPointers p) {
    if (getClass() == OverloadedPointers.class) director_overloadJNI.OverloadedPointers_method__SWIG_5(swigCPtr, this, OverloadedPointers.getCPtr(p), p); else director_overloadJNI.OverloadedPointers_methodSwigExplicitOverloadedPointers__SWIG_5(swigCPtr, this, OverloadedPointers.getCPtr(p), p);
  }

  public void notover(SWIGTYPE_p_int p) {
    if (getClass() == OverloadedPointers.class) director_overloadJNI.OverloadedPointers_notover(swigCPtr, this, SWIGTYPE_p_int.getCPtr(p)); else director_overloadJNI.OverloadedPointers_notoverSwigExplicitOverloadedPointers(swigCPtr, this, SWIGTYPE_p_int.getCPtr(p));
  }

  public OverloadedPointers() {
    this(director_overloadJNI.new_OverloadedPointers(), true);
    director_overloadJNI.OverloadedPointers_director_connect(this, swigCPtr, swigCMemOwn, true);
  }

}