/* ----------------------------------------------------------------------------
 * This file was automatically generated by SWIG (http://www.swig.org).
 * Version 2.0.10
 *
 * Do not make changes to this file unless you know what you are doing--modify
 * the SWIG interface file instead.
 * ----------------------------------------------------------------------------- */

package return_value_scope;

public class Spam {
  private long swigCPtr;
  protected boolean swigCMemOwn;

  protected Spam(long cPtr, boolean cMemoryOwn) {
    swigCMemOwn = cMemoryOwn;
    swigCPtr = cPtr;
  }

  protected static long getCPtr(Spam obj) {
    return (obj == null) ? 0 : obj.swigCPtr;
  }

  protected void finalize() {
    delete();
  }

  public synchronized void delete() {
    if (swigCPtr != 0) {
      if (swigCMemOwn) {
        swigCMemOwn = false;
        return_value_scopeJNI.delete_Spam(swigCPtr);
      }
      swigCPtr = 0;
    }
  }

  public Foo test() {
    return new Foo(return_value_scopeJNI.Spam_test(swigCPtr, this), true);
  }

  public Spam() {
    this(return_value_scopeJNI.new_Spam(), true);
  }

}
