#include <iostream>
#include <string>
#include "Counter.h"

int main()
{
	std::string choice;
	int initCount{ 1 };

	while (!((choice == "yes") || (choice == "no")))
	{
		std::cout << "Specify the initial value of the counter? (yes, no) ";
		std::cin >> choice;

		if (choice == "yes")
		{
			std::cout << "Initial value of the counter : ";
			std::cin >> initCount;
		}
	}

	Counter ctr(initCount);

	while (choice != "x")
	{
		std::cout << "Enter the command ('+', '-', '=', 'x') : ";
		std::cin >> choice;

		if (choice == "+") ctr.up();
		if (choice == "-") ctr.down();
		if (choice == "=") std::cout << ctr.get() << std::endl;
	}

	std::cout << "Good luck!";

	return EXIT_SUCCESS;
}

