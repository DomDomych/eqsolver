#pragma once

#include "complex.hpp"
#include <vector>

class Equation
{
public: 
    virtual ~Equation() = default;

    virtual Complex operator()(const Complex& x)const = 0;
    virtual std::vector<Complex> solve() const = 0;
    
};