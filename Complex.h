/*
JARED EVANS DSD 2208

CS105_ASSESSMENT_2 SECTION_2 Question 3 Operator overloading
*/




#pragma once
#include <iostream>

class Complex
{
public:
	//constuctor
	Complex(float real_ = 0, float imaginary_ = 0);

	//overloading operator's
	//op for Addsion
	Complex operator+(const Complex& other) const;
	//op for subtractsion
	Complex operator-(const Complex& other) const;
	//op for muitply
	Complex operator*(const Complex& other) const;
	
	//to display the real and imag
	void display() const;

private:
	
	float real;

	float imaginary;

};

