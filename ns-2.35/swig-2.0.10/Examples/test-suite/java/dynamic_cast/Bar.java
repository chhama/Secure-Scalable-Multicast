/* ----------------------------------------------------------------------------
 * This file was automatically generated by SWIG (http://www.swig.org).
 * Version 2.0.10
 *
 * Do not make changes to this file unless you know what you are doing--modify
 * the SWIG interface file instead.
 * ----------------------------------------------------------------------------- */

package dynamic_cast;

public class Bar extends Foo {
  private long swigCPtr;

  protected Bar(long cPtr, boolean cMemoryOwn) {
    super(dynamic_castJNI.Bar_SWIGUpcast(cPtr), cMemoryOwn);
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
        dynamic_castJNI.delete_Bar(swigCPtr);
      }
      swigCPtr = 0;
    }
    super.delete();
  }

  public Foo blah() {
    return new Bar(dynamic_castJNI.Bar_blah(swigCPtr, this), false);
  }

  public String test() {
    return dynamic_castJNI.Bar_test(swigCPtr, this);
  }

  public Bar() {
    this(dynamic_castJNI.new_Bar(), true);
  }

}
