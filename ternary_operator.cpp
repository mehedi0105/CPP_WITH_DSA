// heder file
#include <iostream>
using namespace std;
int main()
{
    int num1;
    cin >> num1;
    // ternary operator
    //  ? jdi condition right hoy tbe ki print hbe
    //  : jdi condition false hoy tbe ki print hebe
    (num1 % 2 != 0) ? cout << "Odd" : cout << "Even";
    return 0;
}