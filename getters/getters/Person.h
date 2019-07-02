#pragma once
#include <iostream>
#include <string>

using namespace std;

class Person
{
private:
    string name;

public:
    Person();

    string toString();
    void setName(string newName);
    string getName();

    ~Person();
};

