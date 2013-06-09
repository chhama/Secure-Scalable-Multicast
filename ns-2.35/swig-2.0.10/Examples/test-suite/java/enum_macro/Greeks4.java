/* ----------------------------------------------------------------------------
 * This file was automatically generated by SWIG (http://www.swig.org).
 * Version 2.0.10
 *
 * Do not make changes to this file unless you know what you are doing--modify
 * the SWIG interface file instead.
 * ----------------------------------------------------------------------------- */

package enum_macro;

public final class Greeks4 {
  public final static Greeks4 alpha4 = new Greeks4("alpha4", enum_macroJNI.alpha4_get());
  public final static Greeks4 beta4 = new Greeks4("beta4", enum_macroJNI.beta4_get());
  public final static Greeks4 theta4 = new Greeks4("theta4", enum_macroJNI.theta4_get());

  public final int swigValue() {
    return swigValue;
  }

  public String toString() {
    return swigName;
  }

  public static Greeks4 swigToEnum(int swigValue) {
    if (swigValue < swigValues.length && swigValue >= 0 && swigValues[swigValue].swigValue == swigValue)
      return swigValues[swigValue];
    for (int i = 0; i < swigValues.length; i++)
      if (swigValues[i].swigValue == swigValue)
        return swigValues[i];
    throw new IllegalArgumentException("No enum " + Greeks4.class + " with value " + swigValue);
  }

  private Greeks4(String swigName) {
    this.swigName = swigName;
    this.swigValue = swigNext++;
  }

  private Greeks4(String swigName, int swigValue) {
    this.swigName = swigName;
    this.swigValue = swigValue;
    swigNext = swigValue+1;
  }

  private Greeks4(String swigName, Greeks4 swigEnum) {
    this.swigName = swigName;
    this.swigValue = swigEnum.swigValue;
    swigNext = this.swigValue+1;
  }

  private static Greeks4[] swigValues = { alpha4, beta4, theta4 };
  private static int swigNext = 0;
  private final int swigValue;
  private final String swigName;
}

