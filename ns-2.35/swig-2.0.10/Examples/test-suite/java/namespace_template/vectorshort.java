/* ----------------------------------------------------------------------------
 * This file was automatically generated by SWIG (http://www.swig.org).
 * Version 2.0.10
 *
 * Do not make changes to this file unless you know what you are doing--modify
 * the SWIG interface file instead.
 * ----------------------------------------------------------------------------- */

package namespace_template;

public class vectorshort {
  private long swigCPtr;
  protected boolean swigCMemOwn;

  protected vectorshort(long cPtr, boolean cMemoryOwn) {
    swigCMemOwn = cMemoryOwn;
    swigCPtr = cPtr;
  }

  protected static long getCPtr(vectorshort obj) {
    return (obj == null) ? 0 : obj.swigCPtr;
  }

  protected void finalize() {
    delete();
  }

  public synchronized void delete() {
    if (swigCPtr != 0) {
      if (swigCMemOwn) {
        swigCMemOwn = false;
        namespace_templateJNI.delete_vectorshort(swigCPtr);
      }
      swigCPtr = 0;
    }
  }

  public vectorshort() {
    this(namespace_templateJNI.new_vectorshort(), true);
  }

  public String blah(short x) {
    return namespace_templateJNI.vectorshort_blah(swigCPtr, this, x);
  }

}
