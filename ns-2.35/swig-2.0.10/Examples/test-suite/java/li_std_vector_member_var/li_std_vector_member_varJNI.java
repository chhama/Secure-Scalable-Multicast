/* ----------------------------------------------------------------------------
 * This file was automatically generated by SWIG (http://www.swig.org).
 * Version 2.0.10
 *
 * Do not make changes to this file unless you know what you are doing--modify
 * the SWIG interface file instead.
 * ----------------------------------------------------------------------------- */

package li_std_vector_member_var;

public class li_std_vector_member_varJNI {
  public final static native long new_vectorDbl__SWIG_0();
  public final static native long new_vectorDbl__SWIG_1(long jarg1);
  public final static native long vectorDbl_size(long jarg1, vectorDbl jarg1_);
  public final static native long vectorDbl_capacity(long jarg1, vectorDbl jarg1_);
  public final static native void vectorDbl_reserve(long jarg1, vectorDbl jarg1_, long jarg2);
  public final static native boolean vectorDbl_isEmpty(long jarg1, vectorDbl jarg1_);
  public final static native void vectorDbl_clear(long jarg1, vectorDbl jarg1_);
  public final static native void vectorDbl_add(long jarg1, vectorDbl jarg1_, double jarg2);
  public final static native double vectorDbl_get(long jarg1, vectorDbl jarg1_, int jarg2);
  public final static native void vectorDbl_set(long jarg1, vectorDbl jarg1_, int jarg2, double jarg3);
  public final static native void delete_vectorDbl(long jarg1);
  public final static native void Test_v_set(long jarg1, Test jarg1_, long jarg2, vectorDbl jarg2_);
  public final static native long Test_v_get(long jarg1, Test jarg1_);
  public final static native void Test_x_set(long jarg1, Test jarg1_, int jarg2);
  public final static native int Test_x_get(long jarg1, Test jarg1_);
  public final static native long new_Test();
  public final static native void Test_f(long jarg1, Test jarg1_, int jarg2);
  public final static native void delete_Test(long jarg1);
  public final static native void S_x_set(long jarg1, S jarg1_, int jarg2);
  public final static native int S_x_get(long jarg1, S jarg1_);
  public final static native long new_S();
  public final static native void delete_S(long jarg1);
  public final static native void T_start_t_set(long jarg1, T jarg1_, long jarg2, S jarg2_);
  public final static native long T_start_t_get(long jarg1, T jarg1_);
  public final static native void T_length_set(long jarg1, T jarg1_, long jarg2);
  public final static native long T_length_get(long jarg1, T jarg1_);
  public final static native long new_T();
  public final static native void delete_T(long jarg1);
}