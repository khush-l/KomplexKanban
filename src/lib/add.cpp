#include "Complex.hpp"


Complex Complex::operator+(const Complex& obj){
  double real = obj.re + re;
  double img = obj.im + im;
  Complex *newC = new Complex(real,img);
  return *newC;
}

Complex Complex::operator+(const double& obj){
  return Complex(obj + re, im);
}

void Complex::operator+=(const Complex& obj){
  double real = re + obj.re;
  double img = im + obj.im;
  re = real;
  im = img;
}

void Complex::operator+=(const double& obj){
  double real = re + obj;
  re = real;
}

