/* ----------------------------------------------------------------------------
 * This file was automatically generated by SWIG (http://www.swig.org).
 * Version 2.0.10
 *
 * Do not make changes to this file unless you know what you are doing--modify
 * the SWIG interface file instead.
 * ----------------------------------------------------------------------------- */

package li_std_pair_using;

public class StringStringPair {
  private long swigCPtr;
  protected boolean swigCMemOwn;

  protected StringStringPair(long cPtr, boolean cMemoryOwn) {
    swigCMemOwn = cMemoryOwn;
    swigCPtr = cPtr;
  }

  protected static long getCPtr(StringStringPair obj) {
    return (obj == null) ? 0 : obj.swigCPtr;
  }

  protected void finalize() {
    delete();
  }

  public synchronized void delete() {
    if (swigCPtr != 0) {
      if (swigCMemOwn) {
        swigCMemOwn = false;
        li_std_pair_usingJNI.delete_StringStringPair(swigCPtr);
      }
      swigCPtr = 0;
    }
  }

  public StringStringPair() {
    this(li_std_pair_usingJNI.new_StringStringPair__SWIG_0(), true);
  }

  public StringStringPair(String first, String second) {
    this(li_std_pair_usingJNI.new_StringStringPair__SWIG_1(first, second), true);
  }

  public StringStringPair(StringStringPair p) {
    this(li_std_pair_usingJNI.new_StringStringPair__SWIG_2(StringStringPair.getCPtr(p), p), true);
  }

  public void setFirst(String value) {
    li_std_pair_usingJNI.StringStringPair_first_set(swigCPtr, this, value);
  }

  public String getFirst() {
    return li_std_pair_usingJNI.StringStringPair_first_get(swigCPtr, this);
  }

  public void setSecond(String value) {
    li_std_pair_usingJNI.StringStringPair_second_set(swigCPtr, this, value);
  }

  public String getSecond() {
    return li_std_pair_usingJNI.StringStringPair_second_get(swigCPtr, this);
  }

}
