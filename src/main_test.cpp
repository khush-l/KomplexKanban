/*

  Compile with: g++ main.cpp ../src/fac.cpp catch_amalgamated
  Run with ./a.out

*/
//#define CATCH_CONFIG_RUNNER
//#define CATCH_AMALGAMATED_CUSTOM_MAIN

#include <iostream>
#include "../tests/catch_amalgamated.hpp"
#include "lib/Complex.hpp"
#include <cmath>
#include "lib/Complex.h"
using namespace std;


#ifdef CATCH_AMALGAMATED_CUSTOM_MAIN

int main(int argc, char *argv[]) {
  // global setup...

  int result = Catch::Session().run(argc, argv);

  // global clean-up...
  cout << "Hello Catch2 Build with custom main()\n";

  return result;
}

#else  // Not CATCH_AMALGAMATED_CUSTOM_MAIN



TEST_CASE("Quick Catch2 test on polar conversions", "[polar]") {

   std::cout << "Running tests on polar" << endl;
   Complex a = Complex(1.0 * cos(90.0), 1.0 * sin(90.0));
    Complex result = polar(1.0, 90.0);
   REQUIRE(real(result) == cos(90.0));

  Complex b = Complex(3.0 * cos(45.0), 3.0*sin(45.0));
  Complex result1 = polar(3.0, 45.0);
  REQUIRE(real(result) == cos(45.0));

  Complex c = Complex(1.5* cos(-60.0), 1.5*sin(-60.0));
  Complex result2 = polar(1.5, -60.0);
  REQUIRE(real(result) == cos(-60.0));

}

TEST_CASE("Quick Catch2 test on log", "[log]") {

  cout << "Running tests on log" << endl;

  Complex z = Complex(4, 3);
  REQUIRE(log(z).re >= 1.6 );
  REQUIRE(log(z).re <= 1.7);
  REQUIRE(log(z).im >= 0.63);
  REQUIRE(log(z).im <= 0.65);

  Complex y = Complex(9, 4);
  REQUIRE(log(y).re >= 2.27);
  REQUIRE(log(y).re <= 2.29);
  REQUIRE(log(y).im >= 0.40);
  REQUIRE(log(y).im <= 0.42);

  //REQUIRE((log(z) ==(Complex(1.787878, 3.98753))));
  //REQUIRE((log(z) == (Complex(1.26752, 9.34762))));
  //REQUIRE((log(z) == (Complex(5.92372, 8.239724))));


}


// TEST_CASE("Quick Catch2 test on Factorial", "[Factorial]")
// {

//   cout << "Running tests on Factorial" << endl;
//   REQUIRE(Factorial(1) == 1);
//   REQUIRE(Factorial(2) == 2);
//   REQUIRE(Factorial(3) == 6);
//   REQUIRE(Factorial(4) == 24);
//   REQUIRE(Factorial(5) == 1);

//   SECTION("Test sqrt of 1 + i"){

//   }
// }



/*TEST_CASE("Quick Catch2 test on Factorial", "[Factorial]")
{

  cout << "Running tests on Factorial" << endl;
  REQUIRE(Factorial(1) == 1);
  REQUIRE(Factorial(2) == 2);
  REQUIRE(Factorial(3) == 6);
  REQUIRE(Factorial(4) == 24);
  REQUIRE(Factorial(5) == 1);
}*/

TEST_CASE("Quick Catch2 test on Complex Division", "[division]")
{
  cout << "Running tests on Complex Division" << endl;
  Complex a = Complex(4, 8);
  Complex b = Complex(1, 0);
  Complex c = a / a;
  Complex d = Complex(2, 4);
  Complex e = a / 2;

  //Complex b = Complex(1,0);
  REQUIRE(c == b);
  REQUIRE(e == d);
}

TEST_CASE("Test conj Function", "[conj]") {


    SECTION("require conj to return positive imaginary conjugate from negative complex number") {

        Complex test(3.0, -4.0);

        REQUIRE((real(conj(test)) == 3.0 && imag(conj(test)) == 4.0));
    }

    SECTION("require conj to return negative imaginary conjugate from positive complex number") {

        Complex test(3.0, 4.0);

        REQUIRE((real(conj(test)) == 3.0 && imag(conj(test)) == -4.0));
    }

    SECTION("require conj to return correct conjugate from complex number that includes rational numbers") {

        Complex test(3.539349, 4.231232);

        REQUIRE((real(conj(test)) == 3.539349 && imag(conj(test)) == -4.231232));
    }

    SECTION("require conj to return correct conjugate from numbers < 1") {

        Complex test(0.539349, 0.231232);

        REQUIRE((real(conj(test)) == 0.539349 && imag(conj(test)) == -0.231232));
    }

    SECTION("require conj to return correct conjugate from numbers > 1000") {

        Complex test(8792.0, 1233.0);

        REQUIRE((real(conj(test)) == 8792.0 && imag(conj(test)) == -1233.0));
    }

}


TEST_CASE("Quick Catch2 test on Complex Equality", "[equality]")
{
  cout << "Running tests on Complex Equality" << endl;
  Complex a = Complex(4, 8);
  Complex b = Complex(1, 0);
  Complex c = Complex(4, 8);
  double d = 1;
  //Complex b = Complex(1,0);
  REQUIRE(a == c);
  REQUIRE(a != b);
  REQUIRE(b == d);
  REQUIRE(a != d);

}

TEST_CASE("Quick Catch2 test on Complex Subtraction", "[subtract]")
{
  cout << "Running tests on Complex Subtraction" << endl;
  Complex a = Complex(3, 8);
  Complex b = Complex(7, 4);
  Complex c = Complex(6, 8);
  Complex d = Complex(5, 0);
  REQUIRE((a-b).re==-4);
  REQUIRE((a-b).im==4);
  REQUIRE((c-d).re==1);
  REQUIRE((c-d).im==8);
}
TEST_CASE("Quick Catch2 test on Complex Multiplication", "[multiply]")
{
  cout << "Running tests on Complex Multiplication" << endl;
  Complex a = Complex(3, 8);
  Complex b = Complex(7, 0);
  Complex c = Complex(4, 6);
  Complex d = Complex(8, 4);
  REQUIRE((a*b).re==21);
  REQUIRE((a*b).im==56);
  REQUIRE((c*d).re==8);
  REQUIRE((c*d).im==64);
}

TEST_CASE("Quick Catch2 test on imaginary output", "[imag]")
{
    cout << "Running tests on imaginary output" << endl;

    // fixing test to make it work
    Complex test1(3.45,5.2);
    Complex test2(0,1);
    Complex test3(2,5);
    Complex test4(2.37, 1.69);
    Complex test5(1.01, 0);

    REQUIRE(imag(test1) == 5.2);
    REQUIRE(imag(test2) == 1);
    REQUIRE(imag(test3) == 5);
    REQUIRE(imag(test4) == 1.69);
    REQUIRE(imag(test5) == 0);
}

TEST_CASE("Quick Catch2 test on real output", "[real]")
{

    cout << "Running tests on real output" << endl;

    // fixing test to make it work
    Complex test1(3.45,5.2);
    Complex test2(0,1);
    Complex test3(2,5);
    Complex test4(2.37, 1.69);
    Complex test5(1.01, 0);

    REQUIRE(real(test1) == 3.45);
    REQUIRE(real(test2) == 0);
    REQUIRE(real(test3) == 2);
    REQUIRE(real(test4) == 2.37);
    REQUIRE(real(test5) == 1.01);
}

TEST_CASE("Quick Catch2 test on Complex Sine", "[sin]")
{
  cout << "Running tests on Complex Sine" << endl;
  Complex a = Complex(3, 8);
  Complex b = Complex(7, 4);
  REQUIRE(abs(sin(a).re - 210.34)<=.1);
  REQUIRE(abs(sin(a).im + 1475.56)<=.1);
  REQUIRE(abs(sin(b).re- 17.94)<=.1);
  REQUIRE(abs(sin(b).im -20.57)<=.1);
}

TEST_CASE("Quick Catch2 test on Complex Tangent", "[tan]")
{
  cout << "Running tests on Complex Tagent" << endl;
  Complex a = Complex(3, 8);
  Complex b = Complex(7, 4);
  REQUIRE(abs(tan(a).re <= .1));
  REQUIRE(abs(tan(a).im - 1)<=.1);
  REQUIRE(abs(tan(b).re <= .1));
  REQUIRE(abs(tan(b).im - 1)<=.1);
}

TEST_CASE("Quick Catch2 test on Complex Cosine", "[cos]")
{
  cout << "Running tests on Complex Cosine" << endl;
  Complex a = Complex(1, 1);
  Complex b = Complex(0, 0);
  double c = 1.0;
  Complex d = cos(a);
  Complex e = cos(b);

  REQUIRE(e == c);
  REQUIRE(abs(d.re - .833) < .001);
  REQUIRE(abs(d.im - -.988) < .001);
}


TEST_CASE("Quick Catch2 test on Absolute Value of Complex", "[abs]")
{
  cout << "Running tests on Absloute Value of Complex" << endl;
  Complex a = Complex(3, 4);
  Complex b = Complex(1, 0);
  double c = abs(a);
  double d = abs(b);

  REQUIRE(d == 1.0);
  REQUIRE(c == 5.0);
}

TEST_CASE("Test arg function", "[arg]") {

    SECTION("Test complex numbers that only have imaginary part") {
        Complex onlyImag(0.0, 4.0);
        REQUIRE(arg(onlyImag) >= 1.57);
        REQUIRE(arg(onlyImag) <= 1.58);
    }
    SECTION("Test complex numbers with only real part") {
        Complex onlyReal(2.0, 0.0);
        REQUIRE(arg(onlyReal) == 0.0);
    }
    SECTION("Test complex numbers with both real and imaginary parts") {
        Complex bothParts(1.0, 1.0);
        REQUIRE(arg(bothParts) >= 0.785);
        REQUIRE(arg(bothParts) <= 0.786);
    }

}

TEST_CASE("Test sinh function", "[sinh]") {

    SECTION("Imaginary part causes overflow") {
        Complex overflowReal(9999999999999999999.9, 3.0);
        Complex result = sinh(overflowReal);
        REQUIRE(real(result) == 0.0);
        REQUIRE(imag(result) == 0.0);
    }
    SECTION("Real part causes overflow") {
        Complex overflowReal(9999999999999999999999999999999999999999999999999999999999999999999999999999999999.9, 999999999999999999999999999999999999999999999999999999999999999999999999999999.0);
        Complex result = sinh(overflowReal);
        REQUIRE(real(result) >= 1000000.0);
    }
    SECTION("Zero test") {
        Complex zero(0.0,0.0);
        Complex result = sinh(zero);
        REQUIRE(real(zero) == 0.0);
        REQUIRE(imag(zero) == 0.0);
    }
    SECTION("Test case") {
        Complex test(3.0, 4.0);
        Complex result = sinh(test);
        REQUIRE(real(result) <= -6.54);
        REQUIRE(real(result) >= -6.55);
        REQUIRE(imag(result) <= -7.60);
        REQUIRE(imag(result) >= -7.62);
    }
}

TEST_CASE("Test cosh function", "[cosh]") {

    SECTION("Imaginary part causes overflow") {
        Complex overflowReal(99999999999999999999999999999999999999999999999999999999999999999999.9, 3.0);
        Complex result = cosh(overflowReal);
        REQUIRE(real(result) == 0.0);
        REQUIRE(imag(result) == 0.0);
    }
    SECTION("Real part causes overflow") {
        Complex overflowImag(9999999999999999999999999999999999999999999999999999999999999999.9,9999999999999999999999999999999999999999999999999999999999999999.9);
        Complex result = cosh(overflowImag);
        REQUIRE(real(result) >= 1000000.0);
    }
    SECTION("Zero test") {
        Complex zero(0.0,0.0);
        Complex result = cosh(zero);
        REQUIRE(real(result) == 1.0); 
        REQUIRE(imag(result) == 0.0);
    }
    SECTION("Test case") {
        Complex test(3.0, 4.0);
        Complex result = cosh(test);
        REQUIRE(real(result) <= -6.58);
        REQUIRE(real(result) >= -6.59);
        REQUIRE(imag(result) <= -7.58);
        REQUIRE(imag(result) >= -7.59);
    }
}

TEST_CASE("Test tanh function", "[tanh]") {

    SECTION("Zero test") {
        Complex zero(0.0,0.0);
        Complex result = tanh(zero);
        REQUIRE(real(result) == 0.0);
        REQUIRE(imag(result) == 0.0);
    }
    SECTION("Test case 1") {
        Complex test(3.0, 4.0);
        Complex result = tanh(test);
        REQUIRE(real(result) <= 1.01);
        REQUIRE(real(result) >= 1.0);
        REQUIRE(imag(result) <= 0.005);
        REQUIRE(imag(result) >= 0.004);
    }
    SECTION("Test case 2") {
        Complex test(4.0, 3.0);
        Complex result = tanh(test);
        REQUIRE(real(result) <= 1.0);
        REQUIRE(real(result) >= 0.99);
        REQUIRE(imag(result) >= -0.0002);
        REQUIRE(imag(result) <= -0.0001);
    }
}

TEST_CASE("Test exp Function", "[exp]") {

    SECTION("Overflow test") {
        Complex overflow(9999999999999999999.9, 9999999.9);
        Complex result = exp(overflow);
        REQUIRE((real(result) >= 1000000.0));
    }
    SECTION("Zeroeth Power Test") {
        Complex zero(0.0, 0.0);
        Complex result = exp(zero);
        REQUIRE(real(result) == 1.0);
    }
    SECTION("Test Case") {
        Complex num(3.0, 4.0);
        Complex result = exp(num);
        REQUIRE(real(result) >= -13.13);
        REQUIRE(real(result) <= -13.10);
        REQUIRE(imag(result) >= -15.21); 
        REQUIRE(imag(result) <= -15.20);
    }
}

TEST_CASE("Test norm", "[norm]"){

  SECTION("Norm of 1 + i"){
    Complex Complex11 = Complex(1,1);
    double result = norm(Complex11);
      REQUIRE(result == 2);

  }
  SECTION("Norm of 2 - 3i"){
    Complex Complex23 = Complex(2,-3);
    double result = norm(Complex23);
      REQUIRE(result == 13);

  }
  SECTION("Norm of 4000 + 4000i"){
    Complex Complex44 = Complex(4000,4000);
    double result = norm(Complex44);
    double ans =pow((4000 * pow(2,0.5)),2);
      //REQUIRE(result == pow((4000 * pow(2,0.5)),2));
      REQUIRE(abs(result -ans) < 0.001);

  }
  SECTION("Norm of 6.678+ 7.897i"){
    Complex Complex67 = Complex(6.678,7.897);
    double result = norm(Complex67);
    double ans = pow(10.3421,2);
      //REQUIRE(result == pow(10.3421,2));
    REQUIRE(abs(result -ans) < 0.001);
  }
  SECTION("Norm of 0.4567+ 0.9876i"){
    Complex Complex49 = Complex(0.4567,0.9876);
    double result = norm(Complex49);
    double ans = pow(1.08808,2);
      //REQUIRE(result == pow(1.08808,2));
    REQUIRE(abs(result -ans) < 0.001);

  }
}

TEST_CASE("Test sqrt", "[sqrt]"){
  SECTION("sqrt of 3 + 4i"){
    Complex Complex34 = Complex(3,4);
    Complex result = sqrt(Complex34);
      REQUIRE(real(result) == 2);
      REQUIRE(imag(result) == 1);
  }
  SECTION("sqrt of 0.12 + 0.16i"){
    Complex Complex26 = Complex(0.12,0.16);
    Complex result = sqrt(Complex26);
      REQUIRE(real(result) == 0.4);
      REQUIRE(imag(result) == 0.2);
  }
  SECTION("sqrt of 3000 + 4000i"){
    Complex Complex34 = Complex(3000,4000);
    Complex result = sqrt(Complex34);
      REQUIRE(real(result) == pow(4000,0.5));
      REQUIRE(imag(result) == pow(1000,0.5));
  }
  SECTION("sqrt of -3000 - 4000i"){
    Complex Complex34 = Complex(-3000,-4000);
    Complex result = sqrt(Complex34);
    REQUIRE(real(result) == pow(1000,0.5));
    REQUIRE(imag(result) == pow(4000,0.5));
  }
  SECTION("sqrt of -4.5 - 6i"){
    Complex Complex46 = Complex(-4.5,-6);
    Complex result = sqrt(Complex46);
    REQUIRE(real(result) == pow(1.5,0.5));
    REQUIRE(imag(result) == pow(6,0.5));
  }
}

TEST_CASE("Test add","[add]"){
  SECTION("add 3 + 2i and 2 + 3i"){
    Complex Complex32 = Complex(3,2);
    Complex Complex23 = Complex(2,3);
    Complex result = Complex32 + Complex23;
    REQUIRE(real(result) == 5);
    REQUIRE(imag(result) == 5);
  }
  SECTION("add -5 + 2i and 5 - 3i"){
    Complex Complex52 = Complex(-5,2);
    Complex Complex53 = Complex(5,-3);
    Complex result = Complex52 + Complex53;
    REQUIRE(real(result) == 0);
    REQUIRE(imag(result) == -1);
  }
  SECTION("add 1000 + 5567i and 9000 + 4567i"){
    Complex Complex15 = Complex(1000,5567);
    Complex Complex14 = Complex(9000,4567);
    Complex result = Complex15 + Complex14;
    REQUIRE(real(result) == 10000);
    REQUIRE(imag(result) == 10134);
  }
  SECTION("add 1.567 - 5.897i and 1.568 - 4.98i"){
    Complex Complex15 = Complex(1.567,-5.897);
    Complex Complex14 = Complex(1.568,-4.98);
    Complex result = Complex15 + Complex14;
    REQUIRE(real(result) == 3.135);
    REQUIRE(imag(result) == -10.877);
  }
  SECTION("add 0.3 - 0.2i and 0.1 + 0.4i"){
    Complex Complex32 = Complex(0.3,-0.2);
    Complex Complex23 = Complex(0.1,0.4);
    Complex result = Complex32 + Complex23;
    REQUIRE(real(result) == 0.4);
    REQUIRE(imag(result) == 0.2);
  }
}

// */
#endif  //ifndef CATCH_AMALGAMATED_CUSTOM_MAIN