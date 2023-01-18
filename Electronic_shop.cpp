#include<bits/stdc++.h>
using namespace std;
void solve(int cost, vector<int>keybord, vector<int>usb);
int main()
{
    int cost;
    int n, k;
    cin >> cost>> n>> k;
    vector<int>keybord(n);
    vector<int>usb(k);
    for(int i=0; i<n; i++) cin >> keybord[i];
    for(int i=0; i<k; i++) cin >> usb[i];
    solve(cost, keybord, usb);
}
void solve(int cost, vector<int>keybord, vector<int>usb)
{
    // sort(keybord.begin(), keybord.end());
    // sort(usb.begin(), usb.end());
    
    int m=0;
    // cout << cost<< endl;
    for(int i=0; i<usb.size(); i++)
    {
        for(int j =0; j<keybord.size(); j++)
        {
            if((keybord[j]+usb[i])<=cost)
            m =max(m,keybord[j]+usb[i]);

            // cout << m <<endl;
        }
    }
    if(m==0)cout << -1 << endl;
    else cout << m << endl;
}