#include <iostream>
using namespace std;
int binarysearch(int arr[], int size, int element)
{
    int mid, high =size-1, low=0;
    while (low <= high)
    {

        mid = (low + high) / 2;
        if (arr[mid] == element)
        {
            return mid;
        }
        if (arr[mid] < element)
        {
            low = mid + 1;
        }
        else
        {
            high = mid - 1;
        }
    }
}
int main()
{
int arr[]={1,2,32,42,42,43,53,5,46,4,3434,};
int size = 11;
int element = 34;
int searchindex = binarysearch(arr,size,element);
cout<<"the element is "<<element<<endl<<"search indexx is "<<searchindex;
    return 0;
}