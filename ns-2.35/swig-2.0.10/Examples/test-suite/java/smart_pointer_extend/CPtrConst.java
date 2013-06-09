/* ----------------------------------------------------------------------------
 * This file was automatically generated by SWIG (http://www.swig.org).
 * Version 2.0.10
 *
 * Do not make changes to this file unless you know what you are doing--modify
 * the SWIG interface file instead.
 * ----------------------------------------------------------------------------- */

package smart_pointer_extend;

public class CPtrConst {
  private long swigCPtr;
  protected boolean swigCMemOwn;

  protected CPtrConst(long cPtr, boolean cMemoryOwn) {
    swigCMemOwn = cMemoryOwn;
    swigCPtr = cPtr;
  }

  protected static long getCPtr(CPtrConst obj) {
    return (obj == null) ? 0 : obj.swigCPtr;
  }

  protected void finalize() {
    delete();
  }

  public synchronized void delete() {
    if (swigCPtr != 0) {
      if (swigCMemOwn) {
        swigCMemOwn = false;
        smart_pointer_extendJNI.delete_CPtrConst(swigCPtr);
      }
      swigCPtr = 0;
    }
  }

  public CDerived __deref__() {
    long cPtr = smart_pointer_extendJNI.CPtrConst___deref__(swigCPtr, this);
    return (cPtr == 0) ? null : new CDerived(cPtr, false);
  }

  public CPtrConst() {
    this(smart_pointer_extendJNI.new_CPtrConst(), true);
  }

  public int getX() {
    return smart_pointer_extendJNI.CPtrConst_x_get(swigCPtr, this);
  }

  public int getZ() {
    return smart_pointer_extendJNI.CPtrConst_z_get(swigCPtr, this);
  }

}
