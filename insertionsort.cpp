#include <iostream>
using namespace std;
void insertionsort(int arr[], int size)
{
    for (int i = 1; i < size; i++)
    {
        int temp = arr[i];
        int j = i - 1;
        for (; j >= 0; j--)
        {
            if (arr[j] > temp)
            {
                arr[j + 1] = arr[j];
            }
            else
            {
                break;
            }
        }
     arr[j+1]= temp;
    }
}
int main()
{
    int arr[] = {12, 56, 23, 23, 78, 43, 12, 1, 34, 56};
    int size = sizeof(arr) / sizeof(arr[0]);
    insertionsort(arr, size);
    for (int i = 0; i < size; i++)
    {
       cout<<arr[i]<<" ";
    }
    
    return 0;
}