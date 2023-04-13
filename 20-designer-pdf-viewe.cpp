#include <bits/stdc++.h>
using namespace std;
int main()
{
    map<char, int> alphabet;
    int h[26];
    for (int i = 0; i < 26; i++)
    {
        cin >> h[i];
        alphabet['a' + i] = h[i];
    }
    string s;
    cin >> s;
    int k=s.size();
    int n[s.size()];
    for (int i = 0; i < k; i++)
    {

        for (auto x : alphabet)
        {
            if(x.first == s[i])
            {
                n[i]=x.second;
            }
        }
    }
    sort(n, n+k);
    cout << n[k-1]*k << endl;

}