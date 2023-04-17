#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, k, q;
    vector<int>vec(n);
    cin >> n >> k >> q;
    for (int i = 0; i < n; i++)
    {
        cin >> vec[i];
    }
    int queries[q];
    for (int i = 0; i < q; i++)
        cin >> queries[i];
   

    for (int i = 0; i < k; i++)
    {
        int y = vec[n-1];
        vec.pop_back();
        vec.insert(vec.begin(), y);
    }
    for (int i = 0; i < q; i++)
        cout << vec[queries[i]] << "\n";
}