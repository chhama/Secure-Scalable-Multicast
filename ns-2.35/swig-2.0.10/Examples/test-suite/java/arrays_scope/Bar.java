/* ----------------------------------------------------------------------------
 * This file was automatically generated by SWIG (http://www.swig.org).
 * Version 2.0.10
 *
 * Do not make changes to this file unless you know what you are doing--modify
 * the SWIG interface file instead.
 * ----------------------------------------------------------------------------- */

package arrays_scope;

public class Bar {
  private long swigCPtr;
  protected boolean swigCMemOwn;

  protected Bar(long cPtr, boolean cMemoryOwn) {
    swigCMemOwn = cMemoryOwn;
    swigCPtr = cPtr;
  }

  protected static long getCPtr(Bar obj) {
    return (obj == null) ? 0 : obj.swigCPtr;
  }

  protected void finalize() {
    delete();
  }

  public synchronized void delete() {
    if (swigCPtr != 0) {
      if (swigCMemOwn) {
        swigCMemOwn = false;
        arrays_scopeJNI.delete_Bar(swigCPtr);
      }
      swigCPtr = 0;
    }
  }

  public void setAdata(SWIGTYPE_p_int value) {
    arrays_scopeJNI.Bar_adata_set(swigCPtr, this, SWIGTYPE_p_int.getCPtr(value));
  }

  public SWIGTYPE_p_int getAdata() {
    long cPtr = arrays_scopeJNI.Bar_adata_get(swigCPtr, this);
    return (cPtr == 0) ? null : new SWIGTYPE_p_int(cPtr, false);
  }

  public void setBdata(SWIGTYPE_p_int value) {
    arrays_scopeJNI.Bar_bdata_set(swigCPtr, this, SWIGTYPE_p_int.getCPtr(value));
  }

  public SWIGTYPE_p_int getBdata() {
    long cPtr = arrays_scopeJNI.Bar_bdata_get(swigCPtr, this);
    return (cPtr == 0) ? null : new SWIGTYPE_p_int(cPtr, false);
  }

  public void setCdata(SWIGTYPE_p_int value) {
    arrays_scopeJNI.Bar_cdata_set(swigCPtr, this, SWIGTYPE_p_int.getCPtr(value));
  }

  public SWIGTYPE_p_int getCdata() {
    long cPtr = arrays_scopeJNI.Bar_cdata_get(swigCPtr, this);
    return (cPtr == 0) ? null : new SWIGTYPE_p_int(cPtr, false);
  }

  public void blah(SWIGTYPE_p_int x, SWIGTYPE_p_int y, SWIGTYPE_p_int z) {
    arrays_scopeJNI.Bar_blah(swigCPtr, this, SWIGTYPE_p_int.getCPtr(x), SWIGTYPE_p_int.getCPtr(y), SWIGTYPE_p_int.getCPtr(z));
  }

  public Bar() {
    this(arrays_scopeJNI.new_Bar(), true);
  }

  public final static int CCSIZE = arrays_scopeJNI.Bar_CCSIZE_get();

}
