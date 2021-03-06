/* ----------------------------------------------------------------------------
 * This file was automatically generated by SWIG (http://www.swig.org).
 * Version 2.0.10
 *
 * Do not make changes to this file unless you know what you are doing--modify
 * the SWIG interface file instead.
 * ----------------------------------------------------------------------------- */

package enum_var;

public final class Fruit {
  public final static Fruit APPLE = new Fruit("APPLE");
  public final static Fruit PEAR = new Fruit("PEAR");

  public final int swigValue() {
    return swigValue;
  }

  public String toString() {
    return swigName;
  }

  public static Fruit swigToEnum(int swigValue) {
    if (swigValue < swigValues.length && swigValue >= 0 && swigValues[swigValue].swigValue == swigValue)
      return swigValues[swigValue];
    for (int i = 0; i < swigValues.length; i++)
      if (swigValues[i].swigValue == swigValue)
        return swigValues[i];
    throw new IllegalArgumentException("No enum " + Fruit.class + " with value " + swigValue);
  }

  private Fruit(String swigName) {
    this.swigName = swigName;
    this.swigValue = swigNext++;
  }

  private Fruit(String swigName, int swigValue) {
    this.swigName = swigName;
    this.swigValue = swigValue;
    swigNext = swigValue+1;
  }

  private Fruit(String swigName, Fruit swigEnum) {
    this.swigName = swigName;
    this.swigValue = swigEnum.swigValue;
    swigNext = this.swigValue+1;
  }

  private static Fruit[] swigValues = { APPLE, PEAR };
  private static int swigNext = 0;
  private final int swigValue;
  private final String swigName;
}

