#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, k, q;
    vector<int>vec;
    cin >> n >> k >> q;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        vec.push_back(x);
       
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

// int n;
// int k;
// int q;
// cin >> n >> k >> q;
// int *arr = new int[n];
// int *query = new int[q];
// for (int i = 0; i < n; i++)
// {
//     cin >> arr[i];
// }
// for (int j = 0; j < q; j++)
// {
//     cin >> query[j];
// }

// int *arr2 = new int[n];
// int count = 0;
// while (count < k)
// {
//     int temp = arr[n - 1];
//     for (int j = 1; j < n; j++)
//     {
//         arr2[j] = arr[j - 1];
//     }
//     arr2[0] = temp;
//     for (int j = 0; j < n; j++)
//     {
//         arr[j] = arr2[j];
//     }
//     count++;
// }

// for (int m = 0; m < q; m++)
// {
//     cout << arr2[query[m]] << endl;
// }