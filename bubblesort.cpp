#include <iostream>
using namespace std;
void bubblesort(int arr[], int n)
{
    for (int i = 1; i < n; i++)
    {
        for (int j = 0; j < n - i; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                swap(arr[j], arr[j + 1]);
            }
        }
    }
}
int main()
{
    int arr[] = {12, 56, 23, 23, 78, 43, 12, 1, 34, 56};
    int size = sizeof(arr) / sizeof(arr[0]);
    bubblesort(arr, size);
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}
void bubblesort2(int arr[], int size)
{
    for (int i = 1; i < size; i++)
    {
        for (int j = 0; j < size-1; j++)
        {
            if (arr[j+1] > arr[j])
            {
              swap(arr[j],arr[j+1]);
            }
            
        }
        
    }
    
}