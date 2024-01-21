#include <cstdlib>
#include <iostream>
#include "Complex.h"
#include "fac.h"

#define PI 3.1415926538979323846
#define EULER 2.71828182845904523536

int main () {
    std::cout << "Hello World" << std::endl;

    std::cout << "Factorial test " << Factorial(5) << std::endl;

    Complex a(5.0,6.0),b;

    std::cout << "Enter b: ";
    std::cin >> b;

    std::cout << "a = " << a << "\n";
    std::cout << "b = " << b << "\n";

    std::cout << "a + b = " << a + b << "\n";
    std::cout << "a * b = " << a * b << "\n";
    std::cout << "a / b = " << a / b << "\n";
    std::cout << "|a| = "   << abs(a) << "\n";
    std::cout << "complex conjugate of a = " << conj(a) << "\n";
    std::cout << "norm of a = " << norm(a) << "\n";
    std::cout << "abs of a = " << abs(a) << "\n";
    std::cout << "exp(a) = " << exp(a) << "\n";

    Complex j = Complex(0.0,1.0);
    Complex z1 = 1+2*j;
    Complex z2 = 2+3*j;

    z1 += z2;

    cout << "Complex number example: " << z1 << "\n";
    cout << "The conjugate is: " << conj(z1) << "\n";
    cout << "The magnitude is: " << abs(z1) << "\n";
    cout << "The phase in Radians is: " << arg(z1) << "\n";
    cout << "The norm is: " << norm(z1) << "\n";
    cout << "The sqrt is: " << sqrt(z1) << "\n";
    cout << "The natural log is: " << log(z1) << "\n";
    cout << "The sin is: " << sin(z1) << "\n";

    /* other function testing */
    /*
    cout << "\n------ OTHER FUNCTION TESTING ------\n\n";
    cout << "The real part is: " << real(a) << "\n";
    cout << "The imaginary part is: " << imag(a) << "\n";
    cout << "The log (base 10) is: " << log10(a) << "\n";
    cout << "a^b is: " << pow(a, b) << "\n";
    cout << "a^2.7 is: " << pow(a, 2.7) << "\n";
    cout << "2.7^a is: " << pow(2.7, a) << "\n";
    cout << "The cube root is: " << root(a, 3) << "\n\n";

    cout << "(a == b) is: " << ((a==b) ? "true" : "false") << "\n";
    cout << "(a != b) is: " << ((a!=b) ? "true" : "false") << "\n\n";

    cout << "sin(a) = " << sin(a) << "\n";
    cout << "cos(a) = " << cos(a) << "\n";
    cout << "tan(a) = " << tan(a) << "\n\n";

    cout << "The asin is: " << asin(a) << "\n";
    cout << "The acos is: " << acos(a) << "\n";
    cout << "The atan is: " << atan(a) << "\n";
    cout << "The acsc is: " << acsc(a) << "\n";
    cout << "The asec is: " << asec(a) << "\n";
    cout << "The acot is: " << acot(a) << "\n\n";

    cout << "The asinh is:" << asinh(a) << "\n";
    cout << "The acosh is: " << acosh(a) << "\n";
    cout << "Rounded to 2 decimal places: " << acosh(a).rnd(2) << "\n";
    cout << "The atanh is: " << atanh(a) << "\n";
    cout << "The acsch is: " << acsch(a) << "\n";
    cout << "The asech is: " << asech(a) << "\n";
    cout << "The acoth is: " << acoth(a) << "\n";
    cout << "The complex number rotated by pi/6 radians is: " << rotate(a, PI/6) << "\n";
    */
}