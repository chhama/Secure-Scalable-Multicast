/* ----------------------------------------------------------------------------
 * This file was automatically generated by SWIG (http://www.swig.org).
 * Version 2.0.10
 *
 * Do not make changes to this file unless you know what you are doing--modify
 * the SWIG interface file instead.
 * ----------------------------------------------------------------------------- */

package template_construct;

public class Foo_int {
  private long swigCPtr;
  protected boolean swigCMemOwn;

  protected Foo_int(long cPtr, boolean cMemoryOwn) {
    swigCMemOwn = cMemoryOwn;
    swigCPtr = cPtr;
  }

  protected static long getCPtr(Foo_int obj) {
    return (obj == null) ? 0 : obj.swigCPtr;
  }

  protected void finalize() {
    delete();
  }

  public synchronized void delete() {
    if (swigCPtr != 0) {
      if (swigCMemOwn) {
        swigCMemOwn = false;
        template_constructJNI.delete_Foo_int(swigCPtr);
      }
      swigCPtr = 0;
    }
  }

  public Foo_int(int x) {
    this(template_constructJNI.new_Foo_int(x), true);
  }

}
