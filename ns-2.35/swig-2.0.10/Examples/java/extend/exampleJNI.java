/* ----------------------------------------------------------------------------
 * This file was automatically generated by SWIG (http://www.swig.org).
 * Version 2.0.10
 *
 * Do not make changes to this file unless you know what you are doing--modify
 * the SWIG interface file instead.
 * ----------------------------------------------------------------------------- */


public class exampleJNI {
  public final static native long new_Employee(String jarg1);
  public final static native String Employee_getTitle(long jarg1, Employee jarg1_);
  public final static native String Employee_getTitleSwigExplicitEmployee(long jarg1, Employee jarg1_);
  public final static native String Employee_getName(long jarg1, Employee jarg1_);
  public final static native String Employee_getNameSwigExplicitEmployee(long jarg1, Employee jarg1_);
  public final static native String Employee_getPosition(long jarg1, Employee jarg1_);
  public final static native String Employee_getPositionSwigExplicitEmployee(long jarg1, Employee jarg1_);
  public final static native void delete_Employee(long jarg1);
  public final static native void Employee_director_connect(Employee obj, long cptr, boolean mem_own, boolean weak_global);
  public final static native void Employee_change_ownership(Employee obj, long cptr, boolean take_or_release);
  public final static native long new_Manager(String jarg1);
  public final static native String Manager_getPosition(long jarg1, Manager jarg1_);
  public final static native String Manager_getPositionSwigExplicitManager(long jarg1, Manager jarg1_);
  public final static native void delete_Manager(long jarg1);
  public final static native void Manager_director_connect(Manager obj, long cptr, boolean mem_own, boolean weak_global);
  public final static native void Manager_change_ownership(Manager obj, long cptr, boolean take_or_release);
  public final static native long new_EmployeeList();
  public final static native void EmployeeList_addEmployee(long jarg1, EmployeeList jarg1_, long jarg2, Employee jarg2_);
  public final static native long EmployeeList_get_item(long jarg1, EmployeeList jarg1_, int jarg2);
  public final static native void delete_EmployeeList(long jarg1);
  public final static native long Manager_SWIGUpcast(long jarg1);

  public static String SwigDirector_Employee_getTitle(Employee self) {
    return self.getTitle();
  }
  public static String SwigDirector_Employee_getName(Employee self) {
    return self.getName();
  }
  public static String SwigDirector_Employee_getPosition(Employee self) {
    return self.getPosition();
  }
  public static String SwigDirector_Manager_getTitle(Manager self) {
    return self.getTitle();
  }
  public static String SwigDirector_Manager_getName(Manager self) {
    return self.getName();
  }
  public static String SwigDirector_Manager_getPosition(Manager self) {
    return self.getPosition();
  }

  private final static native void swig_module_init();
  static {
    swig_module_init();
  }
}
