/* ----------------------------------------------------------------------------
 * This file was automatically generated by SWIG (http://www.swig.org).
 * Version 2.0.10
 *
 * Do not make changes to this file unless you know what you are doing--modify
 * the SWIG interface file instead.
 * ----------------------------------------------------------------------------- */

package nspacePackage.Outer.Inner1;

public class Color {
  private long swigCPtr;
  protected boolean swigCMemOwn;

  public Color(long cPtr, boolean cMemoryOwn) {
    swigCMemOwn = cMemoryOwn;
    swigCPtr = cPtr;
  }

  public static long getCPtr(Color obj) {
    return (obj == null) ? 0 : obj.swigCPtr;
  }

  protected void finalize() {
    delete();
  }

  public synchronized void delete() {
    if (swigCPtr != 0) {
      if (swigCMemOwn) {
        swigCMemOwn = false;
        nspacePackage.nspaceJNI.delete_Outer_Inner1_Color(swigCPtr);
      }
      swigCPtr = 0;
    }
  }

  public static nspacePackage.Outer.Inner1.Color create() {
    long cPtr = nspacePackage.nspaceJNI.Outer_Inner1_Color_create();
    return (cPtr == 0) ? null : new nspacePackage.Outer.Inner1.Color(cPtr, false);
  }

  public void setInstanceMemberVariable(int value) {
    nspacePackage.nspaceJNI.Outer_Inner1_Color_instanceMemberVariable_set(swigCPtr, this, value);
  }

  public int getInstanceMemberVariable() {
    return nspacePackage.nspaceJNI.Outer_Inner1_Color_instanceMemberVariable_get(swigCPtr, this);
  }

  public static void setStaticMemberVariable(int value) {
    nspacePackage.nspaceJNI.Outer_Inner1_Color_staticMemberVariable_set(value);
  }

  public static int getStaticMemberVariable() {
    return nspacePackage.nspaceJNI.Outer_Inner1_Color_staticMemberVariable_get();
  }

  public void colorInstanceMethod(double d) {
    nspacePackage.nspaceJNI.Outer_Inner1_Color_colorInstanceMethod(swigCPtr, this, d);
  }

  public static void colorStaticMethod(double d) {
    nspacePackage.nspaceJNI.Outer_Inner1_Color_colorStaticMethod(d);
  }

  public Color() {
    this(nspacePackage.nspaceJNI.new_Outer_Inner1_Color__SWIG_0(), true);
  }

  public Color(nspacePackage.Outer.Inner1.Color other) {
    this(nspacePackage.nspaceJNI.new_Outer_Inner1_Color__SWIG_1(nspacePackage.Outer.Inner1.Color.getCPtr(other), other), true);
  }

  public final static class Channel {
    public final static nspacePackage.Outer.Inner1.Color.Channel Diffuse = new nspacePackage.Outer.Inner1.Color.Channel("Diffuse");
    public final static nspacePackage.Outer.Inner1.Color.Channel Specular = new nspacePackage.Outer.Inner1.Color.Channel("Specular", nspacePackage.nspaceJNI.Outer_Inner1_Color_Specular_get());
    public final static nspacePackage.Outer.Inner1.Color.Channel Transmission = new nspacePackage.Outer.Inner1.Color.Channel("Transmission");

    public final int swigValue() {
      return swigValue;
    }

    public String toString() {
      return swigName;
    }

    public static Channel swigToEnum(int swigValue) {
      if (swigValue < swigValues.length && swigValue >= 0 && swigValues[swigValue].swigValue == swigValue)
        return swigValues[swigValue];
      for (int i = 0; i < swigValues.length; i++)
        if (swigValues[i].swigValue == swigValue)
          return swigValues[i];
      throw new IllegalArgumentException("No enum " + Channel.class + " with value " + swigValue);
    }

    private Channel(String swigName) {
      this.swigName = swigName;
      this.swigValue = swigNext++;
    }

    private Channel(String swigName, int swigValue) {
      this.swigName = swigName;
      this.swigValue = swigValue;
      swigNext = swigValue+1;
    }

    private Channel(String swigName, Channel swigEnum) {
      this.swigName = swigName;
      this.swigValue = swigEnum.swigValue;
      swigNext = this.swigValue+1;
    }

    private static Channel[] swigValues = { Diffuse, Specular, Transmission };
    private static int swigNext = 0;
    private final int swigValue;
    private final String swigName;
  }

  public final static int ColorEnumVal1 = nspacePackage.nspaceJNI.Outer_Inner1_Color_ColorEnumVal1_get();
  public final static int ColorEnumVal2 = nspacePackage.nspaceJNI.Outer_Inner1_Color_ColorEnumVal2_get();
  public final static int ColorEnumVal3 = nspacePackage.nspaceJNI.Outer_Inner1_Color_ColorEnumVal3_get();

  public final static int staticConstMemberVariable = nspacePackage.nspaceJNI.Outer_Inner1_Color_staticConstMemberVariable_get();
  public final static nspacePackage.Outer.Inner1.Color.Channel staticConstEnumMemberVariable = nspacePackage.Outer.Inner1.Color.Channel.swigToEnum(nspacePackage.nspaceJNI.Outer_Inner1_Color_staticConstEnumMemberVariable_get());
}
