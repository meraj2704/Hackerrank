#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int v[n];
    for(int i=0; i<n; i++) cin >> v[i];
    sort(v, v+n);
    int r=0;
    int c=1;
    int f = v[0];
    for(int i=1; i<n; i++)
    {
        if(f == v[i] || (f+1) == v[i])
        {
            c++;
        }
        else
        {
            if(c>r) r =c;
            c=1;
            f = v[i];
        }
    }
    if(c>r) r = c;

    cout << r << endl;

}