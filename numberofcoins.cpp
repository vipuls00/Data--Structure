// class Solution{

// 	public:
// 	int count(int coins[], int M, int V){
// 	     int ans=0,pehla;
//         if(M == 0){
//           if(V == coins[M]){
//           return 1;
//             } else   if(V < 0){
//           return 0;
//       }
//           else return 0;
//       }
    
//       if(V == 0 ){
//           return 1;
//       }
    
// //       39 8
// // 9 2 11 5 14 17 8 18
//     //   if(coins[M] <= V)
//     //   pehla = 1 + count(coins,M-1,V - coins[M]);
//     //   int dusra = 0 + count(coins,M-1,V);
//      int include =  count(coins,M-1,V - coins[M]);
//      int exclude = count(coins,M-1,V);
//      if(include == 1){
//          include = ans + 1;
//      }
//       if(exclude == 1){
//          exclude = ans + 1;
//      }
//       ans = min(include,exclude);
//        return ans;
// 	}
// 	int minCoins(int coins[], int M, int V) 
// 	{ 
// 	   if (M <= 0) {
//         return -1;  // or some other error code or handling 
//     }
//        return count(coins,M-1,V);
    
// 	} 
	  
// };