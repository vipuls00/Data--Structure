#include <iostream>
#include <stack>
using namespace std;
class queueusingstack
{
public:
    stack<int> s1, s2;
    void push(int data)
    {
        s1.push(data);
    }
    // int top()
    // {
    //     while (!s1.empty())
    //     {
    //         int element = s1.top();
    //         s1.pop();
    //         s2.push(element);
    //     }
    //    int top =  s2.top();
    //     while (!s2.empty())
    //     {
    //         int element = s2.top();
    //         s2.pop();
    //         s1.push(element);
    //     }
    // }
    int pop()
    {
        while (!s1.empty())
        {
            int element = s1.top();
            s1.pop();
            s2.push(element);
        }
       int ans =  s2.top();
       s2.pop();
        while (!s2.empty())
        {
            int element = s2.top();
            s2.pop();
            s1.push(element);
        }
        return ans;
    }
};
int main()
{
    queueusingstack q;
    q.push(2);
    q.push(3);
    q.push(4);
    q.push(5);
    q.pop();
    cout<<q.pop();
    return 0;
}