/* ----------------------------------------------------------------------------
 * This file was automatically generated by SWIG (http://www.swig.org).
 * Version 2.0.10
 *
 * Do not make changes to this file unless you know what you are doing--modify
 * the SWIG interface file instead.
 * ----------------------------------------------------------------------------- */

package namespace_template;

public class vectorlong {
  private long swigCPtr;
  protected boolean swigCMemOwn;

  protected vectorlong(long cPtr, boolean cMemoryOwn) {
    swigCMemOwn = cMemoryOwn;
    swigCPtr = cPtr;
  }

  protected static long getCPtr(vectorlong obj) {
    return (obj == null) ? 0 : obj.swigCPtr;
  }

  protected void finalize() {
    delete();
  }

  public synchronized void delete() {
    if (swigCPtr != 0) {
      if (swigCMemOwn) {
        swigCMemOwn = false;
        namespace_templateJNI.delete_vectorlong(swigCPtr);
      }
      swigCPtr = 0;
    }
  }

  public vectorlong() {
    this(namespace_templateJNI.new_vectorlong(), true);
  }

  public String blah(int x) {
    return namespace_templateJNI.vectorlong_blah(swigCPtr, this, x);
  }

}
