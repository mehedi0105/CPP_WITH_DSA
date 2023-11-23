
// #include <iostream>
// using namespace std;
// main()
// {
//     int index;
//     string my_str = "Hello...Here all Hello will be replaced";
//     string sub_str = "ABCDE";
//     cout << "Initial String :" << my_str << endl;
//     // replace all Hello with welcome
//     while ((index = my_str.find("Hello")) != string::npos)
//     {                                                     // for each location where Hello is found
//         my_str.replace(index, sub_str.length(), sub_str); // remove and replace from that position
//     }
//     cout << "Final String :" << my_str;
// }

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int testcase;
    cin >> testcase;
    while (testcase--)
    {
        string s, x;
        cin >> s >> x;
        int cnt = 0;
        while ((cnt = s.find(x)) != -1)
        {
            s.replace(cnt, x.size(), "#");
        }
        cout << s << endl;
    }

    return 0;
}