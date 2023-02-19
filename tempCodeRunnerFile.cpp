#include <iostream>
#include <vector>
using namespace std;
	long long maxProduct(vector<int> &arr, int n) {
	 long long maxsofar = arr[0],ans;
	 long long minsofar = arr[0];
	//  if (n == 1 )
	//  {
	// 	arr[0];
	//  }
	 
	 for(int i = 1; i < n ; i++){
	    
	     if(arr[i] < 0){
	         swap(maxsofar,minsofar);
	     }

	     maxsofar = max(maxsofar, maxsofar*arr[i]);
	     minsofar = min(minsofar, minsofar*arr[i]);
	      ans = max(maxsofar,minsofar);
		  
	 }
	 return ans;
	}
int main(){
    vector<int> arr = {2, 3, 4, 5 ,-1 ,0};
    int n = arr.size();
    long long ans = maxProduct(arr,n-1);
    cout<<ans;
    return 0;
}