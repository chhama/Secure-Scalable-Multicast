/* ----------------------------------------------------------------------------
 * This file was automatically generated by SWIG (http://www.swig.org).
 * Version 2.0.10
 *
 * Do not make changes to this file unless you know what you are doing--modify
 * the SWIG interface file instead.
 * ----------------------------------------------------------------------------- */

package template_inherit_abstract;

public class Module_B extends Wrap_B {
  private long swigCPtr;

  protected Module_B(long cPtr, boolean cMemoryOwn) {
    super(template_inherit_abstractJNI.Module_B_SWIGUpcast(cPtr), cMemoryOwn);
    swigCPtr = cPtr;
  }

  protected static long getCPtr(Module_B obj) {
    return (obj == null) ? 0 : obj.swigCPtr;
  }

  protected void finalize() {
    delete();
  }

  public synchronized void delete() {
    if (swigCPtr != 0) {
      if (swigCMemOwn) {
        swigCMemOwn = false;
        template_inherit_abstractJNI.delete_Module_B(swigCPtr);
      }
      swigCPtr = 0;
    }
    super.delete();
  }

}
