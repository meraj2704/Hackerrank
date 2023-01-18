#include<bits/stdc++.h>
using namespace std;
int main()
{
    
    int n;
    cin >>n;
    string s;
    cin >>s;
    int d=0,c=0;
    for(int i = 0; i < n; i++)
    {
        int tmp = d;
        if(s[i]=='D') d-=1;
        else d+=1;
        if(tmp<0 && d==0) c++;
        
    }
    cout << c << endl;
}