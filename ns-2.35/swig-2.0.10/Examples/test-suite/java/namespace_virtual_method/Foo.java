/* ----------------------------------------------------------------------------
 * This file was automatically generated by SWIG (http://www.swig.org).
 * Version 2.0.10
 *
 * Do not make changes to this file unless you know what you are doing--modify
 * the SWIG interface file instead.
 * ----------------------------------------------------------------------------- */

package namespace_virtual_method;

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
        namespace_virtual_methodJNI.delete_Foo(swigCPtr);
      }
      swigCPtr = 0;
    }
  }

  public int bar(SWIGTYPE_p_A__B__Foo x) {
    return namespace_virtual_methodJNI.Foo_bar(swigCPtr, this, SWIGTYPE_p_A__B__Foo.getCPtr(x));
  }

}
