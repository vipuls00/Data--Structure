#include <iostream>
#include <vector>
#include <unordered_map>
#include <algorithm>
using namespace std;
  string palindrome(string s,string rev,int index1,int index2,string ans){
    if (index1 == s.length())
    {
       return 0;
    }
     if (index2 == rev.length())
    {
       return 0;
    }
    
      if(s[index1] == rev[index2]){
          ans = ans + s[index1];
      }
      else{
          string pehla = palindrome(s,rev,index1+1,index2,ans);
          string dusra = palindrome(s,rev,index1,index2+1,ans);
          
          if(pehla.length() >= dusra.length()){
            ans = ans + pehla;

          }else{
              ans = ans + dusra;
          }
         
      }
       return ans;
  }
    string longestPalin (string S) {
        string ans = S;
        string st= "";
        reverse(ans.begin(), ans.end());
        int index1 = 0;
        int index2 = 0;
          string result = palindrome(S,ans,index1,index2,st);
        return result;
    }
int main()
{
    string str = "aaaabbaa";
   string s = longestPalin(str);
   cout<<s;
 
    return 0;
}