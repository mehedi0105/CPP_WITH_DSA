// libray function
#include <iostream>
using namespace std;
// code body
int main()
{
    // value intial
    int number1;
    char chareckter;
    // input value
    cin >> number1 >> chareckter;
    // cin >> chareckter;
    // aski value
    // int aski = chareckter;
    // aski value with type casting
    // long long int=int
    // char=int
    // double=int
    long long int num1 = (long long int)(number1);
    // output value
    // cout << number1 << " " << chareckter;
    // cout << int(chareckter);
    cout << num1;
    return 0;
}