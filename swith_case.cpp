// libray function
#include <iostream>
using namespace std;
int main()
{
    int num1;
    cin >> num1;
    switch (num1)
    {
    case 1 ... 5:
        cout << " number in 1 to 5 ar mdde" << endl;
        break;
    case 6 ... 10:
        cout << "number in 6 to 10 ar mde" << endl;
        break;
    case 11 ... 15:
        cout << "number to 11 to 15 ar mdde" << endl;
        break;
    default:
        cout << "numer is out of rule" << endl;
        break;
        return 0;
    }
}