// palindrome number with two pointer teqniq
#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long n;
    cin >> n;
    long long arr[n];
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    int flag = 1;
    int i = 0, j = n - 1;

    while (i < j)
    {
        if (arr[i] != arr[j])
            flag = 0;
        i++;
        j--;
    }

    if (flag == 1)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;

    return 0;
}