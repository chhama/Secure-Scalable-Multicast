/* ----------------------------------------------------------------------------
 * This file was automatically generated by SWIG (http://www.swig.org).
 * Version 2.0.10
 *
 * Do not make changes to this file unless you know what you are doing--modify
 * the SWIG interface file instead.
 * ----------------------------------------------------------------------------- */

package cpp_namespace;

public class cpp_namespace {
  public static int fact(int n) {
    return cpp_namespaceJNI.fact(n);
  }

  public static void setFoo(int value) {
    cpp_namespaceJNI.Foo_set(value);
  }

  public static int getFoo() {
    return cpp_namespaceJNI.Foo_get();
  }

  public static void weird(String x, int y) {
    cpp_namespaceJNI.weird(x, y);
  }

  public static String do_method(Test t) {
    return cpp_namespaceJNI.do_method(Test.getCPtr(t), t);
  }

  public static String do_method2(Test t) {
    return cpp_namespaceJNI.do_method2(Test.getCPtr(t), t);
  }

  public static int foo3(int x) {
    return cpp_namespaceJNI.foo3(x);
  }

  public static String do_method3(Test2 t, int x) {
    return cpp_namespaceJNI.do_method3(Test2.getCPtr(t), t, x);
  }

}