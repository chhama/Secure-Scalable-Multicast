/* ----------------------------------------------------------------------------
 * This file was automatically generated by SWIG (http://www.swig.org).
 * Version 2.0.10
 *
 * Do not make changes to this file unless you know what you are doing--modify
 * the SWIG interface file instead.
 * ----------------------------------------------------------------------------- */

package smart_pointer_const_overload;

public class Bar2 {
  private long swigCPtr;
  protected boolean swigCMemOwn;

  protected Bar2(long cPtr, boolean cMemoryOwn) {
    swigCMemOwn = cMemoryOwn;
    swigCPtr = cPtr;
  }

  protected static long getCPtr(Bar2 obj) {
    return (obj == null) ? 0 : obj.swigCPtr;
  }

  protected void finalize() {
    delete();
  }

  public synchronized void delete() {
    if (swigCPtr != 0) {
      if (swigCMemOwn) {
        swigCMemOwn = false;
        smart_pointer_const_overloadJNI.delete_Bar2(swigCPtr);
      }
      swigCPtr = 0;
    }
  }

  public Bar2(Foo f) {
    this(smart_pointer_const_overloadJNI.new_Bar2(Foo.getCPtr(f), f), true);
  }

  public Foo __deref__() {
    long cPtr = smart_pointer_const_overloadJNI.Bar2___deref____SWIG_0(swigCPtr, this);
    return (cPtr == 0) ? null : new Foo(cPtr, false);
  }

  public void setX(int value) {
    smart_pointer_const_overloadJNI.Bar2_x_set(swigCPtr, this, value);
  }

  public int getX() {
    return smart_pointer_const_overloadJNI.Bar2_x_get(swigCPtr, this);
  }

  public SWIGTYPE_p_int getXp() {
    long cPtr = smart_pointer_const_overloadJNI.Bar2_xp_get(swigCPtr, this);
    return (cPtr == 0) ? null : new SWIGTYPE_p_int(cPtr, false);
  }

  public int getY() {
    return smart_pointer_const_overloadJNI.Bar2_y_get(swigCPtr, this);
  }

  public void setYp(SWIGTYPE_p_int value) {
    smart_pointer_const_overloadJNI.Bar2_yp_set(swigCPtr, this, SWIGTYPE_p_int.getCPtr(value));
  }

  public SWIGTYPE_p_int getYp() {
    long cPtr = smart_pointer_const_overloadJNI.Bar2_yp_get(swigCPtr, this);
    return (cPtr == 0) ? null : new SWIGTYPE_p_int(cPtr, false);
  }

  public void setAccess(int value) {
    smart_pointer_const_overloadJNI.Bar2_access_set(swigCPtr, this, value);
  }

  public int getAccess() {
    return smart_pointer_const_overloadJNI.Bar2_access_get(swigCPtr, this);
  }

  public int getx() {
    return smart_pointer_const_overloadJNI.Bar2_getx(swigCPtr, this);
  }

  public void setx(int x_) {
    smart_pointer_const_overloadJNI.Bar2_setx(swigCPtr, this, x_);
  }

  public void stat() {
    smart_pointer_const_overloadJNI.Bar2_stat(swigCPtr, this);
  }

  public int getx2() {
    return smart_pointer_const_overloadJNI.Bar2_getx2(swigCPtr, this);
  }

  public void setx2(int x_) {
    smart_pointer_const_overloadJNI.Bar2_setx2(swigCPtr, this, x_);
  }

}
