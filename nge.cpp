#include <iostream>
#include <vector>
#include <stack>
using namespace std;
vector<long long> nextLargerElement(vector<long long>& arr, int n){
        vector <long long> ans;
        stack<int> st;
        st.push(-1);
        for(int i = n ; i>= 0; i--){
             while(st.top() < arr[i]){
                 st.pop();
             }
             int element = st.top();
             st.push(arr[i]);
             ans.push_back(element);
        }
        return ans;
    }
int main(){
    vector<long long> arr = {1,3,2,4};
    int n = arr.size();
    vector<long long> ans = nextLargerElement(arr,n);
 for(auto x : ans ){
    cout<<"bhdhdb";
    cout<<ans[x]<<" ";
 }
  
 
    return 0;
}