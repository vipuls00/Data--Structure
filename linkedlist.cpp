
#include <iostream>
#include <unordered_map>
using namespace std;
class Node
{
public:
    int data;
    Node *next;
    Node(int data)
    {
        this->data = data;
        this->next = NULL;
    }
    ~Node()
    {
        if (this->next != NULL)
        {
            delete next;
            this->next = NULL;
        }
    }
};
void insertAtHead(Node *&head, int data)
{
    Node *temp = new Node(data);
    temp->next = head;
    head = temp;
}

void insertattail(Node *&tail, int data)
{
    Node *temp = new Node(data);
    tail->next = temp;
    tail = temp;
}
void insertionatopos(Node *&head, int data, Node *&tail, int pos)
{
    if (pos == 1)
    {
        insertAtHead(head, data);
        return;
    }

    Node *temp = head;
    int cnt = 1;

    while (cnt < pos - 1)
    {
        temp = temp->next;
        cnt++;
    }
    if (temp->next == NULL)
    {
        insertattail(tail, data);
        return;
    }

    Node *nodetoinsert = new Node(data);
    nodetoinsert->next = temp->next;
    temp->next = nodetoinsert;
}
bool detectloop(Node *head){
    Node *temp = head;
    unordered_map<Node*,bool> visited;
    while (temp != NULL)
    {
        if (visited[temp] == 1)
        {
            return true;
        }
        else{
             visited[temp]=true;
            temp= temp->next;
        }
        
    }
    return false;
}

void deletenode(Node *&head, int pos)
{
    if (pos == 1)
    {
        Node *temp = head;
        head = head->next;
        delete temp;
    }
    else
    {
        Node *curr = head;
        int cnt = 1;
        Node *prev = NULL;
        while (cnt < pos)
        {
            prev = curr;
            curr = curr->next;
            cnt++;
        }
        prev->next = curr->next;
        delete curr;
    }
}
void print(Node *&head)
{
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

int main()
{
    Node *node1 = new Node(10);
    // cout << node1->data << endl;
    // cout << node1->next << endl;
    Node *head = node1;
    Node *tail = node1;
    // print(head);
    // insertAtHead(head, 12);
    // print(head);
    insertattail(tail, 14);
    // print(head);
    insertattail(tail, 17);
    // print(head);
    insertionatopos(head, 13, tail, 4);
    //  insertionatopos(head, 9, 1);
    // print(head);
    // deletenode(head, 1);
  cout<<detectloop(head);

    return 0;
}
// class node{
//     public:
//     int data;
//     node *next;
//     node(int data){
//         this->data = data;
//         this->next =NULL;
//     }
//     void insertathead(node *head,int data){
//         node *temp = new node(data);
//         temp->next = head;
//         head = temp;
//     }
//     void inserttail(node *head, int data,int curr,int pos){
//         node *temp = head;
//         node *nodetoinsert = new node(data);
//         while (curr < pos -1)
//         {
//             temp = temp->next;
//         }
//         nodetoinsert->next = temp->next;
//         temp->next= nodetoinsert;

        
        
//     }
// }