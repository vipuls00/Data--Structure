#include <iostream>
#include <vector>
using namespace std;
// int solve(vector<int>&num,int i, int n){
//     if (i>=n)
//     {
//         return 0;
//     }
//     // if ( i == 0)
//     // {
//     //     return num[0];
//     // }
//     int include = solve(num,i + 2, n) + num[i];
//     int exclude = solve(num, i+1,n);
//     return max(include,exclude);

// }
int solve2(vector<int> &num, int i, int n, vector<int> &dp)
{
    if (i >= n)
    {
        return 0;
    }
    if (dp[i] != -1)
    {
        return dp[i];
    }

    int include = solve2(num, i + 2, n, dp) + num[i];
    int exclude = solve2(num, i + 1, n, dp) +0;
    dp[i] = max(include, exclude);
    return dp[i];
}
int maxsumadjacent(vector<int> &num)
{
    int n = num.size();
    int i = 0;
    // int ans = solve(num,i,n);
    vector<int> dp(n, -1);
    return solve2(num, i, n, dp);
}
int main()
{
    vector<int> num;
    num.push_back(9);
    num.push_back(6);
    num.push_back(1);
    num.push_back(1);
    cout << maxsumadjacent(num);
    return 0;
}
