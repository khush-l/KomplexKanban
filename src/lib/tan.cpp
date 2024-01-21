#include <cmath>
#include "Complex.hpp"
using namespace std;

Complex tan(const Complex value) {
  double realP = real(value);
  double imageP = imag(value);
  double realF = floor(sin(2*realP)/(cos(2*realP)+cosh(2*imageP))+.5)/1;
  double imagF = floor(sinh(2*imageP)/(cos(2*realP)+cosh(2*imageP))+.5)/1;
  Complex finalTan = Complex(realF, imagF);
  return finalTan;
}