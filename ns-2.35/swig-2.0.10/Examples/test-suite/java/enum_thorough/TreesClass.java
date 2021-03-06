/* ----------------------------------------------------------------------------
 * This file was automatically generated by SWIG (http://www.swig.org).
 * Version 2.0.10
 *
 * Do not make changes to this file unless you know what you are doing--modify
 * the SWIG interface file instead.
 * ----------------------------------------------------------------------------- */

package enum_thorough;

public class TreesClass {
  private long swigCPtr;
  protected boolean swigCMemOwn;

  protected TreesClass(long cPtr, boolean cMemoryOwn) {
    swigCMemOwn = cMemoryOwn;
    swigCPtr = cPtr;
  }

  protected static long getCPtr(TreesClass obj) {
    return (obj == null) ? 0 : obj.swigCPtr;
  }

  protected void finalize() {
    delete();
  }

  public synchronized void delete() {
    if (swigCPtr != 0) {
      if (swigCMemOwn) {
        swigCMemOwn = false;
        enum_thoroughJNI.delete_TreesClass(swigCPtr);
      }
      swigCPtr = 0;
    }
  }

  public TreesClass.trees treesTest1(TreesClass.trees e) {
    return TreesClass.trees.swigToEnum(enum_thoroughJNI.TreesClass_treesTest1(swigCPtr, this, e.swigValue()));
  }

  public TreesClass.trees treesTest2(TreesClass.trees e) {
    return TreesClass.trees.swigToEnum(enum_thoroughJNI.TreesClass_treesTest2(swigCPtr, this, e.swigValue()));
  }

  public TreesClass.trees treesTest3(TreesClass.trees e) {
    return TreesClass.trees.swigToEnum(enum_thoroughJNI.TreesClass_treesTest3(swigCPtr, this, e.swigValue()));
  }

  public TreesClass.trees treesTest4(TreesClass.trees e) {
    return TreesClass.trees.swigToEnum(enum_thoroughJNI.TreesClass_treesTest4(swigCPtr, this, e.swigValue()));
  }

  public TreesClass.trees treesTest5(TreesClass.trees e) {
    return TreesClass.trees.swigToEnum(enum_thoroughJNI.TreesClass_treesTest5(swigCPtr, this, e.swigValue()));
  }

  public TreesClass.trees treesTest6(TreesClass.trees e) {
    return TreesClass.trees.swigToEnum(enum_thoroughJNI.TreesClass_treesTest6(swigCPtr, this, e.swigValue()));
  }

  public TreesClass.trees treesTest7(TreesClass.trees e) {
    return TreesClass.trees.swigToEnum(enum_thoroughJNI.TreesClass_treesTest7(swigCPtr, this, e.swigValue()));
  }

  public TreesClass.trees treesTest8(TreesClass.trees e) {
    return TreesClass.trees.swigToEnum(enum_thoroughJNI.TreesClass_treesTest8(swigCPtr, this, e.swigValue()));
  }

  public TreesClass.trees treesTest9(TreesClass.trees e) {
    return TreesClass.trees.swigToEnum(enum_thoroughJNI.TreesClass_treesTest9(swigCPtr, this, e.swigValue()));
  }

  public TreesClass.trees treesTestA(TreesClass.trees e) {
    return TreesClass.trees.swigToEnum(enum_thoroughJNI.TreesClass_treesTestA(swigCPtr, this, e.swigValue()));
  }

  public TreesClass.trees treesTestB(TreesClass.trees e) {
    return TreesClass.trees.swigToEnum(enum_thoroughJNI.TreesClass_treesTestB(swigCPtr, this, e.swigValue()));
  }

  public TreesClass.trees treesTestC(TreesClass.trees e) {
    return TreesClass.trees.swigToEnum(enum_thoroughJNI.TreesClass_treesTestC(swigCPtr, this, e.swigValue()));
  }

  public TreesClass.trees treesTestD(TreesClass.trees e) {
    return TreesClass.trees.swigToEnum(enum_thoroughJNI.TreesClass_treesTestD(swigCPtr, this, e.swigValue()));
  }

  public TreesClass.trees treesTestE(TreesClass.trees e) {
    return TreesClass.trees.swigToEnum(enum_thoroughJNI.TreesClass_treesTestE(swigCPtr, this, e.swigValue()));
  }

  public TreesClass.trees treesTestF(TreesClass.trees e) {
    return TreesClass.trees.swigToEnum(enum_thoroughJNI.TreesClass_treesTestF(swigCPtr, this, e.swigValue()));
  }

  public TreesClass.trees treesTestG(TreesClass.trees e) {
    return TreesClass.trees.swigToEnum(enum_thoroughJNI.TreesClass_treesTestG(swigCPtr, this, e.swigValue()));
  }

  public TreesClass.trees treesTestH(TreesClass.trees e) {
    return TreesClass.trees.swigToEnum(enum_thoroughJNI.TreesClass_treesTestH(swigCPtr, this, e.swigValue()));
  }

  public TreesClass.trees treesTestI(TreesClass.trees e) {
    return TreesClass.trees.swigToEnum(enum_thoroughJNI.TreesClass_treesTestI(swigCPtr, this, e.swigValue()));
  }

  public TreesClass.trees treesTestJ(TreesClass.trees e) {
    return TreesClass.trees.swigToEnum(enum_thoroughJNI.TreesClass_treesTestJ(swigCPtr, this, e.swigValue()));
  }

  public TreesClass.trees treesTestK(TreesClass.trees e) {
    return TreesClass.trees.swigToEnum(enum_thoroughJNI.TreesClass_treesTestK(swigCPtr, this, e.swigValue()));
  }

  public TreesClass.trees treesTestL(TreesClass.trees e) {
    return TreesClass.trees.swigToEnum(enum_thoroughJNI.TreesClass_treesTestL(swigCPtr, this, e.swigValue()));
  }

  public TreesClass.trees treesTestM(TreesClass.trees e) {
    return TreesClass.trees.swigToEnum(enum_thoroughJNI.TreesClass_treesTestM(swigCPtr, this, e.swigValue()));
  }

  public TreesClass.trees treesTestN(TreesClass.trees e) {
    return TreesClass.trees.swigToEnum(enum_thoroughJNI.TreesClass_treesTestN(swigCPtr, this, e.swigValue()));
  }

  public TreesClass.trees treesTestO(TreesClass.trees e) {
    return TreesClass.trees.swigToEnum(enum_thoroughJNI.TreesClass_treesTestO(swigCPtr, this, e.swigValue()));
  }

  public TreesClass() {
    this(enum_thoroughJNI.new_TreesClass(), true);
  }

  public final static class trees {
    public final static TreesClass.trees oak = new TreesClass.trees("oak");
    public final static TreesClass.trees fir = new TreesClass.trees("fir");
    public final static TreesClass.trees pine = new TreesClass.trees("pine");

    public final int swigValue() {
      return swigValue;
    }

    public String toString() {
      return swigName;
    }

    public static trees swigToEnum(int swigValue) {
      if (swigValue < swigValues.length && swigValue >= 0 && swigValues[swigValue].swigValue == swigValue)
        return swigValues[swigValue];
      for (int i = 0; i < swigValues.length; i++)
        if (swigValues[i].swigValue == swigValue)
          return swigValues[i];
      throw new IllegalArgumentException("No enum " + trees.class + " with value " + swigValue);
    }

    private trees(String swigName) {
      this.swigName = swigName;
      this.swigValue = swigNext++;
    }

    private trees(String swigName, int swigValue) {
      this.swigName = swigName;
      this.swigValue = swigValue;
      swigNext = swigValue+1;
    }

    private trees(String swigName, trees swigEnum) {
      this.swigName = swigName;
      this.swigValue = swigEnum.swigValue;
      swigNext = this.swigValue+1;
    }

    private static trees[] swigValues = { oak, fir, pine };
    private static int swigNext = 0;
    private final int swigValue;
    private final String swigName;
  }

}
