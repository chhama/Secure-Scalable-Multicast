/* ----------------------------------------------------------------------------
 * This file was automatically generated by SWIG (http://www.swig.org).
 * Version 2.0.10
 *
 * Do not make changes to this file unless you know what you are doing--modify
 * the SWIG interface file instead.
 * ----------------------------------------------------------------------------- */

package java_throws;

public class java_throws {
  public static short full_of_exceptions(int num) throws ClassNotFoundException, NoSuchFieldException, InstantiationException, CloneNotSupportedException, IllegalAccessException {
    return java_throwsJNI.full_of_exceptions(num);
  }

  public static boolean throw_spec_function(int value) throws IllegalAccessException {
    return java_throwsJNI.throw_spec_function(value);
  }

  public static boolean catches_function(int value) throws IllegalAccessException {
    return java_throwsJNI.catches_function(value);
  }

  public static TestClass makeTestClass() throws NoSuchMethodException {
    long cPtr = java_throwsJNI.makeTestClass();
    return (cPtr == 0) ? null : new TestClass(cPtr, true);
  }

  public static void fileFunction(java.io.File someFileArgument) throws java.io.IOException {
    java_throwsJNI.fileFunction(someFileArgument.getCanonicalPath());
  }

  public static int ioTest() throws java.io.IOException {
    int returnValue=java_throwsJNI.ioTest();
    if (returnValue==0) throw new java.io.IOException("some IOException");
    return returnValue;
  }

  public static void globalFunction(int both) throws ClassNotFoundException, MyException, NoSuchFieldException {
    java_throwsJNI.globalFunction(both);
  }

}
