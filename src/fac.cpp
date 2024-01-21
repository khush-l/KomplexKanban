#include "fac.h"

/* Simple test to try catch2 */
unsigned int Factorial( unsigned int number ) {
    return number <= 1 ? number : Factorial(number-1)*number;
}