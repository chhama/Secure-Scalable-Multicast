/* ----------------------------------------------------------------------------
 * This file was automatically generated by SWIG (http://www.swig.org).
 * Version 2.0.10
 *
 * Do not make changes to this file unless you know what you are doing--modify
 * the SWIG interface file instead.
 * ----------------------------------------------------------------------------- */

package smart_pointer_inherit;

public class ItkLevelSetNodeUS2 {
  private long swigCPtr;
  protected boolean swigCMemOwn;

  protected ItkLevelSetNodeUS2(long cPtr, boolean cMemoryOwn) {
    swigCMemOwn = cMemoryOwn;
    swigCPtr = cPtr;
  }

  protected static long getCPtr(ItkLevelSetNodeUS2 obj) {
    return (obj == null) ? 0 : obj.swigCPtr;
  }

  protected void finalize() {
    delete();
  }

  public synchronized void delete() {
    if (swigCPtr != 0) {
      if (swigCMemOwn) {
        swigCMemOwn = false;
        smart_pointer_inheritJNI.delete_ItkLevelSetNodeUS2(swigCPtr);
      }
      swigCPtr = 0;
    }
  }

  public ItkLevelSetNodeUS2() {
    this(smart_pointer_inheritJNI.new_ItkLevelSetNodeUS2(), true);
  }

}
