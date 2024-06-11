#include "string.h"

void String::Print()
{
	for (int i{}; i < string_size; i++) 
	{
		std::cout << mString[i];
	}
	std::cout << std::endl;
}
