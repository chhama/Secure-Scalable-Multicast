/* ----------------------------------------------------------------------------
 * This file was automatically generated by SWIG (http://www.swig.org).
 * Version 2.0.10
 *
 * Do not make changes to this file unless you know what you are doing--modify
 * the SWIG interface file instead.
 * ----------------------------------------------------------------------------- */

package extend_constructor_destructor;

public class FStruct {
  private long swigCPtr;
  protected boolean swigCMemOwn;

  protected FStruct(long cPtr, boolean cMemoryOwn) {
    swigCMemOwn = cMemoryOwn;
    swigCPtr = cPtr;
  }

  protected static long getCPtr(FStruct obj) {
    return (obj == null) ? 0 : obj.swigCPtr;
  }

  protected void finalize() {
    delete();
  }

  public synchronized void delete() {
    if (swigCPtr != 0) {
      if (swigCMemOwn) {
        swigCMemOwn = false;
        extend_constructor_destructorJNI.delete_FStruct(swigCPtr);
      }
      swigCPtr = 0;
    }
  }

  public void setIvar(int value) {
    extend_constructor_destructorJNI.FStruct_ivar_set(swigCPtr, this, value);
  }

  public int getIvar() {
    return extend_constructor_destructorJNI.FStruct_ivar_get(swigCPtr, this);
  }

  public FStruct(int ivar0) {
    this(extend_constructor_destructorJNI.new_FStruct(ivar0), true);
  }

}
