/* ----------------------------------------------------------------------------
 * This file was automatically generated by SWIG (http://www.swig.org).
 * Version 2.0.10
 *
 * Do not make changes to this file unless you know what you are doing--modify
 * the SWIG interface file instead.
 * ----------------------------------------------------------------------------- */

package typedef_array_member;

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
        typedef_array_memberJNI.delete_Foo(swigCPtr);
      }
      swigCPtr = 0;
    }
  }

  public void setX(String value) {
    typedef_array_memberJNI.Foo_x_set(swigCPtr, this, value);
  }

  public String getX() {
    return typedef_array_memberJNI.Foo_x_get(swigCPtr, this);
  }

  public Foo() {
    this(typedef_array_memberJNI.new_Foo(), true);
  }

}
