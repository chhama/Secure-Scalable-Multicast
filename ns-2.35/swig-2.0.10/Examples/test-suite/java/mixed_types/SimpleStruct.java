/* ----------------------------------------------------------------------------
 * This file was automatically generated by SWIG (http://www.swig.org).
 * Version 2.0.10
 *
 * Do not make changes to this file unless you know what you are doing--modify
 * the SWIG interface file instead.
 * ----------------------------------------------------------------------------- */

package mixed_types;

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
        mixed_typesJNI.delete_SimpleStruct(swigCPtr);
      }
      swigCPtr = 0;
    }
  }

  public void setDouble_field(double value) {
    mixed_typesJNI.SimpleStruct_double_field_set(swigCPtr, this, value);
  }

  public double getDouble_field() {
    return mixed_typesJNI.SimpleStruct_double_field_get(swigCPtr, this);
  }

  public SimpleStruct() {
    this(mixed_typesJNI.new_SimpleStruct(), true);
  }

}
