#include "division.h"

DivisionResult Division::divide() {
  if (fraction.denominator == 0L) throw DivisionByZero();

  auto result = DivisionResult{
    fraction.numerator / fraction.denominator, 
    fraction.numerator % fraction.denominator
  };

  return result;
}
