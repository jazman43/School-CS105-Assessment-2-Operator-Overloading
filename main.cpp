#include <iostream>

#include "Complex.h"



int main()
{
	Complex c1(3, 2);

	float realValue;
	float imaginaryValue;
	int choice;



	while (true)
	{
		std::cout << "Enter Complex Number: \n";
		std::cout << "Enter Real : ";
		std::cin >> realValue;
		std::cout << "Enter Imaginary: ";
		std::cin >> imaginaryValue;
		Complex c2(realValue, imaginaryValue);

		std::cout << "Choose operation from menu\n\n";
		std::cout << "-1. Addition\n";
		std::cout << "-2. Subtraction\n";
		std::cout << "-3. Mutiplication\n";
		std::cout << "-4. Exit\n";
		std::cout << "\nPlease Enter your choice: ";
		std::cin >> choice;


		switch (choice)
		{
		case 1:
		{
			c1.display();
			c2.display();
			Complex add = c1 + c2;
			add.display();
			break;
		}
		case 2:
		{
			c1.display();
			c2.display();
			Complex sub = c1 - c2;
			sub.display();
			break;
		}
		case 3: 
		{
			c1.display();
			c2.display();
			Complex mult = c1 * c2;
			mult.display();
			break;
		}
		case 4:
			return 0;
			break;

		default:
			break;
		}
	}

	


	return 0;
}