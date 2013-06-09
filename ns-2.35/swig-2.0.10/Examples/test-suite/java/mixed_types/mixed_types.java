/* ----------------------------------------------------------------------------
 * This file was automatically generated by SWIG (http://www.swig.org).
 * Version 2.0.10
 *
 * Do not make changes to this file unless you know what you are doing--modify
 * the SWIG interface file instead.
 * ----------------------------------------------------------------------------- */

package mixed_types;

public class mixed_types implements mixed_typesConstants {
  public static SWIGTYPE_p_void ref_pointer(SWIGTYPE_p_p_void a) {
    long cPtr = mixed_typesJNI.ref_pointer__SWIG_0(SWIGTYPE_p_p_void.getCPtr(a));
    return (cPtr == 0) ? null : new SWIGTYPE_p_void(cPtr, false);
  }

  public static A ref_pointer(A a) {
    long cPtr = mixed_typesJNI.ref_pointer__SWIG_1(A.getCPtr(a), a);
    return (cPtr == 0) ? null : new A(cPtr, false);
  }

  public static SWIGTYPE_p_p_A ref_pointer_1(SWIGTYPE_p_p_p_A a) {
    long cPtr = mixed_typesJNI.ref_pointer_1(SWIGTYPE_p_p_p_A.getCPtr(a));
    return (cPtr == 0) ? null : new SWIGTYPE_p_p_A(cPtr, false);
  }

  public static A pointer_1(A a) {
    long cPtr = mixed_typesJNI.pointer_1(A.getCPtr(a), a);
    return (cPtr == 0) ? null : new A(cPtr, false);
  }

  public static A ref_const(A a) {
    return new A(mixed_typesJNI.ref_const(A.getCPtr(a), a), false);
  }

  public static int sint(int a) {
    return mixed_typesJNI.sint(a);
  }

  public static int ref_int(int a) {
    return mixed_typesJNI.ref_int(a);
  }

  public static Hello senum(Hello a) {
    return Hello.swigToEnum(mixed_typesJNI.senum(a.swigValue()));
  }

  public static Hello ref_enum(Hello a) {
    return Hello.swigToEnum(mixed_typesJNI.ref_enum(a.swigValue()));
  }

  public static A rptr_const(A a) {
    long cPtr = mixed_typesJNI.rptr_const(A.getCPtr(a), a);
    return (cPtr == 0) ? null : new A(cPtr, false);
  }

  public static A rptr_const2(A a) {
    long cPtr = mixed_typesJNI.rptr_const2(A.getCPtr(a), a);
    return (cPtr == 0) ? null : new A(cPtr, false);
  }

  public static SWIGTYPE_p_p_void rptr_void(SWIGTYPE_p_p_void a) {
    return new SWIGTYPE_p_p_void(mixed_typesJNI.rptr_void(SWIGTYPE_p_p_void.getCPtr(a)), false);
  }

  public static A cref_a(A a) {
    return new A(mixed_typesJNI.cref_a(A.getCPtr(a), a), false);
  }

  public static A ref_a(A a) {
    return new A(mixed_typesJNI.ref_a(A.getCPtr(a), a), false);
  }

  public static String test_a(String hello, String hi, String chello, String chi) {
    return mixed_typesJNI.test_a(hello, hi, chello, chi);
  }

  public static int test_b(String n2) {
    return mixed_typesJNI.test_b(n2);
  }

  public static int test_c(SWIGTYPE_p_a_8__char n1) {
    return mixed_typesJNI.test_c(SWIGTYPE_p_a_8__char.getCPtr(n1));
  }

  public static int test_d(SWIGTYPE_p_a_8__char n1) {
    return mixed_typesJNI.test_d(SWIGTYPE_p_a_8__char.getCPtr(n1));
  }

  public static int test_e(SWIGTYPE_p_a_8__NameTT_char_t n1) {
    return mixed_typesJNI.test_e(SWIGTYPE_p_a_8__NameTT_char_t.getCPtr(n1));
  }

  public static int test_f(SWIGTYPE_p_NameTT_char_t n1) {
    return mixed_typesJNI.test_f(SWIGTYPE_p_NameTT_char_t.getCPtr(n1));
  }

  public static int test_g(SWIGTYPE_p_a_8__NameTT_char_t n1) {
    return mixed_typesJNI.test_g(SWIGTYPE_p_a_8__NameTT_char_t.getCPtr(n1));
  }

  public static void setArray_c(SWIGTYPE_p_a_4__char value) {
    mixed_typesJNI.array_c_set(SWIGTYPE_p_a_4__char.getCPtr(value));
  }

  public static SWIGTYPE_p_a_4__char getArray_c() {
    long cPtr = mixed_typesJNI.array_c_get();
    return (cPtr == 0) ? null : new SWIGTYPE_p_a_4__char(cPtr, false);
  }

  public static void setArray_sc(SWIGTYPE_p_a_4__signed_char value) {
    mixed_typesJNI.array_sc_set(SWIGTYPE_p_a_4__signed_char.getCPtr(value));
  }

  public static SWIGTYPE_p_a_4__signed_char getArray_sc() {
    long cPtr = mixed_typesJNI.array_sc_get();
    return (cPtr == 0) ? null : new SWIGTYPE_p_a_4__signed_char(cPtr, false);
  }

  public static void setArray_uc(SWIGTYPE_p_a_4__unsigned_char value) {
    mixed_typesJNI.array_uc_set(SWIGTYPE_p_a_4__unsigned_char.getCPtr(value));
  }

  public static SWIGTYPE_p_a_4__unsigned_char getArray_uc() {
    long cPtr = mixed_typesJNI.array_uc_get();
    return (cPtr == 0) ? null : new SWIGTYPE_p_a_4__unsigned_char(cPtr, false);
  }

  public static void setArray_s(SWIGTYPE_p_a_4__short value) {
    mixed_typesJNI.array_s_set(SWIGTYPE_p_a_4__short.getCPtr(value));
  }

  public static SWIGTYPE_p_a_4__short getArray_s() {
    long cPtr = mixed_typesJNI.array_s_get();
    return (cPtr == 0) ? null : new SWIGTYPE_p_a_4__short(cPtr, false);
  }

  public static void setArray_us(SWIGTYPE_p_a_4__unsigned_short value) {
    mixed_typesJNI.array_us_set(SWIGTYPE_p_a_4__unsigned_short.getCPtr(value));
  }

  public static SWIGTYPE_p_a_4__unsigned_short getArray_us() {
    long cPtr = mixed_typesJNI.array_us_get();
    return (cPtr == 0) ? null : new SWIGTYPE_p_a_4__unsigned_short(cPtr, false);
  }

  public static void setArray_i(SWIGTYPE_p_a_4__int value) {
    mixed_typesJNI.array_i_set(SWIGTYPE_p_a_4__int.getCPtr(value));
  }

  public static SWIGTYPE_p_a_4__int getArray_i() {
    long cPtr = mixed_typesJNI.array_i_get();
    return (cPtr == 0) ? null : new SWIGTYPE_p_a_4__int(cPtr, false);
  }

  public static void setArray_ui(SWIGTYPE_p_a_4__unsigned_int value) {
    mixed_typesJNI.array_ui_set(SWIGTYPE_p_a_4__unsigned_int.getCPtr(value));
  }

  public static SWIGTYPE_p_a_4__unsigned_int getArray_ui() {
    long cPtr = mixed_typesJNI.array_ui_get();
    return (cPtr == 0) ? null : new SWIGTYPE_p_a_4__unsigned_int(cPtr, false);
  }

  public static void setArray_l(SWIGTYPE_p_a_4__long value) {
    mixed_typesJNI.array_l_set(SWIGTYPE_p_a_4__long.getCPtr(value));
  }

  public static SWIGTYPE_p_a_4__long getArray_l() {
    long cPtr = mixed_typesJNI.array_l_get();
    return (cPtr == 0) ? null : new SWIGTYPE_p_a_4__long(cPtr, false);
  }

  public static void setArray_ul(SWIGTYPE_p_a_4__unsigned_long value) {
    mixed_typesJNI.array_ul_set(SWIGTYPE_p_a_4__unsigned_long.getCPtr(value));
  }

  public static SWIGTYPE_p_a_4__unsigned_long getArray_ul() {
    long cPtr = mixed_typesJNI.array_ul_get();
    return (cPtr == 0) ? null : new SWIGTYPE_p_a_4__unsigned_long(cPtr, false);
  }

  public static void setArray_ll(SWIGTYPE_p_a_4__long_long value) {
    mixed_typesJNI.array_ll_set(SWIGTYPE_p_a_4__long_long.getCPtr(value));
  }

  public static SWIGTYPE_p_a_4__long_long getArray_ll() {
    long cPtr = mixed_typesJNI.array_ll_get();
    return (cPtr == 0) ? null : new SWIGTYPE_p_a_4__long_long(cPtr, false);
  }

  public static void setArray_f(SWIGTYPE_p_a_4__float value) {
    mixed_typesJNI.array_f_set(SWIGTYPE_p_a_4__float.getCPtr(value));
  }

  public static SWIGTYPE_p_a_4__float getArray_f() {
    long cPtr = mixed_typesJNI.array_f_get();
    return (cPtr == 0) ? null : new SWIGTYPE_p_a_4__float(cPtr, false);
  }

  public static void setArray_d(SWIGTYPE_p_a_4__double value) {
    mixed_typesJNI.array_d_set(SWIGTYPE_p_a_4__double.getCPtr(value));
  }

  public static SWIGTYPE_p_a_4__double getArray_d() {
    long cPtr = mixed_typesJNI.array_d_get();
    return (cPtr == 0) ? null : new SWIGTYPE_p_a_4__double(cPtr, false);
  }

  public static void setArray_struct(SWIGTYPE_p_a_4__SimpleStruct value) {
    mixed_typesJNI.array_struct_set(SWIGTYPE_p_a_4__SimpleStruct.getCPtr(value));
  }

  public static SWIGTYPE_p_a_4__SimpleStruct getArray_struct() {
    long cPtr = mixed_typesJNI.array_struct_get();
    return (cPtr == 0) ? null : new SWIGTYPE_p_a_4__SimpleStruct(cPtr, false);
  }

  public static void setArray_structpointers(SWIGTYPE_p_a_4__p_SimpleStruct value) {
    mixed_typesJNI.array_structpointers_set(SWIGTYPE_p_a_4__p_SimpleStruct.getCPtr(value));
  }

  public static SWIGTYPE_p_a_4__p_SimpleStruct getArray_structpointers() {
    long cPtr = mixed_typesJNI.array_structpointers_get();
    return (cPtr == 0) ? null : new SWIGTYPE_p_a_4__p_SimpleStruct(cPtr, false);
  }

  public static void setArray_ipointers(SWIGTYPE_p_a_4__p_int value) {
    mixed_typesJNI.array_ipointers_set(SWIGTYPE_p_a_4__p_int.getCPtr(value));
  }

  public static SWIGTYPE_p_a_4__p_int getArray_ipointers() {
    long cPtr = mixed_typesJNI.array_ipointers_get();
    return (cPtr == 0) ? null : new SWIGTYPE_p_a_4__p_int(cPtr, false);
  }

  public static void setArray_enum(SWIGTYPE_p_a_4__finger value) {
    mixed_typesJNI.array_enum_set(SWIGTYPE_p_a_4__finger.getCPtr(value));
  }

  public static SWIGTYPE_p_a_4__finger getArray_enum() {
    long cPtr = mixed_typesJNI.array_enum_get();
    return (cPtr == 0) ? null : new SWIGTYPE_p_a_4__finger(cPtr, false);
  }

  public static void setArray_enumpointers(SWIGTYPE_p_a_4__p_finger value) {
    mixed_typesJNI.array_enumpointers_set(SWIGTYPE_p_a_4__p_finger.getCPtr(value));
  }

  public static SWIGTYPE_p_a_4__p_finger getArray_enumpointers() {
    long cPtr = mixed_typesJNI.array_enumpointers_get();
    return (cPtr == 0) ? null : new SWIGTYPE_p_a_4__p_finger(cPtr, false);
  }

  public static SWIGTYPE_p_a_4__int getArray_const_i() {
    long cPtr = mixed_typesJNI.array_const_i_get();
    return (cPtr == 0) ? null : new SWIGTYPE_p_a_4__int(cPtr, false);
  }

  public static void fn_taking_arrays(SWIGTYPE_p_a_4__SimpleStruct array_struct) {
    mixed_typesJNI.fn_taking_arrays(SWIGTYPE_p_a_4__SimpleStruct.getCPtr(array_struct));
  }

  public static int get_2d_array(SWIGTYPE_p_a_4__int array, int x, int y) {
    return mixed_typesJNI.get_2d_array(SWIGTYPE_p_a_4__int.getCPtr(array), x, y);
  }

}