/* ----------------------------------------------------------------------------
 * This file was automatically generated by SWIG (http://www.swig.org).
 * Version 2.0.10
 *
 * Do not make changes to this file unless you know what you are doing--modify
 * the SWIG interface file instead.
 * ----------------------------------------------------------------------------- */

package enum_thorough_simple;

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
        enum_thorough_simpleJNI.delete_TemplateClassInt(swigCPtr);
      }
      swigCPtr = 0;
    }
  }

  public int scientistsTest1(int e) {
    return enum_thorough_simpleJNI.TemplateClassInt_scientistsTest1(swigCPtr, this, e);
  }

  public int scientistsTest2(int e) {
    return enum_thorough_simpleJNI.TemplateClassInt_scientistsTest2(swigCPtr, this, e);
  }

  public int scientistsTest3(int e) {
    return enum_thorough_simpleJNI.TemplateClassInt_scientistsTest3(swigCPtr, this, e);
  }

  public int scientistsTest4(int e) {
    return enum_thorough_simpleJNI.TemplateClassInt_scientistsTest4(swigCPtr, this, e);
  }

  public int scientistsTest5(int e) {
    return enum_thorough_simpleJNI.TemplateClassInt_scientistsTest5(swigCPtr, this, e);
  }

  public int scientistsTest6(int e) {
    return enum_thorough_simpleJNI.TemplateClassInt_scientistsTest6(swigCPtr, this, e);
  }

  public int scientistsTest7(int e) {
    return enum_thorough_simpleJNI.TemplateClassInt_scientistsTest7(swigCPtr, this, e);
  }

  public int scientistsTest8(int e) {
    return enum_thorough_simpleJNI.TemplateClassInt_scientistsTest8(swigCPtr, this, e);
  }

  public int scientistsTest9(int e) {
    return enum_thorough_simpleJNI.TemplateClassInt_scientistsTest9(swigCPtr, this, e);
  }

  public int scientistsTestB(int e) {
    return enum_thorough_simpleJNI.TemplateClassInt_scientistsTestB(swigCPtr, this, e);
  }

  public int scientistsTestD(int e) {
    return enum_thorough_simpleJNI.TemplateClassInt_scientistsTestD(swigCPtr, this, e);
  }

  public int scientistsTestE(int e) {
    return enum_thorough_simpleJNI.TemplateClassInt_scientistsTestE(swigCPtr, this, e);
  }

  public int scientistsTestF(int e) {
    return enum_thorough_simpleJNI.TemplateClassInt_scientistsTestF(swigCPtr, this, e);
  }

  public int scientistsTestG(int e) {
    return enum_thorough_simpleJNI.TemplateClassInt_scientistsTestG(swigCPtr, this, e);
  }

  public int scientistsTestH(int e) {
    return enum_thorough_simpleJNI.TemplateClassInt_scientistsTestH(swigCPtr, this, e);
  }

  public int scientistsTestI(int e) {
    return enum_thorough_simpleJNI.TemplateClassInt_scientistsTestI(swigCPtr, this, e);
  }

  public int scientistsTestJ(int e) {
    return enum_thorough_simpleJNI.TemplateClassInt_scientistsTestJ(swigCPtr, this, e);
  }

  public TemplateClassInt() {
    this(enum_thorough_simpleJNI.new_TemplateClassInt(), true);
  }

  // scientists 
  public final static int einstein = enum_thorough_simpleJNI.TemplateClassInt_einstein_get();
  public final static int galileo = enum_thorough_simpleJNI.TemplateClassInt_galileo_get();

}