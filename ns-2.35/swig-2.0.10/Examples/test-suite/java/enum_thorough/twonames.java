/* ----------------------------------------------------------------------------
 * This file was automatically generated by SWIG (http://www.swig.org).
 * Version 2.0.10
 *
 * Do not make changes to this file unless you know what you are doing--modify
 * the SWIG interface file instead.
 * ----------------------------------------------------------------------------- */

package enum_thorough;

public final class twonames {
  public final static twonames TwoNames1 = new twonames("TwoNames1");
  public final static twonames TwoNames2 = new twonames("TwoNames2");
  public final static twonames TwoNames3 = new twonames("TwoNames3", enum_thoroughJNI.TwoNames3_get());

  public final int swigValue() {
    return swigValue;
  }

  public String toString() {
    return swigName;
  }

  public static twonames swigToEnum(int swigValue) {
    if (swigValue < swigValues.length && swigValue >= 0 && swigValues[swigValue].swigValue == swigValue)
      return swigValues[swigValue];
    for (int i = 0; i < swigValues.length; i++)
      if (swigValues[i].swigValue == swigValue)
        return swigValues[i];
    throw new IllegalArgumentException("No enum " + twonames.class + " with value " + swigValue);
  }

  private twonames(String swigName) {
    this.swigName = swigName;
    this.swigValue = swigNext++;
  }

  private twonames(String swigName, int swigValue) {
    this.swigName = swigName;
    this.swigValue = swigValue;
    swigNext = swigValue+1;
  }

  private twonames(String swigName, twonames swigEnum) {
    this.swigName = swigName;
    this.swigValue = swigEnum.swigValue;
    swigNext = this.swigValue+1;
  }

  private static twonames[] swigValues = { TwoNames1, TwoNames2, TwoNames3 };
  private static int swigNext = 0;
  private final int swigValue;
  private final String swigName;
}

