#include <iostream>
using namespace std;
int deletememory(int arr[],int size){
int currentsum = 0;
    int maxi = INT16_MIN ;
    int sum = 0;
    int ans = 0;
    for (int i = 0; i < size; i++)
    {
    currentsum = arr[i] + arr[i+1];
    maxi = max(currentsum,maxi);
    }
    for (int i = 0; i < size; i++)
    {
      sum = sum + arr[i];
    }
    ans = sum - maxi;
    
    
    return ans;
    
}
int main(){
    int arr[] = {10,4,8,13,20};
    int size = sizeof(arr)/sizeof(arr[0]);
   int currentsum = 0;
    int maxi = INT16_MIN ;
    int sum = 0,ans = 0;
    for (int i = 0; i < size; i++)
    {
    currentsum = arr[i] + arr[i+1];
    maxi = max(currentsum,maxi);
    }
    for (int i = 0; i < size; i++)
    {
      sum = sum + arr[i];
    }
    ans = sum - maxi;
    int ansq = deletememory(arr,size);
      cout<<ansq;
    return 0;
}