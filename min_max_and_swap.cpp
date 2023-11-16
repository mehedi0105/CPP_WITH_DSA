// Liabray function
#include <iostream>
// max and minimum header file
#include <algorithm>
// swapping ar jnno headerfile
#include <utility>
using namespace std;
int main()
{ /*
     int num1, num2, num3, num4;
     cin >> num1 >> num2 >> num3 >> num4;
     // int minimum = min(num1, num2);
     // int maximum = max(num1, num2);
     // cout << maximum << endl
     //      << minimum;
     // jdi 2 ar odik sonkhar mdde max and min bahir krte hoy tbe
     int minimum = min({num1, num2, num3, num4});
     int maximum = max({num1, num2, num3, num4});
     cout << "max = " << maximum << " "
          << "min = " << minimum;
          */

    // swaping
    int number1, number2;
    char number1, number2;
    cin >> number1 >> number2;
    swap(number1, number2);
    cout << number1 << " " << number2;
    return 0;
}