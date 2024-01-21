#include "Complex.hpp"
#include <cmath>

double arg(const Complex& value) {
    return atan(value.im/value.re);
}