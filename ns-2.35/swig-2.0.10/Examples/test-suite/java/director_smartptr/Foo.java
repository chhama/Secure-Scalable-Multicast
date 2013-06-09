/* ----------------------------------------------------------------------------
 * This file was automatically generated by SWIG (http://www.swig.org).
 * Version 2.0.10
 *
 * Do not make changes to this file unless you know what you are doing--modify
 * the SWIG interface file instead.
 * ----------------------------------------------------------------------------- */

package director_smartptr;

public class Foo {
  private long swigCPtr;
  private boolean swigCMemOwn;

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
        director_smartptrJNI.delete_Foo(swigCPtr);
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
    director_smartptrJNI.Foo_change_ownership(this, swigCPtr, false);
  }

  public void swigTakeOwnership() {
    swigCMemOwn = true;
    director_smartptrJNI.Foo_change_ownership(this, swigCPtr, true);
  }

  public String ping() {
    return (getClass() == Foo.class) ? director_smartptrJNI.Foo_ping(swigCPtr, this) : director_smartptrJNI.Foo_pingSwigExplicitFoo(swigCPtr, this);
  }

  public String pong() {
    return (getClass() == Foo.class) ? director_smartptrJNI.Foo_pong(swigCPtr, this) : director_smartptrJNI.Foo_pongSwigExplicitFoo(swigCPtr, this);
  }

  public String fooBar(FooBar fooBarPtr) {
    return (getClass() == Foo.class) ? director_smartptrJNI.Foo_fooBar(swigCPtr, this, FooBar.getCPtr(fooBarPtr), fooBarPtr) : director_smartptrJNI.Foo_fooBarSwigExplicitFoo(swigCPtr, this, FooBar.getCPtr(fooBarPtr), fooBarPtr);
  }

  public Foo makeFoo() {
    return new Foo((getClass() == Foo.class) ? director_smartptrJNI.Foo_makeFoo(swigCPtr, this) : director_smartptrJNI.Foo_makeFooSwigExplicitFoo(swigCPtr, this), true);
  }

  public FooBar makeFooBar() {
    return new FooBar((getClass() == Foo.class) ? director_smartptrJNI.Foo_makeFooBar(swigCPtr, this) : director_smartptrJNI.Foo_makeFooBarSwigExplicitFoo(swigCPtr, this), true);
  }

  public static Foo get_self(Foo self_) {
    long cPtr = director_smartptrJNI.Foo_get_self(Foo.getCPtr(self_), self_);
    return (cPtr == 0) ? null : new Foo(cPtr, true);
  }

  public Foo() {
    this(director_smartptrJNI.new_Foo(), true);
    director_smartptrJNI.Foo_director_connect(this, swigCPtr, swigCMemOwn, true);
  }

}
