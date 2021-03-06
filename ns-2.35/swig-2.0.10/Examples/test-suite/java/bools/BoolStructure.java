/* ----------------------------------------------------------------------------
 * This file was automatically generated by SWIG (http://www.swig.org).
 * Version 2.0.10
 *
 * Do not make changes to this file unless you know what you are doing--modify
 * the SWIG interface file instead.
 * ----------------------------------------------------------------------------- */

package bools;

public class BoolStructure {
  private long swigCPtr;
  protected boolean swigCMemOwn;

  protected BoolStructure(long cPtr, boolean cMemoryOwn) {
    swigCMemOwn = cMemoryOwn;
    swigCPtr = cPtr;
  }

  protected static long getCPtr(BoolStructure obj) {
    return (obj == null) ? 0 : obj.swigCPtr;
  }

  protected void finalize() {
    delete();
  }

  public synchronized void delete() {
    if (swigCPtr != 0) {
      if (swigCMemOwn) {
        swigCMemOwn = false;
        boolsJNI.delete_BoolStructure(swigCPtr);
      }
      swigCPtr = 0;
    }
  }

  public void setM_bool1(boolean value) {
    boolsJNI.BoolStructure_m_bool1_set(swigCPtr, this, value);
  }

  public boolean getM_bool1() {
    return boolsJNI.BoolStructure_m_bool1_get(swigCPtr, this);
  }

  public void setM_bool2(boolean value) {
    boolsJNI.BoolStructure_m_bool2_set(swigCPtr, this, value);
  }

  public boolean getM_bool2() {
    return boolsJNI.BoolStructure_m_bool2_get(swigCPtr, this);
  }

  public void setM_pbool(SWIGTYPE_p_bool value) {
    boolsJNI.BoolStructure_m_pbool_set(swigCPtr, this, SWIGTYPE_p_bool.getCPtr(value));
  }

  public SWIGTYPE_p_bool getM_pbool() {
    long cPtr = boolsJNI.BoolStructure_m_pbool_get(swigCPtr, this);
    return (cPtr == 0) ? null : new SWIGTYPE_p_bool(cPtr, false);
  }

  public void setM_rbool(SWIGTYPE_p_bool value) {
    boolsJNI.BoolStructure_m_rbool_set(swigCPtr, this, SWIGTYPE_p_bool.getCPtr(value));
  }

  public SWIGTYPE_p_bool getM_rbool() {
    return new SWIGTYPE_p_bool(boolsJNI.BoolStructure_m_rbool_get(swigCPtr, this), false);
  }

  public void setM_const_pbool(SWIGTYPE_p_bool value) {
    boolsJNI.BoolStructure_m_const_pbool_set(swigCPtr, this, SWIGTYPE_p_bool.getCPtr(value));
  }

  public SWIGTYPE_p_bool getM_const_pbool() {
    long cPtr = boolsJNI.BoolStructure_m_const_pbool_get(swigCPtr, this);
    return (cPtr == 0) ? null : new SWIGTYPE_p_bool(cPtr, false);
  }

  public boolean getM_const_rbool() {
    return boolsJNI.BoolStructure_m_const_rbool_get(swigCPtr, this);
  }

  public BoolStructure() {
    this(boolsJNI.new_BoolStructure(), true);
  }

}
