#include <cmath>
#include "Complex.hpp"
using namespace std;

Complex Complex::operator *(const Complex &value) {
  double real1=real(value);
  double imag1=imag(value);
  double newR = real1*re;
  double newI = (real1*im)+(imag1*re);
  double newR2 = imag1*im*-1;
  double finalR = newR+newR2;
  Complex *finalComplex = new Complex(finalR, newI);
  return *finalComplex;
}

Complex Complex::operator*(const double& value) {
  return Complex(re*value, im*value);
}

void Complex::operator*=(const Complex& value) {
  double real1=real(value);
  double imag1=imag(value);
  double newR = real1*re;
  double newI = (real1*im)+(imag1*re);
  double newR2 = imag1*im*-1;
  re = newR+newR2;
  im=newI;
}

void Complex::operator*=(const double& value) {
  re = re*value;
  im = im*value;
}