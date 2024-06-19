#pragma once
#include "animal.h"
class Dog :
    public animal
{
public:
    enum Breed
    {
        HUSKY,
        RETRIEVER,
        CHIHUAHUA
    };

    void Roll();
    void SetBreed(Breed breed);
    Breed GetBreed() const;

private:
    Breed mBreed;
};

