#include <iostream>
using namespace std;

#ifndef Complex_h
#define Complex_h

class Complex {
  public:

    double re;
    double im;

   
    Complex();
    Complex(double real, double imag);




    friend ostream& operator << (ostream&, const Complex&);
    friend istream& operator >> (istream&, Complex&);
    Complex operator+(const double&);
    Complex operator+(const Complex&);
    Complex operator-(const double&);
    Complex operator-(const Complex&);
    Complex operator*(const double&);
    Complex operator*(const Complex&);
    Complex operator/(const double&);
    Complex operator/(const Complex&);

    void operator+=(const double&);
    void operator+=(const Complex&);
    void operator-=(const double&);
    void operator-=(const Complex&);
    void operator*=(const double&);
    void operator*=(const Complex&);
    void operator/=(const double&);
    void operator/=(const Complex&);

    bool operator==(const double&);
    bool operator==(const Complex &num);
    bool operator!=(const double&);
    bool operator!=(const Complex &num);
    friend Complex cos(const Complex num);
    friend Complex cosh(const Complex num);
    friend Complex sin(const Complex num);
    friend Complex sinh(const Complex num);
    friend Complex tan(const Complex num);
    friend Complex tanh(const Complex num);

    friend double abs(const Complex obj);
    friend Complex conj(const Complex complexNum);
    friend double real(const Complex& value);
    friend double imag(const Complex& value);
    friend double arg(const Complex& value);
    friend double norm(const Complex num);

    friend Complex sinh(const Complex num);
    friend Complex cosh(const Complex num);
    friend Complex tanh(const Complex num);

    friend Complex exp(const Complex num);
    friend Complex sqrt(const Complex num);
  friend Complex log(const Complex num);
    friend Complex polar(double r, double deg);

};

#endif
