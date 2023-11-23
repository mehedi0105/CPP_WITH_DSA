// You will be given data for N students,
// where each student will have a name (nm), class (cls), section (s), student ID (id),
// math marks (math_marks), and English marks (eng_marks).

// Your task is to sort the students data according to the eng_marks in descending order.
// If multiple student have the same eng_marks then sort them according to the math_marks in descending order.
// If multiple student have the same math_marks then sort them accoding to the id in ascending
// order as the id will be unique.

// Input Format

//     First line will contain N.
//     Next N lines will contain nm, cls, s, id, math_marks and eng_marks respectively.

// Constraints

//     1 <= N <= 1000
//     1 <= |nm| <= 100 and will contain only English alphabets.
//     1 <= cls <= 10
//     'A' <= s <= 'Z'
//     1 <= id <= 10^9
//     0 <= math_marks, eng_marks <= 100

// Output Format

//     Output the data in sorted order as instructed.

/////
#include <bits/stdc++.h>
using namespace std;
class Student
{
public:
    string nm;
    int cls;
    string s;
    long long id;
    int math_marks;
    int eng_marks;
};
bool cmp(Student a, Student b)
{

    if (a.eng_marks == b.eng_marks)
    {
        if (a.math_marks == b.math_marks)
            return a.id < b.id;
        else
            return a.math_marks > b.math_marks;
    }
    else
        return a.eng_marks > b.eng_marks;
}
int main()
{
    int N;
    cin >> N;
    Student arr[N];
    for (int i = 0; i < N; i++)
        cin >> arr[i].nm >> arr[i].cls >> arr[i].s >> arr[i].id >> arr[i].math_marks >> arr[i].eng_marks;
    sort(arr, arr + N, cmp);
    for (int i = 0; i < N; i++)
        cout
            << arr[i].nm << " " << arr[i].cls << " " << arr[i].s << " "
            << arr[i].id << " " << arr[i].math_marks << " " << arr[i].eng_marks << endl;
    return 0;
}