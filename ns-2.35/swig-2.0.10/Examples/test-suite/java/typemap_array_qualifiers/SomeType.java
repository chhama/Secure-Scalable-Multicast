/* ----------------------------------------------------------------------------
 * This file was automatically generated by SWIG (http://www.swig.org).
 * Version 2.0.10
 *
 * Do not make changes to this file unless you know what you are doing--modify
 * the SWIG interface file instead.
 * ----------------------------------------------------------------------------- */

package typemap_array_qualifiers;

public class SomeType {
  private long swigCPtr;
  protected boolean swigCMemOwn;

  protected SomeType(long cPtr, boolean cMemoryOwn) {
    swigCMemOwn = cMemoryOwn;
    swigCPtr = cPtr;
  }

  protected static long getCPtr(SomeType obj) {
    return (obj == null) ? 0 : obj.swigCPtr;
  }

  protected void finalize() {
    delete();
  }

  public synchronized void delete() {
    if (swigCPtr != 0) {
      if (swigCMemOwn) {
        swigCMemOwn = false;
        typemap_array_qualifiersJNI.delete_SomeType(swigCPtr);
      }
      swigCPtr = 0;
    }
  }

  public void setA(int value) {
    typemap_array_qualifiersJNI.SomeType_a_set(swigCPtr, this, value);
  }

  public int getA() {
    return typemap_array_qualifiersJNI.SomeType_a_get(swigCPtr, this);
  }

  public SomeType() {
    this(typemap_array_qualifiersJNI.new_SomeType(), true);
  }

}
