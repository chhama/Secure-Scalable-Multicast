/* ----------------------------------------------------------------------------
 * This file was automatically generated by SWIG (http://www.swig.org).
 * Version 2.0.10
 *
 * Do not make changes to this file unless you know what you are doing--modify
 * the SWIG interface file instead.
 * ----------------------------------------------------------------------------- */

package extend_default;

public class OverBefore {
  private long swigCPtr;
  protected boolean swigCMemOwn;

  protected OverBefore(long cPtr, boolean cMemoryOwn) {
    swigCMemOwn = cMemoryOwn;
    swigCPtr = cPtr;
  }

  protected static long getCPtr(OverBefore obj) {
    return (obj == null) ? 0 : obj.swigCPtr;
  }

  protected void finalize() {
    delete();
  }

  public synchronized void delete() {
    if (swigCPtr != 0) {
      if (swigCMemOwn) {
        swigCMemOwn = false;
        extend_defaultJNI.delete_OverBefore(swigCPtr);
      }
      swigCPtr = 0;
    }
  }

  public OverBefore(String str, int ii, double dd) {
    this(extend_defaultJNI.new_OverBefore__SWIG_0(str, ii, dd), true);
  }

  public OverBefore(String str, int ii) {
    this(extend_defaultJNI.new_OverBefore__SWIG_1(str, ii), true);
  }

  public OverBefore(String str) {
    this(extend_defaultJNI.new_OverBefore__SWIG_2(str), true);
  }

  public static double AddedStaticMethod(String arg0, int ii, double dd) {
    return extend_defaultJNI.OverBefore_AddedStaticMethod__SWIG_0(arg0, ii, dd);
  }

  public static double AddedStaticMethod(String arg0, int ii) {
    return extend_defaultJNI.OverBefore_AddedStaticMethod__SWIG_1(arg0, ii);
  }

  public static double AddedStaticMethod(String arg0) {
    return extend_defaultJNI.OverBefore_AddedStaticMethod__SWIG_2(arg0);
  }

  public double AddedMethod(String arg0, int ii, double dd) {
    return extend_defaultJNI.OverBefore_AddedMethod__SWIG_0(swigCPtr, this, arg0, ii, dd);
  }

  public double AddedMethod(String arg0, int ii) {
    return extend_defaultJNI.OverBefore_AddedMethod__SWIG_1(swigCPtr, this, arg0, ii);
  }

  public double AddedMethod(String arg0) {
    return extend_defaultJNI.OverBefore_AddedMethod__SWIG_2(swigCPtr, this, arg0);
  }

  public void setD(double value) {
    extend_defaultJNI.OverBefore_d_set(swigCPtr, this, value);
  }

  public double getD() {
    return extend_defaultJNI.OverBefore_d_get(swigCPtr, this);
  }

  public void setI(int value) {
    extend_defaultJNI.OverBefore_i_set(swigCPtr, this, value);
  }

  public int getI() {
    return extend_defaultJNI.OverBefore_i_get(swigCPtr, this);
  }

  public OverBefore(int i, double d) {
    this(extend_defaultJNI.new_OverBefore__SWIG_3(i, d), true);
  }

  public OverBefore(int i) {
    this(extend_defaultJNI.new_OverBefore__SWIG_4(i), true);
  }

  public OverBefore() {
    this(extend_defaultJNI.new_OverBefore__SWIG_5(), true);
  }

  public static double AddedStaticMethod(int i, double d) {
    return extend_defaultJNI.OverBefore_AddedStaticMethod__SWIG_3(i, d);
  }

  public static double AddedStaticMethod(int i) {
    return extend_defaultJNI.OverBefore_AddedStaticMethod__SWIG_4(i);
  }

  public static double AddedStaticMethod() {
    return extend_defaultJNI.OverBefore_AddedStaticMethod__SWIG_5();
  }

  public double AddedMethod(int i, double d) {
    return extend_defaultJNI.OverBefore_AddedMethod__SWIG_3(swigCPtr, this, i, d);
  }

  public double AddedMethod(int i) {
    return extend_defaultJNI.OverBefore_AddedMethod__SWIG_4(swigCPtr, this, i);
  }

  public double AddedMethod() {
    return extend_defaultJNI.OverBefore_AddedMethod__SWIG_5(swigCPtr, this);
  }

}
