/* ----------------------------------------------------------------------------
 * This file was automatically generated by SWIG (http://www.swig.org).
 * Version 2.0.10
 *
 * Do not make changes to this file unless you know what you are doing--modify
 * the SWIG interface file instead.
 * ----------------------------------------------------------------------------- */

package namespace_forward_declaration;

public class YYY {
  private long swigCPtr;
  protected boolean swigCMemOwn;

  protected YYY(long cPtr, boolean cMemoryOwn) {
    swigCMemOwn = cMemoryOwn;
    swigCPtr = cPtr;
  }

  protected static long getCPtr(YYY obj) {
    return (obj == null) ? 0 : obj.swigCPtr;
  }

  protected void finalize() {
    delete();
  }

  public synchronized void delete() {
    if (swigCPtr != 0) {
      if (swigCMemOwn) {
        swigCMemOwn = false;
        namespace_forward_declarationJNI.delete_YYY(swigCPtr);
      }
      swigCPtr = 0;
    }
  }

  public int yyy(int h) {
    return namespace_forward_declarationJNI.YYY_yyy(swigCPtr, this, h);
  }

  public YYY() {
    this(namespace_forward_declarationJNI.new_YYY(), true);
  }

}