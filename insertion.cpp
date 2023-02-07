#include<iostream>
using namespace std;
class node{
    public:
    int data ;
    int *next;
};
node* createnode (node *head,int new_data){
    node * new_node = new node ();
    new_node->data = new_data;
    new_node->next = head;
    head=new_node;
return head;
};
node* head;
int main(){
     
    
    head = createnode(head,6);
   
   cout<<head->data;
   head->next;
 
    return 0;
}