/* ----------------------------------------------------------------------------
 * This file was automatically generated by SWIG (http://www.swig.org).
 * Version 2.0.10
 *
 * Do not make changes to this file unless you know what you are doing--modify
 * the SWIG interface file instead.
 * ----------------------------------------------------------------------------- */

package unions;

public class BigStruct {
  private long swigCPtr;
  protected boolean swigCMemOwn;

  protected BigStruct(long cPtr, boolean cMemoryOwn) {
    swigCMemOwn = cMemoryOwn;
    swigCPtr = cPtr;
  }

  protected static long getCPtr(BigStruct obj) {
    return (obj == null) ? 0 : obj.swigCPtr;
  }

  protected void finalize() {
    delete();
  }

  public synchronized void delete() {
    if (swigCPtr != 0) {
      if (swigCMemOwn) {
        swigCMemOwn = false;
        unionsJNI.delete_BigStruct(swigCPtr);
      }
      swigCPtr = 0;
    }
  }

  public void setJack(int value) {
    unionsJNI.BigStruct_jack_set(swigCPtr, this, value);
  }

  public int getJack() {
    return unionsJNI.BigStruct_jack_get(swigCPtr, this);
  }

  public void setSmallstruct(SmallStruct value) {
    unionsJNI.BigStruct_smallstruct_set(swigCPtr, this, SmallStruct.getCPtr(value), value);
  }

  public SmallStruct getSmallstruct() {
    long cPtr = unionsJNI.BigStruct_smallstruct_get(swigCPtr, this);
    return (cPtr == 0) ? null : new SmallStruct(cPtr, false);
  }

  public BigStruct() {
    this(unionsJNI.new_BigStruct(), true);
  }

}
