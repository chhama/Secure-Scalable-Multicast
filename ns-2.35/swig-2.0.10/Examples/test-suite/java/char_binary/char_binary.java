/* ----------------------------------------------------------------------------
 * This file was automatically generated by SWIG (http://www.swig.org).
 * Version 2.0.10
 *
 * Do not make changes to this file unless you know what you are doing--modify
 * the SWIG interface file instead.
 * ----------------------------------------------------------------------------- */

package char_binary;

public class char_binary {
  public static void setVar_namet(String value) {
    char_binaryJNI.var_namet_set(value);
  }

  public static String getVar_namet() {
    return char_binaryJNI.var_namet_get();
  }

  public static void setVar_pchar(String value) {
    char_binaryJNI.var_pchar_set(value);
  }

  public static String getVar_pchar() {
    return char_binaryJNI.var_pchar_get();
  }

  public static SWIGTYPE_p_char new_pchar(int nelements) {
    long cPtr = char_binaryJNI.new_pchar(nelements);
    return (cPtr == 0) ? null : new SWIGTYPE_p_char(cPtr, false);
  }

  public static void delete_pchar(SWIGTYPE_p_char ary) {
    char_binaryJNI.delete_pchar(SWIGTYPE_p_char.getCPtr(ary));
  }

  public static char pchar_getitem(SWIGTYPE_p_char ary, int index) {
    return char_binaryJNI.pchar_getitem(SWIGTYPE_p_char.getCPtr(ary), index);
  }

  public static void pchar_setitem(SWIGTYPE_p_char ary, int index, char value) {
    char_binaryJNI.pchar_setitem(SWIGTYPE_p_char.getCPtr(ary), index, value);
  }

}