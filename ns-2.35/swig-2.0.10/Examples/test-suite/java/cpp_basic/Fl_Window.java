/* ----------------------------------------------------------------------------
 * This file was automatically generated by SWIG (http://www.swig.org).
 * Version 2.0.10
 *
 * Do not make changes to this file unless you know what you are doing--modify
 * the SWIG interface file instead.
 * ----------------------------------------------------------------------------- */

package cpp_basic;

public class Fl_Window {
  private long swigCPtr;
  protected boolean swigCMemOwn;

  protected Fl_Window(long cPtr, boolean cMemoryOwn) {
    swigCMemOwn = cMemoryOwn;
    swigCPtr = cPtr;
  }

  protected static long getCPtr(Fl_Window obj) {
    return (obj == null) ? 0 : obj.swigCPtr;
  }

  protected void finalize() {
    delete();
  }

  public synchronized void delete() {
    if (swigCPtr != 0) {
      if (swigCMemOwn) {
        swigCMemOwn = false;
        cpp_basicJNI.delete_Fl_Window(swigCPtr);
      }
      swigCPtr = 0;
    }
  }

  public Fl_Window() {
    this(cpp_basicJNI.new_Fl_Window(), true);
  }

  public void show(SWIGTYPE_p_void count, SWIGTYPE_p_void data) {
    cpp_basicJNI.Fl_Window_show__SWIG_0(swigCPtr, this, SWIGTYPE_p_void.getCPtr(count), SWIGTYPE_p_void.getCPtr(data));
  }

  public void show(SWIGTYPE_p_void count) {
    cpp_basicJNI.Fl_Window_show__SWIG_1(swigCPtr, this, SWIGTYPE_p_void.getCPtr(count));
  }

  public void show() {
    cpp_basicJNI.Fl_Window_show__SWIG_2(swigCPtr, this);
  }

}