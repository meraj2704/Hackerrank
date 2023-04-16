#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int liked[n];
    int total[n];
     liked[0]=2;
     total[0]=2;
    for(int i=1; i<n; i++)
    {
        liked[i]=(liked[i-1]*3)/2;
        total[i] = total[i-1] + liked[i];
    }
    cout << total[n-1] << endl;
}