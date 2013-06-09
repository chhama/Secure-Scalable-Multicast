/* ----------------------------------------------------------------------------
 * This file was automatically generated by SWIG (http://www.swig.org).
 * Version 2.0.10
 *
 * Do not make changes to this file unless you know what you are doing--modify
 * the SWIG interface file instead.
 * ----------------------------------------------------------------------------- */

package allprotected;

public class PublicBase {
  private long swigCPtr;
  protected boolean swigCMemOwn;

  protected PublicBase(long cPtr, boolean cMemoryOwn) {
    swigCMemOwn = cMemoryOwn;
    swigCPtr = cPtr;
  }

  protected static long getCPtr(PublicBase obj) {
    return (obj == null) ? 0 : obj.swigCPtr;
  }

  protected void finalize() {
    delete();
  }

  public synchronized void delete() {
    if (swigCPtr != 0) {
      if (swigCMemOwn) {
        swigCMemOwn = false;
        allprotectedJNI.delete_PublicBase(swigCPtr);
      }
      swigCPtr = 0;
    }
  }

  protected void swigDirectorDisconnect() {
    swigCMemOwn = false;
    delete();
  }

  public void swigReleaseOwnership() {
    swigCMemOwn = false;
    allprotectedJNI.PublicBase_change_ownership(this, swigCPtr, false);
  }

  public void swigTakeOwnership() {
    swigCMemOwn = true;
    allprotectedJNI.PublicBase_change_ownership(this, swigCPtr, true);
  }

  public PublicBase(String s) {
    this(allprotectedJNI.new_PublicBase(s), true);
    allprotectedJNI.PublicBase_director_connect(this, swigCPtr, swigCMemOwn, true);
  }

  public String virtualMethod() {
    return (getClass() == PublicBase.class) ? allprotectedJNI.PublicBase_virtualMethod(swigCPtr, this) : allprotectedJNI.PublicBase_virtualMethodSwigExplicitPublicBase(swigCPtr, this);
  }

  public Klass instanceMethod(Klass k) {
    return new Klass(allprotectedJNI.PublicBase_instanceMethod(swigCPtr, this, Klass.getCPtr(k), k), true);
  }

  public Klass instanceOverloaded(Klass k) {
    long cPtr = allprotectedJNI.PublicBase_instanceOverloaded__SWIG_0(swigCPtr, this, Klass.getCPtr(k), k);
    return (cPtr == 0) ? null : new Klass(cPtr, false);
  }

  public Klass instanceOverloaded(Klass k, String name) {
    long cPtr = allprotectedJNI.PublicBase_instanceOverloaded__SWIG_1(swigCPtr, this, Klass.getCPtr(k), k, name);
    return (cPtr == 0) ? null : new Klass(cPtr, false);
  }

  public static Klass staticMethod(Klass k) {
    return new Klass(allprotectedJNI.PublicBase_staticMethod(Klass.getCPtr(k), k), true);
  }

  public static Klass staticOverloaded(Klass k) {
    long cPtr = allprotectedJNI.PublicBase_staticOverloaded__SWIG_0(Klass.getCPtr(k), k);
    return (cPtr == 0) ? null : new Klass(cPtr, false);
  }

  public static Klass staticOverloaded(Klass k, String name) {
    long cPtr = allprotectedJNI.PublicBase_staticOverloaded__SWIG_1(Klass.getCPtr(k), k, name);
    return (cPtr == 0) ? null : new Klass(cPtr, false);
  }

  public void setInstanceMemberVariable(int value) {
    allprotectedJNI.PublicBase_instanceMemberVariable_set(swigCPtr, this, value);
  }

  public int getInstanceMemberVariable() {
    return allprotectedJNI.PublicBase_instanceMemberVariable_get(swigCPtr, this);
  }

  public static void setStaticMemberVariable(int value) {
    allprotectedJNI.PublicBase_staticMemberVariable_set(value);
  }

  public static int getStaticMemberVariable() {
    return allprotectedJNI.PublicBase_staticMemberVariable_get();
  }

  public void setAnEnum(PublicBase.AnEnum value) {
    allprotectedJNI.PublicBase_anEnum_set(swigCPtr, this, value.swigValue());
  }

  public PublicBase.AnEnum getAnEnum() {
    return PublicBase.AnEnum.swigToEnum(allprotectedJNI.PublicBase_anEnum_get(swigCPtr, this));
  }

  public void setStringMember(String value) {
    allprotectedJNI.PublicBase_stringMember_set(swigCPtr, this, value);
  }

  public String getStringMember() {
    return allprotectedJNI.PublicBase_stringMember_get(swigCPtr, this);
  }

  public final static class AnEnum {
    public final static PublicBase.AnEnum EnumVal1 = new PublicBase.AnEnum("EnumVal1");
    public final static PublicBase.AnEnum EnumVal2 = new PublicBase.AnEnum("EnumVal2");

    public final int swigValue() {
      return swigValue;
    }

    public String toString() {
      return swigName;
    }

    public static AnEnum swigToEnum(int swigValue) {
      if (swigValue < swigValues.length && swigValue >= 0 && swigValues[swigValue].swigValue == swigValue)
        return swigValues[swigValue];
      for (int i = 0; i < swigValues.length; i++)
        if (swigValues[i].swigValue == swigValue)
          return swigValues[i];
      throw new IllegalArgumentException("No enum " + AnEnum.class + " with value " + swigValue);
    }

    private AnEnum(String swigName) {
      this.swigName = swigName;
      this.swigValue = swigNext++;
    }

    private AnEnum(String swigName, int swigValue) {
      this.swigName = swigName;
      this.swigValue = swigValue;
      swigNext = swigValue+1;
    }

    private AnEnum(String swigName, AnEnum swigEnum) {
      this.swigName = swigName;
      this.swigValue = swigEnum.swigValue;
      swigNext = this.swigValue+1;
    }

    private static AnEnum[] swigValues = { EnumVal1, EnumVal2 };
    private static int swigNext = 0;
    private final int swigValue;
    private final String swigName;
  }

  public final static int staticConstMemberVariable = allprotectedJNI.PublicBase_staticConstMemberVariable_get();
}
