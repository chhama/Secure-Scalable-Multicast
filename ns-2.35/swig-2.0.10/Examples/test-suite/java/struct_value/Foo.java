/* ----------------------------------------------------------------------------
 * This file was automatically generated by SWIG (http://www.swig.org).
 * Version 2.0.10
 *
 * Do not make changes to this file unless you know what you are doing--modify
 * the SWIG interface file instead.
 * ----------------------------------------------------------------------------- */

package struct_value;

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
        struct_valueJNI.delete_Foo(swigCPtr);
      }
      swigCPtr = 0;
    }
  }

  public void setX(int value) {
    struct_valueJNI.Foo_x_set(swigCPtr, this, value);
  }

  public int getX() {
    return struct_valueJNI.Foo_x_get(swigCPtr, this);
  }

  public Foo() {
    this(struct_valueJNI.new_Foo(), true);
  }

}