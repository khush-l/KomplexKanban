#include "Complex.hpp"



Complex Complex::operator/(const Complex& obj) {
  double newRe = ((re * obj.re + im * obj.im)/(obj.re * obj.re + obj.im * obj.im));
  double newIm = ((im * obj.re - re * obj.im)/(obj.re * obj.re + obj.im * obj.im));
  return Complex(newRe, newIm);
}

Complex Complex::operator/(const double& obj) {
  return Complex(re/obj, im/obj);
}

void Complex::operator/=(const Complex& obj) {
  re = ((re * obj.re + im * obj.im)/(obj.re * obj.re + obj.im * obj.im));
  im = ((im * obj.re - re * obj.im)/(obj.re * obj.re + obj.im * obj.im));
}

void Complex::operator/=(const double& obj) {
  re = re/obj;
  im = im/obj;
}
