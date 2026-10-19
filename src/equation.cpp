#include "equation.hpp"
#include <stdexcept>

LinearEquation::LinearEquation(const Complex& a,const Complex& b): 
    a_(a),b_(b)
{
    if(a_== Complex(0,0) && b_!=Complex(0,0))
    {
        throw std::invalid_arg
    }
}