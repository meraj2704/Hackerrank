#include<bits/stdc++.h>
using namespace std;
int main()
{
    string str;
    cin >> str;
    map<char, int> m;
    for(int i=0; str[i]; i++)
    {
        if(m.find(str[i])==m.end())
        {
            m.insert(make_pair(str[i],1));
        }
        else{
           m[str[i]]++; 
        }
    }
    string s ="";
    for(auto& it:m)
    {
        if((it.second%2)==1)
        {
            s+=it.first;
        }
    }
    if(s.size()==0) cout << "Empty string" << endl;
    else cout << s << endl;
}