#include <iostream>
#include <unordered_map>
#include <map>
using namespace std;
void countfreq(string arr,int size){
 //  void countfreq(int* arr,int size){
   unordered_map <int,int> mp;
    for (int i = 0; i < size; i++)
    {
       mp[arr[i]]++;
    }
    for (auto x : arr)
    {
        if (mp[x] != 0)
        {
           cout<<x<<" "<<mp[x]<<endl;
       mp[x] = 0;
        }
   }
}
int main(){
    int arr[]= {10,20,30,20,10,10,20,5};
    string str = "geeksforgeeks";
    int n = str.length();
   // countfreq(arr,n);
       countfreq(str,n);
    return 0;
}