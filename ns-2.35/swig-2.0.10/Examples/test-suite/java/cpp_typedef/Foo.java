/* ----------------------------------------------------------------------------
 * This file was automatically generated by SWIG (http://www.swig.org).
 * Version 2.0.10
 *
 * Do not make changes to this file unless you know what you are doing--modify
 * the SWIG interface file instead.
 * ----------------------------------------------------------------------------- */

package cpp_typedef;

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
        cpp_typedefJNI.delete_Foo(swigCPtr);
      }
      swigCPtr = 0;
    }
  }

  public SWIGTYPE_p_Bar bar() {
    return new SWIGTYPE_p_Bar(cpp_typedefJNI.Foo_bar(swigCPtr, this), true);
  }

  public static SWIGTYPE_p_Bar sbar() {
    return new SWIGTYPE_p_Bar(cpp_typedefJNI.Foo_sbar(), true);
  }

  public Foo() {
    this(cpp_typedefJNI.new_Foo(), true);
  }

}
