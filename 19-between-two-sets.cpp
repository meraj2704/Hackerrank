#include<bits/stdc++.h>
using namespace std;
int main()
{
    
    int n,m;
    cin >> n >> m;
    vector<int>a(n);
    for(int i=0; i<n; i++)
    {
        cin >> a[i];
    }
    vector<int>b(m);
    for(int i=0; i<m; i++)
    {
        cin >> b[i];
    }
    int factor=0;
    for(int k=1; k<=100; k++)
    {
        bool okay=true;
        for(int i=0; i<n; i++)
        {
            if(k%a[i]!=0) okay=false;
           
        }
        for (int i = 0; i < m; i++)
        {
            if(b[i]%k!=0) okay=false;
        }
        if(okay)
        {
            factor++;
        }

        
    }
    cout << factor << "\n";

    
}