// i smallest number
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int testcase;
    cin >> testcase;
    while (testcase--)
    {
        int num1;
        cin >> num1;
        long long arr[num1];
        for (int i = 0; i < num1; i++)
            cin >> arr[i];
        // for (int i = 0; i < num1; i++)
        //     cout << arr[i] << " ";
        int mn = INT_MAX;
        for (int i = 0; i < num1 - 1; i++)
        {
            for (int j = i + 1; j < num1; j++)
            {
                int result = arr[i] + arr[j] + (j + 1) - (i + 1);
                mn = min(mn, result);
                // cout << result << " ";
            }
        }
        cout << mn << endl;
    }

    return 0;
}