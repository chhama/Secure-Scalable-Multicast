/* ----------------------------------------------------------------------------
 * This file was automatically generated by SWIG (http://www.swig.org).
 * Version 2.0.10
 *
 * Do not make changes to this file unless you know what you are doing--modify
 * the SWIG interface file instead.
 * ----------------------------------------------------------------------------- */

package template_typedef_import;

public class template_typedef_cplx2 {
  public static ArithUnaryFunction_double_double make_Identity_double() {
    return new ArithUnaryFunction_double_double(template_typedef_cplx2JNI.make_Identity_double(), true);
  }

  public static ArithUnaryFunction_complex_complex make_Identity_complex() {
    return new ArithUnaryFunction_complex_complex(template_typedef_cplx2JNI.make_Identity_complex(), true);
  }

  public static ArithUnaryFunction_double_complex make_Multiplies_double_double_complex_complex(ArithUnaryFunction_double_double f, ArithUnaryFunction_complex_complex g) {
    return new ArithUnaryFunction_double_complex(template_typedef_cplx2JNI.make_Multiplies_double_double_complex_complex(ArithUnaryFunction_double_double.getCPtr(f), f, ArithUnaryFunction_complex_complex.getCPtr(g), g), true);
  }

  public static ArithUnaryFunction_double_double make_Multiplies_double_double_double_double(ArithUnaryFunction_double_double f, ArithUnaryFunction_double_double g) {
    return new ArithUnaryFunction_double_double(template_typedef_cplx2JNI.make_Multiplies_double_double_double_double(ArithUnaryFunction_double_double.getCPtr(f), f, ArithUnaryFunction_double_double.getCPtr(g), g), true);
  }

  public static ArithUnaryFunction_complex_complex make_Multiplies_complex_complex_complex_complex(ArithUnaryFunction_complex_complex f, ArithUnaryFunction_complex_complex g) {
    return new ArithUnaryFunction_complex_complex(template_typedef_cplx2JNI.make_Multiplies_complex_complex_complex_complex(ArithUnaryFunction_complex_complex.getCPtr(f), f, ArithUnaryFunction_complex_complex.getCPtr(g), g), true);
  }

  public static ArithUnaryFunction_double_complex make_Multiplies_complex_complex_double_double(ArithUnaryFunction_complex_complex f, ArithUnaryFunction_double_double g) {
    return new ArithUnaryFunction_double_complex(template_typedef_cplx2JNI.make_Multiplies_complex_complex_double_double(ArithUnaryFunction_complex_complex.getCPtr(f), f, ArithUnaryFunction_double_double.getCPtr(g), g), true);
  }

}
