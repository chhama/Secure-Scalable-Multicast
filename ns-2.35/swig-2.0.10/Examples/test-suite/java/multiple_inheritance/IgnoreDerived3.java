/* ----------------------------------------------------------------------------
 * This file was automatically generated by SWIG (http://www.swig.org).
 * Version 2.0.10
 *
 * Do not make changes to this file unless you know what you are doing--modify
 * the SWIG interface file instead.
 * ----------------------------------------------------------------------------- */

package multiple_inheritance;

public class IgnoreDerived3 extends Bar {
  private long swigCPtr;

  protected IgnoreDerived3(long cPtr, boolean cMemoryOwn) {
    super(multiple_inheritanceJNI.IgnoreDerived3_SWIGUpcast(cPtr), cMemoryOwn);
    swigCPtr = cPtr;
  }

  protected static long getCPtr(IgnoreDerived3 obj) {
    return (obj == null) ? 0 : obj.swigCPtr;
  }

  protected void finalize() {
    delete();
  }

  public synchronized void delete() {
    if (swigCPtr != 0) {
      if (swigCMemOwn) {
        swigCMemOwn = false;
        multiple_inheritanceJNI.delete_IgnoreDerived3(swigCPtr);
      }
      swigCPtr = 0;
    }
    super.delete();
  }

  public int ignorederived3() {
    return multiple_inheritanceJNI.IgnoreDerived3_ignorederived3(swigCPtr, this);
  }

  public IgnoreDerived3() {
    this(multiple_inheritanceJNI.new_IgnoreDerived3(), true);
  }

}