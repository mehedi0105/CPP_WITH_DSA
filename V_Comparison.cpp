// compration
#include <bits/stdc++.h>
using namespace std;
int main()
{
    char s;
    int num1, num2;
    cin >> num1 >> s >> num2;
    // cout << num1 << " " << s << " " << num2;
    switch (s)
    {
    case '>':
        if (num1 > num2)
            cout << "Right" << endl;
        else
            cout << "Wrong" << endl;
        break;
    case '<':
        if (num1 < num2)
            cout << "Right" << endl;
        else
            cout << "Wrong" << endl;
        break;
    case '=':
        if (num1 == num2)
            cout << "Right" << endl;
        else
            cout << "Wrong" << endl;
        break;
    }
    return 0;
}