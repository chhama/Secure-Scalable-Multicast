/* ----------------------------------------------------------------------------
 * This file was automatically generated by SWIG (http://www.swig.org).
 * Version 2.0.10
 *
 * Do not make changes to this file unless you know what you are doing--modify
 * the SWIG interface file instead.
 * ----------------------------------------------------------------------------- */

package smart_pointer_templatevariables;

public class DiffImContainerPtr_D {
  private long swigCPtr;
  protected boolean swigCMemOwn;

  protected DiffImContainerPtr_D(long cPtr, boolean cMemoryOwn) {
    swigCMemOwn = cMemoryOwn;
    swigCPtr = cPtr;
  }

  protected static long getCPtr(DiffImContainerPtr_D obj) {
    return (obj == null) ? 0 : obj.swigCPtr;
  }

  protected void finalize() {
    delete();
  }

  public synchronized void delete() {
    if (swigCPtr != 0) {
      if (swigCMemOwn) {
        swigCMemOwn = false;
        smart_pointer_templatevariablesJNI.delete_DiffImContainerPtr_D(swigCPtr);
      }
      swigCPtr = 0;
    }
  }

  public DiffImContainerPtr_D(DiffImContainer_D p) {
    this(smart_pointer_templatevariablesJNI.new_DiffImContainerPtr_D__SWIG_0(DiffImContainer_D.getCPtr(p), p), true);
  }

  public DiffImContainerPtr_D() {
    this(smart_pointer_templatevariablesJNI.new_DiffImContainerPtr_D__SWIG_1(), true);
  }

  public DiffImContainer_D __deref__() {
    long cPtr = smart_pointer_templatevariablesJNI.DiffImContainerPtr_D___deref__(swigCPtr, this);
    return (cPtr == 0) ? null : new DiffImContainer_D(cPtr, false);
  }

  public void setId(int value) {
    smart_pointer_templatevariablesJNI.DiffImContainerPtr_D_id_set(swigCPtr, this, value);
  }

  public int getId() {
    return smart_pointer_templatevariablesJNI.DiffImContainerPtr_D_id_get(swigCPtr, this);
  }

}
