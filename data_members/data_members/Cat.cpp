#include <iostream>
#include "Cat.h"

using namespace std;


Cat::Cat()
{
}

void Cat::speak()
{
    if (happy)
    {
        cout << "Meowww!" << endl;
    }
    else
    {
        cout << "Ssssss!" << endl;
    }
}

void Cat::makeHappy()
{
    happy = true;
}

void Cat::makeSad()
{
    happy = false;
}


Cat::~Cat()
{
}
