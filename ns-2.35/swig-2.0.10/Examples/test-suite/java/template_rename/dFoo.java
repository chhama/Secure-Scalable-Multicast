/* ----------------------------------------------------------------------------
 * This file was automatically generated by SWIG (http://www.swig.org).
 * Version 2.0.10
 *
 * Do not make changes to this file unless you know what you are doing--modify
 * the SWIG interface file instead.
 * ----------------------------------------------------------------------------- */

package template_rename;

public class dFoo {
  private long swigCPtr;
  protected boolean swigCMemOwn;

  protected dFoo(long cPtr, boolean cMemoryOwn) {
    swigCMemOwn = cMemoryOwn;
    swigCPtr = cPtr;
  }

  protected static long getCPtr(dFoo obj) {
    return (obj == null) ? 0 : obj.swigCPtr;
  }

  protected void finalize() {
    delete();
  }

  public synchronized void delete() {
    if (swigCPtr != 0) {
      if (swigCMemOwn) {
        swigCMemOwn = false;
        template_renameJNI.delete_dFoo(swigCPtr);
      }
      swigCPtr = 0;
    }
  }

  public int blah_test(int x) {
    return template_renameJNI.dFoo_blah_test(swigCPtr, this, x);
  }

  public int spam(int x) {
    return template_renameJNI.dFoo_spam(swigCPtr, this, x);
  }

  public int grok_test(int x) {
    return template_renameJNI.dFoo_grok_test(swigCPtr, this, x);
  }

  public dFoo() {
    this(template_renameJNI.new_dFoo(), true);
  }

}