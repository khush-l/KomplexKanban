#include "Complex.hpp"
#include <cmath>


double abs(const Complex obj) {
  return sqrt(pow(obj.re, 2) + pow(obj.im, 2));
}
