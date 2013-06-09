/* ----------------------------------------------------------------------------
 * This file was automatically generated by SWIG (http://www.swig.org).
 * Version 2.0.10
 *
 * Do not make changes to this file unless you know what you are doing--modify
 * the SWIG interface file instead.
 * ----------------------------------------------------------------------------- */

package allowexcept;

public class Bar {
  private long swigCPtr;
  protected boolean swigCMemOwn;

  protected Bar(long cPtr, boolean cMemoryOwn) {
    swigCMemOwn = cMemoryOwn;
    swigCPtr = cPtr;
  }

  protected static long getCPtr(Bar obj) {
    return (obj == null) ? 0 : obj.swigCPtr;
  }

  public synchronized void delete() {
    if (swigCPtr != 0) {
      if (swigCMemOwn) {
        swigCMemOwn = false;
        throw new UnsupportedOperationException("C++ destructor does not have public access");
      }
      swigCPtr = 0;
    }
  }

  public void setMember_variable(UVW value) {
    allowexceptJNI.Bar_member_variable_set(swigCPtr, this, UVW.getCPtr(value), value);
  }

  public UVW getMember_variable() {
    long cPtr = allowexceptJNI.Bar_member_variable_get(swigCPtr, this);
    return (cPtr == 0) ? null : new UVW(cPtr, false);
  }

  public static void setStatic_member_variable(UVW value) {
    allowexceptJNI.Bar_static_member_variable_set(UVW.getCPtr(value), value);
  }

  public static UVW getStatic_member_variable() {
    long cPtr = allowexceptJNI.Bar_static_member_variable_get();
    return (cPtr == 0) ? null : new UVW(cPtr, false);
  }

}
