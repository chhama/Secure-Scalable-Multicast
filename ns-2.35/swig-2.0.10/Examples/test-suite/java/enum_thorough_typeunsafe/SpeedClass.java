/* ----------------------------------------------------------------------------
 * This file was automatically generated by SWIG (http://www.swig.org).
 * Version 2.0.10
 *
 * Do not make changes to this file unless you know what you are doing--modify
 * the SWIG interface file instead.
 * ----------------------------------------------------------------------------- */

package enum_thorough_typeunsafe;

public class SpeedClass {
  private long swigCPtr;
  protected boolean swigCMemOwn;

  protected SpeedClass(long cPtr, boolean cMemoryOwn) {
    swigCMemOwn = cMemoryOwn;
    swigCPtr = cPtr;
  }

  protected static long getCPtr(SpeedClass obj) {
    return (obj == null) ? 0 : obj.swigCPtr;
  }

  protected void finalize() {
    delete();
  }

  public synchronized void delete() {
    if (swigCPtr != 0) {
      if (swigCMemOwn) {
        swigCMemOwn = false;
        enum_thorough_typeunsafeJNI.delete_SpeedClass(swigCPtr);
      }
      swigCPtr = 0;
    }
  }

  public int speedTest0(int s) {
    return enum_thorough_typeunsafeJNI.SpeedClass_speedTest0(swigCPtr, this, s);
  }

  public int speedTest1(int s) {
    return enum_thorough_typeunsafeJNI.SpeedClass_speedTest1(swigCPtr, this, s);
  }

  public int speedTest2(int s) {
    return enum_thorough_typeunsafeJNI.SpeedClass_speedTest2(swigCPtr, this, s);
  }

  public int speedTest3(int s) {
    return enum_thorough_typeunsafeJNI.SpeedClass_speedTest3(swigCPtr, this, s);
  }

  public int speedTest4(int s) {
    return enum_thorough_typeunsafeJNI.SpeedClass_speedTest4(swigCPtr, this, s);
  }

  public int speedTest5(int s) {
    return enum_thorough_typeunsafeJNI.SpeedClass_speedTest5(swigCPtr, this, s);
  }

  public int speedTest6(int s) {
    return enum_thorough_typeunsafeJNI.SpeedClass_speedTest6(swigCPtr, this, s);
  }

  public int speedTest7(int s) {
    return enum_thorough_typeunsafeJNI.SpeedClass_speedTest7(swigCPtr, this, s);
  }

  public int speedTest8(int s) {
    return enum_thorough_typeunsafeJNI.SpeedClass_speedTest8(swigCPtr, this, s);
  }

  public int getMyColour2() {
    return enum_thorough_typeunsafeJNI.SpeedClass_myColour2_get(swigCPtr, this);
  }

  public void setMySpeedtd1(int value) {
    enum_thorough_typeunsafeJNI.SpeedClass_mySpeedtd1_set(swigCPtr, this, value);
  }

  public int getMySpeedtd1() {
    return enum_thorough_typeunsafeJNI.SpeedClass_mySpeedtd1_get(swigCPtr, this);
  }

  public SpeedClass() {
    this(enum_thorough_typeunsafeJNI.new_SpeedClass(), true);
  }

  public final static class speed {
    public final static int slow = enum_thorough_typeunsafeJNI.SpeedClass_slow_get();
    public final static int medium = enum_thorough_typeunsafeJNI.SpeedClass_medium_get();
    public final static int fast = enum_thorough_typeunsafeJNI.SpeedClass_fast_get();
    public final static int lightning = enum_thorough_typeunsafeJNI.SpeedClass_lightning_get();
  }

}
