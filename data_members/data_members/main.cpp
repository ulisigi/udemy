#include <iostream>
#include <string>
#include "Cat.h"

using namespace std;

int main()
{
    Cat jim;
    jim.makeHappy();
    jim.speak();

    Cat bob;
    bob.makeSad();
    bob.speak();
    
    return 0;
}