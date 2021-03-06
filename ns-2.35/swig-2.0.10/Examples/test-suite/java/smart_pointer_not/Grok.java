/* ----------------------------------------------------------------------------
 * This file was automatically generated by SWIG (http://www.swig.org).
 * Version 2.0.10
 *
 * Do not make changes to this file unless you know what you are doing--modify
 * the SWIG interface file instead.
 * ----------------------------------------------------------------------------- */

package smart_pointer_not;

public class Grok {
  private long swigCPtr;
  protected boolean swigCMemOwn;

  protected Grok(long cPtr, boolean cMemoryOwn) {
    swigCMemOwn = cMemoryOwn;
    swigCPtr = cPtr;
  }

  protected static long getCPtr(Grok obj) {
    return (obj == null) ? 0 : obj.swigCPtr;
  }

  protected void finalize() {
    delete();
  }

  public synchronized void delete() {
    if (swigCPtr != 0) {
      if (swigCMemOwn) {
        swigCMemOwn = false;
        smart_pointer_notJNI.delete_Grok(swigCPtr);
      }
      swigCPtr = 0;
    }
  }

  public Grok(Foo f) {
    this(smart_pointer_notJNI.new_Grok(Foo.getCPtr(f), f), true);
  }

  public SWIGTYPE_p_p_Foo __deref__() {
    long cPtr = smart_pointer_notJNI.Grok___deref__(swigCPtr, this);
    return (cPtr == 0) ? null : new SWIGTYPE_p_p_Foo(cPtr, false);
  }

}
