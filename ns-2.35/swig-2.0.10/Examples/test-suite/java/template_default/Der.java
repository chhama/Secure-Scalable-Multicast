/* ----------------------------------------------------------------------------
 * This file was automatically generated by SWIG (http://www.swig.org).
 * Version 2.0.10
 *
 * Do not make changes to this file unless you know what you are doing--modify
 * the SWIG interface file instead.
 * ----------------------------------------------------------------------------- */

package template_default;

public class Der extends Boo {
  private long swigCPtr;

  protected Der(long cPtr, boolean cMemoryOwn) {
    super(template_defaultJNI.Der_SWIGUpcast(cPtr), cMemoryOwn);
    swigCPtr = cPtr;
  }

  protected static long getCPtr(Der obj) {
    return (obj == null) ? 0 : obj.swigCPtr;
  }

  protected void finalize() {
    delete();
  }

  public synchronized void delete() {
    if (swigCPtr != 0) {
      if (swigCMemOwn) {
        swigCMemOwn = false;
        template_defaultJNI.delete_Der(swigCPtr);
      }
      swigCPtr = 0;
    }
    super.delete();
  }

  public Der() {
    this(template_defaultJNI.new_Der(), true);
  }

}
