/* ----------------------------------------------------------------------------
 * This file was automatically generated by SWIG (http://www.swig.org).
 * Version 2.0.10
 *
 * Do not make changes to this file unless you know what you are doing--modify
 * the SWIG interface file instead.
 * ----------------------------------------------------------------------------- */

package member_funcptr_galore;

public class Funktions {
  private long swigCPtr;
  protected boolean swigCMemOwn;

  protected Funktions(long cPtr, boolean cMemoryOwn) {
    swigCMemOwn = cMemoryOwn;
    swigCPtr = cPtr;
  }

  protected static long getCPtr(Funktions obj) {
    return (obj == null) ? 0 : obj.swigCPtr;
  }

  protected void finalize() {
    delete();
  }

  public synchronized void delete() {
    if (swigCPtr != 0) {
      if (swigCMemOwn) {
        swigCMemOwn = false;
        member_funcptr_galoreJNI.delete_Funktions(swigCPtr);
      }
      swigCPtr = 0;
    }
  }

  public int addByValue(int a, int b) {
    return member_funcptr_galoreJNI.Funktions_addByValue(swigCPtr, this, a, b);
  }

  public SWIGTYPE_p_int addByPointer(int a, int b) {
    long cPtr = member_funcptr_galoreJNI.Funktions_addByPointer(swigCPtr, this, a, b);
    return (cPtr == 0) ? null : new SWIGTYPE_p_int(cPtr, false);
  }

  public SWIGTYPE_p_int addByReference(int a, int b) {
    return new SWIGTYPE_p_int(member_funcptr_galoreJNI.Funktions_addByReference(swigCPtr, this, a, b), false);
  }

  public Funktions() {
    this(member_funcptr_galoreJNI.new_Funktions(), true);
  }

}
