/* ----------------------------------------------------------------------------
 * This file was automatically generated by SWIG (http://www.swig.org).
 * Version 2.0.10
 *
 * Do not make changes to this file unless you know what you are doing--modify
 * the SWIG interface file instead.
 * ----------------------------------------------------------------------------- */

package rname;

public class rnameJNI {
  public final static native String Bar_foo_i(long jarg1, Bar jarg1_, int jarg2);
  public final static native String Bar_foo_d(long jarg1, Bar jarg1_, double jarg2);
  public final static native String Bar_foo(long jarg1, Bar jarg1_, short jarg2);
  public final static native String Bar_foo_u(long jarg1, Bar jarg1_, long jarg2);
  public final static native long new_Bar();
  public final static native void delete_Bar(long jarg1);
  public final static native String foo_i(int jarg1);
  public final static native String foo_d(double jarg1);
  public final static native String foo_s(short jarg1);
  public final static native String foo(long jarg1);
  public final static native long new_RenamedBase();
  public final static native void delete_RenamedBase(long jarg1);
  public final static native void RenamedBase_fn(long jarg1, RenamedBase jarg1_, long jarg2, RenamedBase jarg2_, long jarg3, RenamedBase jarg3_, long jarg4, RenamedBase jarg4_);
  public final static native String RenamedBase_newname(long jarg1, RenamedBase jarg1_, double jarg2);
  public final static native long new_RenamedDerived();
  public final static native void delete_RenamedDerived(long jarg1);
  public final static native void RenamedDerived_Xfunc(long jarg1, RenamedDerived jarg1_, long jarg2, RenamedBase jarg2_, long jarg3, RenamedBase jarg3_, long jarg4, RenamedBase jarg4_);
  public final static native String RenamedDerived_newname(long jarg1, RenamedDerived jarg1_, double jarg2);
  public final static native long RenamedDerived_SWIGUpcast(long jarg1);
}