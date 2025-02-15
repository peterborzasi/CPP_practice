#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <string>
#include <cctype>

void printOddOrEven(int number)
{
	if (number % 2 == 0)
	{
		printf("EVEN\n");
	}
	else
	{
		printf("ODD\n");
	}
}

int main(int argc, char *argv[])
{
	int number = 0;

	// What is this program expected to do?
	// - Shows whether an argument is an ODD or EVEN number.
	// How to launch it?
	// - Execute the binary and pass a parameter to it?
	// - E.g. Open CMD in bin/Debug or bin/Release
	//		  02_odd_even.exe 1		=> Output: ODD
	//		  02_odd_even.exe 2		=> Output: EVEN
	//		  02_odd_even.exe 		=> Output: No program arguments found.
	//		  02_odd_even.exe ABC   => Undefined output (do whatever).
	//		

	// Make sure there are some program arguments available.
	if (argc <= 1)
	{
		printf("No program arguments found.\n");
	}
	//check if argument is a number
	else if (std::atoi(argv[1]) == 0)
	{
		printf("NAN");
	}
	else
	{
		// Get the first argument
		std::string argumentAsString = argv[1];
		const char* argumentAsCharArray = argumentAsString.c_str();
		number = std::stoi(argumentAsString);
		printOddOrEven(number);
	}

	return 0;
}