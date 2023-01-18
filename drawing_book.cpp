#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >>n;
    int k;
    cin >> k;
    if(n%2==0 && k ==(n-1) && k !=1 )
    {
        cout << 1 << endl;
    }
    else{

    int a = min(k,(n-k));
    cout << a/2 << endl;
    }
}