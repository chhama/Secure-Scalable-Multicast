/* ----------------------------------------------------------------------------
 * This file was automatically generated by SWIG (http://www.swig.org).
 * Version 2.0.10
 *
 * Do not make changes to this file unless you know what you are doing--modify
 * the SWIG interface file instead.
 * ----------------------------------------------------------------------------- */

package smart_pointer_inherit;

public class ItkVectorContainerUILSNUS2_Pointer {
  private long swigCPtr;
  protected boolean swigCMemOwn;

  protected ItkVectorContainerUILSNUS2_Pointer(long cPtr, boolean cMemoryOwn) {
    swigCMemOwn = cMemoryOwn;
    swigCPtr = cPtr;
  }

  protected static long getCPtr(ItkVectorContainerUILSNUS2_Pointer obj) {
    return (obj == null) ? 0 : obj.swigCPtr;
  }

  protected void finalize() {
    delete();
  }

  public synchronized void delete() {
    if (swigCPtr != 0) {
      if (swigCMemOwn) {
        swigCMemOwn = false;
        smart_pointer_inheritJNI.delete_ItkVectorContainerUILSNUS2_Pointer(swigCPtr);
      }
      swigCPtr = 0;
    }
  }

  public ItkVectorContainerUILSNUS2 __deref__() {
    long cPtr = smart_pointer_inheritJNI.ItkVectorContainerUILSNUS2_Pointer___deref__(swigCPtr, this);
    return (cPtr == 0) ? null : new ItkVectorContainerUILSNUS2(cPtr, false);
  }

  public ItkVectorContainerUILSNUS2_Pointer() {
    this(smart_pointer_inheritJNI.new_ItkVectorContainerUILSNUS2_Pointer(), true);
  }

  public long size() {
    return smart_pointer_inheritJNI.ItkVectorContainerUILSNUS2_Pointer_size(swigCPtr, this);
  }

  public long capacity() {
    return smart_pointer_inheritJNI.ItkVectorContainerUILSNUS2_Pointer_capacity(swigCPtr, this);
  }

  public void reserve(long n) {
    smart_pointer_inheritJNI.ItkVectorContainerUILSNUS2_Pointer_reserve(swigCPtr, this, n);
  }

  public boolean isEmpty() {
    return smart_pointer_inheritJNI.ItkVectorContainerUILSNUS2_Pointer_isEmpty(swigCPtr, this);
  }

  public void clear() {
    smart_pointer_inheritJNI.ItkVectorContainerUILSNUS2_Pointer_clear(swigCPtr, this);
  }

  public void add(ItkLevelSetNodeUS2 x) {
    smart_pointer_inheritJNI.ItkVectorContainerUILSNUS2_Pointer_add(swigCPtr, this, ItkLevelSetNodeUS2.getCPtr(x), x);
  }

  public ItkLevelSetNodeUS2 get(int i) {
    return new ItkLevelSetNodeUS2(smart_pointer_inheritJNI.ItkVectorContainerUILSNUS2_Pointer_get(swigCPtr, this, i), false);
  }

  public void set(int i, ItkLevelSetNodeUS2 val) {
    smart_pointer_inheritJNI.ItkVectorContainerUILSNUS2_Pointer_set(swigCPtr, this, i, ItkLevelSetNodeUS2.getCPtr(val), val);
  }

}