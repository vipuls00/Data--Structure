// class Solution{

// 	public:
// 	int solve(int arr[], int n, int sum, vector<vector<int>>& dp){
// 	 if (n == 0) {
//         return (sum == 0) ? 1 : 0;
//     }
//     int ans = 0;
//     if(dp[n][sum] != -1){
//         return -1;
//     }
//     ans += perfectSum(arr, n - 1, sum);
//     if (arr[n-1] <= sum) {
//         ans += solve(arr, n - 1, sum - arr[n-1], dp);
//     }
//     return dp[n][sum] =ans;
	    
// 	}
// int perfectSum(int arr[], int n, int sum) {
//     // if (n == 0) {
//     //     return (sum == 0) ? 1 : 0;
//     // }
//     // int ans = 0;
//     // ans += perfectSum(arr, n - 1, sum);
//     // ans += perfectSum(arr, n - 1, sum - arr[n - 1]);
//     // return ans;
//     vector<vector<int>> dp(n+1,vector<int>(sum+1,-1));
//     return solve(arr,n,sum , dp);
// }

	  
// };