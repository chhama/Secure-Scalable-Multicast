/* ----------------------------------------------------------------------------
 * This file was automatically generated by SWIG (http://www.swig.org).
 * Version 2.0.10
 *
 * Do not make changes to this file unless you know what you are doing--modify
 * the SWIG interface file instead.
 * ----------------------------------------------------------------------------- */

package autodoc;

public class B {
  private long swigCPtr;
  protected boolean swigCMemOwn;

  protected B(long cPtr, boolean cMemoryOwn) {
    swigCMemOwn = cMemoryOwn;
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
        autodocJNI.delete_B(swigCPtr);
      }
      swigCPtr = 0;
    }
  }

  public B(int a, int b, Hola h) {
    this(autodocJNI.new_B(a, b, h.swigValue()), true);
  }

  public int funk(int c, int d) {
    return autodocJNI.B_funk(swigCPtr, this, c, d);
  }

}
