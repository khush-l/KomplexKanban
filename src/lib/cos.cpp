#include "Complex.hpp"
#include <cmath>

Complex cos(const Complex obj) {
  Complex temp = Complex(cos(obj.re) * cosh(obj.im), -1 * sin(obj.re) * sinh(obj.im));
  return temp;
}