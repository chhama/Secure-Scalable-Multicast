/* ----------------------------------------------------------------------------
 * This file was automatically generated by SWIG (http://www.swig.org).
 * Version 2.0.10
 *
 * Do not make changes to this file unless you know what you are doing--modify
 * the SWIG interface file instead.
 * ----------------------------------------------------------------------------- */

package funcptr;

public class funcptr {
  public static void distance(SWIGTYPE_p_double data, SWIGTYPE_p_int dim, SWIGTYPE_p_f_p_double_int_int_int_int_p_void__double fun, SWIGTYPE_p_double output) {
    funcptrJNI.distance(SWIGTYPE_p_double.getCPtr(data), SWIGTYPE_p_int.getCPtr(dim), SWIGTYPE_p_f_p_double_int_int_int_int_p_void__double.getCPtr(fun), SWIGTYPE_p_double.getCPtr(output));
  }

  public static int do_op(int a, int b, SWIGTYPE_p_f_int_int__int op) {
    return funcptrJNI.do_op(a, b, SWIGTYPE_p_f_int_int__int.getCPtr(op));
  }

  public static int add(int a, int b) {
    return funcptrJNI.add(a, b);
  }

  public static int subtract(int a, int b) {
    return funcptrJNI.subtract(a, b);
  }

  public static int multiply(int a, int b) {
    return funcptrJNI.multiply(a, b);
  }

  public static SWIGTYPE_p_int nowt() {
    long cPtr = funcptrJNI.nowt();
    return (cPtr == 0) ? null : new SWIGTYPE_p_int(cPtr, false);
  }

  public static SWIGTYPE_p_int nowt2() {
    long cPtr = funcptrJNI.nowt2();
    return (cPtr == 0) ? null : new SWIGTYPE_p_int(cPtr, false);
  }

  public static MyStruct mystructptr() {
    long cPtr = funcptrJNI.mystructptr();
    return (cPtr == 0) ? null : new MyStruct(cPtr, false);
  }

  public static void setFuncvar(SWIGTYPE_p_f_int_int__int value) {
    funcptrJNI.funcvar_set(SWIGTYPE_p_f_int_int__int.getCPtr(value));
  }

  public static SWIGTYPE_p_f_int_int__int getFuncvar() {
    long cPtr = funcptrJNI.funcvar_get();
    return (cPtr == 0) ? null : new SWIGTYPE_p_f_int_int__int(cPtr, false);
  }

  public static void setFuncvar2(SWIGTYPE_p_f___p_int value) {
    funcptrJNI.funcvar2_set(SWIGTYPE_p_f___p_int.getCPtr(value));
  }

  public static SWIGTYPE_p_f___p_int getFuncvar2() {
    long cPtr = funcptrJNI.funcvar2_get();
    return (cPtr == 0) ? null : new SWIGTYPE_p_f___p_int(cPtr, false);
  }

  public static void setFuncvar3(SWIGTYPE_p_f_void__p_int value) {
    funcptrJNI.funcvar3_set(SWIGTYPE_p_f_void__p_int.getCPtr(value));
  }

  public static SWIGTYPE_p_f_void__p_int getFuncvar3() {
    long cPtr = funcptrJNI.funcvar3_get();
    return (cPtr == 0) ? null : new SWIGTYPE_p_f_void__p_int(cPtr, false);
  }

  public static void setFuncvar4(SWIGTYPE_p_f___p_int value) {
    funcptrJNI.funcvar4_set(SWIGTYPE_p_f___p_int.getCPtr(value));
  }

  public static SWIGTYPE_p_f___p_int getFuncvar4() {
    long cPtr = funcptrJNI.funcvar4_get();
    return (cPtr == 0) ? null : new SWIGTYPE_p_f___p_int(cPtr, false);
  }

  public static void setFuncvar5(SWIGTYPE_p_f___p_MyStruct value) {
    funcptrJNI.funcvar5_set(SWIGTYPE_p_f___p_MyStruct.getCPtr(value));
  }

  public static SWIGTYPE_p_f___p_MyStruct getFuncvar5() {
    long cPtr = funcptrJNI.funcvar5_get();
    return (cPtr == 0) ? null : new SWIGTYPE_p_f___p_MyStruct(cPtr, false);
  }

  public static void setPfunc0(SWIGTYPE_p_f___void value) {
    funcptrJNI.pfunc0_set(SWIGTYPE_p_f___void.getCPtr(value));
  }

  public static SWIGTYPE_p_f___void getPfunc0() {
    long cPtr = funcptrJNI.pfunc0_get();
    return (cPtr == 0) ? null : new SWIGTYPE_p_f___void(cPtr, false);
  }

  public static void setPfuncA(SWIGTYPE_p_f___int value) {
    funcptrJNI.pfuncA_set(SWIGTYPE_p_f___int.getCPtr(value));
  }

  public static SWIGTYPE_p_f___int getPfuncA() {
    long cPtr = funcptrJNI.pfuncA_get();
    return (cPtr == 0) ? null : new SWIGTYPE_p_f___int(cPtr, false);
  }

  public static void setPfunc1(SWIGTYPE_p_f_int__void value) {
    funcptrJNI.pfunc1_set(SWIGTYPE_p_f_int__void.getCPtr(value));
  }

  public static SWIGTYPE_p_f_int__void getPfunc1() {
    long cPtr = funcptrJNI.pfunc1_get();
    return (cPtr == 0) ? null : new SWIGTYPE_p_f_int__void(cPtr, false);
  }

  public static void setPfunc2(SWIGTYPE_p_f_int_double__void value) {
    funcptrJNI.pfunc2_set(SWIGTYPE_p_f_int_double__void.getCPtr(value));
  }

  public static SWIGTYPE_p_f_int_double__void getPfunc2() {
    long cPtr = funcptrJNI.pfunc2_get();
    return (cPtr == 0) ? null : new SWIGTYPE_p_f_int_double__void(cPtr, false);
  }

}