/* ----------------------------------------------------------------------------
 * This file was automatically generated by SWIG (http://www.swig.org).
 * Version 2.0.10
 *
 * Do not make changes to this file unless you know what you are doing--modify
 * the SWIG interface file instead.
 * ----------------------------------------------------------------------------- */

package li_std_vector_enum;

public class li_std_vector_enumJNI {
  public final static native long new_EnumVector();
  public final static native int EnumVector_ten_get();
  public final static native int EnumVector_twenty_get();
  public final static native int EnumVector_thirty_get();
  public final static native void EnumVector_nums_set(long jarg1, EnumVector jarg1_, long jarg2, vector_numbers jarg2_);
  public final static native long EnumVector_nums_get(long jarg1, EnumVector jarg1_);
  public final static native void EnumVector_fill_numbers(long jarg1, EnumVector jarg1_);
  public final static native void delete_EnumVector(long jarg1);
  public final static native long new_vector_numbers__SWIG_0();
  public final static native long new_vector_numbers__SWIG_1(long jarg1);
  public final static native long vector_numbers_size(long jarg1, vector_numbers jarg1_);
  public final static native long vector_numbers_capacity(long jarg1, vector_numbers jarg1_);
  public final static native void vector_numbers_reserve(long jarg1, vector_numbers jarg1_, long jarg2);
  public final static native boolean vector_numbers_isEmpty(long jarg1, vector_numbers jarg1_);
  public final static native void vector_numbers_clear(long jarg1, vector_numbers jarg1_);
  public final static native void vector_numbers_add(long jarg1, vector_numbers jarg1_, int jarg2);
  public final static native int vector_numbers_get(long jarg1, vector_numbers jarg1_, int jarg2);
  public final static native void vector_numbers_set(long jarg1, vector_numbers jarg1_, int jarg2, int jarg3);
  public final static native void delete_vector_numbers(long jarg1);
}