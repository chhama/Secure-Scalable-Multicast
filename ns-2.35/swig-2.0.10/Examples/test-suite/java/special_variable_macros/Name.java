/* ----------------------------------------------------------------------------
 * This file was automatically generated by SWIG (http://www.swig.org).
 * Version 2.0.10
 *
 * Do not make changes to this file unless you know what you are doing--modify
 * the SWIG interface file instead.
 * ----------------------------------------------------------------------------- */

package special_variable_macros;

public class Name {
  private long swigCPtr;
  protected boolean swigCMemOwn;

  protected Name(long cPtr, boolean cMemoryOwn) {
    swigCMemOwn = cMemoryOwn;
    swigCPtr = cPtr;
  }

  protected static long getCPtr(Name obj) {
    return (obj == null) ? 0 : obj.swigCPtr;
  }

  protected void finalize() {
    delete();
  }

  public synchronized void delete() {
    if (swigCPtr != 0) {
      if (swigCMemOwn) {
        swigCMemOwn = false;
        special_variable_macrosJNI.delete_Name(swigCPtr);
      }
      swigCPtr = 0;
    }
  }

  public Name(String n) {
    this(special_variable_macrosJNI.new_Name__SWIG_0(n), true);
  }

  public Name() {
    this(special_variable_macrosJNI.new_Name__SWIG_1(), true);
  }

  public Name(Name x) {
    this(special_variable_macrosJNI.new_Name__SWIG_2(Name.getCPtr(x), x), true);
  }

  public String getName() {
    return special_variable_macrosJNI.Name_getName(swigCPtr, this);
  }

  public Name getNamePtr() {
    long cPtr = special_variable_macrosJNI.Name_getNamePtr(swigCPtr, this);
    return (cPtr == 0) ? null : new Name(cPtr, false);
  }

}