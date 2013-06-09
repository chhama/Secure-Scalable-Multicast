/* ----------------------------------------------------------------------------
 * This file was automatically generated by SWIG (http://www.swig.org).
 * Version 2.0.10
 *
 * Do not make changes to this file unless you know what you are doing--modify
 * the SWIG interface file instead.
 * ----------------------------------------------------------------------------- */

package cpp_nodefault;

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
        cpp_nodefaultJNI.delete_Foo(swigCPtr);
      }
      swigCPtr = 0;
    }
  }

  public void setA(int value) {
    cpp_nodefaultJNI.Foo_a_set(swigCPtr, this, value);
  }

  public int getA() {
    return cpp_nodefaultJNI.Foo_a_get(swigCPtr, this);
  }

  public Foo(int x, int y) {
    this(cpp_nodefaultJNI.new_Foo(x, y), true);
  }

}