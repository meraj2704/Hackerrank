#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    string s;
    cin >> s;

    string numbers = "0123456789";
    string lower_case = "abcdefghijklmnopqrstuvwxyz";
    string upper_case = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    string special_characters = "!@#$%^&*()-+";
    int c = 0;
    int na = 0, lc = 0, uc = 0, sc = 0, x = 0;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < numbers.size(); j++)
        {
            if (s[i] == numbers[j])
            {
                c++;
                na++;
                break;
            }
        }
        if (na == 1)
            break;
    }
    for (int i = 0; i < s.size(); i++)
    {
        for (int j = 0; j < lower_case.size(); j++)
        {
            if (s[i] == lower_case[j])
            {
                c++;
                lc++;
                break;
            }
        }
        if (lc == 1)
            break;
    }
    for (int i = 0; i < s.size(); i++)
    {
        for (int j = 0; j < upper_case.size(); j++)
        {
            if (s[i] == upper_case[j])
            {
                c++;
                uc++;
                break;
            }
        }
        if (uc == 1)
            break;
    }
    for (int i = 0; i < s.size(); i++)
    {
        for (int j = 0; j < special_characters.size(); j++)
        {
            if (s[i] == special_characters[j])
            {
                c++;
                sc++;
                break;
            }
        }
        if (sc == 1)
            break;
    }
    int a = 4 - c;
    if (n < 6)
    {
        n += a;
        if (n < 6)
        {
            x = (6 - n);
        }
    }

    cout << a + x << endl;
}