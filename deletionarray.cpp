#include <iostream>
#include <vector>
using namespace std;

// void vdisplay(vector <int> k, int n){
//     vector <int>::iterator it;
//     for ( it = 0; it< n; it++)
//     {
//        cout<<it<< " ";
//     }
    
// }
void display(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << endl
             << arr[i];
    }
}
int indinsertion(int arr[], int size, int index)
{
    for (int i = index; i < size - 1; i++)
    {
        arr[i] = arr[i + 1];
    }
    return 1;
}
int main()
{
    // int arr[5]= {1,2,3,4,5};
    // vdisplay(arr[],5);
    // int arr[100] = {1, 2, 3, 4, 5};
    // int size = 5, index = 3;
    // display(arr, 4);
    // int element = 45;
    // indinsertion(arr, size, index);
    // size = size + 1;
    return 0;
}
