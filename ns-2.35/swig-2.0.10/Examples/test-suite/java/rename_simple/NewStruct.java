/* ----------------------------------------------------------------------------
 * This file was automatically generated by SWIG (http://www.swig.org).
 * Version 2.0.10
 *
 * Do not make changes to this file unless you know what you are doing--modify
 * the SWIG interface file instead.
 * ----------------------------------------------------------------------------- */

package rename_simple;

public class NewStruct {
  private long swigCPtr;
  protected boolean swigCMemOwn;

  protected NewStruct(long cPtr, boolean cMemoryOwn) {
    swigCMemOwn = cMemoryOwn;
    swigCPtr = cPtr;
  }

  protected static long getCPtr(NewStruct obj) {
    return (obj == null) ? 0 : obj.swigCPtr;
  }

  protected void finalize() {
    delete();
  }

  public synchronized void delete() {
    if (swigCPtr != 0) {
      if (swigCMemOwn) {
        swigCMemOwn = false;
        rename_simpleJNI.delete_NewStruct(swigCPtr);
      }
      swigCPtr = 0;
    }
  }

  public NewStruct() {
    this(rename_simpleJNI.new_NewStruct(), true);
  }

  public void setNewInstanceVariable(int value) {
    rename_simpleJNI.NewStruct_NewInstanceVariable_set(swigCPtr, this, value);
  }

  public int getNewInstanceVariable() {
    return rename_simpleJNI.NewStruct_NewInstanceVariable_get(swigCPtr, this);
  }

  public int NewInstanceMethod() {
    return rename_simpleJNI.NewStruct_NewInstanceMethod(swigCPtr, this);
  }

  public static void setNewStaticVariable(int value) {
    rename_simpleJNI.NewStruct_NewStaticVariable_set(value);
  }

  public static int getNewStaticVariable() {
    return rename_simpleJNI.NewStruct_NewStaticVariable_get();
  }

  public static int NewStaticMethod() {
    return rename_simpleJNI.NewStruct_NewStaticMethod();
  }

}
