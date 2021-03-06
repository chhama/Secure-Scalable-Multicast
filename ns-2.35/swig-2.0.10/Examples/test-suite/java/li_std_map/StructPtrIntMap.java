/* ----------------------------------------------------------------------------
 * This file was automatically generated by SWIG (http://www.swig.org).
 * Version 2.0.10
 *
 * Do not make changes to this file unless you know what you are doing--modify
 * the SWIG interface file instead.
 * ----------------------------------------------------------------------------- */

package li_std_map;

public class StructPtrIntMap {
  private long swigCPtr;
  protected boolean swigCMemOwn;

  protected StructPtrIntMap(long cPtr, boolean cMemoryOwn) {
    swigCMemOwn = cMemoryOwn;
    swigCPtr = cPtr;
  }

  protected static long getCPtr(StructPtrIntMap obj) {
    return (obj == null) ? 0 : obj.swigCPtr;
  }

  protected void finalize() {
    delete();
  }

  public synchronized void delete() {
    if (swigCPtr != 0) {
      if (swigCMemOwn) {
        swigCMemOwn = false;
        li_std_mapJNI.delete_StructPtrIntMap(swigCPtr);
      }
      swigCPtr = 0;
    }
  }

  public StructPtrIntMap() {
    this(li_std_mapJNI.new_StructPtrIntMap__SWIG_0(), true);
  }

  public StructPtrIntMap(StructPtrIntMap arg0) {
    this(li_std_mapJNI.new_StructPtrIntMap__SWIG_1(StructPtrIntMap.getCPtr(arg0), arg0), true);
  }

  public long size() {
    return li_std_mapJNI.StructPtrIntMap_size(swigCPtr, this);
  }

  public boolean empty() {
    return li_std_mapJNI.StructPtrIntMap_empty(swigCPtr, this);
  }

  public void clear() {
    li_std_mapJNI.StructPtrIntMap_clear(swigCPtr, this);
  }

  public int get(Struct key) {
    return li_std_mapJNI.StructPtrIntMap_get(swigCPtr, this, Struct.getCPtr(key), key);
  }

  public void set(Struct key, int x) {
    li_std_mapJNI.StructPtrIntMap_set(swigCPtr, this, Struct.getCPtr(key), key, x);
  }

  public void del(Struct key) {
    li_std_mapJNI.StructPtrIntMap_del(swigCPtr, this, Struct.getCPtr(key), key);
  }

  public boolean has_key(Struct key) {
    return li_std_mapJNI.StructPtrIntMap_has_key(swigCPtr, this, Struct.getCPtr(key), key);
  }

}
