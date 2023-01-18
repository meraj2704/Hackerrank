#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n1;
    cin >> n1;
    vector<int> ranked(n1);
    for (int i = 0; i < n1; i++)
        cin >> ranked[i];
    // cout << "t1" << endl;
    int n2;
    cin >> n2;
    vector<int> player(n2);
    for (int i = 0; i < n2; i++)
        cin >> player[i];
    int r = 1;
    for (int i = n1 - 1; i > 0; i--)
    {
        if (ranked[i] < ranked[i - 1])
            r++;
    }
    r++;
    // cout << "t2" << endl;
    int j = n1 - 1;
    vector<int> result(n2);
    for (int i = 0; i < n2; i++)
    {
        while (player[i] >= ranked[j])
        {
            if (r == 1)
            {
                break;
            }
            if (ranked[j] == ranked[j - 1])
            {
                j--;
            }
            else
            {
                r--;
                j--;
            }
        }
        result[i] = r;
    }
    // cout << "t3" << endl;
    for (int i = 0; i < n2; i++)
        cout << result[i] << endl;
}

// vector <int> climbingLeaderboard(vector <int> scores, vector <int> alice) {
//     int h_rank = 1;
//     for(int i=scores.size()-1;i>0;i--){
//         if(scores[i]<scores[i-1]){
//             h_rank++;
//         }
//     }
//     h_rank++;
//     vector<int>ranks(alice.size());
//     int j = scores.size()-1;
//     for(int i=0;i<alice.size();i++){
//         while(alice[i]>=scores[j] ){
//             if(h_rank==1){
//                 break;
//             }
//             if(scores[j]==scores[j-1]){
//                 j--;
//             }
//             else{
//                 j--;
//                 h_rank--;
//             }
//         }
//         ranks[i] = h_rank;
//     }
//     return ranks;
// }