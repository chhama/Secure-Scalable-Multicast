/* ----------------------------------------------------------------------------
 * This file was automatically generated by SWIG (http://www.swig.org).
 * Version 2.0.10
 *
 * Do not make changes to this file unless you know what you are doing--modify
 * the SWIG interface file instead.
 * ----------------------------------------------------------------------------- */

package typemap_directorout;

public class Class1 {
  private long swigCPtr;
  protected boolean swigCMemOwn;

  protected Class1(long cPtr, boolean cMemoryOwn) {
    swigCMemOwn = cMemoryOwn;
    swigCPtr = cPtr;
  }

  protected static long getCPtr(Class1 obj) {
    return (obj == null) ? 0 : obj.swigCPtr;
  }

  protected void finalize() {
    delete();
  }

  public synchronized void delete() {
    if (swigCPtr != 0) {
      if (swigCMemOwn) {
        swigCMemOwn = false;
        typemap_directoroutJNI.delete_Class1(swigCPtr);
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
    typemap_directoroutJNI.Class1_change_ownership(this, swigCPtr, false);
  }

  public void swigTakeOwnership() {
    swigCMemOwn = true;
    typemap_directoroutJNI.Class1_change_ownership(this, swigCPtr, true);
  }

  public Class1() {
    this(typemap_directoroutJNI.new_Class1(), true);
    typemap_directoroutJNI.Class1_director_connect(this, swigCPtr, swigCMemOwn, true);
  }

  public SWIGTYPE_p_int foo1() {
    return new SWIGTYPE_p_int((getClass() == Class1.class) ? typemap_directoroutJNI.Class1_foo1(swigCPtr, this) : typemap_directoroutJNI.Class1_foo1SwigExplicitClass1(swigCPtr, this), false);
  }

  public SWIGTYPE_p_int foo2(int parm1) {
    return new SWIGTYPE_p_int((getClass() == Class1.class) ? typemap_directoroutJNI.Class1_foo2__SWIG_0(swigCPtr, this, parm1) : typemap_directoroutJNI.Class1_foo2SwigExplicitClass1__SWIG_0(swigCPtr, this, parm1), false);
  }

  public SWIGTYPE_p_int foo2() {
    return new SWIGTYPE_p_int((getClass() == Class1.class) ? typemap_directoroutJNI.Class1_foo2__SWIG_1(swigCPtr, this) : typemap_directoroutJNI.Class1_foo2SwigExplicitClass1__SWIG_1(swigCPtr, this), false);
  }

}