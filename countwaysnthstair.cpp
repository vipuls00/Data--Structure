// class Solution
// {
//     public:
//     //Function to count number of ways to reach the nth stair.
//     int countWays(int n)
//     {
//         if(n == 0){
//             return 1;
//         }
//         if(n < 0){
//             return 0;
//         }
//         return countWays(n-1) + countWays(n-2);
//     }
// };