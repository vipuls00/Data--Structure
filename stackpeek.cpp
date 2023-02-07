#include <iostream>
using namespace std;
class stack
{
public:
    int size;
    int top;
    int *arr;
};
int peek(stack *s, int i)
{
    int arrayind = s->top - i + 1;
    if (arrayind < 0)
    {
        cout << "invalid postion";
        return -1;
    }
    else
    {
        return s->arr[arrayind];
    }
}
int isfull(stack *s)
{
    if (s->top = s->size - 1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
};
int isempty(stack *s)
{
    if (s->top = -1)
    {
        return 1;
    }
};
void push(stack *s, int val)
{
    if (isfull(s))
    {
        cout << "stack overflow";
    }
    else
    {
        s->top++;
        s->arr[s->top] = val;
    }
}
int pop(stack *s)
{
    if (isempty(s))
    {
        cout << "stack underflow";
        return -1;
    }
    else
    {
        int val = s->arr[s->top];
        s->top--;
        return val;
    }
}

int main()
{
    stack *s;
    s = new stack();
    s->size = 10;
    s->top = -1;
     s->arr = new int[s->size];
    // cout << "satck has been created";
    // cout << isempty(s);
    cout << "full hsi kya  " << isfull(s);
    push(s, 47);
    pop(s);
    for (int j = 0; j < s->top + 1; j++)
    {
        cout << "peeking at a postion " << peek(s, j);
    }

    return 0;
}
//stacktop = s->arr[s->top]
//stackbpottom = s->arr[0]