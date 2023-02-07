#include <iostream>
#include <vector>
using namespace std;
long long int fib(long long int t1, long long int t2, int n)
{
      long long int t3 = 0;
for(int i = 2; i < n; i ++){
    t3 = t1 + t2*t2;
    t1 = t2;
    t2 = t3;
    
}
return t3;

}
int main()
{
    long long int t1 = 0;
   long long int t2 = 1;
   int n = 7;
cout<<fib(t1,t2,n);
    return 0;
}