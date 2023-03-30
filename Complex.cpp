/*
JARED EVANS DSD 2208

CS105_ASSESSMENT_2 SECTION_2 Question 3 Operator overloading
*/





#include "Complex.h"


Complex::Complex(float real_, float imaginary_): real(real_), imaginary(imaginary_){}


Complex Complex::operator+(const Complex& other) const
{
    //returns real + real and imaginary + imaginary. we add one real with another same with imaginary
    return Complex(real + other.real, imaginary + other.imaginary);
}

Complex Complex::operator-(const Complex& other) const
{
    //returns real - real and imaginary - imaginary. we sub one real with another same with imaginary 
    return Complex(real - other.real, imaginary - other.imaginary);
}

Complex Complex::operator*(const Complex& other) const
{
    //we create a temp real(r)and imaginary(i)
    //(r) we times one real with another and we sub that from the imaginary times with another
    float r = real * other.real - imaginary * other.imaginary;
    //(r) we times one real with an imaginary and we add that from the imaginary times with a real
    float i = real * other.imaginary + imaginary * other.real;

    // then returns the result
    return Complex(r , i);
}

void Complex::display() const
{
    //displays the real and imaginary to user
    std::cout << "( " << real << " + " << imaginary << "i)\n";
}
