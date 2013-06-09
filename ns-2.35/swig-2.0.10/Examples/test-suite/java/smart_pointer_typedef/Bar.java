/* ----------------------------------------------------------------------------
 * This file was automatically generated by SWIG (http://www.swig.org).
 * Version 2.0.10
 *
 * Do not make changes to this file unless you know what you are doing--modify
 * the SWIG interface file instead.
 * ----------------------------------------------------------------------------- */

package smart_pointer_typedef;

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
        smart_pointer_typedefJNI.delete_Bar(swigCPtr);
      }
      swigCPtr = 0;
    }
  }

  public Bar(Foo f) {
    this(smart_pointer_typedefJNI.new_Bar(Foo.getCPtr(f), f), true);
  }

  public Foo __deref__() {
    long cPtr = smart_pointer_typedefJNI.Bar___deref__(swigCPtr, this);
    return (cPtr == 0) ? null : new Foo(cPtr, false);
  }

  public void setX(int value) {
    smart_pointer_typedefJNI.Bar_x_set(swigCPtr, this, value);
  }

  public int getX() {
    return smart_pointer_typedefJNI.Bar_x_get(swigCPtr, this);
  }

  public int getx() {
    return smart_pointer_typedefJNI.Bar_getx(swigCPtr, this);
  }

}
