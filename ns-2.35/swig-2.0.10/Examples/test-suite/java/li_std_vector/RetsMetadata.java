/* ----------------------------------------------------------------------------
 * This file was automatically generated by SWIG (http://www.swig.org).
 * Version 2.0.10
 *
 * Do not make changes to this file unless you know what you are doing--modify
 * the SWIG interface file instead.
 * ----------------------------------------------------------------------------- */

package li_std_vector;

public class RetsMetadata {
  private long swigCPtr;
  protected boolean swigCMemOwn;

  protected RetsMetadata(long cPtr, boolean cMemoryOwn) {
    swigCMemOwn = cMemoryOwn;
    swigCPtr = cPtr;
  }

  protected static long getCPtr(RetsMetadata obj) {
    return (obj == null) ? 0 : obj.swigCPtr;
  }

  protected void finalize() {
    delete();
  }

  public synchronized void delete() {
    if (swigCPtr != 0) {
      if (swigCMemOwn) {
        swigCMemOwn = false;
        li_std_vectorJNI.delete_RetsMetadata(swigCPtr);
      }
      swigCPtr = 0;
    }
  }

  public MyClassPtrVector GetAllResources(long n) {
    return new MyClassPtrVector(li_std_vectorJNI.RetsMetadata_GetAllResources(swigCPtr, this, n), true);
  }

  public RetsMetadata() {
    this(li_std_vectorJNI.new_RetsMetadata(), true);
  }

}
