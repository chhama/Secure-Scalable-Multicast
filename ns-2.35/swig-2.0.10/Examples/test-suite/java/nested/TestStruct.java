/* ----------------------------------------------------------------------------
 * This file was automatically generated by SWIG (http://www.swig.org).
 * Version 2.0.10
 *
 * Do not make changes to this file unless you know what you are doing--modify
 * the SWIG interface file instead.
 * ----------------------------------------------------------------------------- */

package nested;

public class TestStruct {
  private long swigCPtr;
  protected boolean swigCMemOwn;

  protected TestStruct(long cPtr, boolean cMemoryOwn) {
    swigCMemOwn = cMemoryOwn;
    swigCPtr = cPtr;
  }

  protected static long getCPtr(TestStruct obj) {
    return (obj == null) ? 0 : obj.swigCPtr;
  }

  protected void finalize() {
    delete();
  }

  public synchronized void delete() {
    if (swigCPtr != 0) {
      if (swigCMemOwn) {
        swigCMemOwn = false;
        nestedJNI.delete_TestStruct(swigCPtr);
      }
      swigCPtr = 0;
    }
  }

  public void setA(int value) {
    nestedJNI.TestStruct_a_set(swigCPtr, this, value);
  }

  public int getA() {
    return nestedJNI.TestStruct_a_get(swigCPtr, this);
  }

  public TestStruct() {
    this(nestedJNI.new_TestStruct(), true);
  }

}
