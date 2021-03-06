/* ----------------------------------------------------------------------------
 * This file was automatically generated by SWIG (http://www.swig.org).
 * Version 2.0.10
 *
 * Do not make changes to this file unless you know what you are doing--modify
 * the SWIG interface file instead.
 * ----------------------------------------------------------------------------- */

package ignore_template_constructor;

public class VectFlow {
  private long swigCPtr;
  protected boolean swigCMemOwn;

  protected VectFlow(long cPtr, boolean cMemoryOwn) {
    swigCMemOwn = cMemoryOwn;
    swigCPtr = cPtr;
  }

  protected static long getCPtr(VectFlow obj) {
    return (obj == null) ? 0 : obj.swigCPtr;
  }

  protected void finalize() {
    delete();
  }

  public synchronized void delete() {
    if (swigCPtr != 0) {
      if (swigCMemOwn) {
        swigCMemOwn = false;
        ignore_template_constructorJNI.delete_VectFlow(swigCPtr);
      }
      swigCPtr = 0;
    }
  }

  public VectFlow() {
    this(ignore_template_constructorJNI.new_VectFlow(), true);
  }

  public long size() {
    return ignore_template_constructorJNI.VectFlow_size(swigCPtr, this);
  }

  public long capacity() {
    return ignore_template_constructorJNI.VectFlow_capacity(swigCPtr, this);
  }

  public void reserve(long n) {
    ignore_template_constructorJNI.VectFlow_reserve(swigCPtr, this, n);
  }

  public boolean isEmpty() {
    return ignore_template_constructorJNI.VectFlow_isEmpty(swigCPtr, this);
  }

  public void clear() {
    ignore_template_constructorJNI.VectFlow_clear(swigCPtr, this);
  }

  public void add(Flow x) {
    ignore_template_constructorJNI.VectFlow_add(swigCPtr, this, Flow.getCPtr(x), x);
  }

  public Flow get(int i) {
    return new Flow(ignore_template_constructorJNI.VectFlow_get(swigCPtr, this, i), false);
  }

  public void set(int i, Flow val) {
    ignore_template_constructorJNI.VectFlow_set(swigCPtr, this, i, Flow.getCPtr(val), val);
  }

}
