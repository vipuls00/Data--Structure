#include <iostream>
using namespace std;
// int main(){
//     int data = 17;
//     int ans = 0;
//     int i = 1;
//     while (data != 0)
//     {
//        int rem = data % 2;
//     data = data /2;
//     ans = ans + rem * i;
//        i = i * 10;
//     }
//     cout<<ans;
//     return 0;
// }
int main(){
    int data = 101;
    int ans = 1;
     int pow = 0;
    while(data != 0){
        int rem = data % 10;
        data = data / 10;
        ans = ans + rem * pow;
        if (pow == 0)
        {
            pow = pow + 2;
        }else{
        
    pow = pow * 2;
        }
    }
     cout<<ans;
     return 0;
}