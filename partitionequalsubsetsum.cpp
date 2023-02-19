// class Solution{
// public:
// int solve(int N, int arr[],int target,int i,vector<vector<int>> &dp){
//     if(i >= N){
//         return 0;
//     }
//     if(target < 0){
//         return 0;
//     }
//     if(target == 0){
//         return 1;
//     } 
//     if(dp[i][target]!= -1){
//         return dp[i][target];
//     }
//     int include = solve(N,arr,target -arr[i],i+1,dp);
//     int exclude = solve(N,arr,target,i+1,dp);
//      return dp[i][target]= include or exclude;
// }
//     int equalPartition(int N, int arr[])
//     {
//         int sum = 0;
//         for(int i = 0; i < N; i++){
//             sum = sum + arr[i];
//     }
//     if(sum & 1){
//         return 0;
//     }   
//     int target = sum / 2;
//     vector<vector<int>> dp(N,vector<int>(target+1,-1));
//     return solve(N,arr,target,0,dp);
        
//     }
// };