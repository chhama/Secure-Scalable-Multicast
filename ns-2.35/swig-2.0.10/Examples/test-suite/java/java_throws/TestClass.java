/* ----------------------------------------------------------------------------
 * This file was automatically generated by SWIG (http://www.swig.org).
 * Version 2.0.10
 *
 * Do not make changes to this file unless you know what you are doing--modify
 * the SWIG interface file instead.
 * ----------------------------------------------------------------------------- */

package java_throws;

public class TestClass {
  private long swigCPtr;
  protected boolean swigCMemOwn;

  protected TestClass(long cPtr, boolean cMemoryOwn) {
    swigCMemOwn = cMemoryOwn;
    swigCPtr = cPtr;
  }

  protected static long getCPtr(TestClass obj) {
    return (obj == null) ? 0 : obj.swigCPtr;
  }

  protected void finalize() {
    delete();
  }

  public synchronized void delete() {
    if (swigCPtr != 0) {
      if (swigCMemOwn) {
        swigCMemOwn = false;
        java_throwsJNI.delete_TestClass(swigCPtr);
      }
      swigCPtr = 0;
    }
  }

  public TestClass(int xx) throws NoSuchMethodException {
    this(java_throwsJNI.new_TestClass(xx), true);
  }

}
