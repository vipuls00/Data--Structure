// class Solution 
// {
//     public:
//     bool knows(int a, int b, vector<vector<int> >& M){
//         if(M[a][b] == 1){
//             return true;
//         }
//         else return false;
//     }
//     //Function to find if there is a celebrity in the party or not.
//     int celebrity(vector<vector<int> >& M, int n) 
//     {
//         stack<int> st;
//         for(int i = 0; i < n ; i++){
//             st.push(i);
//         }
//         for(int i = 0; i < n ; i++){
//             while(st.size() > 1){
//                 int a = st.top();
//                 st.pop();
//                 int b = st.top();
//                 st.pop();
//                 if(knows(a,b,M)){
//                     st.push(b);
//                 }else
//                 {
//                     st.push(a);
//                 }
//             }
//             int celebrity = st.top();
//             int zerocount = 0;
//              int onecount = 0;
//             for(int i=0;i<n;i++){
//                 if(M[celebrity][i] == 0 ){
//                     zerocount++;
//                 }
//             }
//             for(int i=0;i<n;i++){
//                 if(M[i][celebrity] == 1 ){
//                     onecount++;
//                 }
//             }
//             if(zerocount == n && onecount == n-1){
//                 return celebrity;
//             }
//         }
//         return -1;
//     }
// };