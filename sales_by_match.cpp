#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    vector<int>vec(n);
    for(int i = 0; i < n; i++)
    {
        cin >> vec[i];
    }
    map<int,int> m;
    for(int i = 0; i < n; i++)
    {
        m[vec[i]]++;
    }
    int c=0;
    for(auto x:m)
    {
        c+=(x.second/2);
        // cout << x.first << " " << x.second << endl;
    }
    cout << c << endl;

}