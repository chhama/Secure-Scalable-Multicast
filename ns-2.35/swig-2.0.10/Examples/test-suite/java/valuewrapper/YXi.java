/* ----------------------------------------------------------------------------
 * This file was automatically generated by SWIG (http://www.swig.org).
 * Version 2.0.10
 *
 * Do not make changes to this file unless you know what you are doing--modify
 * the SWIG interface file instead.
 * ----------------------------------------------------------------------------- */

package valuewrapper;

public class YXi {
  private long swigCPtr;
  protected boolean swigCMemOwn;

  protected YXi(long cPtr, boolean cMemoryOwn) {
    swigCMemOwn = cMemoryOwn;
    swigCPtr = cPtr;
  }

  protected static long getCPtr(YXi obj) {
    return (obj == null) ? 0 : obj.swigCPtr;
  }

  protected void finalize() {
    delete();
  }

  public synchronized void delete() {
    if (swigCPtr != 0) {
      if (swigCMemOwn) {
        swigCMemOwn = false;
        valuewrapperJNI.delete_YXi(swigCPtr);
      }
      swigCPtr = 0;
    }
  }

  public YXi() {
    this(valuewrapperJNI.new_YXi(), true);
  }

  public int spam(Xi t) {
    return valuewrapperJNI.YXi_spam__SWIG_0(swigCPtr, this, Xi.getCPtr(t), t);
  }

  public int spam() {
    return valuewrapperJNI.YXi_spam__SWIG_1(swigCPtr, this);
  }

}
