/* ----------------------------------------------------------------------------
 * This file was automatically generated by SWIG (http://www.swig.org).
 * Version 2.0.10
 *
 * Do not make changes to this file unless you know what you are doing--modify
 * the SWIG interface file instead.
 * ----------------------------------------------------------------------------- */

package li_std_map;

public class mapA {
  private long swigCPtr;
  protected boolean swigCMemOwn;

  protected mapA(long cPtr, boolean cMemoryOwn) {
    swigCMemOwn = cMemoryOwn;
    swigCPtr = cPtr;
  }

  protected static long getCPtr(mapA obj) {
    return (obj == null) ? 0 : obj.swigCPtr;
  }

  protected void finalize() {
    delete();
  }

  public synchronized void delete() {
    if (swigCPtr != 0) {
      if (swigCMemOwn) {
        swigCMemOwn = false;
        li_std_mapJNI.delete_mapA(swigCPtr);
      }
      swigCPtr = 0;
    }
  }

  public mapA() {
    this(li_std_mapJNI.new_mapA__SWIG_0(), true);
  }

  public mapA(mapA arg0) {
    this(li_std_mapJNI.new_mapA__SWIG_1(mapA.getCPtr(arg0), arg0), true);
  }

  public long size() {
    return li_std_mapJNI.mapA_size(swigCPtr, this);
  }

  public boolean empty() {
    return li_std_mapJNI.mapA_empty(swigCPtr, this);
  }

  public void clear() {
    li_std_mapJNI.mapA_clear(swigCPtr, this);
  }

  public A get(int key) {
    long cPtr = li_std_mapJNI.mapA_get(swigCPtr, this, key);
    return (cPtr == 0) ? null : new A(cPtr, false);
  }

  public void set(int key, A x) {
    li_std_mapJNI.mapA_set(swigCPtr, this, key, A.getCPtr(x), x);
  }

  public void del(int key) {
    li_std_mapJNI.mapA_del(swigCPtr, this, key);
  }

  public boolean has_key(int key) {
    return li_std_mapJNI.mapA_has_key(swigCPtr, this, key);
  }

}
