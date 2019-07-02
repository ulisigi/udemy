#include <iostream>
#include <string>
using namespace std;

int main()
{
    string texts[] = { "one", "two", "three" };
    cout << sizeof(texts) / sizeof(string) << endl;

    string *pTexts = texts;

    for (int i = 0; i < sizeof(texts) / sizeof(string); i++)
    {
        cout << pTexts[i] << " " << flush;
    }

    cout << endl;

    for (int i = 0; i < sizeof(texts) / sizeof(string); i++)
    {
        cout << *pTexts << " " << flush;
        pTexts++;
    }

    return 0;
}