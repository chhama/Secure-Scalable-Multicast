/* ----------------------------------------------------------------------------
 * This file was automatically generated by SWIG (http://www.swig.org).
 * Version 2.0.10
 *
 * Do not make changes to this file unless you know what you are doing--modify
 * the SWIG interface file instead.
 * ----------------------------------------------------------------------------- */

package rename_pcre_encoder;

public class SomeWidget {
  private long swigCPtr;
  protected boolean swigCMemOwn;

  protected SomeWidget(long cPtr, boolean cMemoryOwn) {
    swigCMemOwn = cMemoryOwn;
    swigCPtr = cPtr;
  }

  protected static long getCPtr(SomeWidget obj) {
    return (obj == null) ? 0 : obj.swigCPtr;
  }

  protected void finalize() {
    delete();
  }

  public synchronized void delete() {
    if (swigCPtr != 0) {
      if (swigCMemOwn) {
        swigCMemOwn = false;
        rename_pcre_encoderJNI.delete_SomeWidget(swigCPtr);
      }
      swigCPtr = 0;
    }
  }

  public void putBorderWidth(int width) {
    rename_pcre_encoderJNI.SomeWidget_putBorderWidth(swigCPtr, this, width);
  }

  public int getBorderWidth() {
    return rename_pcre_encoderJNI.SomeWidget_getBorderWidth(swigCPtr, this);
  }

  public void putSize(int arg0, int arg1) {
    rename_pcre_encoderJNI.SomeWidget_putSize(swigCPtr, this, arg0, arg1);
  }

  public void setM_width(int value) {
    rename_pcre_encoderJNI.SomeWidget_m_width_set(swigCPtr, this, value);
  }

  public int getM_width() {
    return rename_pcre_encoderJNI.SomeWidget_m_width_get(swigCPtr, this);
  }

  public SomeWidget() {
    this(rename_pcre_encoderJNI.new_SomeWidget(), true);
  }

}