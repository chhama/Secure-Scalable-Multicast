/* ----------------------------------------------------------------------------
 * This file was automatically generated by SWIG (http://www.swig.org).
 * Version 2.0.10
 *
 * Do not make changes to this file unless you know what you are doing--modify
 * the SWIG interface file instead.
 * ----------------------------------------------------------------------------- */


public class exampleJNI {
  public final static native int maxint(int jarg1, int jarg2);
  public final static native double maxdouble(double jarg1, double jarg2);
  public final static native long new_vecint(int jarg1);
  public final static native long vecint_get(long jarg1, vecint jarg1_, int jarg2);
  public final static native void vecint_set(long jarg1, vecint jarg1_, int jarg2, long jarg3);
  public final static native int vecint_getitem(long jarg1, vecint jarg1_, int jarg2);
  public final static native void vecint_setitem(long jarg1, vecint jarg1_, int jarg2, int jarg3);
  public final static native void delete_vecint(long jarg1);
  public final static native long new_vecdouble(int jarg1);
  public final static native long vecdouble_get(long jarg1, vecdouble jarg1_, int jarg2);
  public final static native void vecdouble_set(long jarg1, vecdouble jarg1_, int jarg2, long jarg3);
  public final static native double vecdouble_getitem(long jarg1, vecdouble jarg1_, int jarg2);
  public final static native void vecdouble_setitem(long jarg1, vecdouble jarg1_, int jarg2, double jarg3);
  public final static native void delete_vecdouble(long jarg1);
}
