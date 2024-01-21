#include <cmath>
#include "Complex.hpp"
using namespace std;

Complex sin(const Complex value) {
  double realPart = real(value);
  double imagPart = imag(value);
  double firstN =floor((sin(realPart)*cosh(imagPart)*10)+.5)/10;
  double secondN=floor((cos(realPart)*sinh(imagPart)*10)+.5)/10;;
  Complex *finishedS = new Complex(firstN,secondN);
  return *finishedS;
}