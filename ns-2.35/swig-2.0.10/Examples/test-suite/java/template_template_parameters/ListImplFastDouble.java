/* ----------------------------------------------------------------------------
 * This file was automatically generated by SWIG (http://www.swig.org).
 * Version 2.0.10
 *
 * Do not make changes to this file unless you know what you are doing--modify
 * the SWIG interface file instead.
 * ----------------------------------------------------------------------------- */

package template_template_parameters;

public class ListImplFastDouble {
  private long swigCPtr;
  protected boolean swigCMemOwn;

  protected ListImplFastDouble(long cPtr, boolean cMemoryOwn) {
    swigCMemOwn = cMemoryOwn;
    swigCPtr = cPtr;
  }

  protected static long getCPtr(ListImplFastDouble obj) {
    return (obj == null) ? 0 : obj.swigCPtr;
  }

  protected void finalize() {
    delete();
  }

  public synchronized void delete() {
    if (swigCPtr != 0) {
      if (swigCMemOwn) {
        swigCMemOwn = false;
        template_template_parametersJNI.delete_ListImplFastDouble(swigCPtr);
      }
      swigCPtr = 0;
    }
  }

  public ListImplFastDouble() {
    this(template_template_parametersJNI.new_ListImplFastDouble(), true);
  }

}