/* ----------------------------------------------------------------------------
 * This file was automatically generated by SWIG (http://www.swig.org).
 * Version 2.0.10
 *
 * Do not make changes to this file unless you know what you are doing--modify
 * the SWIG interface file instead.
 * ----------------------------------------------------------------------------- */

package li_boost_shared_ptr_bits;

public class li_boost_shared_ptr_bits {
  public static NonDynamic boing(NonDynamic b) {
    long cPtr = li_boost_shared_ptr_bitsJNI.boing(NonDynamic.getCPtr(b), b);
    return (cPtr == 0) ? null : new NonDynamic(cPtr, true);
  }

  public static int sum(VectorIntHolder v) {
    return li_boost_shared_ptr_bitsJNI.sum(VectorIntHolder.getCPtr(v), v);
  }

}