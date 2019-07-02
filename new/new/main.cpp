#include <iostream>
#include <string>
using namespace std;

class Animal
{
private:
    string name;

public:
    Animal()
    {
        cout << "Animal created." << endl;
    }

    Animal(const Animal& other) : name(other.name)
    {
        cout << "Animal created by copying." << endl;
    }

    ~Animal()
    {
        cout << "Destructor called." << endl;
    }

    void setName(string name)
    {
        this->name = name;
    }

    void speak() const { cout << "My name is: " << name << endl; };
};

Animal *createAnimal()
{
    Animal *pAnimal = new Animal();
    pAnimal->setName("Bertie");
    return pAnimal;
}

int main()
{
    Animal cat;
    cat.setName("Freddy");
    cat.speak();
    // destructor automatically called

    Animal *pCat1 = new Animal();
    pCat1->setName("Freddy");
    pCat1->speak();
    delete pCat1; 
    // manually deallocate memory when creating object with 'new'

    Animal *pFrog = createAnimal();
    pFrog->speak();
    delete pFrog;

    return 0;
}