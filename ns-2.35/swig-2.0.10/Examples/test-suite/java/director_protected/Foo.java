/* ----------------------------------------------------------------------------
 * This file was automatically generated by SWIG (http://www.swig.org).
 * Version 2.0.10
 *
 * Do not make changes to this file unless you know what you are doing--modify
 * the SWIG interface file instead.
 * ----------------------------------------------------------------------------- */

package director_protected;

public class Foo {
  private long swigCPtr;
  protected boolean swigCMemOwn;

  protected Foo(long cPtr, boolean cMemoryOwn) {
    swigCMemOwn = cMemoryOwn;
    swigCPtr = cPtr;
  }

  protected static long getCPtr(Foo obj) {
    return (obj == null) ? 0 : obj.swigCPtr;
  }

  protected void finalize() {
    delete();
  }

  public synchronized void delete() {
    if (swigCPtr != 0) {
      if (swigCMemOwn) {
        swigCMemOwn = false;
        director_protectedJNI.delete_Foo(swigCPtr);
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
    director_protectedJNI.Foo_change_ownership(this, swigCPtr, false);
  }

  public void swigTakeOwnership() {
    swigCMemOwn = true;
    director_protectedJNI.Foo_change_ownership(this, swigCPtr, true);
  }

  public String pong() {
    return (getClass() == Foo.class) ? director_protectedJNI.Foo_pong(swigCPtr, this) : director_protectedJNI.Foo_pongSwigExplicitFoo(swigCPtr, this);
  }

  public int s() {
    return director_protectedJNI.Foo_s(swigCPtr, this);
  }

  public int q() {
    return director_protectedJNI.Foo_q(swigCPtr, this);
  }

  protected Foo() {
    this(director_protectedJNI.new_Foo(), true);
    director_protectedJNI.Foo_director_connect(this, swigCPtr, swigCMemOwn, true);
  }

  protected String ping() {
    return director_protectedJNI.Foo_ping(swigCPtr, this);
  }

  protected String pang() {
    return (getClass() == Foo.class) ? director_protectedJNI.Foo_pang(swigCPtr, this) : director_protectedJNI.Foo_pangSwigExplicitFoo(swigCPtr, this);
  }

  protected String used() {
    return (getClass() == Foo.class) ? director_protectedJNI.Foo_used(swigCPtr, this) : director_protectedJNI.Foo_usedSwigExplicitFoo(swigCPtr, this);
  }

  protected String cheer() {
    return (getClass() == Foo.class) ? director_protectedJNI.Foo_cheer(swigCPtr, this) : director_protectedJNI.Foo_cheerSwigExplicitFoo(swigCPtr, this);
  }

}