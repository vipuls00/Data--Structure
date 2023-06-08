#include <iostream>
#include <queue>
using namespace std;
class stackusingqueue{
    public: 
    queue <int> q1,q2;
    void push(int data){
        while (!q1.empty())
        {
            int element = q1.front();
            q1.pop();
            q2.push(element);
        }
        q1.push(data);
        while (!q2.empty())
        {
           int element = q2.front();
           q1.push(element);
           q2.pop();
        }
        }
        int pop(){
           return q1.front();
        }
};
int main(){
    stackusingqueue s1;
    s1.push(2);
    s1.push(4);
    s1.push(5);
    s1.push(8);
    s1.push(7);
    cout<<s1.pop();

    return 0;
}