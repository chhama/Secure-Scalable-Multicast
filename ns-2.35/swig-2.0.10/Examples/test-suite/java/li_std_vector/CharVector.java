/* ----------------------------------------------------------------------------
 * This file was automatically generated by SWIG (http://www.swig.org).
 * Version 2.0.10
 *
 * Do not make changes to this file unless you know what you are doing--modify
 * the SWIG interface file instead.
 * ----------------------------------------------------------------------------- */

package li_std_vector;

public class CharVector {
  private long swigCPtr;
  protected boolean swigCMemOwn;

  protected CharVector(long cPtr, boolean cMemoryOwn) {
    swigCMemOwn = cMemoryOwn;
    swigCPtr = cPtr;
  }

  protected static long getCPtr(CharVector obj) {
    return (obj == null) ? 0 : obj.swigCPtr;
  }

  protected void finalize() {
    delete();
  }

  public synchronized void delete() {
    if (swigCPtr != 0) {
      if (swigCMemOwn) {
        swigCMemOwn = false;
        li_std_vectorJNI.delete_CharVector(swigCPtr);
      }
      swigCPtr = 0;
    }
  }

  public CharVector() {
    this(li_std_vectorJNI.new_CharVector__SWIG_0(), true);
  }

  public CharVector(long n) {
    this(li_std_vectorJNI.new_CharVector__SWIG_1(n), true);
  }

  public long size() {
    return li_std_vectorJNI.CharVector_size(swigCPtr, this);
  }

  public long capacity() {
    return li_std_vectorJNI.CharVector_capacity(swigCPtr, this);
  }

  public void reserve(long n) {
    li_std_vectorJNI.CharVector_reserve(swigCPtr, this, n);
  }

  public boolean isEmpty() {
    return li_std_vectorJNI.CharVector_isEmpty(swigCPtr, this);
  }

  public void clear() {
    li_std_vectorJNI.CharVector_clear(swigCPtr, this);
  }

  public void add(char x) {
    li_std_vectorJNI.CharVector_add(swigCPtr, this, x);
  }

  public char get(int i) {
    return li_std_vectorJNI.CharVector_get(swigCPtr, this, i);
  }

  public void set(int i, char val) {
    li_std_vectorJNI.CharVector_set(swigCPtr, this, i, val);
  }

}
