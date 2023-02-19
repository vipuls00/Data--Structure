// class Solution
// {
//     public:
//    // int solve(int capacity, int weight[], int prices[], int index){
//     int solve(int capacity, int weight[], int prices[], int index,vector<vector<int> >& dp){
//         if(index == 0){
//             if(weight[0] <= capacity){
//                 return prices[0];
//             }
//             else 
//             return 0;
//         }
//         if(dp[index][capacity] != -1){
//             return dp[index][capacity];
//         }
//         int include = 0;
//         if(capacity >= weight[index]){
//             include = prices[index] + solve(capacity - weight[index],weight,prices,index-1 , dp);
//         }
//         int exclude = 0 + solve(capacity,weight,prices,index-1 , dp);
//         dp[index][capacity]= max(include,exclude);
//         return dp[index][capacity];
//         // return max(include,exclude);
        
//     }

//     //Function to return max value that can be put in knapsack of capacity W.
//     int knapSack(int W, int wt[], int val[], int n) 
//     { 
//         vector<vector<int>> dp(n,vector<int>(W+1,-1));
//       return solve(W,wt,val,n-1, dp);
//     }
// };