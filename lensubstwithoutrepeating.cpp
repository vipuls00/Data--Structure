#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;
int lengthOfLongestSubstring(string s) {
    int maxLength = 0;
    int start = 0;
    unordered_map<char, int> charMap;
    for (int i = 0; i < s.length(); i++) {
        if (charMap.count(s[i])) {
            start = max(start, charMap[s[i]] + 1);
        }
        charMap[s[i]] = i;
        maxLength = max(maxLength, i - start + 1);
    }
    return maxLength;
}
int longestuniquesubstring(string str, int currentlength, int maxlength, int left, int right, unordered_map<char,int> mp)
{
    //  unordered_map<char,int> mp;

    if (mp.count(str[right]))
    {
       return longestuniquesubstring(str, 0, maxlength, left + 1, left + 1, mp);
    }
     if (right == str.length())
    { 
        
        return longestuniquesubstring(str, currentlength, maxlength, left , right + 1, mp);;
    }

    
    if  (left == str.length())
    {
        cout<<"nd";
        return maxlength;
    }
    //cout<<"jnd";
   // mp[str[right]] = right;
     mp[str[right]]++;
    currentlength = right - left + 1;
    maxlength = max(maxlength,currentlength);
     right = right + 1;
    int call = longestuniquesubstring(str, currentlength, maxlength, left, right, mp);
  
    return call;
}

    // for(int i = 0; i<size;i++){
    //     if (mp[str[i]] == true)
    //     {
    //        break;
    //        maxlength = 0;
    //     }
    //     else{
    //       mp[str[i]] == true;
    //       currentlength = right- left + 1;
    //       maxlength = max(currentlength,maxlength);
    //     }

    // }

int main()
{
    string str = "ABDEFGABEF";
    int size = str.size();
    int maxlength = 0;
     unordered_map<char,int> mp;
    // vector<bool> mp(false);
    int currentlength = 0;
    // int arr[]= {23,34,34,12,34};
    // int size= sizeof(arr)/sizeof(arr[0]);
    for (int i = 0; i < str.size(); i++)
    {
        mp[str[i]]++;
    }
    
    int result = longestuniquesubstring(str, currentlength, maxlength, 0, 0, mp);
    int result1= lengthOfLongestSubstring(str);
    cout<<result;
    return 0;
}