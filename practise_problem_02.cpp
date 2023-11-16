// kohli and dhoni
#include <bits/stdc++.h>
using namespace std;
class Cricketer
{
public:
    int jersey_no;
    char country[100];
};
int main()
{
    Cricketer *dhoni = new Cricketer;
    Cricketer *kohli = new Cricketer;
    *kohli = *dhoni;
    delete dhoni;
    // cin >> dhoni->jersey_no >> dhoni->country;
    // cout << dhoni->jersey_no << " " << dhoni->country;
    cin >> kohli->jersey_no >> kohli->country;
    cout << kohli->jersey_no << " " << kohli->country;
    return 0;
}