/* ----------------------------------------------------------------------------
 * This file was automatically generated by SWIG (http://www.swig.org).
 * Version 2.0.10
 *
 * Do not make changes to this file unless you know what you are doing--modify
 * the SWIG interface file instead.
 * ----------------------------------------------------------------------------- */

package smart_pointer_inherit;

public class ItkVectorContainerUILSNUS2 extends VectorLevelSetNodeUS2 {
  private long swigCPtr;

  protected ItkVectorContainerUILSNUS2(long cPtr, boolean cMemoryOwn) {
    super(smart_pointer_inheritJNI.ItkVectorContainerUILSNUS2_SWIGUpcast(cPtr), cMemoryOwn);
    swigCPtr = cPtr;
  }

  protected static long getCPtr(ItkVectorContainerUILSNUS2 obj) {
    return (obj == null) ? 0 : obj.swigCPtr;
  }

  protected void finalize() {
    delete();
  }

  public synchronized void delete() {
    if (swigCPtr != 0) {
      if (swigCMemOwn) {
        swigCMemOwn = false;
        smart_pointer_inheritJNI.delete_ItkVectorContainerUILSNUS2(swigCPtr);
      }
      swigCPtr = 0;
    }
    super.delete();
  }

  public ItkVectorContainerUILSNUS2() {
    this(smart_pointer_inheritJNI.new_ItkVectorContainerUILSNUS2(), true);
  }

}
