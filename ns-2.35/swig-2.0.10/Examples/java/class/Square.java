/* ----------------------------------------------------------------------------
 * This file was automatically generated by SWIG (http://www.swig.org).
 * Version 2.0.10
 *
 * Do not make changes to this file unless you know what you are doing--modify
 * the SWIG interface file instead.
 * ----------------------------------------------------------------------------- */


public class Square extends Shape {
  private long swigCPtr;

  protected Square(long cPtr, boolean cMemoryOwn) {
    super(exampleJNI.Square_SWIGUpcast(cPtr), cMemoryOwn);
    swigCPtr = cPtr;
  }

  protected static long getCPtr(Square obj) {
    return (obj == null) ? 0 : obj.swigCPtr;
  }

  protected void finalize() {
    delete();
  }

  public synchronized void delete() {
    if (swigCPtr != 0) {
      if (swigCMemOwn) {
        swigCMemOwn = false;
        exampleJNI.delete_Square(swigCPtr);
      }
      swigCPtr = 0;
    }
    super.delete();
  }

  public Square(double w) {
    this(exampleJNI.new_Square(w), true);
  }

  public double area() {
    return exampleJNI.Square_area(swigCPtr, this);
  }

  public double perimeter() {
    return exampleJNI.Square_perimeter(swigCPtr, this);
  }

}
