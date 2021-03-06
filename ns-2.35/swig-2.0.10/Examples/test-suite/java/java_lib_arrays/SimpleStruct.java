/* ----------------------------------------------------------------------------
 * This file was automatically generated by SWIG (http://www.swig.org).
 * Version 2.0.10
 *
 * Do not make changes to this file unless you know what you are doing--modify
 * the SWIG interface file instead.
 * ----------------------------------------------------------------------------- */

package java_lib_arrays;

public class SimpleStruct {
  private long swigCPtr;
  protected boolean swigCMemOwn;

  protected SimpleStruct(long cPtr, boolean cMemoryOwn) {
    swigCMemOwn = cMemoryOwn;
    swigCPtr = cPtr;
  }

  protected static long getCPtr(SimpleStruct obj) {
    return (obj == null) ? 0 : obj.swigCPtr;
  }

  protected void finalize() {
    delete();
  }

  public synchronized void delete() {
    if (swigCPtr != 0) {
      if (swigCMemOwn) {
        swigCMemOwn = false;
        java_lib_arraysJNI.delete_SimpleStruct(swigCPtr);
      }
      swigCPtr = 0;
    }
  }

  protected static long[] cArrayUnwrap(SimpleStruct[] arrayWrapper) {
      long[] cArray = new long[arrayWrapper.length];
      for (int i=0; i<arrayWrapper.length; i++)
        cArray[i] = SimpleStruct.getCPtr(arrayWrapper[i]);
      return cArray;
  }

  protected static SimpleStruct[] cArrayWrap(long[] cArray, boolean cMemoryOwn) {
    SimpleStruct[] arrayWrapper = new SimpleStruct[cArray.length];
    for (int i=0; i<cArray.length; i++)
      arrayWrapper[i] = new SimpleStruct(cArray[i], cMemoryOwn);
    return arrayWrapper;
  }

  public void setDouble_field(double value) {
    java_lib_arraysJNI.SimpleStruct_double_field_set(swigCPtr, this, value);
  }

  public double getDouble_field() {
    return java_lib_arraysJNI.SimpleStruct_double_field_get(swigCPtr, this);
  }

  public SimpleStruct() {
    this(java_lib_arraysJNI.new_SimpleStruct(), true);
  }

}
