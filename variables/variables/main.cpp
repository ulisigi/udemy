#include <iostream>
using namespace std;

int main()
{
    int numberCats = 5;
    int numberDogs = 7;
    int numberAnimals = numberCats + numberDogs;

    cout << "Number of cats: " << numberCats << endl;
    cout << "Number of dogs: " << numberDogs << endl;
    cout << "Total number of animals: " << numberAnimals << endl;

    cout << "Another dog acquired!" << endl;

    numberDogs = numberDogs + 1;

    cout << "Number of dogs: " << numberDogs << endl;

    return 0;
}