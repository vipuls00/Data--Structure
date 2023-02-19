#include <iostream>
using namespace std;
int minimum(int arr[], int size, int sumtotal, int sumcal)
{
    if (size == 0)
    {
           //return abs(sumtotal-sumcal);
        return abs((sumtotal-sumcal)-sumcal);
    }
    return min(minimum(arr,size-1,sumtotal,sumcal + arr[size-1]),minimum(arr,size-1,sumtotal,sumcal));
    
}
int findminimum(int arr[], int size)
{
    int sumtotal = 0;
    for (int i = 0; i < size; i++)
    {
        sumtotal = sumtotal + arr[i];
    }
    return minimum(arr, size, sumtotal, 0);
}
int main()
{
    int arr[] = {9,6,11,4,6,4};
    int size = sizeof(arr) / sizeof(arr[0]);
    cout << findminimum(arr, size);
    return 0;
}
