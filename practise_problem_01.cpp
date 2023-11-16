// class
#include <bits/stdc++.h>
using namespace std;
// name;
// roll;
// section;
// math_marks;
// cls;

class Student
{
    // access definear
public:
    char name[100];
    int roll;
    char section[100];
    int math_marks;
    int cls;
};
int main()
{
    Student fakir, jahir, karim;
    cin.getline(fakir.name, 100);
    cin >> fakir.roll >> fakir.section >> fakir.math_marks >> fakir.cls;
    getchar();
    cin.getline(jahir.name, 100);
    cin >> jahir.roll >> jahir.section >> jahir.math_marks >> jahir.cls;
    getchar();
    cin.getline(karim.name, 100);
    cin >> karim.roll >> karim.section >> karim.math_marks >> karim.cls;

    // one word name
    //  cin >> fakir.name >> fakir.roll >> fakir.section >> fakir.math_marks >> fakir.cls;
    //  cin >> jahir.name >> jahir.roll >> jahir.section >> jahir.math_marks >> jahir.cls;
    //  cin >> karim.name >> karim.roll >> karim.section >> karim.math_marks >> karim.cls;
    //  output
    cout << fakir.name << " " << fakir.roll << " " << fakir.section << " "
         << fakir.math_marks << " " << fakir.cls << endl;
    // jahir
    cout << jahir.name << " " << jahir.roll << " " << jahir.section << " "
         << jahir.math_marks << " " << jahir.cls << endl;
    cout << karim.name << " " << karim.roll << " " << karim.section << " "
         << karim.math_marks << " " << karim.cls << endl;
    // math result compare
    // if (fakir.math_marks > jahir.math_marks && fakir.math_marks > karim.math_marks)
    //     cout << fakir.name << endl;
    // else if (jahir.math_marks > fakir.math_marks && jahir.math_marks > karim.math_marks)
    //     cout << jahir.name << endl;
    // else
    //     cout << karim.name << endl;
    return 0;
}