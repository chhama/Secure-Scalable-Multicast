/* ----------------------------------------------------------------------------
 * This file was automatically generated by SWIG (http://www.swig.org).
 * Version 2.0.10
 *
 * Do not make changes to this file unless you know what you are doing--modify
 * the SWIG interface file instead.
 * ----------------------------------------------------------------------------- */

package enum_thorough_simple;

public class FirStruct extends HairStruct {
  private long swigCPtr;

  protected FirStruct(long cPtr, boolean cMemoryOwn) {
    super(enum_thorough_simpleJNI.FirStruct_SWIGUpcast(cPtr), cMemoryOwn);
    swigCPtr = cPtr;
  }

  protected static long getCPtr(FirStruct obj) {
    return (obj == null) ? 0 : obj.swigCPtr;
  }

  protected void finalize() {
    delete();
  }

  public synchronized void delete() {
    if (swigCPtr != 0) {
      if (swigCMemOwn) {
        swigCMemOwn = false;
        enum_thorough_simpleJNI.delete_FirStruct(swigCPtr);
      }
      swigCPtr = 0;
    }
    super.delete();
  }

  public int hairTestFir1(int e) {
    return enum_thorough_simpleJNI.FirStruct_hairTestFir1(swigCPtr, this, e);
  }

  public int hairTestFir2(int e) {
    return enum_thorough_simpleJNI.FirStruct_hairTestFir2(swigCPtr, this, e);
  }

  public int hairTestFir3(int e) {
    return enum_thorough_simpleJNI.FirStruct_hairTestFir3(swigCPtr, this, e);
  }

  public int hairTestFir4(int e) {
    return enum_thorough_simpleJNI.FirStruct_hairTestFir4(swigCPtr, this, e);
  }

  public int hairTestFir5(int e) {
    return enum_thorough_simpleJNI.FirStruct_hairTestFir5(swigCPtr, this, e);
  }

  public int hairTestFir6(int e) {
    return enum_thorough_simpleJNI.FirStruct_hairTestFir6(swigCPtr, this, e);
  }

  public int hairTestFir7(int e) {
    return enum_thorough_simpleJNI.FirStruct_hairTestFir7(swigCPtr, this, e);
  }

  public int hairTestFir8(int e) {
    return enum_thorough_simpleJNI.FirStruct_hairTestFir8(swigCPtr, this, e);
  }

  public int hairTestFir9(int e) {
    return enum_thorough_simpleJNI.FirStruct_hairTestFir9(swigCPtr, this, e);
  }

  public int hairTestFirA(int e) {
    return enum_thorough_simpleJNI.FirStruct_hairTestFirA(swigCPtr, this, e);
  }

  public int hairTestFirB(int e) {
    return enum_thorough_simpleJNI.FirStruct_hairTestFirB(swigCPtr, this, e);
  }

  public FirStruct() {
    this(enum_thorough_simpleJNI.new_FirStruct(), true);
  }

}
