/* ----------------------------------------------------------------------------
 * This file was automatically generated by SWIG (http://www.swig.org).
 * Version 2.0.10
 *
 * Do not make changes to this file unless you know what you are doing--modify
 * the SWIG interface file instead.
 * ----------------------------------------------------------------------------- */

package multi_import;

public class XXX {
  private long swigCPtr;
  protected boolean swigCMemOwn;

  protected XXX(long cPtr, boolean cMemoryOwn) {
    swigCMemOwn = cMemoryOwn;
    swigCPtr = cPtr;
  }

  protected static long getCPtr(XXX obj) {
    return (obj == null) ? 0 : obj.swigCPtr;
  }

  protected void finalize() {
    delete();
  }

  public synchronized void delete() {
    if (swigCPtr != 0) {
      if (swigCMemOwn) {
        swigCMemOwn = false;
        multi_import_bJNI.delete_XXX(swigCPtr);
      }
      swigCPtr = 0;
    }
  }

  public int testx() {
    return multi_import_bJNI.XXX_testx(swigCPtr, this);
  }

  public XXX() {
    this(multi_import_bJNI.new_XXX(), true);
  }

}