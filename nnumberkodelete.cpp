// Online C++ compiler to run C++ program online
#include <iostream>
#include <string>

using namespace std;
string solve(string &str, int rem)
{
    string ans;
    if (rem == 0)
    {
        return ans;
    }
    //  int currrent = 0;

    if (str.at(0) > str.at(1))
    {
        //  str.erase(0,1);
        str = str.erase(0, 1);
        rem = rem - 1;
    }
    ans = solve(str, rem);
    return ans;
}
int main()
{

    string str = "43921";
    //   string s = str.erase(1,1);
    string as = solve(str, 2);
    cout << as;
    return 0;
}