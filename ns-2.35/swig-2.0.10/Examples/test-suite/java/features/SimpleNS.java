/* ----------------------------------------------------------------------------
 * This file was automatically generated by SWIG (http://www.swig.org).
 * Version 2.0.10
 *
 * Do not make changes to this file unless you know what you are doing--modify
 * the SWIG interface file instead.
 * ----------------------------------------------------------------------------- */

package features;

public class SimpleNS {
  private long swigCPtr;
  protected boolean swigCMemOwn;

  protected SimpleNS(long cPtr, boolean cMemoryOwn) {
    swigCMemOwn = cMemoryOwn;
    swigCPtr = cPtr;
  }

  protected static long getCPtr(SimpleNS obj) {
    return (obj == null) ? 0 : obj.swigCPtr;
  }

  protected void finalize() {
    delete();
  }

  public synchronized void delete() {
    if (swigCPtr != 0) {
      if (swigCMemOwn) {
        swigCMemOwn = false;
        featuresJNI.delete_SimpleNS(swigCPtr);
      }
      swigCPtr = 0;
    }
  }

  public void method() {
    featuresJNI.SimpleNS_method(swigCPtr, this);
  }

  public void afunction() {
    featuresJNI.SimpleNS_afunction(swigCPtr, this);
  }

  public SimpleNS() {
    this(featuresJNI.new_SimpleNS(), true);
  }

}
