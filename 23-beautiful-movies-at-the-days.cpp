#include<bits/stdc++.h>
using namespace std;
int value(int m)
{
    int reverse=0,remin;
    while(m!=0)
    {
        remin=m%10;
        reverse = reverse *10 + remin;
        m/=10;
    }
    return reverse;
}
int main()
{
    int i,j,k;
    cin >> i >> j >> k;
    int beauty=0;
    for(int m=i; m<=j; m++)
    { 
        int x=value(m);
        
        int y= abs(m-x);
        
        if(y%k==0)
        {
            beauty++;
        } 
        
// what happend
    }
    cout << beauty << "\n";
}