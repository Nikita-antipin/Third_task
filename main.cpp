#include <iostream>
#include "Rational.h"



int main()
{
    Rational r1(1, 2);
    Rational r2(1, 3);

    std::cout << (r1 < r2) << std::endl;

}