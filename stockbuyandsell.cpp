#include <iostream>
#include <vector>
using namespace std;
vector<vector<int>> stockBuySell(vector<int> A, int n)
{
    int mini = 0, diff, profit = INT16_MIN;
    vector<int> pehla;
    vector<vector<int>> ans;
    for (int i = 1; i < n -1 ; i++)
    {
        diff = A[i] - A[mini];
        //   profit = max(profit,diff);
        //    mini = min(mini,A[i]);
        if (A[i] < A[mini])
        {
            mini = i;
        }
        if (diff > profit)
        {
            profit = diff;
            pehla.clear();
            pehla.push_back(mini);
            pehla.push_back(i);
        }
      //  ans.clear();
        ans.push_back(pehla);
    }
    return ans;
}
// vector<vector<int>> stockBuySell(vector<int> A, int n)
// {
//     int mini = 0, maxi = 0;
//     int diff, profit = INT_MIN;
//     vector<int> pehla;
//     vector<vector<int>> ans;
//     for (int i = 1; i < n; i++)
//     {
//         diff = A[i] - A[mini];
//         if (diff > profit)
//         {
//             profit = diff;
//             maxi = i;
//             pehla.clear();
//             pehla.push_back(mini);
//             pehla.push_back(maxi);
//             ans.clear();
//             ans.push_back(pehla);
//         }
//         else if (A[i] < A[mini])
//         {
//             mini = i;
//         }
//     }
//     return ans;
// }

int main()
{
    vector<int> arr = {100 ,180, 260, 310, 40, 535, 695,};
    int size = 7;
    vector<vector<int>> ans ;
    ans = stockBuySell(arr,size);
    for(int i = 0; i < ans.size(); i++){
       for(int j = 0; j <ans[i].size(); j++){
          cout << ans[i][j] << " ";
       }
       cout << endl;
    }
        return 0;
}