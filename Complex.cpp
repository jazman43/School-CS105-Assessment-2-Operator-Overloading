#include "Complex.h"

Complex::Complex(float real_, float imaginary_): real(real_), imaginary(imaginary_){}

Complex Complex::operator+(const Complex& other) const
{
    return Complex(real + other.real, imaginary + other.imaginary);
}

Complex Complex::operator-(const Complex& other) const
{
    return Complex(real - other.real, imaginary - other.imaginary);
}

Complex Complex::operator*(const Complex& other) const
{
    float r = real * other.real - imaginary * other.imaginary;
    float i = real * other.imaginary + imaginary * other.real;


    return Complex(r , i);
}

void Complex::display() const
{
    std::cout << "( " << real << " + " << imaginary << "i)\n";
}
