/* ----------------------------------------------------------------------------
 * This file was automatically generated by SWIG (http://www.swig.org).
 * Version 2.0.10
 *
 * Do not make changes to this file unless you know what you are doing--modify
 * the SWIG interface file instead.
 * ----------------------------------------------------------------------------- */

package li_boost_shared_ptr;

public class Klass2ndDerived extends Klass {
  private long swigCPtr;
  private boolean swigCMemOwnDerived;

  protected Klass2ndDerived(long cPtr, boolean cMemoryOwn) {
    super(li_boost_shared_ptrJNI.Klass2ndDerived_SWIGSmartPtrUpcast(cPtr), true);
    swigCMemOwnDerived = cMemoryOwn;
    swigCPtr = cPtr;
  }

  protected static long getCPtr(Klass2ndDerived obj) {
    return (obj == null) ? 0 : obj.swigCPtr;
  }

  protected void finalize() {
    delete();
  }

  public synchronized void delete() {
    if (swigCPtr != 0) {
      if (swigCMemOwnDerived) {
        swigCMemOwnDerived = false;
        li_boost_shared_ptrJNI.delete_Klass2ndDerived(swigCPtr);
      }
      swigCPtr = 0;
    }
    super.delete();
  }

  public Klass2ndDerived() {
    this(li_boost_shared_ptrJNI.new_Klass2ndDerived__SWIG_0(), true);
  }

  public Klass2ndDerived(String val) {
    this(li_boost_shared_ptrJNI.new_Klass2ndDerived__SWIG_1(val), true);
  }

}