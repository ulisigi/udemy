#include <iostream>
using namespace std;

/*
+
-
/
+=
-=
/=
*=
%
%=
precedence
*/

int main()
{
    double value1 = (double)7 / 2; // casting;
    cout << value1 << endl;

    int value2 = (int)7.3;
    cout << value2 << endl;

    int value3 = 8;
    value3 += 1; // value3 = value3 + 1 or value3++
    cout << value3 << endl;

    int value4 = 10;
    value4 /= 5; // value4 = value4/5;
    cout << value4 << endl;

    int value5 = 13 % 5;
    cout << value5 << endl;

    double equation = 5.3 / 4 + 2 * 6; // use parentheses for clarity
    cout << equation << endl;

    return 0;
}