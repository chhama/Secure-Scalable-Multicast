/* ----------------------------------------------------------------------------
 * This file was automatically generated by SWIG (http://www.swig.org).
 * Version 2.0.10
 *
 * Do not make changes to this file unless you know what you are doing--modify
 * the SWIG interface file instead.
 * ----------------------------------------------------------------------------- */

package template_typemaps_typedef2;

public class MultimapAInt {
  private long swigCPtr;
  protected boolean swigCMemOwn;

  protected MultimapAInt(long cPtr, boolean cMemoryOwn) {
    swigCMemOwn = cMemoryOwn;
    swigCPtr = cPtr;
  }

  protected static long getCPtr(MultimapAInt obj) {
    return (obj == null) ? 0 : obj.swigCPtr;
  }

  protected void finalize() {
    delete();
  }

  public synchronized void delete() {
    if (swigCPtr != 0) {
      if (swigCMemOwn) {
        swigCMemOwn = false;
        template_typemaps_typedef2JNI.delete_MultimapAInt(swigCPtr);
      }
      swigCPtr = 0;
    }
  }

  public int typemap_test(SWIGTYPE_p_Standard__PairT_Standard__MultimapT_Space__AB_int_int_t__iterator_Standard__MultimapT_Space__AB_int_int_t__iterator_t pii2) {
    return template_typemaps_typedef2JNI.MultimapAInt_typemap_test(swigCPtr, this, SWIGTYPE_p_Standard__PairT_Standard__MultimapT_Space__AB_int_int_t__iterator_Standard__MultimapT_Space__AB_int_int_t__iterator_t.getCPtr(pii2));
  }

  public SWIGTYPE_p_Standard__PairT_Standard__MultimapT_Space__AB_int_int_t__iterator_Standard__MultimapT_Space__AB_int_int_t__iterator_t make_dummy_pair() {
    long cPtr = template_typemaps_typedef2JNI.MultimapAInt_make_dummy_pair(swigCPtr, this);
    return (cPtr == 0) ? null : new SWIGTYPE_p_Standard__PairT_Standard__MultimapT_Space__AB_int_int_t__iterator_Standard__MultimapT_Space__AB_int_int_t__iterator_t(cPtr, false);
  }

  public MultimapAInt() {
    this(template_typemaps_typedef2JNI.new_MultimapAInt(), true);
  }

}