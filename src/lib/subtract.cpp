#include <cmath>
#include "Complex.hpp"
using namespace std;

Complex Complex::operator -(const Complex &value) {
  double realPart= re-real(value);
  double imagPart = im-imag(value);
  Complex *finalC = new Complex(realPart, imagPart);
  return *finalC;
}
Complex Complex::operator-(const double& value) {
  return Complex(re-value, im);
}

void Complex::operator-=(const Complex& value) {
  double realPart = re-value.re;
  double imagPart = im-value.im;
  re = realPart;
  im = imagPart;
}

void Complex::operator-=(const double& value) {
  double realPart= re-value;
  re=realPart;
}