/* ----------------------------------------------------------------------------
 * This file was automatically generated by SWIG (http://www.swig.org).
 * Version 2.0.10
 *
 * Do not make changes to this file unless you know what you are doing--modify
 * the SWIG interface file instead.
 * ----------------------------------------------------------------------------- */

package default_constructor;

public class DD extends D {
  private long swigCPtr;

  protected DD(long cPtr, boolean cMemoryOwn) {
    super(default_constructorJNI.DD_SWIGUpcast(cPtr), cMemoryOwn);
    swigCPtr = cPtr;
  }

  protected static long getCPtr(DD obj) {
    return (obj == null) ? 0 : obj.swigCPtr;
  }

  protected void finalize() {
    delete();
  }

  public synchronized void delete() {
    if (swigCPtr != 0) {
      if (swigCMemOwn) {
        swigCMemOwn = false;
        default_constructorJNI.delete_DD(swigCPtr);
      }
      swigCPtr = 0;
    }
    super.delete();
  }

}
