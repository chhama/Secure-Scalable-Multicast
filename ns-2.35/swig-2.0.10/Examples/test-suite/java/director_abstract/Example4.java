/* ----------------------------------------------------------------------------
 * This file was automatically generated by SWIG (http://www.swig.org).
 * Version 2.0.10
 *
 * Do not make changes to this file unless you know what you are doing--modify
 * the SWIG interface file instead.
 * ----------------------------------------------------------------------------- */

package director_abstract;

public class Example4 {
  private long swigCPtr;
  protected boolean swigCMemOwn;

  protected Example4(long cPtr, boolean cMemoryOwn) {
    swigCMemOwn = cMemoryOwn;
    swigCPtr = cPtr;
  }

  protected static long getCPtr(Example4 obj) {
    return (obj == null) ? 0 : obj.swigCPtr;
  }

  protected void finalize() {
    delete();
  }

  public synchronized void delete() {
    if (swigCPtr != 0) {
      if (swigCMemOwn) {
        swigCMemOwn = false;
        director_abstractJNI.delete_Example4(swigCPtr);
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
    director_abstractJNI.Example4_change_ownership(this, swigCPtr, false);
  }

  public void swigTakeOwnership() {
    swigCMemOwn = true;
    director_abstractJNI.Example4_change_ownership(this, swigCPtr, true);
  }

  protected Example4() {
    this(director_abstractJNI.new_Example4__SWIG_0(), true);
    director_abstractJNI.Example4_director_connect(this, swigCPtr, swigCMemOwn, true);
  }

  protected Example4(int x, int y) {
    this(director_abstractJNI.new_Example4__SWIG_1(x, y), true);
    director_abstractJNI.Example4_director_connect(this, swigCPtr, swigCMemOwn, true);
  }

  public int GetXSize() {
    return director_abstractJNI.Example4_GetXSize(swigCPtr, this);
  }

  public int Color(short r, short g, short b) {
    return director_abstractJNI.Example4_Color(swigCPtr, this, r, g, b);
  }

  public static int get_color(Example4 ptr, short r, short g, short b) {
    return director_abstractJNI.Example4_get_color(Example4.getCPtr(ptr), ptr, r, g, b);
  }

}
