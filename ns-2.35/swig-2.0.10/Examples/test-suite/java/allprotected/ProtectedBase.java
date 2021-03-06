/* ----------------------------------------------------------------------------
 * This file was automatically generated by SWIG (http://www.swig.org).
 * Version 2.0.10
 *
 * Do not make changes to this file unless you know what you are doing--modify
 * the SWIG interface file instead.
 * ----------------------------------------------------------------------------- */

package allprotected;

public class ProtectedBase {
  private long swigCPtr;
  protected boolean swigCMemOwn;

  protected ProtectedBase(long cPtr, boolean cMemoryOwn) {
    swigCMemOwn = cMemoryOwn;
    swigCPtr = cPtr;
  }

  protected static long getCPtr(ProtectedBase obj) {
    return (obj == null) ? 0 : obj.swigCPtr;
  }

  public synchronized void delete() {
    if (swigCPtr != 0) {
      if (swigCMemOwn) {
        swigCMemOwn = false;
        throw new UnsupportedOperationException("C++ destructor does not have public access");
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
    allprotectedJNI.ProtectedBase_change_ownership(this, swigCPtr, false);
  }

  public void swigTakeOwnership() {
    swigCMemOwn = true;
    allprotectedJNI.ProtectedBase_change_ownership(this, swigCPtr, true);
  }

  public String getName() {
    return allprotectedJNI.ProtectedBase_getName(swigCPtr, this);
  }

  protected ProtectedBase(String s) {
    this(allprotectedJNI.new_ProtectedBase(s), true);
    allprotectedJNI.ProtectedBase_director_connect(this, swigCPtr, swigCMemOwn, true);
  }

  protected String virtualMethod() {
    return (getClass() == ProtectedBase.class) ? allprotectedJNI.ProtectedBase_virtualMethod(swigCPtr, this) : allprotectedJNI.ProtectedBase_virtualMethodSwigExplicitProtectedBase(swigCPtr, this);
  }

  protected Klass instanceMethod(Klass k) {
    return new Klass(allprotectedJNI.ProtectedBase_instanceMethod(swigCPtr, this, Klass.getCPtr(k), k), true);
  }

  protected Klass instanceOverloaded(Klass k) {
    long cPtr = allprotectedJNI.ProtectedBase_instanceOverloaded__SWIG_0(swigCPtr, this, Klass.getCPtr(k), k);
    return (cPtr == 0) ? null : new Klass(cPtr, false);
  }

  protected Klass instanceOverloaded(Klass k, String name) {
    long cPtr = allprotectedJNI.ProtectedBase_instanceOverloaded__SWIG_1(swigCPtr, this, Klass.getCPtr(k), k, name);
    return (cPtr == 0) ? null : new Klass(cPtr, false);
  }

  protected static Klass staticMethod(Klass k) {
    return new Klass(allprotectedJNI.ProtectedBase_staticMethod(Klass.getCPtr(k), k), true);
  }

  protected static Klass staticOverloaded(Klass k) {
    long cPtr = allprotectedJNI.ProtectedBase_staticOverloaded__SWIG_0(Klass.getCPtr(k), k);
    return (cPtr == 0) ? null : new Klass(cPtr, false);
  }

  protected static Klass staticOverloaded(Klass k, String name) {
    long cPtr = allprotectedJNI.ProtectedBase_staticOverloaded__SWIG_1(Klass.getCPtr(k), k, name);
    return (cPtr == 0) ? null : new Klass(cPtr, false);
  }

  protected void setInstanceMemberVariable(int value) {
    allprotectedJNI.ProtectedBase_instanceMemberVariable_set(swigCPtr, this, value);
  }

  protected int getInstanceMemberVariable() {
    return allprotectedJNI.ProtectedBase_instanceMemberVariable_get(swigCPtr, this);
  }

  protected static void setStaticMemberVariable(int value) {
    allprotectedJNI.ProtectedBase_staticMemberVariable_set(value);
  }

  protected static int getStaticMemberVariable() {
    return allprotectedJNI.ProtectedBase_staticMemberVariable_get();
  }

  protected void setAnEnum(ProtectedBase.AnEnum value) {
    allprotectedJNI.ProtectedBase_anEnum_set(swigCPtr, this, value.swigValue());
  }

  protected ProtectedBase.AnEnum getAnEnum() {
    return ProtectedBase.AnEnum.swigToEnum(allprotectedJNI.ProtectedBase_anEnum_get(swigCPtr, this));
  }

  protected void setStringMember(String value) {
    allprotectedJNI.ProtectedBase_stringMember_set(swigCPtr, this, value);
  }

  protected String getStringMember() {
    return allprotectedJNI.ProtectedBase_stringMember_get(swigCPtr, this);
  }

  public final static class AnEnum {
    public final static ProtectedBase.AnEnum EnumVal1 = new ProtectedBase.AnEnum("EnumVal1");
    public final static ProtectedBase.AnEnum EnumVal2 = new ProtectedBase.AnEnum("EnumVal2");

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

  protected final static int staticConstMemberVariable = allprotectedJNI.ProtectedBase_staticConstMemberVariable_get();
}
