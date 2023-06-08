#include <iostream>
#include <algorithm>
using namespace std;
//  string reverse1(string str){
//       int i=0;
//     int j = str.size();

//     while (i < j)
//     {
//         swap(str[i],str[j]);
//         i++;
//         j--;
//     }
//     return str;
// }
int charac(string str){
    string str1= str;
   reverse(str.begin(),str.end());
    int ans =0;
  for (int i = 0; i < str.size(); i++)
  {
   if(str[i] == str1[i]){
    ans++;
   }
  }
   return ans;
  
    
}
int main (){
    string str = "qwereqw";
 reverse(str.begin(),str.end());
     int ans = charac(str);
        cout<<str;
    return 0;
}