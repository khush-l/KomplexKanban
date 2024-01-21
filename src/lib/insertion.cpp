#include <cmath>
#include "Complex.hpp"
#include <iostream>
using namespace std;

ostream& operator << (ostream& out, const Complex& value) {
  out << value.re << " + " << value.im << "i" << endl;
  return out;
}