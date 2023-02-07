#include <iostream>
#include <vector>
using namespace std;
vector<vector<int>> solve(vector<int> &num, vector<int> output, int index, vector<vector<int>> ans)
{
    if (index >= num.size())
    {
        ans.push_back(output);
        return ans;
    }
    solve(num, output, index + 1, ans);
    int element = num[index];
    output.push_back(element);
    solve(num, output, index + 1, ans);
}
vector<vector<int>> subsets(vector<int> &num)
{
    int index = 0;
    vector<int> output;
    vector<vector<int>> ans;
    ans = solve(num, output, index, ans);
     return ans;
}
int main()
{
    vector<int> num;
    num.push_back(1);
    num.push_back(2);
    num.push_back(3);
    subsets(num);

    return 0;
}