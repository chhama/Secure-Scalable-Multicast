/* ----------------------------------------------------------------------------
 * This file was automatically generated by SWIG (http://www.swig.org).
 * Version 2.0.10
 *
 * Do not make changes to this file unless you know what you are doing--modify
 * the SWIG interface file instead.
 * ----------------------------------------------------------------------------- */

package enum_thorough_typeunsafe;

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
        enum_thorough_typeunsafeJNI.delete_HairStruct(swigCPtr);
      }
      swigCPtr = 0;
    }
  }

  public int hairTest1(int e) {
    return enum_thorough_typeunsafeJNI.HairStruct_hairTest1(swigCPtr, this, e);
  }

  public int hairTest2(int e) {
    return enum_thorough_typeunsafeJNI.HairStruct_hairTest2(swigCPtr, this, e);
  }

  public int hairTest3(int e) {
    return enum_thorough_typeunsafeJNI.HairStruct_hairTest3(swigCPtr, this, e);
  }

  public int hairTest4(int e) {
    return enum_thorough_typeunsafeJNI.HairStruct_hairTest4(swigCPtr, this, e);
  }

  public int hairTest5(int e) {
    return enum_thorough_typeunsafeJNI.HairStruct_hairTest5(swigCPtr, this, e);
  }

  public int hairTest6(int e) {
    return enum_thorough_typeunsafeJNI.HairStruct_hairTest6(swigCPtr, this, e);
  }

  public int hairTest7(int e) {
    return enum_thorough_typeunsafeJNI.HairStruct_hairTest7(swigCPtr, this, e);
  }

  public int hairTest8(int e) {
    return enum_thorough_typeunsafeJNI.HairStruct_hairTest8(swigCPtr, this, e);
  }

  public int hairTest9(int e) {
    return enum_thorough_typeunsafeJNI.HairStruct_hairTest9(swigCPtr, this, e);
  }

  public int hairTestA(int e) {
    return enum_thorough_typeunsafeJNI.HairStruct_hairTestA(swigCPtr, this, e);
  }

  public int hairTestB(int e) {
    return enum_thorough_typeunsafeJNI.HairStruct_hairTestB(swigCPtr, this, e);
  }

  public int colourTest1(int e) {
    return enum_thorough_typeunsafeJNI.HairStruct_colourTest1(swigCPtr, this, e);
  }

  public int colourTest2(int e) {
    return enum_thorough_typeunsafeJNI.HairStruct_colourTest2(swigCPtr, this, e);
  }

  public int namedanonTest1(int e) {
    return enum_thorough_typeunsafeJNI.HairStruct_namedanonTest1(swigCPtr, this, e);
  }

  public int namedanonspaceTest1(int e) {
    return enum_thorough_typeunsafeJNI.HairStruct_namedanonspaceTest1(swigCPtr, this, e);
  }

  public int treesGlobalTest1(int e) {
    return enum_thorough_typeunsafeJNI.HairStruct_treesGlobalTest1(swigCPtr, this, e);
  }

  public int treesGlobalTest2(int e) {
    return enum_thorough_typeunsafeJNI.HairStruct_treesGlobalTest2(swigCPtr, this, e);
  }

  public int treesGlobalTest3(int e) {
    return enum_thorough_typeunsafeJNI.HairStruct_treesGlobalTest3(swigCPtr, this, e);
  }

  public int treesGlobalTest4(int e) {
    return enum_thorough_typeunsafeJNI.HairStruct_treesGlobalTest4(swigCPtr, this, e);
  }

  public int treesGlobalTest5(int e) {
    return enum_thorough_typeunsafeJNI.HairStruct_treesGlobalTest5(swigCPtr, this, e);
  }

  public HairStruct() {
    this(enum_thorough_typeunsafeJNI.new_HairStruct(), true);
  }

  public final static class hair {
    public final static int blonde = enum_thorough_typeunsafeJNI.HairStruct_blonde_get();
    public final static int ginger = enum_thorough_typeunsafeJNI.HairStruct_ginger_get();
  }

}
