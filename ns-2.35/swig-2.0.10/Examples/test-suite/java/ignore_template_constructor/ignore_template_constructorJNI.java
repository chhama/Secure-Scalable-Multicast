/* ----------------------------------------------------------------------------
 * This file was automatically generated by SWIG (http://www.swig.org).
 * Version 2.0.10
 *
 * Do not make changes to this file unless you know what you are doing--modify
 * the SWIG interface file instead.
 * ----------------------------------------------------------------------------- */

package ignore_template_constructor;

public class ignore_template_constructorJNI {
  public final static native long new_Flow(double jarg1);
  public final static native void delete_Flow(long jarg1);
  public final static native long new_VectFlow();
  public final static native long VectFlow_size(long jarg1, VectFlow jarg1_);
  public final static native long VectFlow_capacity(long jarg1, VectFlow jarg1_);
  public final static native void VectFlow_reserve(long jarg1, VectFlow jarg1_, long jarg2);
  public final static native boolean VectFlow_isEmpty(long jarg1, VectFlow jarg1_);
  public final static native void VectFlow_clear(long jarg1, VectFlow jarg1_);
  public final static native void VectFlow_add(long jarg1, VectFlow jarg1_, long jarg2, Flow jarg2_);
  public final static native long VectFlow_get(long jarg1, VectFlow jarg1_, int jarg2);
  public final static native void VectFlow_set(long jarg1, VectFlow jarg1_, int jarg2, long jarg3, Flow jarg3_);
  public final static native void delete_VectFlow(long jarg1);
  public final static native long inandout(long jarg1, VectFlow jarg1_);
}