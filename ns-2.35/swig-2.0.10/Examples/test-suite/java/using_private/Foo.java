/* ----------------------------------------------------------------------------
 * This file was automatically generated by SWIG (http://www.swig.org).
 * Version 2.0.10
 *
 * Do not make changes to this file unless you know what you are doing--modify
 * the SWIG interface file instead.
 * ----------------------------------------------------------------------------- */

package using_private;

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
        using_privateJNI.delete_Foo(swigCPtr);
      }
      swigCPtr = 0;
    }
  }

  public void setX(int value) {
    using_privateJNI.Foo_x_set(swigCPtr, this, value);
  }

  public int getX() {
    return using_privateJNI.Foo_x_get(swigCPtr, this);
  }

  public int blah(int xx) {
    return using_privateJNI.Foo_blah(swigCPtr, this, xx);
  }

  public int defaulted(int i) {
    return using_privateJNI.Foo_defaulted__SWIG_0(swigCPtr, this, i);
  }

  public int defaulted() {
    return using_privateJNI.Foo_defaulted__SWIG_1(swigCPtr, this);
  }

  public void virtualmethod() {
    using_privateJNI.Foo_virtualmethod(swigCPtr, this);
  }

  public void anothervirtual() {
    using_privateJNI.Foo_anothervirtual(swigCPtr, this);
  }

  public Foo() {
    this(using_privateJNI.new_Foo(), true);
  }

}
