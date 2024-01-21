#include "Complex.hpp"
#include <cmath>

Complex cosh(const Complex num) {
    double solutionRe = cosh(num.re)*cos(num.im);
    double solutionIm = sinh(num.re)*sin(num.im);

    
    if (solutionRe == HUGE_VALF || solutionRe == HUGE_VALL) {
        solutionRe = 999999999.99;
        solutionIm = 0.0;
    }
    if (solutionIm == HUGE_VALF || solutionIm == HUGE_VALL) {
        solutionRe = 0.0;
        solutionIm = 0.0;
    }
    Complex solution(solutionRe, solutionIm);
    return solution;
}