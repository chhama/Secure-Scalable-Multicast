/* ----------------------------------------------------------------------------
 * This file was automatically generated by SWIG (http://www.swig.org).
 * Version 2.0.10
 *
 * Do not make changes to this file unless you know what you are doing--modify
 * the SWIG interface file instead.
 * ----------------------------------------------------------------------------- */

package nspacePackage;

public class nspace implements nspaceConstants {
  public static nspacePackage.Outer.Inner1.Color namespaceFunction(nspacePackage.Outer.Inner1.Color k) {
    return new nspacePackage.Outer.Inner1.Color(nspaceJNI.namespaceFunction(nspacePackage.Outer.Inner1.Color.getCPtr(k), k), true);
  }

  public static void setNamespaceVar(int value) {
    nspaceJNI.namespaceVar_set(value);
  }

  public static int getNamespaceVar() {
    return nspaceJNI.namespaceVar_get();
  }

  public static void test_classes(nspacePackage.Outer.SomeClass c, nspacePackage.Outer.Inner2.Color cc) {
    nspaceJNI.test_classes(nspacePackage.Outer.SomeClass.getCPtr(c), c, nspacePackage.Outer.Inner2.Color.getCPtr(cc), cc);
  }

}
