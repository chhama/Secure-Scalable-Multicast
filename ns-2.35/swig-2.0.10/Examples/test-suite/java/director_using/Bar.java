/* ----------------------------------------------------------------------------
 * This file was automatically generated by SWIG (http://www.swig.org).
 * Version 2.0.10
 *
 * Do not make changes to this file unless you know what you are doing--modify
 * the SWIG interface file instead.
 * ----------------------------------------------------------------------------- */

package director_using;

public class Bar extends Foo_int {
  private long swigCPtr;

  protected Bar(long cPtr, boolean cMemoryOwn) {
    super(director_usingJNI.Bar_SWIGUpcast(cPtr), cMemoryOwn);
    swigCPtr = cPtr;
  }

  protected static long getCPtr(Bar obj) {
    return (obj == null) ? 0 : obj.swigCPtr;
  }

  protected void finalize() {
    delete();
  }

  public synchronized void delete() {
    if (swigCPtr != 0) {
      if (swigCMemOwn) {
        swigCMemOwn = false;
        director_usingJNI.delete_Bar(swigCPtr);
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
    director_usingJNI.Bar_change_ownership(this, swigCPtr, false);
  }

  public void swigTakeOwnership() {
    swigCMemOwn = true;
    director_usingJNI.Bar_change_ownership(this, swigCPtr, true);
  }

  public String step() {
    return director_usingJNI.Bar_step(swigCPtr, this);
  }

  public String do_step() {
    return director_usingJNI.Bar_do_step(swigCPtr, this);
  }

  protected String do_advance() {
    return (getClass() == Bar.class) ? director_usingJNI.Bar_do_advance(swigCPtr, this) : director_usingJNI.Bar_do_advanceSwigExplicitBar(swigCPtr, this);
  }

  public Bar() {
    this(director_usingJNI.new_Bar(), true);
    director_usingJNI.Bar_director_connect(this, swigCPtr, swigCMemOwn, true);
  }

}
