#include "Complex.hpp"
#include <cmath>

Complex log(const Complex num) {
    double re = log(abs(num));
    double im = arg(num);
    Complex ret(re, im);
    return ret;
}