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
// #include <iostream>
// using namespace std;
// vector <long long> nge(vector<long long> arr,int n ){
//     stack<int> st;
//     vector <long long> ans;
//     st.push(-1);
//     for (int i = n; 0 <= i; i--)
//     {
//        while (st.top() < arr[i])
//        {
//       st.pop();
//        }
//        int element = st.top();
//        ans.push_back(element);
//        st.push(arr[i]);
//       }
//     return ans;

// }
// int main (){
//     vector <long long> arr = {1,3,2,4};
//     int n = arr.size();
//     vector <long long> ans = nge(arr,n);
//     return 0;
// }