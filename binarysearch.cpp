// #include <iostream>
// using namespace std;
// int binarysearch(int arr[], int size, int element)
// {
//     int mid, high = size - 1, low = 0;
//     while (low <= high)
//     {

//         mid = (low + high) / 2;
//         if (arr[mid] == element)
//         {
//             return mid;
//         }
//         if (arr[mid] < element)
//         {
//             low = mid + 1;
//         }
//         else
//         {
//             high = mid - 1;
//         }
//     }
// }
// int main()
// {
//     int arr[] = {
//         1,
//         2,
//         32,
//         42,
//         42,
//         43,
//         53,
//         5,
//         46,
//         4,
//         3434,
//     };
//     int size = 11;
//     int element = 34;
//     int searchindex = binarysearch(arr, size, element);
//     cout << "the element is " << element << endl
//          << "search indexx is " << searchindex;
//     return 0;
// }
#include <iostream>
using namespace std;
int binarysearch2(int arr[], int element, int size)
{
    int low = 0, high = size - 1;
   
    while (low <= high)
    {
         int mid = (low + high) / 2;
        if (arr[mid] == element)
        {
            return arr[mid];
        }
        if (element > arr[mid])
        {
            low = mid + 1;
        }
        if (element < arr[mid])
        {
            high = mid - 1;
        }
       // return -1;
    }
    return -1;
}
int main()
{
    int arr[] = {1, 3, 4, 5, 7, 9, 12, 21, 34, 56};
    int element = 21;
    int size = sizeof(arr) / sizeof(arr[0]);
    int ans = binarysearch2(arr, element, size);
    cout<<ans;
    return 0;
}