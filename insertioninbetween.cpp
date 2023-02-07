#include <iostream>
using namespace std;
class node
{
 public:
 int data;
 int *next;
 };
// Case 3
  node* insertAtEnd(  node *head, int data){
     node *ptr =new node();
    ptr->data = data;
     node *p = head;
 
    while(p->next!=NULL){
        p = p->next;
    }
    p->next = ptr;
    ptr->next = NULL;
    return head;
}
int main(){

    return 0;
}
