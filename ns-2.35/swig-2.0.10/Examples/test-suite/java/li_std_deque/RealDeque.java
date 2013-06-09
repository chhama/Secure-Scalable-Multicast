/* ----------------------------------------------------------------------------
 * This file was automatically generated by SWIG (http://www.swig.org).
 * Version 2.0.10
 *
 * Do not make changes to this file unless you know what you are doing--modify
 * the SWIG interface file instead.
 * ----------------------------------------------------------------------------- */

package li_std_deque;

public class RealDeque {
  private long swigCPtr;
  protected boolean swigCMemOwn;

  protected RealDeque(long cPtr, boolean cMemoryOwn) {
    swigCMemOwn = cMemoryOwn;
    swigCPtr = cPtr;
  }

  protected static long getCPtr(RealDeque obj) {
    return (obj == null) ? 0 : obj.swigCPtr;
  }

  protected void finalize() {
    delete();
  }

  public synchronized void delete() {
    if (swigCPtr != 0) {
      if (swigCMemOwn) {
        swigCMemOwn = false;
        li_std_dequeJNI.delete_RealDeque(swigCPtr);
      }
      swigCPtr = 0;
    }
  }

  public boolean empty() {
    return li_std_dequeJNI.RealDeque_empty(swigCPtr, this);
  }

  public RealDeque() {
    this(li_std_dequeJNI.new_RealDeque__SWIG_0(), true);
  }

  public RealDeque(long size, float value) {
    this(li_std_dequeJNI.new_RealDeque__SWIG_1(size, value), true);
  }

  public RealDeque(long size) {
    this(li_std_dequeJNI.new_RealDeque__SWIG_2(size), true);
  }

  public RealDeque(RealDeque arg0) {
    this(li_std_dequeJNI.new_RealDeque__SWIG_3(RealDeque.getCPtr(arg0), arg0), true);
  }

  public void assign(long n, float value) {
    li_std_dequeJNI.RealDeque_assign(swigCPtr, this, n, value);
  }

  public void swap(RealDeque x) {
    li_std_dequeJNI.RealDeque_swap(swigCPtr, this, RealDeque.getCPtr(x), x);
  }

  public long size() {
    return li_std_dequeJNI.RealDeque_size(swigCPtr, this);
  }

  public long max_size() {
    return li_std_dequeJNI.RealDeque_max_size(swigCPtr, this);
  }

  public void resize(long n, float c) {
    li_std_dequeJNI.RealDeque_resize__SWIG_0(swigCPtr, this, n, c);
  }

  public void resize(long n) {
    li_std_dequeJNI.RealDeque_resize__SWIG_1(swigCPtr, this, n);
  }

  public float front() {
    return li_std_dequeJNI.RealDeque_front(swigCPtr, this);
  }

  public float back() {
    return li_std_dequeJNI.RealDeque_back(swigCPtr, this);
  }

  public void push_front(float x) {
    li_std_dequeJNI.RealDeque_push_front(swigCPtr, this, x);
  }

  public void push_back(float x) {
    li_std_dequeJNI.RealDeque_push_back(swigCPtr, this, x);
  }

  public void pop_front() {
    li_std_dequeJNI.RealDeque_pop_front(swigCPtr, this);
  }

  public void pop_back() {
    li_std_dequeJNI.RealDeque_pop_back(swigCPtr, this);
  }

  public void clear() {
    li_std_dequeJNI.RealDeque_clear(swigCPtr, this);
  }

  public float getitem(int i) {
    return li_std_dequeJNI.RealDeque_getitem(swigCPtr, this, i);
  }

  public void setitem(int i, float x) {
    li_std_dequeJNI.RealDeque_setitem(swigCPtr, this, i, x);
  }

  public void delitem(int i) {
    li_std_dequeJNI.RealDeque_delitem(swigCPtr, this, i);
  }

  public RealDeque getslice(int i, int j) {
    return new RealDeque(li_std_dequeJNI.RealDeque_getslice(swigCPtr, this, i, j), true);
  }

  public void setslice(int i, int j, RealDeque v) {
    li_std_dequeJNI.RealDeque_setslice(swigCPtr, this, i, j, RealDeque.getCPtr(v), v);
  }

  public void delslice(int i, int j) {
    li_std_dequeJNI.RealDeque_delslice(swigCPtr, this, i, j);
  }

}