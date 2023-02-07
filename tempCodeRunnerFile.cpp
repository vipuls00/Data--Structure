#include <iostream>
using namespace std;
int parcels(int arr[], int size, int sum)
{
    int mini = INT16_MAX;
    if (size < 0)
    {
        return mini;
    }

    int include = parcels(arr, size - 1, sum + arr[size-1]);
    int exclude = parcels(arr, size - 1, sum);
    mini = min(include, exclude);
}
int main()
{
    int arr[] = {2, 3, 6, 10, 11};
    int size = 6;
    int k = 9;
    int ans = parcels(arr, k - size, 0);
    cout<<arr[size]<<endl;
    return 0;
}