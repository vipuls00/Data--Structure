#include <iostream>
using namespace std;
class node
{
public:
    int data;
    node *next;
};

int isfull(node *top)
{
    // dynamic memory allocation padh waps
    node *n = new node();
    if (n == NULL)
    {
        return 1;
    }
}
int isempty(node *top)
{
    if (top == NULL)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
node *push(node *top, int x){
if (isfull(top))
{
      cout<<"stack overflow\n";
}
else{
    node *n = new node ();
    n->data = x;
    n->next = top ;
    top = n;
     return top;
}

};
 int pop(node *top){
if (isempty(top))
{
   cout<<"stack underflow\n";
}
else{
    node *n = top;
    top = top->next;
    int x = n->data;
    free(n);
    return x;
}
}

int main()
{
    node *top = NULL;
    top = push(top, 70);
    int element = pop(top);
    return 0;
}