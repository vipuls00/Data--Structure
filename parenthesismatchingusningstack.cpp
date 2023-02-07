#include <iostream>
using namespace std;
class stack
{
public:
    int size;
    int top;
    char *arr;
};
int isempty(stack *s)
{
    if (s->top == -1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
int isfull(stack *s)
{
    if (s->top == s->size - 1)
    {
        return 1;
    }
}
void push(stack *s, char val)
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
        char val = s->arr[s->top];
        s->top--;
        return val;
    }
}

int parenthesismatch(char *exp)
{
    stack *sp;
    sp = new stack;
    sp->size = 80;
    sp->top = -1;
    sp->arr = new char[sp->size];
    for (int i = 0; i < exp[i] != '\0'; i++)
    {
        if (exp[i] == '{')
        {
            push(sp,'{');
        }
        else if (exp[i] =='}')
        {
            if (isempty(sp))
            {
                return 0;
            }
            pop(sp);
        }
    }
    if (isempty(sp))
    {
      return 1;
    }
    
    
}
int main()
{
    stack *s;
    s = new stack;
    s->size = 80;
    s->top = -1;
    s->arr = new char[s->size];
    s->arr[0] = 7;
    s->top++;
    char*exp="(8*(9))";
    cout << "sjdg";
    if (parenthesismatch(exp))
    {
        cout << "is empty";
    }
    else
    {
        cout << "not empty";
    }

    return 0;
}
