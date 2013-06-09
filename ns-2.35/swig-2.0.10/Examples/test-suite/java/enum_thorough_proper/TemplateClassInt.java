/* ----------------------------------------------------------------------------
 * This file was automatically generated by SWIG (http://www.swig.org).
 * Version 2.0.10
 *
 * Do not make changes to this file unless you know what you are doing--modify
 * the SWIG interface file instead.
 * ----------------------------------------------------------------------------- */

package enum_thorough_proper;

public class TemplateClassInt {
  private long swigCPtr;
  protected boolean swigCMemOwn;

  protected TemplateClassInt(long cPtr, boolean cMemoryOwn) {
    swigCMemOwn = cMemoryOwn;
    swigCPtr = cPtr;
  }

  protected static long getCPtr(TemplateClassInt obj) {
    return (obj == null) ? 0 : obj.swigCPtr;
  }

  protected void finalize() {
    delete();
  }

  public synchronized void delete() {
    if (swigCPtr != 0) {
      if (swigCMemOwn) {
        swigCMemOwn = false;
        enum_thorough_properJNI.delete_TemplateClassInt(swigCPtr);
      }
      swigCPtr = 0;
    }
  }

  public TemplateClassInt.scientists scientistsTest1(TemplateClassInt.scientists e) {
    return TemplateClassInt.scientists.swigToEnum(enum_thorough_properJNI.TemplateClassInt_scientistsTest1(swigCPtr, this, e.swigValue()));
  }

  public TemplateClassInt.scientists scientistsTest2(TemplateClassInt.scientists e) {
    return TemplateClassInt.scientists.swigToEnum(enum_thorough_properJNI.TemplateClassInt_scientistsTest2(swigCPtr, this, e.swigValue()));
  }

  public TemplateClassInt.scientists scientistsTest3(TemplateClassInt.scientists e) {
    return TemplateClassInt.scientists.swigToEnum(enum_thorough_properJNI.TemplateClassInt_scientistsTest3(swigCPtr, this, e.swigValue()));
  }

  public TemplateClassInt.scientists scientistsTest4(TemplateClassInt.scientists e) {
    return TemplateClassInt.scientists.swigToEnum(enum_thorough_properJNI.TemplateClassInt_scientistsTest4(swigCPtr, this, e.swigValue()));
  }

  public TemplateClassInt.scientists scientistsTest5(TemplateClassInt.scientists e) {
    return TemplateClassInt.scientists.swigToEnum(enum_thorough_properJNI.TemplateClassInt_scientistsTest5(swigCPtr, this, e.swigValue()));
  }

  public TemplateClassInt.scientists scientistsTest6(TemplateClassInt.scientists e) {
    return TemplateClassInt.scientists.swigToEnum(enum_thorough_properJNI.TemplateClassInt_scientistsTest6(swigCPtr, this, e.swigValue()));
  }

  public TemplateClassInt.scientists scientistsTest7(TemplateClassInt.scientists e) {
    return TemplateClassInt.scientists.swigToEnum(enum_thorough_properJNI.TemplateClassInt_scientistsTest7(swigCPtr, this, e.swigValue()));
  }

  public TemplateClassInt.scientists scientistsTest8(TemplateClassInt.scientists e) {
    return TemplateClassInt.scientists.swigToEnum(enum_thorough_properJNI.TemplateClassInt_scientistsTest8(swigCPtr, this, e.swigValue()));
  }

  public TemplateClassInt.scientists scientistsTest9(TemplateClassInt.scientists e) {
    return TemplateClassInt.scientists.swigToEnum(enum_thorough_properJNI.TemplateClassInt_scientistsTest9(swigCPtr, this, e.swigValue()));
  }

  public TemplateClassInt.scientists scientistsTestB(TemplateClassInt.scientists e) {
    return TemplateClassInt.scientists.swigToEnum(enum_thorough_properJNI.TemplateClassInt_scientistsTestB(swigCPtr, this, e.swigValue()));
  }

  public TemplateClassInt.scientists scientistsTestD(TemplateClassInt.scientists e) {
    return TemplateClassInt.scientists.swigToEnum(enum_thorough_properJNI.TemplateClassInt_scientistsTestD(swigCPtr, this, e.swigValue()));
  }

  public TemplateClassInt.scientists scientistsTestE(TemplateClassInt.scientists e) {
    return TemplateClassInt.scientists.swigToEnum(enum_thorough_properJNI.TemplateClassInt_scientistsTestE(swigCPtr, this, e.swigValue()));
  }

  public TemplateClassInt.scientists scientistsTestF(TemplateClassInt.scientists e) {
    return TemplateClassInt.scientists.swigToEnum(enum_thorough_properJNI.TemplateClassInt_scientistsTestF(swigCPtr, this, e.swigValue()));
  }

  public TemplateClassInt.scientists scientistsTestG(TemplateClassInt.scientists e) {
    return TemplateClassInt.scientists.swigToEnum(enum_thorough_properJNI.TemplateClassInt_scientistsTestG(swigCPtr, this, e.swigValue()));
  }

  public TemplateClassInt.scientists scientistsTestH(TemplateClassInt.scientists e) {
    return TemplateClassInt.scientists.swigToEnum(enum_thorough_properJNI.TemplateClassInt_scientistsTestH(swigCPtr, this, e.swigValue()));
  }

  public TemplateClassInt.scientists scientistsTestI(TemplateClassInt.scientists e) {
    return TemplateClassInt.scientists.swigToEnum(enum_thorough_properJNI.TemplateClassInt_scientistsTestI(swigCPtr, this, e.swigValue()));
  }

  public TemplateClassInt.scientists scientistsTestJ(TemplateClassInt.scientists e) {
    return TemplateClassInt.scientists.swigToEnum(enum_thorough_properJNI.TemplateClassInt_scientistsTestJ(swigCPtr, this, e.swigValue()));
  }

  public TemplateClassInt() {
    this(enum_thorough_properJNI.new_TemplateClassInt(), true);
  }

  public enum scientists {
    einstein,
    galileo(enum_thorough_properJNI.TemplateClassInt_galileo_get());

    public final int swigValue() {
      return swigValue;
    }

    public static scientists swigToEnum(int swigValue) {
      scientists[] swigValues = scientists.class.getEnumConstants();
      if (swigValue < swigValues.length && swigValue >= 0 && swigValues[swigValue].swigValue == swigValue)
        return swigValues[swigValue];
      for (scientists swigEnum : swigValues)
        if (swigEnum.swigValue == swigValue)
          return swigEnum;
      throw new IllegalArgumentException("No enum " + scientists.class + " with value " + swigValue);
    }

    @SuppressWarnings("unused")
    private scientists() {
      this.swigValue = SwigNext.next++;
    }

    @SuppressWarnings("unused")
    private scientists(int swigValue) {
      this.swigValue = swigValue;
      SwigNext.next = swigValue+1;
    }

    @SuppressWarnings("unused")
    private scientists(scientists swigEnum) {
      this.swigValue = swigEnum.swigValue;
      SwigNext.next = this.swigValue+1;
    }

    private final int swigValue;

    private static class SwigNext {
      private static int next = 0;
    }
  }

}