/* ----------------------------------------------------------------------------
 * This file was automatically generated by SWIG (http://www.swig.org).
 * Version 2.0.10
 *
 * Do not make changes to this file unless you know what you are doing--modify
 * the SWIG interface file instead.
 * ----------------------------------------------------------------------------- */

package constructor_copy;

public class Foo1 {
  private long swigCPtr;
  protected boolean swigCMemOwn;

  protected Foo1(long cPtr, boolean cMemoryOwn) {
    swigCMemOwn = cMemoryOwn;
    swigCPtr = cPtr;
  }

  protected static long getCPtr(Foo1 obj) {
    return (obj == null) ? 0 : obj.swigCPtr;
  }

  protected void finalize() {
    delete();
  }

  public synchronized void delete() {
    if (swigCPtr != 0) {
      if (swigCMemOwn) {
        swigCMemOwn = false;
        constructor_copyJNI.delete_Foo1(swigCPtr);
      }
      swigCPtr = 0;
    }
  }

  public void setX(int value) {
    constructor_copyJNI.Foo1_x_set(swigCPtr, this, value);
  }

  public int getX() {
    return constructor_copyJNI.Foo1_x_get(swigCPtr, this);
  }

  public Foo1(int _x) {
    this(constructor_copyJNI.new_Foo1__SWIG_0(_x), true);
  }

  public Foo1() {
    this(constructor_copyJNI.new_Foo1__SWIG_1(), true);
  }

  public Foo1(Foo1 other) {
    this(constructor_copyJNI.new_Foo1__SWIG_2(Foo1.getCPtr(other), other), true);
  }

}
