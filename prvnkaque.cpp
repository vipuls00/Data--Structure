#include <iostream>
using namespace std;
int printmissing(int arr[],int size){
// for (int i = 0; i <= 11; i++)
// {
//    if (arr[i] != i)
//    {
//     cout<<i<<" "<<endl;
//    }
   
// }
int diff = arr[0] - 0;
 
    for (int i = 0; i < 11; i++) {
 
        // Check if diff and arr[i]-i
        // both are equal or not
        if (arr[i] - i != diff) {
 
            // Loop for consecutive
            // missing elements
            while (diff < arr[i] - i) {
                cout << i + diff << " ";
                diff++;
            }
        }
    }

}
int main(){
 int arr[] = { 1,5,6,7};
    int size = sizeof(arr)/sizeof(arr[0]);
   cout<<printmissing(arr,size);
}