/* ----------------------------------------------------------------------------
 * This file was automatically generated by SWIG (http://www.swig.org).
 * Version 2.0.10
 *
 * Do not make changes to this file unless you know what you are doing--modify
 * the SWIG interface file instead.
 * ----------------------------------------------------------------------------- */

package java_director;

public class JavaExceptionTest {
  private long swigCPtr;
  protected boolean swigCMemOwn;

  protected JavaExceptionTest(long cPtr, boolean cMemoryOwn) {
    swigCMemOwn = cMemoryOwn;
    swigCPtr = cPtr;
  }

  protected static long getCPtr(JavaExceptionTest obj) {
    return (obj == null) ? 0 : obj.swigCPtr;
  }

  protected void finalize() {
//    System.out.println("Finalizing " + this);
    delete();
  }

  public synchronized void delete() {
    if (swigCPtr != 0) {
      if (swigCMemOwn) {
        swigCMemOwn = false;
        java_directorJNI.delete_JavaExceptionTest(swigCPtr);
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
    java_directorJNI.JavaExceptionTest_change_ownership(this, swigCPtr, false);
  }

  public void swigTakeOwnership() {
    swigCMemOwn = true;
    java_directorJNI.JavaExceptionTest_change_ownership(this, swigCPtr, true);
  }

  public void etest() throws Exception {
    if (getClass() == JavaExceptionTest.class) java_directorJNI.JavaExceptionTest_etest(swigCPtr, this); else java_directorJNI.JavaExceptionTest_etestSwigExplicitJavaExceptionTest(swigCPtr, this);
  }

  public JavaExceptionTest() {
    this(java_directorJNI.new_JavaExceptionTest(), true);
    java_directorJNI.JavaExceptionTest_director_connect(this, swigCPtr, swigCMemOwn, true);
  }

}
