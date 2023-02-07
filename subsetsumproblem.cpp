#include <iostream>
#include <vector>
using namespace std;
bool subsetsum(int arr[], int size, int sum)
{
    // if (currentsum == sum)
    // {
    //     return true;
    // }
    if (size < 0 || sum < 0)
    {
        return false;
    }
    if (sum == 0)
    {
        return true;
    }
    
    // if (currentsum < 0 )
    // {
    //     return false;
    // }

    // currentsum = currentsum + arr[index];

    bool include = subsetsum(arr, size -1, sum - arr[size]);
    bool exclude = subsetsum(arr, size -1, sum);

    return include || exclude;
}
bool subsetSum(vector<int> const &A, int n, int k)
{
    // return true if the sum becomes 0 (subset found)
    if (k == 0)
    {
        return true;
    }

    // base case: no items left, or sum becomes negative
    if (n < 0 || k < 0)
    {
        return false;
    }

    // Case 1. Include the current item `A[n]` in the subset and recur
    // for the remaining items `n-1` with the remaining total `k-A[n]`
    bool include = subsetSum(A, n - 1, k - A[n]);

    // Case 2. Exclude the current item `A[n]` from the subset and recur for
    // the remaining items `n-1`
    bool exclude = subsetSum(A, n - 1, k);

    // return true if we can get subset by including or excluding the
    // current item
    return include || exclude;
}
int main()
{
    int arr[] = {3, 34, 4, 12, 5, 2};
    int size = sizeof(arr) / sizeof(arr[0]);
    int sum = 9;
    int index = 0;
    int currentsum = 0;
   // cout << subsetsum(arr, size, sum);
    // return 0;
  //  vector<int> A = {7, 3, 2, 5, 8};
    // int k = 14;

    // // total number of items
    // int n = A.size();

    // if (subsetsum(A, n, k))
    // {
    //     cout << "Subsequence with the given sum exists";
    // }
    // else
    // {
    //     cout << "Subsequence with the given sum does not exist";
    // }
 cout<<subsetsum(arr, size, sum);
    return 0;
}
// class Solution{   
//     bool subsetsum(vector<int> arr, int size, int sum)
// {
//     // if (currentsum == sum)
//     // {
//     //     return true;
//     // }
//     if (size < 0 || sum < 0)
//     {
//         return false;
//     }
//     if (sum == 0)
//     {
//         return true;
//     }
    
//     // if (currentsum < 0 )
//     // {
//     //     return false;
//     // }

//     // currentsum = currentsum + arr[index];

//     bool include = subsetsum(arr, size -1, sum - arr[size]);
//     bool exclude = subsetsum(arr, size -1, sum);

//     return include || exclude;
// }
// public:
//     bool isSubsetSum(vector<int>arr, int sum){
//            int size = arr.size();  
//            return subsetsum(arr, size, sum);
// }