/* ----------------------------------------------------------------------------
 * This file was automatically generated by SWIG (http://www.swig.org).
 * Version 2.0.10
 *
 * Do not make changes to this file unless you know what you are doing--modify
 * the SWIG interface file instead.
 * ----------------------------------------------------------------------------- */

package template_ref_type;

public class XC {
  private long swigCPtr;
  protected boolean swigCMemOwn;

  protected XC(long cPtr, boolean cMemoryOwn) {
    swigCMemOwn = cMemoryOwn;
    swigCPtr = cPtr;
  }

  protected static long getCPtr(XC obj) {
    return (obj == null) ? 0 : obj.swigCPtr;
  }

  protected void finalize() {
    delete();
  }

  public synchronized void delete() {
    if (swigCPtr != 0) {
      if (swigCMemOwn) {
        swigCMemOwn = false;
        template_ref_typeJNI.delete_XC(swigCPtr);
      }
      swigCPtr = 0;
    }
  }

  public XC() {
    this(template_ref_typeJNI.new_XC(), true);
  }

  public boolean reset() {
    return template_ref_typeJNI.XC_reset(swigCPtr, this);
  }

}
