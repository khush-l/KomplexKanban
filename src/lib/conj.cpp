#include "Complex.hpp"

Complex conj(const Complex complexNum) {
    Complex newComplex(complexNum.re, complexNum.im*-1);
    return newComplex;
}