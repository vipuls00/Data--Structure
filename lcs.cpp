#include <iostream>
using namespace std;
int longest(string& s1, string s2, int i,int j,int x,int y){
    if(i == x)
        return 0;
    
    if(j == y)
        return 0;
    
     int ans1=0;
    if(s1[i] == s2[j]){
        int include = 1 + longest(s1,s2,i + 1,j + 1,x,y);
        ans1 = include;
    }else{
     ans1 = max(longest(s1,s2,i + 1,j,x,y),longest(s1,s2,i,j + 1,x,y));
    }
    return ans1;
}

    //Function to find the length of longest common subsequence in two strings.
    int lcs(int x, int y, string s1, string s2)
    {
        return longest(s1,s2,0,0,x,y);
    }
int main(){
    string s1 = "ABCDFGH";
    string s2 = "AEDFHR";
    int i = s1.length();
    int j = s2.length();
    int ans = lcs(i,j,s1,s2);
    cout<<ans;

}