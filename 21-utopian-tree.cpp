#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        int a[n+1];
        a[0]=1;
        for(int i=1;i<=n; i++)
        {
            if(i%2==0)
            {
                a[i]=a[i-1]+1;
            }
            else{
                a[i]=a[i-1]*2;
            }
        }
        cout << a[n] << endl;
    }
}