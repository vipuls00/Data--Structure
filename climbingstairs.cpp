#include <iostream>
using namespace std;
int solve(long long nstairs, int i)
{
    if (i == nstairs)
    {
        return 1;
    }
    if (i > nstairs)
    {
        return 0;
    }
    return (solve(nstairs, i + 1) + solve(nstairs, i + 2));
}
int main()
{
    long long nstairs;
    cin >> nstairs;
    int mnn = INT32_MIN;

    int ans = solve(nstairs, 0);
    cout << mnn;
    return 0;
}
// #include <iostream>
// #include <vector>
// using namespace std;
// int solve(vector <int> & cost, int n){
// if (n == 0)
// {
//    return cost[0];
// }
// if ( n == 1)
// {
//     return cost[1];
// }


// }
// int minicost(vector<int> & cost){
// int n = cost.size();
// int ans = min(solve(cost , n-1) + solve(cost, i+2));
// return ans;
// }
// int main (){

//     return 0;
// }