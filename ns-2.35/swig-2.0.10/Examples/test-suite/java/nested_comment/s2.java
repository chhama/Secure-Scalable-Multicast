/* ----------------------------------------------------------------------------
 * This file was automatically generated by SWIG (http://www.swig.org).
 * Version 2.0.10
 *
 * Do not make changes to this file unless you know what you are doing--modify
 * the SWIG interface file instead.
 * ----------------------------------------------------------------------------- */

package nested_comment;

public class s2 {
  private long swigCPtr;
  protected boolean swigCMemOwn;

  protected s2(long cPtr, boolean cMemoryOwn) {
    swigCMemOwn = cMemoryOwn;
    swigCPtr = cPtr;
  }

  protected static long getCPtr(s2 obj) {
    return (obj == null) ? 0 : obj.swigCPtr;
  }

  protected void finalize() {
    delete();
  }

  public synchronized void delete() {
    if (swigCPtr != 0) {
      if (swigCMemOwn) {
        swigCMemOwn = false;
        nested_commentJNI.delete_s2(swigCPtr);
      }
      swigCPtr = 0;
    }
  }

  public s2() {
    this(nested_commentJNI.new_s2(), true);
  }

}
