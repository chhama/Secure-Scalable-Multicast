/* ----------------------------------------------------------------------------
 * This file was automatically generated by SWIG (http://www.swig.org).
 * Version 2.0.10
 *
 * Do not make changes to this file unless you know what you are doing--modify
 * the SWIG interface file instead.
 * ----------------------------------------------------------------------------- */

package li_boost_shared_ptr_bits;

public class VectorIntHolder {
  private long swigCPtr;
  protected boolean swigCMemOwn;

  protected VectorIntHolder(long cPtr, boolean cMemoryOwn) {
    swigCMemOwn = cMemoryOwn;
    swigCPtr = cPtr;
  }

  protected static long getCPtr(VectorIntHolder obj) {
    return (obj == null) ? 0 : obj.swigCPtr;
  }

  protected void finalize() {
    delete();
  }

  public synchronized void delete() {
    if (swigCPtr != 0) {
      if (swigCMemOwn) {
        swigCMemOwn = false;
        li_boost_shared_ptr_bitsJNI.delete_VectorIntHolder(swigCPtr);
      }
      swigCPtr = 0;
    }
  }

  public VectorIntHolder() {
    this(li_boost_shared_ptr_bitsJNI.new_VectorIntHolder__SWIG_0(), true);
  }

  public VectorIntHolder(long n) {
    this(li_boost_shared_ptr_bitsJNI.new_VectorIntHolder__SWIG_1(n), true);
  }

  public long size() {
    return li_boost_shared_ptr_bitsJNI.VectorIntHolder_size(swigCPtr, this);
  }

  public long capacity() {
    return li_boost_shared_ptr_bitsJNI.VectorIntHolder_capacity(swigCPtr, this);
  }

  public void reserve(long n) {
    li_boost_shared_ptr_bitsJNI.VectorIntHolder_reserve(swigCPtr, this, n);
  }

  public boolean isEmpty() {
    return li_boost_shared_ptr_bitsJNI.VectorIntHolder_isEmpty(swigCPtr, this);
  }

  public void clear() {
    li_boost_shared_ptr_bitsJNI.VectorIntHolder_clear(swigCPtr, this);
  }

  public void add(IntHolder x) {
    li_boost_shared_ptr_bitsJNI.VectorIntHolder_add(swigCPtr, this, IntHolder.getCPtr(x), x);
  }

  public IntHolder get(int i) {
    long cPtr = li_boost_shared_ptr_bitsJNI.VectorIntHolder_get(swigCPtr, this, i);
    return (cPtr == 0) ? null : new IntHolder(cPtr, true);
  }

  public void set(int i, IntHolder val) {
    li_boost_shared_ptr_bitsJNI.VectorIntHolder_set(swigCPtr, this, i, IntHolder.getCPtr(val), val);
  }

}
