/* ----------------------------------------------------------------------------
 * This file was automatically generated by SWIG (http://www.swig.org).
 * Version 2.0.10
 *
 * Do not make changes to this file unless you know what you are doing--modify
 * the SWIG interface file instead.
 * ----------------------------------------------------------------------------- */

package template_template_parameters;

public class ListImplFastBool {
  private long swigCPtr;
  protected boolean swigCMemOwn;

  protected ListImplFastBool(long cPtr, boolean cMemoryOwn) {
    swigCMemOwn = cMemoryOwn;
    swigCPtr = cPtr;
  }

  protected static long getCPtr(ListImplFastBool obj) {
    return (obj == null) ? 0 : obj.swigCPtr;
  }

  protected void finalize() {
    delete();
  }

  public synchronized void delete() {
    if (swigCPtr != 0) {
      if (swigCMemOwn) {
        swigCMemOwn = false;
        template_template_parametersJNI.delete_ListImplFastBool(swigCPtr);
      }
      swigCPtr = 0;
    }
  }

  public ListImplFastBool() {
    this(template_template_parametersJNI.new_ListImplFastBool(), true);
  }

}
