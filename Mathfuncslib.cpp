#include "Mathfuncslib.h"
#include <stdexcept>

namespace Mathfuncs
{
    double Mymathfuncs::Add(double a, double b)
    {
        return a + b;
    }

    double Mymathfuncs::Subtract(double a, double b)
    {
        return a - b;
    }

    double Mymathfuncs::Multiply(double a, double b)
    {
        return a * b;
    }

    double Mymathfuncs::Divide(double a, double b)
    {
        if (b == 0)
            throw std::invalid_argument("Division by zero!");
        return a / b;
    }
}
