#include <iostream>
#include <string>
using namespace std;

int main() {
    const string password = "hello";
    string input;

    do
    {
        cout << "Enter your password > " << flush;
        cin >> input;

        if (input != password)
        {
            cout << "Access denied." << endl;
        }
    } while (input != password);

    cout << "Access granted." << endl;

    
    return 0;
}