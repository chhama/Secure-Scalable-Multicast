/* ----------------------------------------------------------------------------
 * This file was automatically generated by SWIG (http://www.swig.org).
 * Version 2.0.10
 *
 * Do not make changes to this file unless you know what you are doing--modify
 * the SWIG interface file instead.
 * ----------------------------------------------------------------------------- */

package enum_thorough_proper;

public class TwoNamesStruct {
  private long swigCPtr;
  protected boolean swigCMemOwn;

  protected TwoNamesStruct(long cPtr, boolean cMemoryOwn) {
    swigCMemOwn = cMemoryOwn;
    swigCPtr = cPtr;
  }

  protected static long getCPtr(TwoNamesStruct obj) {
    return (obj == null) ? 0 : obj.swigCPtr;
  }

  protected void finalize() {
    delete();
  }

  public synchronized void delete() {
    if (swigCPtr != 0) {
      if (swigCMemOwn) {
        swigCMemOwn = false;
        enum_thorough_properJNI.delete_TwoNamesStruct(swigCPtr);
      }
      swigCPtr = 0;
    }
  }

  public TwoNamesStruct.twonames twonamesTest1(TwoNamesStruct.twonames e) {
    return TwoNamesStruct.twonames.swigToEnum(enum_thorough_properJNI.TwoNamesStruct_twonamesTest1(swigCPtr, this, e.swigValue()));
  }

  public TwoNamesStruct.twonames twonamesTest2(TwoNamesStruct.twonames e) {
    return TwoNamesStruct.twonames.swigToEnum(enum_thorough_properJNI.TwoNamesStruct_twonamesTest2(swigCPtr, this, e.swigValue()));
  }

  public TwoNamesStruct.twonames twonamesTest3(TwoNamesStruct.twonames e) {
    return TwoNamesStruct.twonames.swigToEnum(enum_thorough_properJNI.TwoNamesStruct_twonamesTest3(swigCPtr, this, e.swigValue()));
  }

  public TwoNamesStruct() {
    this(enum_thorough_properJNI.new_TwoNamesStruct(), true);
  }

  public enum twonames {
    TwoNamesStruct1,
    TwoNamesStruct2;

    public final int swigValue() {
      return swigValue;
    }

    public static twonames swigToEnum(int swigValue) {
      twonames[] swigValues = twonames.class.getEnumConstants();
      if (swigValue < swigValues.length && swigValue >= 0 && swigValues[swigValue].swigValue == swigValue)
        return swigValues[swigValue];
      for (twonames swigEnum : swigValues)
        if (swigEnum.swigValue == swigValue)
          return swigEnum;
      throw new IllegalArgumentException("No enum " + twonames.class + " with value " + swigValue);
    }

    @SuppressWarnings("unused")
    private twonames() {
      this.swigValue = SwigNext.next++;
    }

    @SuppressWarnings("unused")
    private twonames(int swigValue) {
      this.swigValue = swigValue;
      SwigNext.next = swigValue+1;
    }

    @SuppressWarnings("unused")
    private twonames(twonames swigEnum) {
      this.swigValue = swigEnum.swigValue;
      SwigNext.next = this.swigValue+1;
    }

    private final int swigValue;

    private static class SwigNext {
      private static int next = 0;
    }
  }

}