/* ----------------------------------------------------------------------------
 * This file was automatically generated by SWIG (http://www.swig.org).
 * Version 2.0.10
 *
 * Do not make changes to this file unless you know what you are doing--modify
 * the SWIG interface file instead.
 * ----------------------------------------------------------------------------- */

package inherit;

public class CBase {
  private long swigCPtr;
  protected boolean swigCMemOwn;

  protected CBase(long cPtr, boolean cMemoryOwn) {
    swigCMemOwn = cMemoryOwn;
    swigCPtr = cPtr;
  }

  protected static long getCPtr(CBase obj) {
    return (obj == null) ? 0 : obj.swigCPtr;
  }

  protected void finalize() {
    delete();
  }

  public synchronized void delete() {
    if (swigCPtr != 0) {
      if (swigCMemOwn) {
        swigCMemOwn = false;
        inheritJNI.delete_CBase(swigCPtr);
      }
      swigCPtr = 0;
    }
  }

  public String Foo() {
    return inheritJNI.CBase_Foo(swigCPtr, this);
  }

  public CBase() {
    this(inheritJNI.new_CBase(), true);
  }

}
