#pragma once
#include <iostream>

class Complex
{
public:
	Complex(float real_ = 0, float imaginary_ = 0);

	Complex operator+(const Complex& other) const;
	Complex operator-(const Complex& other) const;
	Complex operator*(const Complex& other) const;
	
	void display() const;

private:
	
	float real;

	float imaginary;

};

