/* ----------------------------------------------------------------------------
 * This file was automatically generated by SWIG (http://www.swig.org).
 * Version 2.0.10
 *
 * Do not make changes to this file unless you know what you are doing--modify
 * the SWIG interface file instead.
 * ----------------------------------------------------------------------------- */

package enum_thorough_proper;

public enum DifferentTypesNoConst {
  typeint_noconst(enum_thorough_properJNI.typeint_noconst_get()),
  typeboolfalse_noconst(enum_thorough_properJNI.typeboolfalse_noconst_get()),
  typebooltrue_noconst(enum_thorough_properJNI.typebooltrue_noconst_get()),
  typebooltwo_noconst,
  typechar_noconst(enum_thorough_properJNI.typechar_noconst_get()),
  typedefaultint_noconst;

  public final int swigValue() {
    return swigValue;
  }

  public static DifferentTypesNoConst swigToEnum(int swigValue) {
    DifferentTypesNoConst[] swigValues = DifferentTypesNoConst.class.getEnumConstants();
    if (swigValue < swigValues.length && swigValue >= 0 && swigValues[swigValue].swigValue == swigValue)
      return swigValues[swigValue];
    for (DifferentTypesNoConst swigEnum : swigValues)
      if (swigEnum.swigValue == swigValue)
        return swigEnum;
    throw new IllegalArgumentException("No enum " + DifferentTypesNoConst.class + " with value " + swigValue);
  }

  @SuppressWarnings("unused")
  private DifferentTypesNoConst() {
    this.swigValue = SwigNext.next++;
  }

  @SuppressWarnings("unused")
  private DifferentTypesNoConst(int swigValue) {
    this.swigValue = swigValue;
    SwigNext.next = swigValue+1;
  }

  @SuppressWarnings("unused")
  private DifferentTypesNoConst(DifferentTypesNoConst swigEnum) {
    this.swigValue = swigEnum.swigValue;
    SwigNext.next = this.swigValue+1;
  }

  private final int swigValue;

  private static class SwigNext {
    private static int next = 0;
  }
}

