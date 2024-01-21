#include "Complex.hpp"

Complex tanh(const Complex num) {
    Complex solution = sinh(num)/cosh(num);
    return solution;
}