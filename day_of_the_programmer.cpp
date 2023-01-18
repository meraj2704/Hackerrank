#include <bits/stdc++.h>
using namespace std;
int main()
{
    int year;
    cin >> year;
    ostringstream s;
    s << year;
    string fs = "";
    if(year == 1918)
    {
        fs+="26.09.1918";
    }
    if(year <=1917 && year >=1700)
    {
        if(year %4==0)fs += "12.09." + s.str();
        else fs += "13.09." + s.str();
    }
    else{

    if (year % 400 == 0)
    {
        fs += "12.09." + s.str();
    }
    else if (year % 100 == 0)
    {

        fs += "13.09." + s.str();
    }
    else if (year % 4 == 0)
        fs += "12.09." + s.str();

    else
    {
        fs += "13.09." + s.str();
    }
    }
    cout << fs << endl;
}


