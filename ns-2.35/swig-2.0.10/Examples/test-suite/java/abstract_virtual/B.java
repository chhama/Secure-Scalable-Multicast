/* ----------------------------------------------------------------------------
 * This file was automatically generated by SWIG (http://www.swig.org).
 * Version 2.0.10
 *
 * Do not make changes to this file unless you know what you are doing--modify
 * the SWIG interface file instead.
 * ----------------------------------------------------------------------------- */

package abstract_virtual;

public class B extends A {
  private long swigCPtr;

  protected B(long cPtr, boolean cMemoryOwn) {
    super(abstract_virtualJNI.B_SWIGUpcast(cPtr), cMemoryOwn);
    swigCPtr = cPtr;
  }

  protected static long getCPtr(B obj) {
    return (obj == null) ? 0 : obj.swigCPtr;
  }

  protected void finalize() {
    delete();
  }

  public synchronized void delete() {
    if (swigCPtr != 0) {
      if (swigCMemOwn) {
        swigCMemOwn = false;
        abstract_virtualJNI.delete_B(swigCPtr);
      }
      swigCPtr = 0;
    }
    super.delete();
  }

  public int foo() {
    return abstract_virtualJNI.B_foo(swigCPtr, this);
  }

  public B() {
    this(abstract_virtualJNI.new_B(), true);
  }

}