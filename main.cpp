/*
JARED EVANS DSD 2208

CS105_ASSESSMENT_2 SECTION_2 Question 3 Operator overloading
*/


#include <iostream>

#include "Complex.h"



int main()
{
	//create the first complex object
	Complex c1(3, 2);

	float realValue;
	float imaginaryValue;
	int choice;


	//main loop
	while (true)
	{
		//display to user
		std::cout << "Enter Complex Number: \n";
		std::cout << "Enter Real : ";
		//get user input for Real value
		std::cin >> realValue;
		//check if a user input failed 
		if (std::cin.fail())
		{
			//if failed we clear the input stream then ignore the invalid input
			std::cin.clear();
			std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
			//we tell the user it failed then restart loop
			std::cout << "Input Fail. Please Enter a Number for real Value.\n";
			continue;
		}
		
		std::cout << "Enter Imaginary: ";
		//get user input for Imaginary Value
		std::cin >> imaginaryValue;
		//check if a user input failed 
		if (std::cin.fail())
		{
			//if failed we clear the input stream then ignore the invalid input
			std::cin.clear();
			std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
			//we tell the user it failed then restart loop
			std::cout << "Input Fail. Please Enter a Number for imaginary Value.\n";
			continue;
		}

		//create the second complex object with user inputs
		Complex c2(realValue, imaginaryValue);

		//display a menu to user
		std::cout << "Choose operation from menu\n\n";
		std::cout << "-1. Addition\n";
		std::cout << "-2. Subtraction\n";
		std::cout << "-3. Mutiplication\n";
		std::cout << "-4. Exit\n";
		std::cout << "\nPlease Enter your choice: ";
		//get user input
		std::cin >> choice;


		switch (choice)
		{
		case 1:
		{
			//display complex numbers
			c1.display();
			c2.display();
			//add the two complex number togeter
			Complex add = c1 + c2;
			//display result
			add.display();
			break;
		}
		case 2:
		{
			//display complex numbers
			c1.display();
			c2.display();
			//subtract the two complex number togeter
			Complex sub = c1 - c2;
			//display result
			sub.display();
			break;
		}
		case 3: 
		{
			//display complex numbers
			c1.display();
			c2.display();
			//multiply the two complex number togeter
			Complex mult = c1 * c2;
			//display result
			mult.display();
			break;
		}
		case 4:
			//exit program
			return 0;		
					

		default:
			break;
		}
	}

	


	return 0;
}