// first a akti string a "jessica" initialize krbo
// secend a akti string input nibo getline use kre
// third a akta count robot rakbo jar man 0;
// fourth a akta loop calabo abong s[i]==.........
// looper bahire ase output print krbo

#include <bits/stdc++.h>
using namespace std;
int main()
{
    string str = "Jessica";
    string str1;
    getline(cin, str1);
    stringstream ss(str1);
    string word;
    int flag = 0;
    while (ss >> word)
    {
        // cout << word << endl;
        if (str == word)
            flag = 1;
    }
    if (flag == 1)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
    return 0;
}