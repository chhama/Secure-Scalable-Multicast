/* ----------------------------------------------------------------------------
 * This file was automatically generated by SWIG (http://www.swig.org).
 * Version 2.0.10
 *
 * Do not make changes to this file unless you know what you are doing--modify
 * the SWIG interface file instead.
 * ----------------------------------------------------------------------------- */

package namespace_template;

public class vectorint {
  private long swigCPtr;
  protected boolean swigCMemOwn;

  protected vectorint(long cPtr, boolean cMemoryOwn) {
    swigCMemOwn = cMemoryOwn;
    swigCPtr = cPtr;
  }

  protected static long getCPtr(vectorint obj) {
    return (obj == null) ? 0 : obj.swigCPtr;
  }

  protected void finalize() {
    delete();
  }

  public synchronized void delete() {
    if (swigCPtr != 0) {
      if (swigCMemOwn) {
        swigCMemOwn = false;
        namespace_templateJNI.delete_vectorint(swigCPtr);
      }
      swigCPtr = 0;
    }
  }

  public vectorint() {
    this(namespace_templateJNI.new_vectorint(), true);
  }

  public String blah(int x) {
    return namespace_templateJNI.vectorint_blah(swigCPtr, this, x);
  }

}
