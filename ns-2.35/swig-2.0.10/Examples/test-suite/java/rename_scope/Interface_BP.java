/* ----------------------------------------------------------------------------
 * This file was automatically generated by SWIG (http://www.swig.org).
 * Version 2.0.10
 *
 * Do not make changes to this file unless you know what you are doing--modify
 * the SWIG interface file instead.
 * ----------------------------------------------------------------------------- */

package rename_scope;

public class Interface_BP {
  private long swigCPtr;
  protected boolean swigCMemOwn;

  protected Interface_BP(long cPtr, boolean cMemoryOwn) {
    swigCMemOwn = cMemoryOwn;
    swigCPtr = cPtr;
  }

  protected static long getCPtr(Interface_BP obj) {
    return (obj == null) ? 0 : obj.swigCPtr;
  }

  protected void finalize() {
    delete();
  }

  public synchronized void delete() {
    if (swigCPtr != 0) {
      if (swigCMemOwn) {
        swigCMemOwn = false;
        rename_scopeJNI.delete_Interface_BP(swigCPtr);
      }
      swigCPtr = 0;
    }
  }

  public Interface_BP() {
    this(rename_scopeJNI.new_Interface_BP(), true);
  }

}
