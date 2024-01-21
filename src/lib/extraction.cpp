#include <cmath>
#include "Complex.hpp"
#include <iostream>
using namespace std;

istream& operator >> (istream&in, Complex& value) {
  char opening_paren, comma, closing_paren;
  in >> opening_paren >> value.re >> comma >> value.im >> closing_paren;
  return in;
}