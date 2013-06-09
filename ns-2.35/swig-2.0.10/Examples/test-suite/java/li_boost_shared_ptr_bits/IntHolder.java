/* ----------------------------------------------------------------------------
 * This file was automatically generated by SWIG (http://www.swig.org).
 * Version 2.0.10
 *
 * Do not make changes to this file unless you know what you are doing--modify
 * the SWIG interface file instead.
 * ----------------------------------------------------------------------------- */

package li_boost_shared_ptr_bits;

public class IntHolder {
  private long swigCPtr;
  private boolean swigCMemOwn;

  protected IntHolder(long cPtr, boolean cMemoryOwn) {
    swigCMemOwn = cMemoryOwn;
    swigCPtr = cPtr;
  }

  protected static long getCPtr(IntHolder obj) {
    return (obj == null) ? 0 : obj.swigCPtr;
  }

  protected void finalize() {
    delete();
  }

  public synchronized void delete() {
    if (swigCPtr != 0) {
      if (swigCMemOwn) {
        swigCMemOwn = false;
        li_boost_shared_ptr_bitsJNI.delete_IntHolder(swigCPtr);
      }
      swigCPtr = 0;
    }
  }

  public void setVal(int value) {
    li_boost_shared_ptr_bitsJNI.IntHolder_val_set(swigCPtr, this, value);
  }

  public int getVal() {
    return li_boost_shared_ptr_bitsJNI.IntHolder_val_get(swigCPtr, this);
  }

  public IntHolder(int a) {
    this(li_boost_shared_ptr_bitsJNI.new_IntHolder(a), true);
  }

}