/* ----------------------------------------------------------------------------
 * This file was automatically generated by SWIG (http://www.swig.org).
 * Version 2.0.10
 *
 * Do not make changes to this file unless you know what you are doing--modify
 * the SWIG interface file instead.
 * ----------------------------------------------------------------------------- */

package global_namespace;

public final class TheEnum2 {
  public final static TheEnum2 theenum2 = new TheEnum2("theenum2");

  public final int swigValue() {
    return swigValue;
  }

  public String toString() {
    return swigName;
  }

  public static TheEnum2 swigToEnum(int swigValue) {
    if (swigValue < swigValues.length && swigValue >= 0 && swigValues[swigValue].swigValue == swigValue)
      return swigValues[swigValue];
    for (int i = 0; i < swigValues.length; i++)
      if (swigValues[i].swigValue == swigValue)
        return swigValues[i];
    throw new IllegalArgumentException("No enum " + TheEnum2.class + " with value " + swigValue);
  }

  private TheEnum2(String swigName) {
    this.swigName = swigName;
    this.swigValue = swigNext++;
  }

  private TheEnum2(String swigName, int swigValue) {
    this.swigName = swigName;
    this.swigValue = swigValue;
    swigNext = swigValue+1;
  }

  private TheEnum2(String swigName, TheEnum2 swigEnum) {
    this.swigName = swigName;
    this.swigValue = swigEnum.swigValue;
    swigNext = this.swigValue+1;
  }

  private static TheEnum2[] swigValues = { theenum2 };
  private static int swigNext = 0;
  private final int swigValue;
  private final String swigName;
}

