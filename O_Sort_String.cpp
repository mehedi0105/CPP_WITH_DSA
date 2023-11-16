// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int n;
//     cin >> n;
//     char str[n];
//     // for (int i = 0; i < n; i++)
//     cin >> str;
//     // for (int i = 0; i < n; i++)
//     // cout << str;
//     sort(str, str + n);

//     cout << str;

//     return 0;
// }

// friquency arry
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    char str[n];
    cin >> str;
    // cout << str << endl;
    int cnt[26] = {0};
    for (int i = 0; i < n; i++)
    {
        int val = str[i] - 97;
        cnt[val]++;
    }
    for (int i = 0; i < 26; i++)
    {
        // cout << char(i + 97) << " - " << cnt[i] << endl;
        if (cnt[i] != 0)
        {
            cout << char(i + 97);
        }
    }
    return 0;
}