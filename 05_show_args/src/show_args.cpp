﻿#include <iostream>

int main(int argc, char *argv[])
{
    std::cout << "Output:" << std::endl;
    for (int i = 1; i < argc; ++i)
	{
        std::cout << argv[i] << std::endl;
    }
}