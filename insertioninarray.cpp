#include <iostream>
using namespace std;
void display(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << endl
             << arr[i];
    }
}
int indinsertion(int arr[], int size, int element, int capacity, int index)
{
    if (size >= capacity)
    {
        return -1;
    }
    for (int i = size - 1; i >= index; i--)
    {
        arr[i + 1] = arr[i];
    }
    arr[index] = element;
    return 1;
}
int main()
{
    int arr[100] = {1, 2, 3, 4, 5};
    int size = 5, index = 3;
    display(arr, 4);
    int element = 45;
    indinsertion(arr, size, element, 100, index);
    size = size + 1;
    return 0;
}