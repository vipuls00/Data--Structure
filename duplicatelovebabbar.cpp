#include <iostream>
using namespace std;
int findunique(int* arr,int size){
    int ans = 0;
    for(int i=0; i<size;i++){
        ans = ans^arr[i];
    }
    for (int i = 0; i < size; i++)
    {
       ans = ans ^i; 
    }
    
}
 int main(){

    return 0;
 }