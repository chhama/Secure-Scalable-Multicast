/* ----------------------------------------------------------------------------
 * This file was automatically generated by SWIG (http://www.swig.org).
 * Version 2.0.10
 *
 * Do not make changes to this file unless you know what you are doing--modify
 * the SWIG interface file instead.
 * ----------------------------------------------------------------------------- */

package java_prepost;

public class PrePostThrows {
  private long swigCPtr;
  protected boolean swigCMemOwn;

  protected PrePostThrows(long cPtr, boolean cMemoryOwn) {
    swigCMemOwn = cMemoryOwn;
    swigCPtr = cPtr;
  }

  protected static long getCPtr(PrePostThrows obj) {
    return (obj == null) ? 0 : obj.swigCPtr;
  }

  protected void finalize() {
    delete();
  }

  public synchronized void delete() {
    if (swigCPtr != 0) {
      if (swigCMemOwn) {
        swigCMemOwn = false;
        java_prepostJNI.delete_PrePostThrows(swigCPtr);
      }
      swigCPtr = 0;
    }
  }

  static private long SwigConstructPrePostThrows(PrePostTest ppt, boolean arg1) throws InstantiationException {
    if (ppt == null)
      throw new InstantiationException("empty value!!");
    return java_prepostJNI.new_PrePostThrows(PrePostTest.getCPtr(ppt), ppt, arg1);
  }

  public PrePostThrows(PrePostTest ppt, boolean arg1) throws InstantiationException {
    this(PrePostThrows.SwigConstructPrePostThrows(ppt, arg1), true);
  }

}
