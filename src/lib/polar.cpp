#include "Complex.hpp"
#include <cmath>
#include <ostream>
using namespace std;

Complex polar(double r, double deg) {
  Complex temp = Complex(r * cos(deg), r * sin(deg));
    return temp;
}