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

