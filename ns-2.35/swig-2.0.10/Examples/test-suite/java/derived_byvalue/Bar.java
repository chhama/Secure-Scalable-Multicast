/* ----------------------------------------------------------------------------
 * This file was automatically generated by SWIG (http://www.swig.org).
 * Version 2.0.10
 *
 * Do not make changes to this file unless you know what you are doing--modify
 * the SWIG interface file instead.
 * ----------------------------------------------------------------------------- */

package derived_byvalue;

public class Bar {
  private long swigCPtr;
  protected boolean swigCMemOwn;

  protected Bar(long cPtr, boolean cMemoryOwn) {
    swigCMemOwn = cMemoryOwn;
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
        derived_byvalueJNI.delete_Bar(swigCPtr);
      }
      swigCPtr = 0;
    }
  }

  public void setA(Foo value) {
    derived_byvalueJNI.Bar_a_set(swigCPtr, this, Foo.getCPtr(value), value);
  }

  public Foo getA() {
    long cPtr = derived_byvalueJNI.Bar_a_get(swigCPtr, this);
    return (cPtr == 0) ? null : new Foo(cPtr, false);
  }

  public void setB(Foo value) {
    derived_byvalueJNI.Bar_b_set(swigCPtr, this, Foo.getCPtr(value), value);
  }

  public Foo getB() {
    long cPtr = derived_byvalueJNI.Bar_b_get(swigCPtr, this);
    return (cPtr == 0) ? null : new Foo(cPtr, false);
  }

  public Bar() {
    this(derived_byvalueJNI.new_Bar(), true);
  }

}