/* ----------------------------------------------------------------------------
 * This file was automatically generated by SWIG (http://www.swig.org).
 * Version 2.0.10
 *
 * Do not make changes to this file unless you know what you are doing--modify
 * the SWIG interface file instead.
 * ----------------------------------------------------------------------------- */

package li_stdint;

public class StdIntFasts {
  private long swigCPtr;
  protected boolean swigCMemOwn;

  protected StdIntFasts(long cPtr, boolean cMemoryOwn) {
    swigCMemOwn = cMemoryOwn;
    swigCPtr = cPtr;
  }

  protected static long getCPtr(StdIntFasts obj) {
    return (obj == null) ? 0 : obj.swigCPtr;
  }

  protected void finalize() {
    delete();
  }

  public synchronized void delete() {
    if (swigCPtr != 0) {
      if (swigCMemOwn) {
        swigCMemOwn = false;
        li_stdintJNI.delete_StdIntFasts(swigCPtr);
      }
      swigCPtr = 0;
    }
  }

  public void setInt_fast8_member(byte value) {
    li_stdintJNI.StdIntFasts_int_fast8_member_set(swigCPtr, this, value);
  }

  public byte getInt_fast8_member() {
    return li_stdintJNI.StdIntFasts_int_fast8_member_get(swigCPtr, this);
  }

  public void setInt_fast16_member(int value) {
    li_stdintJNI.StdIntFasts_int_fast16_member_set(swigCPtr, this, value);
  }

  public int getInt_fast16_member() {
    return li_stdintJNI.StdIntFasts_int_fast16_member_get(swigCPtr, this);
  }

  public void setInt_fast32_member(int value) {
    li_stdintJNI.StdIntFasts_int_fast32_member_set(swigCPtr, this, value);
  }

  public int getInt_fast32_member() {
    return li_stdintJNI.StdIntFasts_int_fast32_member_get(swigCPtr, this);
  }

  public void setInt_fast64_member(long value) {
    li_stdintJNI.StdIntFasts_int_fast64_member_set(swigCPtr, this, value);
  }

  public long getInt_fast64_member() {
    return li_stdintJNI.StdIntFasts_int_fast64_member_get(swigCPtr, this);
  }

  public void setUint_fast8_member(short value) {
    li_stdintJNI.StdIntFasts_uint_fast8_member_set(swigCPtr, this, value);
  }

  public short getUint_fast8_member() {
    return li_stdintJNI.StdIntFasts_uint_fast8_member_get(swigCPtr, this);
  }

  public void setUint_fast16_member(long value) {
    li_stdintJNI.StdIntFasts_uint_fast16_member_set(swigCPtr, this, value);
  }

  public long getUint_fast16_member() {
    return li_stdintJNI.StdIntFasts_uint_fast16_member_get(swigCPtr, this);
  }

  public void setUint_fast32_member(long value) {
    li_stdintJNI.StdIntFasts_uint_fast32_member_set(swigCPtr, this, value);
  }

  public long getUint_fast32_member() {
    return li_stdintJNI.StdIntFasts_uint_fast32_member_get(swigCPtr, this);
  }

  public void setUint_fast64_member(java.math.BigInteger value) {
    li_stdintJNI.StdIntFasts_uint_fast64_member_set(swigCPtr, this, value);
  }

  public java.math.BigInteger getUint_fast64_member() {
    return li_stdintJNI.StdIntFasts_uint_fast64_member_get(swigCPtr, this);
  }

  public StdIntFasts() {
    this(li_stdintJNI.new_StdIntFasts(), true);
  }

}
