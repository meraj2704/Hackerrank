#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int x,y,z;
        cin >> x >> y >> z ;
        int a = abs(x-z);
        int b = abs(y-z);
        if(a<b) cout<< "Cat A" << endl;
        else if(b<a) cout<< "Cat B" << endl;
        else cout << "Mouse C" << endl;
    }
}