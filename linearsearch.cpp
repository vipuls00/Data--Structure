#include <iostream>
using namespace std;
 int linearsearch(int arr[],int size , int element ){
      for (int i = 0; i < size; i++)
      {
          if (arr[i]==element)
          {
              return 1;
          }
          return -1;
      }
      
 }
int main (){
int arr[]={1,2,32,42,42,43,53,5,46,4,3434,};
int size = 11;
int element = 46;
int searchindex = linearsearch(arr,size,element);
cout<<"the element is"<<element<<endl<<"search indexx is"<<searchindex;
    return 0;
}