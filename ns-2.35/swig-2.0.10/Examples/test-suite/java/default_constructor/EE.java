/* ----------------------------------------------------------------------------
 * This file was automatically generated by SWIG (http://www.swig.org).
 * Version 2.0.10
 *
 * Do not make changes to this file unless you know what you are doing--modify
 * the SWIG interface file instead.
 * ----------------------------------------------------------------------------- */

package default_constructor;

public class EE extends E {
  private long swigCPtr;

  protected EE(long cPtr, boolean cMemoryOwn) {
    super(default_constructorJNI.EE_SWIGUpcast(cPtr), cMemoryOwn);
    swigCPtr = cPtr;
  }

  protected static long getCPtr(EE obj) {
    return (obj == null) ? 0 : obj.swigCPtr;
  }

  protected void finalize() {
    delete();
  }

  public synchronized void delete() {
    if (swigCPtr != 0) {
      if (swigCMemOwn) {
        swigCMemOwn = false;
        default_constructorJNI.delete_EE(swigCPtr);
      }
      swigCPtr = 0;
    }
    super.delete();
  }

  public EE() {
    this(default_constructorJNI.new_EE(), true);
  }

}