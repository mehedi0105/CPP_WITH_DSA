#include <bits/stdc++.h>
using namespace std;
int main()
{
    char a, b;
    int num1, num2, num3;
    cin >> num1 >> a >> num2 >> b >> num3;
    // cout << num1 << " " << a << " " << num2 << " " << b << " " << num3 << endl;
    switch (a)
    {
    case '+':
        if (num1 + num2 == num3)
            cout << "Yes" << endl;
        else
            cout << num1 + num2 << endl;
        break;
    case '-':
        if (num1 - num2 == num3)
            cout << "Yes" << endl;
        else
            cout << num1 - num2 << endl;
        break;
    case '*':
        if (num1 * num2 == num3)
            cout << "Yes" << endl;
        else
            cout << num1 * num2 << endl;
        break;
    }
    return 0;
}