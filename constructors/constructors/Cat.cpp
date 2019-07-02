#include <iostream>
#include "Cat.h"

using namespace std;


Cat::Cat()
{
    cout << "Cat created." << endl;
    happy = true;
}

void Cat::speak()
{
    if (happy)
    {
        cout << "Meowww!" << endl;
    }
    else
    {
        cout << "Sssss!" << endl;
    }
}


Cat::~Cat()
{
    cout << "Cat object destroyed." << endl;
}
