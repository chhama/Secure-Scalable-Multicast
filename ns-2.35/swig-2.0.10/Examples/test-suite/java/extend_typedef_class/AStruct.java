/* ----------------------------------------------------------------------------
 * This file was automatically generated by SWIG (http://www.swig.org).
 * Version 2.0.10
 *
 * Do not make changes to this file unless you know what you are doing--modify
 * the SWIG interface file instead.
 * ----------------------------------------------------------------------------- */

package extend_typedef_class;

public class AStruct {
  private long swigCPtr;
  protected boolean swigCMemOwn;

  protected AStruct(long cPtr, boolean cMemoryOwn) {
    swigCMemOwn = cMemoryOwn;
    swigCPtr = cPtr;
  }

  protected static long getCPtr(AStruct obj) {
    return (obj == null) ? 0 : obj.swigCPtr;
  }

  protected void finalize() {
    delete();
  }

  public synchronized void delete() {
    if (swigCPtr != 0) {
      if (swigCMemOwn) {
        swigCMemOwn = false;
        extend_typedef_classJNI.delete_AStruct(swigCPtr);
      }
      swigCPtr = 0;
    }
  }

  public void setMembervar(int value) {
    extend_typedef_classJNI.AStruct_membervar_set(swigCPtr, this, value);
  }

  public int getMembervar() {
    return extend_typedef_classJNI.AStruct_membervar_get(swigCPtr, this);
  }

  public int getvar() {
    return extend_typedef_classJNI.AStruct_getvar(swigCPtr, this);
  }

  public AStruct() {
    this(extend_typedef_classJNI.new_AStruct(), true);
  }

}
