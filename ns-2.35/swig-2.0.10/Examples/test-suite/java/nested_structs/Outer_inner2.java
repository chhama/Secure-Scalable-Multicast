/* ----------------------------------------------------------------------------
 * This file was automatically generated by SWIG (http://www.swig.org).
 * Version 2.0.10
 *
 * Do not make changes to this file unless you know what you are doing--modify
 * the SWIG interface file instead.
 * ----------------------------------------------------------------------------- */

package nested_structs;

public class Outer_inner2 {
  private long swigCPtr;
  protected boolean swigCMemOwn;

  protected Outer_inner2(long cPtr, boolean cMemoryOwn) {
    swigCMemOwn = cMemoryOwn;
    swigCPtr = cPtr;
  }

  protected static long getCPtr(Outer_inner2 obj) {
    return (obj == null) ? 0 : obj.swigCPtr;
  }

  protected void finalize() {
    delete();
  }

  public synchronized void delete() {
    if (swigCPtr != 0) {
      if (swigCMemOwn) {
        swigCMemOwn = false;
        nested_structsJNI.delete_Outer_inner2(swigCPtr);
      }
      swigCPtr = 0;
    }
  }

  public void setVal(int value) {
    nested_structsJNI.Outer_inner2_val_set(swigCPtr, this, value);
  }

  public int getVal() {
    return nested_structsJNI.Outer_inner2_val_get(swigCPtr, this);
  }

  public Outer_inner2() {
    this(nested_structsJNI.new_Outer_inner2(), true);
  }

}
