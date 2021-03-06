/* ----------------------------------------------------------------------------
 * This file was automatically generated by SWIG (http://www.swig.org).
 * Version 2.0.10
 *
 * Do not make changes to this file unless you know what you are doing--modify
 * the SWIG interface file instead.
 * ----------------------------------------------------------------------------- */

package apply_strings;

public class DirectorTest {
  private long swigCPtr;
  protected boolean swigCMemOwn;

  protected DirectorTest(long cPtr, boolean cMemoryOwn) {
    swigCMemOwn = cMemoryOwn;
    swigCPtr = cPtr;
  }

  protected static long getCPtr(DirectorTest obj) {
    return (obj == null) ? 0 : obj.swigCPtr;
  }

  protected void finalize() {
    delete();
  }

  public synchronized void delete() {
    if (swigCPtr != 0) {
      if (swigCMemOwn) {
        swigCMemOwn = false;
        apply_stringsJNI.delete_DirectorTest(swigCPtr);
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
    apply_stringsJNI.DirectorTest_change_ownership(this, swigCPtr, false);
  }

  public void swigTakeOwnership() {
    swigCMemOwn = true;
    apply_stringsJNI.DirectorTest_change_ownership(this, swigCPtr, true);
  }

  public String UCharFunction(String str) {
    return (getClass() == DirectorTest.class) ? apply_stringsJNI.DirectorTest_UCharFunction(swigCPtr, this, str) : apply_stringsJNI.DirectorTest_UCharFunctionSwigExplicitDirectorTest(swigCPtr, this, str);
  }

  public String SCharFunction(String str) {
    return (getClass() == DirectorTest.class) ? apply_stringsJNI.DirectorTest_SCharFunction(swigCPtr, this, str) : apply_stringsJNI.DirectorTest_SCharFunctionSwigExplicitDirectorTest(swigCPtr, this, str);
  }

  public SWIGTYPE_p_unsigned_char CUCharFunction(SWIGTYPE_p_unsigned_char str) {
    long cPtr = (getClass() == DirectorTest.class) ? apply_stringsJNI.DirectorTest_CUCharFunction(swigCPtr, this, SWIGTYPE_p_unsigned_char.getCPtr(str)) : apply_stringsJNI.DirectorTest_CUCharFunctionSwigExplicitDirectorTest(swigCPtr, this, SWIGTYPE_p_unsigned_char.getCPtr(str));
    return (cPtr == 0) ? null : new SWIGTYPE_p_unsigned_char(cPtr, false);
  }

  public SWIGTYPE_p_signed_char CSCharFunction(SWIGTYPE_p_signed_char str) {
    long cPtr = (getClass() == DirectorTest.class) ? apply_stringsJNI.DirectorTest_CSCharFunction(swigCPtr, this, SWIGTYPE_p_signed_char.getCPtr(str)) : apply_stringsJNI.DirectorTest_CSCharFunctionSwigExplicitDirectorTest(swigCPtr, this, SWIGTYPE_p_signed_char.getCPtr(str));
    return (cPtr == 0) ? null : new SWIGTYPE_p_signed_char(cPtr, false);
  }

  public SWIGTYPE_p_char CharFunction(SWIGTYPE_p_char buffer) {
    long cPtr = (getClass() == DirectorTest.class) ? apply_stringsJNI.DirectorTest_CharFunction(swigCPtr, this, SWIGTYPE_p_char.getCPtr(buffer)) : apply_stringsJNI.DirectorTest_CharFunctionSwigExplicitDirectorTest(swigCPtr, this, SWIGTYPE_p_char.getCPtr(buffer));
    return (cPtr == 0) ? null : new SWIGTYPE_p_char(cPtr, false);
  }

  public SWIGTYPE_p_char CCharFunction(SWIGTYPE_p_char buffer) {
    long cPtr = (getClass() == DirectorTest.class) ? apply_stringsJNI.DirectorTest_CCharFunction(swigCPtr, this, SWIGTYPE_p_char.getCPtr(buffer)) : apply_stringsJNI.DirectorTest_CCharFunctionSwigExplicitDirectorTest(swigCPtr, this, SWIGTYPE_p_char.getCPtr(buffer));
    return (cPtr == 0) ? null : new SWIGTYPE_p_char(cPtr, false);
  }

  public DirectorTest() {
    this(apply_stringsJNI.new_DirectorTest(), true);
    apply_stringsJNI.DirectorTest_director_connect(this, swigCPtr, swigCMemOwn, true);
  }

}
