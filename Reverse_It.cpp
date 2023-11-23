
//     First line will contain N.
//     Next N lines will contain nm, cls, s, and id respectively.

// Constraints

//     1 <= N <= 100
//     1 <= |nm| <= 100 and will contain only English alphabets.
//     1 <= cls <= 10
//     'A' <= s <= 'Z'
//     1 <= id <= 100
#include <bits/stdc++.h>
using namespace std;
class Student
{
public:
    string nm;
    int cls;
    string s;
    int id;
};
int main()
{
    int n;
    cin >> n;
    Student arr[n];
    for (int i = 0; i < n; i++)
        cin >> arr[i].nm >> arr[i].cls >> arr[i].s >> arr[i].id;
    int i = 0, j = n - 1;
    while (i < j)
    {
        string temp = arr[i].s;
        arr[i].s = arr[j].s;
        arr[j].s = temp;
        i++;
        j--;
    }
    for (int i = 0; i < n; i++)
        cout << arr[i].nm << " " << arr[i].cls << " " << arr[i].s << " " << arr[i].id << endl;
    return 0;
}