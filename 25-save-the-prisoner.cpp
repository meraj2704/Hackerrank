#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--)
    {
        int n,m,p;
        cin >> n >> m >> p;
        if((m+p-1)<=n) cout << m+p-1 << endl;
        else{
            m= (m-(n-p+1));
            if(m%n==0) cout << n << endl;
            else cout << m%n << endl;
        }
    }
}