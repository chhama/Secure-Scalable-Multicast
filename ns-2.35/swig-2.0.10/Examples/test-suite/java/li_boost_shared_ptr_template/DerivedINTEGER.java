/* ----------------------------------------------------------------------------
 * This file was automatically generated by SWIG (http://www.swig.org).
 * Version 2.0.10
 *
 * Do not make changes to this file unless you know what you are doing--modify
 * the SWIG interface file instead.
 * ----------------------------------------------------------------------------- */

package li_boost_shared_ptr_template;

public class DerivedINTEGER extends BaseINTEGER {
  private long swigCPtr;
  private boolean swigCMemOwnDerived;

  protected DerivedINTEGER(long cPtr, boolean cMemoryOwn) {
    super(li_boost_shared_ptr_templateJNI.DerivedINTEGER_SWIGSmartPtrUpcast(cPtr), true);
    swigCMemOwnDerived = cMemoryOwn;
    swigCPtr = cPtr;
  }

  protected static long getCPtr(DerivedINTEGER obj) {
    return (obj == null) ? 0 : obj.swigCPtr;
  }

  protected void finalize() {
    delete();
  }

  public synchronized void delete() {
    if (swigCPtr != 0) {
      if (swigCMemOwnDerived) {
        swigCMemOwnDerived = false;
        li_boost_shared_ptr_templateJNI.delete_DerivedINTEGER(swigCPtr);
      }
      swigCPtr = 0;
    }
    super.delete();
  }

  public int bar() {
    return li_boost_shared_ptr_templateJNI.DerivedINTEGER_bar(swigCPtr, this);
  }

  public DerivedINTEGER() {
    this(li_boost_shared_ptr_templateJNI.new_DerivedINTEGER(), true);
  }

}
