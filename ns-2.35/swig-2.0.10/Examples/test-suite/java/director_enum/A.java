/* ----------------------------------------------------------------------------
 * This file was automatically generated by SWIG (http://www.swig.org).
 * Version 2.0.10
 *
 * Do not make changes to this file unless you know what you are doing--modify
 * the SWIG interface file instead.
 * ----------------------------------------------------------------------------- */

package director_enum;

public class A {
  private long swigCPtr;
  protected boolean swigCMemOwn;

  protected A(long cPtr, boolean cMemoryOwn) {
    swigCMemOwn = cMemoryOwn;
    swigCPtr = cPtr;
  }

  protected static long getCPtr(A obj) {
    return (obj == null) ? 0 : obj.swigCPtr;
  }

  protected void finalize() {
    delete();
  }

  public synchronized void delete() {
    if (swigCPtr != 0) {
      if (swigCMemOwn) {
        swigCMemOwn = false;
        director_enumJNI.delete_A(swigCPtr);
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
    director_enumJNI.A_change_ownership(this, swigCPtr, false);
  }

  public void swigTakeOwnership() {
    swigCMemOwn = true;
    director_enumJNI.A_change_ownership(this, swigCPtr, true);
  }

  public A(double a, double b, FType c) {
    this(director_enumJNI.new_A(a, b, c.swigValue()), true);
    director_enumJNI.A_director_connect(this, swigCPtr, swigCMemOwn, true);
  }

  public int f(int i) {
    return (getClass() == A.class) ? director_enumJNI.A_f__SWIG_0(swigCPtr, this, i) : director_enumJNI.A_fSwigExplicitA__SWIG_0(swigCPtr, this, i);
  }

  public int f() {
    return (getClass() == A.class) ? director_enumJNI.A_f__SWIG_1(swigCPtr, this) : director_enumJNI.A_fSwigExplicitA__SWIG_1(swigCPtr, this);
  }

}