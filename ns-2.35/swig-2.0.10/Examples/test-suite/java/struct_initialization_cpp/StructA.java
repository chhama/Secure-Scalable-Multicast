/* ----------------------------------------------------------------------------
 * This file was automatically generated by SWIG (http://www.swig.org).
 * Version 2.0.10
 *
 * Do not make changes to this file unless you know what you are doing--modify
 * the SWIG interface file instead.
 * ----------------------------------------------------------------------------- */

package struct_initialization_cpp;

public class StructA {
  private long swigCPtr;
  protected boolean swigCMemOwn;

  protected StructA(long cPtr, boolean cMemoryOwn) {
    swigCMemOwn = cMemoryOwn;
    swigCPtr = cPtr;
  }

  protected static long getCPtr(StructA obj) {
    return (obj == null) ? 0 : obj.swigCPtr;
  }

  protected void finalize() {
    delete();
  }

  public synchronized void delete() {
    if (swigCPtr != 0) {
      if (swigCMemOwn) {
        swigCMemOwn = false;
        struct_initialization_cppJNI.delete_StructA(swigCPtr);
      }
      swigCPtr = 0;
    }
  }

  public void setX(int value) {
    struct_initialization_cppJNI.StructA_x_set(swigCPtr, this, value);
  }

  public int getX() {
    return struct_initialization_cppJNI.StructA_x_get(swigCPtr, this);
  }

  public StructA() {
    this(struct_initialization_cppJNI.new_StructA(), true);
  }

}
