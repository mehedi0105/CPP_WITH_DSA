#include <iostream>
// string header
#include <string>
// #include <istream>
using namespace std;
int main()
{
    char s[100];
    int b;
    // space cara input nibe
    //  cin >> s;
    //  space sho input nibe
    cin >> b;
    // akta space ba man niye ney getchar
    getchar();
    cin.getline(s, 100);
    cout << s << endl;
    cout << b;

    return 0;
}
// #include <bits/stdc++h.> //alrounder