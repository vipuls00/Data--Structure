#include <iostream>
#include <unordered_map>
using namespace std;
int nonrepreating(string str){
    unordered_map <int ,int> mp;
    int ans=0;
    for (int i = 0; i < str.size(); i++)
    {
       mp[str[i]]++;
       
    }
    for (int i = 0; i < str.size(); i++)
    {
        if (mp[str[i]] == 1)
        {
         ans++;   
         mp[str[i]] =0;
        }
        
    }
    return ans;
    
}
int main(){ 
    string str = "alphaadida";
    int ans = nonrepreating(str);
    cout<<ans;
    return 0;
}