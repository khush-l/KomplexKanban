#include <iostream>
#include <cmath>
#include "Complex.hpp"
#include <cmath>
using namespace std;

Complex sqrt(const Complex complex){
  double a = complex.re;
  //double b = complex.im;
  double c = abs(complex); //whoever made this didn't implement it yet but like can u pls do that

  double newA = pow((c+a)/2,0.5);
  double newB = pow((c-a)/2, 0.5);

  Complex *result = new Complex(newA, newB);
  return *result;
}

