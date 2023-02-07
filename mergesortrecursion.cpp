#include <iostream>
using namespace std;
int mergesort(int arr[],int start, int mid, int end){
int size1 = mid - start+1;
int size2 = end - mid;
int arr1[size1];
int arr2[size2];
// int mergredarr[end];
for (int i = 0; i < size1; i++)
{
   arr1[i] = arr[start+i];
}
for (int i = 0; i < size2; i++)
{
  arr2[i] = arr[mid+i +1];
}
int index1 = 0;
int index2 = 0;
int index = start;
while (index1 < size1 && index2 < size2)
{
   if (arr1[index1] < arr2[index2])
   {
    arr[index++] = arr1[index1++];
   }
   else{
    arr[index++]  = arr2[index2++];
}
   
}
while (index1 < size1)
{
    arr[index++] = arr1[index1++];
}
while (index2 < size2)
{
    arr[index++] = arr2[index2++];
}

// delete[] arr1;
// delete[] arr2;

 

}
void merge(int arr[], int start, int end)
{
    if (start >= end)
    {
        return ;
    }
    
    int mid = (start + end )/2;
    merge(arr,start,mid);
     merge(arr,mid+1,end);
     mergesort(arr,start,mid,end);

}
int main()
{
    // int arr[] = {23, 21, 23, 43, 43, 45, 5, 34, 3, 32};
     int arr[] = {12,56,23,23,78,43,12,1,34,56};
    int size = sizeof(arr) / sizeof(arr[0]);
    // cout<<size;
    int start = 0;
    int end = size;
    merge(arr, start, end);
    for ( int i = 0; i < size; i++)
    {
    cout<<arr[i]<<" ";
    }
    
}