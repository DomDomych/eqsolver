#pragma once

class Complex
{
    private:
        double re_=0;
        double im_=0;

    public:
        Complex(double real,double imag);

        double real() const;
        double imag() const;

        Complex operator+(const Complex& other) const;
        Complex operator-(const Complex& other) const;
        Complex operator*(const Complex& other) const;
        Complex operator/(const Complex& other) const;

        bool operator==(const Complex& other) const;
        bool operator!=(const Complex& other) const;
};