/* ----------------------------------------------------------------------------
 * This file was automatically generated by SWIG (http://www.swig.org).
 * Version 2.0.10
 *
 * Do not make changes to this file unless you know what you are doing--modify
 * the SWIG interface file instead.
 * ----------------------------------------------------------------------------- */

package enum_thorough_proper;

public class HairStruct {
  private long swigCPtr;
  protected boolean swigCMemOwn;

  protected HairStruct(long cPtr, boolean cMemoryOwn) {
    swigCMemOwn = cMemoryOwn;
    swigCPtr = cPtr;
  }

  protected static long getCPtr(HairStruct obj) {
    return (obj == null) ? 0 : obj.swigCPtr;
  }

  protected void finalize() {
    delete();
  }

  public synchronized void delete() {
    if (swigCPtr != 0) {
      if (swigCMemOwn) {
        swigCMemOwn = false;
        enum_thorough_properJNI.delete_HairStruct(swigCPtr);
      }
      swigCPtr = 0;
    }
  }

  public HairStruct.hair hairTest1(HairStruct.hair e) {
    return HairStruct.hair.swigToEnum(enum_thorough_properJNI.HairStruct_hairTest1(swigCPtr, this, e.swigValue()));
  }

  public HairStruct.hair hairTest2(HairStruct.hair e) {
    return HairStruct.hair.swigToEnum(enum_thorough_properJNI.HairStruct_hairTest2(swigCPtr, this, e.swigValue()));
  }

  public HairStruct.hair hairTest3(HairStruct.hair e) {
    return HairStruct.hair.swigToEnum(enum_thorough_properJNI.HairStruct_hairTest3(swigCPtr, this, e.swigValue()));
  }

  public HairStruct.hair hairTest4(HairStruct.hair e) {
    return HairStruct.hair.swigToEnum(enum_thorough_properJNI.HairStruct_hairTest4(swigCPtr, this, e.swigValue()));
  }

  public HairStruct.hair hairTest5(HairStruct.hair e) {
    return HairStruct.hair.swigToEnum(enum_thorough_properJNI.HairStruct_hairTest5(swigCPtr, this, e.swigValue()));
  }

  public HairStruct.hair hairTest6(HairStruct.hair e) {
    return HairStruct.hair.swigToEnum(enum_thorough_properJNI.HairStruct_hairTest6(swigCPtr, this, e.swigValue()));
  }

  public HairStruct.hair hairTest7(HairStruct.hair e) {
    return HairStruct.hair.swigToEnum(enum_thorough_properJNI.HairStruct_hairTest7(swigCPtr, this, e.swigValue()));
  }

  public HairStruct.hair hairTest8(HairStruct.hair e) {
    return HairStruct.hair.swigToEnum(enum_thorough_properJNI.HairStruct_hairTest8(swigCPtr, this, e.swigValue()));
  }

  public HairStruct.hair hairTest9(HairStruct.hair e) {
    return HairStruct.hair.swigToEnum(enum_thorough_properJNI.HairStruct_hairTest9(swigCPtr, this, e.swigValue()));
  }

  public HairStruct.hair hairTestA(HairStruct.hair e) {
    return HairStruct.hair.swigToEnum(enum_thorough_properJNI.HairStruct_hairTestA(swigCPtr, this, e.swigValue()));
  }

  public HairStruct.hair hairTestB(HairStruct.hair e) {
    return HairStruct.hair.swigToEnum(enum_thorough_properJNI.HairStruct_hairTestB(swigCPtr, this, e.swigValue()));
  }

  public colour colourTest1(colour e) {
    return colour.swigToEnum(enum_thorough_properJNI.HairStruct_colourTest1(swigCPtr, this, e.swigValue()));
  }

  public colour colourTest2(colour e) {
    return colour.swigToEnum(enum_thorough_properJNI.HairStruct_colourTest2(swigCPtr, this, e.swigValue()));
  }

  public namedanon namedanonTest1(namedanon e) {
    return namedanon.swigToEnum(enum_thorough_properJNI.HairStruct_namedanonTest1(swigCPtr, this, e.swigValue()));
  }

  public namedanonspace namedanonspaceTest1(namedanonspace e) {
    return namedanonspace.swigToEnum(enum_thorough_properJNI.HairStruct_namedanonspaceTest1(swigCPtr, this, e.swigValue()));
  }

  public TreesClass.trees treesGlobalTest1(TreesClass.trees e) {
    return TreesClass.trees.swigToEnum(enum_thorough_properJNI.HairStruct_treesGlobalTest1(swigCPtr, this, e.swigValue()));
  }

  public TreesClass.trees treesGlobalTest2(TreesClass.trees e) {
    return TreesClass.trees.swigToEnum(enum_thorough_properJNI.HairStruct_treesGlobalTest2(swigCPtr, this, e.swigValue()));
  }

  public TreesClass.trees treesGlobalTest3(TreesClass.trees e) {
    return TreesClass.trees.swigToEnum(enum_thorough_properJNI.HairStruct_treesGlobalTest3(swigCPtr, this, e.swigValue()));
  }

  public TreesClass.trees treesGlobalTest4(TreesClass.trees e) {
    return TreesClass.trees.swigToEnum(enum_thorough_properJNI.HairStruct_treesGlobalTest4(swigCPtr, this, e.swigValue()));
  }

  public TreesClass.trees treesGlobalTest5(TreesClass.trees e) {
    return TreesClass.trees.swigToEnum(enum_thorough_properJNI.HairStruct_treesGlobalTest5(swigCPtr, this, e.swigValue()));
  }

  public HairStruct() {
    this(enum_thorough_properJNI.new_HairStruct(), true);
  }

  public enum hair {
    blonde(enum_thorough_properJNI.HairStruct_blonde_get()),
    ginger;

    public final int swigValue() {
      return swigValue;
    }

    public static hair swigToEnum(int swigValue) {
      hair[] swigValues = hair.class.getEnumConstants();
      if (swigValue < swigValues.length && swigValue >= 0 && swigValues[swigValue].swigValue == swigValue)
        return swigValues[swigValue];
      for (hair swigEnum : swigValues)
        if (swigEnum.swigValue == swigValue)
          return swigEnum;
      throw new IllegalArgumentException("No enum " + hair.class + " with value " + swigValue);
    }

    @SuppressWarnings("unused")
    private hair() {
      this.swigValue = SwigNext.next++;
    }

    @SuppressWarnings("unused")
    private hair(int swigValue) {
      this.swigValue = swigValue;
      SwigNext.next = swigValue+1;
    }

    @SuppressWarnings("unused")
    private hair(hair swigEnum) {
      this.swigValue = swigEnum.swigValue;
      SwigNext.next = this.swigValue+1;
    }

    private final int swigValue;

    private static class SwigNext {
      private static int next = 0;
    }
  }

}