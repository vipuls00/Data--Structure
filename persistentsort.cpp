#include <iostream>
#include <algorithm>
using namespace std;
bool compare(int a,int b){
    return a > b;
}
void sort1(int arr[], int size,int k)
{
    sort(arr,arr+k);
    sort(arr + k , arr + size , compare );

}
int main()
{
    int arr[] = {5, 2, 9, 1, 7};
    int k  =3;
    int size = sizeof(arr) / sizeof(arr[0]);
    sort1(arr, size,k);
    for (int i = 0; i < size; i++)
    {
       cout<<arr[i]<<" ";
    }
    
    return 0;
}