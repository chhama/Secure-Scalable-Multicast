/* ----------------------------------------------------------------------------
 * This file was automatically generated by SWIG (http://www.swig.org).
 * Version 2.0.10
 *
 * Do not make changes to this file unless you know what you are doing--modify
 * the SWIG interface file instead.
 * ----------------------------------------------------------------------------- */

package namespace_nested;

public class MyFoo {
  private long swigCPtr;
  protected boolean swigCMemOwn;

  protected MyFoo(long cPtr, boolean cMemoryOwn) {
    swigCMemOwn = cMemoryOwn;
    swigCPtr = cPtr;
  }

  protected static long getCPtr(MyFoo obj) {
    return (obj == null) ? 0 : obj.swigCPtr;
  }

  protected void finalize() {
    delete();
  }

  public synchronized void delete() {
    if (swigCPtr != 0) {
      if (swigCMemOwn) {
        swigCMemOwn = false;
        namespace_nestedJNI.delete_MyFoo(swigCPtr);
      }
      swigCPtr = 0;
    }
  }

  public MyFoo() {
    this(namespace_nestedJNI.new_MyFoo(), true);
  }

}
