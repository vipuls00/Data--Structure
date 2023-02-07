#include <iostream>
#include <vector>
using namespace std;
int maxsum(int arr[],int size)
{
    // int n = v.size();
    int currentsum = 0;
    int maxsum = INT16_MIN;
    for (int i = 0; i < size; i++)
    {
        currentsum = currentsum + arr[i];
         if (currentsum < 0)
        {
            currentsum =  0;
            
        }
     maxsum = max(maxsum,currentsum);

    }
    return maxsum;
}
int maxsumrecursion(int arr[],int size, int index){
     int currentsum = 0;
    int maxsum =INT16_MIN;
    if (index > size)
    {
        return 0;
    }
    
    if ( currentsum < 0)
    {
        currentsum = 0;
    }
    currentsum = maxsumrecursion( arr, size,  index + 1) + arr[index];
    maxsum = max(currentsum,maxsum);
    return maxsum;

}
int main()
{
    // int arr[] = {1, 2, 3,4};
     int arr[] = { -1, 2, 3, -4, 5, 10};
    int size = sizeof(arr)/sizeof(arr[0]);
    int index = 0;
    // cout<<size;
    // vector<int> v;
//     v.push_back(-2);
//     v.push_back(-3);
// //-5 -2
//     v.push_back(4);
//     //2
//     v.push_back(-1);
//     //1
//     v.push_back(-2);
//     // -1 1
//     v.push_back(1);
//     //2
//     // v.push_back(5);
//     //7
//     v.push_back(-3);
// v.push_back(-2);
// v.push_back(-3);
// v.push_back(4);
// v.push_back(-1);
// v.push_back(-2);
// v.push_back(1);
// v.push_back(5);

// v.push_back(-3);
// v.push_back(1);
// v.push_back(2);
// v.push_back(-1);
// v.push_back(-2);
// v.push_back(3);
// v.push_back(-1);
// v.push_back(2);
// cout<<maxsumrecursion(arr,size,index);
   cout<<maxsum(arr,size);
 
 return 0;
}