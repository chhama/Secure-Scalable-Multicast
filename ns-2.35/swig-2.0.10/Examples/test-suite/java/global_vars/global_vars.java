/* ----------------------------------------------------------------------------
 * This file was automatically generated by SWIG (http://www.swig.org).
 * Version 2.0.10
 *
 * Do not make changes to this file unless you know what you are doing--modify
 * the SWIG interface file instead.
 * ----------------------------------------------------------------------------- */

package global_vars;

public class global_vars {
  public static void setB(String value) {
    global_varsJNI.b_set(value);
  }

  public static String getB() {
    return global_varsJNI.b_get();
  }

  public static void setA(A value) {
    global_varsJNI.a_set(A.getCPtr(value), value);
  }

  public static A getA() {
    long cPtr = global_varsJNI.a_get();
    return (cPtr == 0) ? null : new A(cPtr, false);
  }

  public static void setAp(A value) {
    global_varsJNI.ap_set(A.getCPtr(value), value);
  }

  public static A getAp() {
    long cPtr = global_varsJNI.ap_get();
    return (cPtr == 0) ? null : new A(cPtr, false);
  }

  public static void setCap(A value) {
    global_varsJNI.cap_set(A.getCPtr(value), value);
  }

  public static A getCap() {
    long cPtr = global_varsJNI.cap_get();
    return (cPtr == 0) ? null : new A(cPtr, false);
  }

  public static void setAr(A value) {
    global_varsJNI.ar_set(A.getCPtr(value), value);
  }

  public static A getAr() {
    return new A(global_varsJNI.ar_get(), false);
  }

  public static void setX(int value) {
    global_varsJNI.x_set(value);
  }

  public static int getX() {
    return global_varsJNI.x_get();
  }

  public static void setXp(SWIGTYPE_p_int value) {
    global_varsJNI.xp_set(SWIGTYPE_p_int.getCPtr(value));
  }

  public static SWIGTYPE_p_int getXp() {
    long cPtr = global_varsJNI.xp_get();
    return (cPtr == 0) ? null : new SWIGTYPE_p_int(cPtr, false);
  }

  public static void setC_member(SWIGTYPE_p_int value) {
    global_varsJNI.c_member_set(SWIGTYPE_p_int.getCPtr(value));
  }

  public static SWIGTYPE_p_int getC_member() {
    return new SWIGTYPE_p_int(global_varsJNI.c_member_get(), false);
  }

  public static void setVp(SWIGTYPE_p_void value) {
    global_varsJNI.vp_set(SWIGTYPE_p_void.getCPtr(value));
  }

  public static SWIGTYPE_p_void getVp() {
    long cPtr = global_varsJNI.vp_get();
    return (cPtr == 0) ? null : new SWIGTYPE_p_void(cPtr, false);
  }

  public static void setH(Hello value) {
    global_varsJNI.h_set(value.swigValue());
  }

  public static Hello getH() {
    return Hello.swigToEnum(global_varsJNI.h_get());
  }

  public static void setHp(SWIGTYPE_p_Hello value) {
    global_varsJNI.hp_set(SWIGTYPE_p_Hello.getCPtr(value));
  }

  public static SWIGTYPE_p_Hello getHp() {
    long cPtr = global_varsJNI.hp_get();
    return (cPtr == 0) ? null : new SWIGTYPE_p_Hello(cPtr, false);
  }

  public static void setHr(SWIGTYPE_p_Hello value) {
    global_varsJNI.hr_set(SWIGTYPE_p_Hello.getCPtr(value));
  }

  public static SWIGTYPE_p_Hello getHr() {
    return new SWIGTYPE_p_Hello(global_varsJNI.hr_get(), false);
  }

}