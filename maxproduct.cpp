#include <iostream>
#include <vector>
using namespace std;
	long long maxProduct(vector<int> &arr, int n) {
	 long long maxsofar = 1,ans = arr[0];
	 long long minsofar = 1;
	 if (n <= 1 )
	 {
		return arr[n-1];
	 }
	 else{
	 for(int i = 0; i < n-1; i++){
	    
	     if(arr[i] < 0){
	         swap(maxsofar,minsofar);
	     }else if (arr[i] == 0)
		 {
			maxsofar = 1;
			minsofar = 1;
			continue;
		 }
		 

	     maxsofar = max((long long)arr[i], maxsofar*arr[i]);
	     minsofar = min((long long)arr[i], minsofar*arr[i]);
	      ans = max(ans,maxsofar);
	 } 
	 }
	 return ans;
	}
int main(){
    vector<int> arr = {8, -2, -2 ,0 ,8 ,0 ,-6, -8, -6, -1};
    int n = arr.size();
    long long ans = maxProduct(arr,n);
    cout<<ans;
    return 0;
}