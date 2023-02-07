#include <iostream>
using namespace std;
int maxsum(int index, int arr[], int size)
{
    int currentsum = 0;
    int maxi = arr[0];
    for (int i = 0; i < size; i++)
    {

        if (currentsum < 0)
        {
            currentsum = 0;
        }
        currentsum = currentsum + arr[i];
        maxi = max(currentsum, maxi);
    }
    return maxi;
}

int main()
{
    int arr[] = {-4, 5, -1, 2, 3, -4, 5, 10};
    int size = sizeof(arr) / sizeof(arr[0]);
    int index = 0;
    cout << maxsum(index, arr, size);
    return 0;
}