#include "Complex.hpp"

bool Complex::operator==(const Complex& rhs) {
  return ((re == rhs.re) && (im == rhs.im));
}

bool Complex::operator==(const double& rhs) {
  return (re == rhs);
}

bool Complex::operator!=(const Complex& rhs) {
  return ((re != rhs.re) || (im != rhs.im));
}

bool Complex::operator!=(const double& rhs) {
  return (re != rhs);
}