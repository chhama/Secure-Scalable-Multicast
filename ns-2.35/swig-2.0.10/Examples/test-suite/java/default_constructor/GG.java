/* ----------------------------------------------------------------------------
 * This file was automatically generated by SWIG (http://www.swig.org).
 * Version 2.0.10
 *
 * Do not make changes to this file unless you know what you are doing--modify
 * the SWIG interface file instead.
 * ----------------------------------------------------------------------------- */

package default_constructor;

public class GG extends G {
  private long swigCPtr;

  protected GG(long cPtr, boolean cMemoryOwn) {
    super(default_constructorJNI.GG_SWIGUpcast(cPtr), cMemoryOwn);
    swigCPtr = cPtr;
  }

  protected static long getCPtr(GG obj) {
    return (obj == null) ? 0 : obj.swigCPtr;
  }

  protected void finalize() {
    delete();
  }

  public synchronized void delete() {
    if (swigCPtr != 0) {
      if (swigCMemOwn) {
        swigCMemOwn = false;
        default_constructorJNI.delete_GG(swigCPtr);
      }
      swigCPtr = 0;
    }
    super.delete();
  }

  public GG() {
    this(default_constructorJNI.new_GG(), true);
  }

}
