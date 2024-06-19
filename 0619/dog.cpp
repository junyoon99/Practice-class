#include <iostream>
#include "dog.h"

void Dog::Roll()
{
	std::cout << "Rolling..." << std::endl;
}

void Dog::SetBreed(Breed breed)
{
	mBreed = breed;
}

Dog::Breed Dog::GetBreed() const
{
	return Breed();
}
