/* ----------------------------------------------------------------------------
 * This file was automatically generated by SWIG (http://www.swig.org).
 * Version 2.0.10
 *
 * Do not make changes to this file unless you know what you are doing--modify
 * the SWIG interface file instead.
 * ----------------------------------------------------------------------------- */

package constant_expr;

public class constant_expr implements constant_exprConstants {
  public static int getX() {
    return constant_exprJNI.X_get();
  }

  public static void setD_array(SWIGTYPE_p_double value) {
    constant_exprJNI.d_array_set(SWIGTYPE_p_double.getCPtr(value));
  }

  public static SWIGTYPE_p_double getD_array() {
    long cPtr = constant_exprJNI.d_array_get();
    return (cPtr == 0) ? null : new SWIGTYPE_p_double(cPtr, false);
  }

}
