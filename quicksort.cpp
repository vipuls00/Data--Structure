#include <iostream>
using namespace std;
int partition(int arr[], int size, int start, int end)
{
    int pivot = arr[start], count = 0;
    for (int i = start+1; i <= end; i++)
    {
        if (arr[i] <= pivot)
        {
            count++;
        }
    }
    int pivotindex = start + count;
    swap(arr[pivotindex], arr[start]);
    int i = start, j = end;
    while (i < pivotindex && j > pivotindex)
    {
        if (arr[i] < arr[pivotindex])
        {
            i++;
        }
        if (arr[j] > arr[pivotindex])
        {
            j--;
        }
        if (i > pivotindex && j < pivotindex)
        {
            swap(arr[i++], arr[j--]);
        }
    }
    return pivotindex;
}
void quicksort(int arr[], int size, int start, int end)
{

    if (start >= end)
    {
        return;
    }
    int p = partition(arr, start, end, size);
    quicksort(arr, size, start, p - 1);
    quicksort(arr, size, p + 1, size);
}
int main()
{
    int arr[] = {12, 56, 23, 23, 78, 43, 12, 1, 34, 56};
    int size = sizeof(arr) / sizeof(arr[0]);
    int start = 0, end = size;
    quicksort(arr, size, start, end);
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}