/* ----------------------------------------------------------------------------
 * This file was automatically generated by SWIG (http://www.swig.org).
 * Version 2.0.10
 *
 * Do not make changes to this file unless you know what you are doing--modify
 * the SWIG interface file instead.
 * ----------------------------------------------------------------------------- */


public class exampleJNI {
  public final static native long new_Vector(double jarg1, double jarg2, double jarg3);
  public final static native void delete_Vector(long jarg1);
  public final static native String Vector_print(long jarg1, Vector jarg1_);
  public final static native long addv(long jarg1, Vector jarg1_, long jarg2, Vector jarg2_);
  public final static native long new_VectorArray(int jarg1);
  public final static native void delete_VectorArray(long jarg1);
  public final static native int VectorArray_size(long jarg1, VectorArray jarg1_);
  public final static native long VectorArray_get(long jarg1, VectorArray jarg1_, int jarg2);
  public final static native void VectorArray_set(long jarg1, VectorArray jarg1_, int jarg2, long jarg3, Vector jarg3_);
}
