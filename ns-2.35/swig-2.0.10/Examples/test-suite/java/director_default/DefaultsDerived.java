/* ----------------------------------------------------------------------------
 * This file was automatically generated by SWIG (http://www.swig.org).
 * Version 2.0.10
 *
 * Do not make changes to this file unless you know what you are doing--modify
 * the SWIG interface file instead.
 * ----------------------------------------------------------------------------- */

package director_default;

public class DefaultsDerived extends DefaultsBase {
  private long swigCPtr;

  protected DefaultsDerived(long cPtr, boolean cMemoryOwn) {
    super(director_defaultJNI.DefaultsDerived_SWIGUpcast(cPtr), cMemoryOwn);
    swigCPtr = cPtr;
  }

  protected static long getCPtr(DefaultsDerived obj) {
    return (obj == null) ? 0 : obj.swigCPtr;
  }

  protected void finalize() {
    delete();
  }

  public synchronized void delete() {
    if (swigCPtr != 0) {
      if (swigCMemOwn) {
        swigCMemOwn = false;
        director_defaultJNI.delete_DefaultsDerived(swigCPtr);
      }
      swigCPtr = 0;
    }
    super.delete();
  }

  protected void swigDirectorDisconnect() {
    swigCMemOwn = false;
    delete();
  }

  public void swigReleaseOwnership() {
    swigCMemOwn = false;
    director_defaultJNI.DefaultsDerived_change_ownership(this, swigCPtr, false);
  }

  public void swigTakeOwnership() {
    swigCMemOwn = true;
    director_defaultJNI.DefaultsDerived_change_ownership(this, swigCPtr, true);
  }

  public SWIGTYPE_p_int defaultargs(double d, SWIGTYPE_p_int a) {
    long cPtr = (getClass() == DefaultsDerived.class) ? director_defaultJNI.DefaultsDerived_defaultargs__SWIG_0(swigCPtr, this, d, SWIGTYPE_p_int.getCPtr(a)) : director_defaultJNI.DefaultsDerived_defaultargsSwigExplicitDefaultsDerived__SWIG_0(swigCPtr, this, d, SWIGTYPE_p_int.getCPtr(a));
    return (cPtr == 0) ? null : new SWIGTYPE_p_int(cPtr, false);
  }

  public SWIGTYPE_p_int defaultargs(double d) {
    long cPtr = (getClass() == DefaultsDerived.class) ? director_defaultJNI.DefaultsDerived_defaultargs__SWIG_1(swigCPtr, this, d) : director_defaultJNI.DefaultsDerived_defaultargsSwigExplicitDefaultsDerived__SWIG_1(swigCPtr, this, d);
    return (cPtr == 0) ? null : new SWIGTYPE_p_int(cPtr, false);
  }

  public DefaultsDerived() {
    this(director_defaultJNI.new_DefaultsDerived(), true);
    director_defaultJNI.DefaultsDerived_director_connect(this, swigCPtr, swigCMemOwn, true);
  }

}
