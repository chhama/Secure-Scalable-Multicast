/* ----------------------------------------------------------------------------
 * This file was automatically generated by SWIG (http://www.swig.org).
 * Version 2.0.10
 *
 * Do not make changes to this file unless you know what you are doing--modify
 * the SWIG interface file instead.
 * ----------------------------------------------------------------------------- */

package namespace_spaces;

public class Foo {
  private long swigCPtr;
  protected boolean swigCMemOwn;

  protected Foo(long cPtr, boolean cMemoryOwn) {
    swigCMemOwn = cMemoryOwn;
    swigCPtr = cPtr;
  }

  protected static long getCPtr(Foo obj) {
    return (obj == null) ? 0 : obj.swigCPtr;
  }

  protected void finalize() {
    delete();
  }

  public synchronized void delete() {
    if (swigCPtr != 0) {
      if (swigCMemOwn) {
        swigCMemOwn = false;
        namespace_spacesJNI.delete_Foo(swigCPtr);
      }
      swigCPtr = 0;
    }
  }

  public Foo() {
    this(namespace_spacesJNI.new_Foo(), true);
  }

  public int blah(int x) {
    return namespace_spacesJNI.Foo_blah(swigCPtr, this, x);
  }

  public int spam(int x) {
    return namespace_spacesJNI.Foo_spam(swigCPtr, this, x);
  }

  public int bar(int x) {
    return namespace_spacesJNI.Foo_bar(swigCPtr, this, x);
  }

  public void setFunc_ptr(SWIGTYPE_m_Foo__f_int__void value) {
    namespace_spacesJNI.Foo_func_ptr_set(swigCPtr, this, SWIGTYPE_m_Foo__f_int__void.getCMemberPtr(value));
  }

  public SWIGTYPE_m_Foo__f_int__void getFunc_ptr() {
    String cMemberPtr = namespace_spacesJNI.Foo_func_ptr_get(swigCPtr, this);
    return (cMemberPtr == null) ? null : new SWIGTYPE_m_Foo__f_int__void(cMemberPtr, false);
  }

}