#include <iostream>
#include <string>

using namespace std;

int main()
{
    char text[] = "hello";
    for (int i = 0; i < sizeof(text); i++)
    {
        cout << i << ": " << text[i] << endl;
    }
    


    return 0;
}