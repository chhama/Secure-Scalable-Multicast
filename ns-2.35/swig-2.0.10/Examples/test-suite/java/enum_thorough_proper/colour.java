/* ----------------------------------------------------------------------------
 * This file was automatically generated by SWIG (http://www.swig.org).
 * Version 2.0.10
 *
 * Do not make changes to this file unless you know what you are doing--modify
 * the SWIG interface file instead.
 * ----------------------------------------------------------------------------- */

package enum_thorough_proper;

public enum colour {
  red(enum_thorough_properJNI.red_get()),
  blue,
  green(enum_thorough_properJNI.green_get());

  public final int swigValue() {
    return swigValue;
  }

  public static colour swigToEnum(int swigValue) {
    colour[] swigValues = colour.class.getEnumConstants();
    if (swigValue < swigValues.length && swigValue >= 0 && swigValues[swigValue].swigValue == swigValue)
      return swigValues[swigValue];
    for (colour swigEnum : swigValues)
      if (swigEnum.swigValue == swigValue)
        return swigEnum;
    throw new IllegalArgumentException("No enum " + colour.class + " with value " + swigValue);
  }

  @SuppressWarnings("unused")
  private colour() {
    this.swigValue = SwigNext.next++;
  }

  @SuppressWarnings("unused")
  private colour(int swigValue) {
    this.swigValue = swigValue;
    SwigNext.next = swigValue+1;
  }

  @SuppressWarnings("unused")
  private colour(colour swigEnum) {
    this.swigValue = swigEnum.swigValue;
    SwigNext.next = this.swigValue+1;
  }

  private final int swigValue;

  private static class SwigNext {
    private static int next = 0;
  }
}

