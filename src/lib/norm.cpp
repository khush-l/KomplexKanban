#include <iostream>
#include <cmath>
#include "Complex.hpp"

using namespace std;

double norm(const Complex obj){
  double real = pow(obj.re,2);
  double imag = pow(obj.im,2);
  return real + imag;
}
