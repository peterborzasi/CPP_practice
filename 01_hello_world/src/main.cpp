#include <iostream>

void printMessageFor(const char* name)
{
	std::cout << "Hello from [" << name << "]" << std::endl;
}

void printMessage()
{
	printMessageFor("Ionut Verzea");
	printMessageFor("CPP class");
}

int main()
{
	printMessage();
}