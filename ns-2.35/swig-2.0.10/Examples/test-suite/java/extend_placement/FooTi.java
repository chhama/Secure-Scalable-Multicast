/* ----------------------------------------------------------------------------
 * This file was automatically generated by SWIG (http://www.swig.org).
 * Version 2.0.10
 *
 * Do not make changes to this file unless you know what you are doing--modify
 * the SWIG interface file instead.
 * ----------------------------------------------------------------------------- */

package extend_placement;

public class FooTi {
  private long swigCPtr;
  protected boolean swigCMemOwn;

  protected FooTi(long cPtr, boolean cMemoryOwn) {
    swigCMemOwn = cMemoryOwn;
    swigCPtr = cPtr;
  }

  protected static long getCPtr(FooTi obj) {
    return (obj == null) ? 0 : obj.swigCPtr;
  }

  protected void finalize() {
    delete();
  }

  public synchronized void delete() {
    if (swigCPtr != 0) {
      if (swigCMemOwn) {
        swigCMemOwn = false;
        extend_placementJNI.delete_FooTi(swigCPtr);
      }
      swigCPtr = 0;
    }
  }

  public FooTi() {
    this(extend_placementJNI.new_FooTi__SWIG_0(), true);
  }

  public FooTi(int a, int b) {
    this(extend_placementJNI.new_FooTi__SWIG_1(a, b), true);
  }

  public int spam() {
    return extend_placementJNI.FooTi_spam__SWIG_0(swigCPtr, this);
  }

  public int spam(String c) {
    return extend_placementJNI.FooTi_spam__SWIG_1(swigCPtr, this, c);
  }

  public FooTi(int a) {
    this(extend_placementJNI.new_FooTi__SWIG_2(a), true);
  }

  public int spam(int x) {
    return extend_placementJNI.FooTi_spam__SWIG_2(swigCPtr, this, x);
  }

  public int spam(int x, int y) {
    return extend_placementJNI.FooTi_spam__SWIG_3(swigCPtr, this, x, y);
  }

  public int spam(int x, int y, int z) {
    return extend_placementJNI.FooTi_spam__SWIG_4(swigCPtr, this, x, y, z);
  }

  public int spam(Foo f, double d) {
    return extend_placementJNI.FooTi_spam__SWIG_5(swigCPtr, this, Foo.getCPtr(f), f, d);
  }

  public int spam(Foo f) {
    return extend_placementJNI.FooTi_spam__SWIG_6(swigCPtr, this, Foo.getCPtr(f), f);
  }

}
