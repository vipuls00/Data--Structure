#include <iostream>
#include <algorithm>
using namespace std;
class Queue
{
public:
    int size;
    int *arr;
    // int *arr = new int[size];
    int front;
    int rear;
    Queue()
    {
        size = 100;
        arr = new int[size];
        front = 0;
        rear = 0;
    }
    void enqueue(int data)
    {
        if (rear == size)
        {
            cout << " Queue is full" << endl;
        }
        else
        {
            if (front = 0)
            {
                front++;
            }
            arr[rear] = data;
            rear++;
        }
    }
    int dequeue()
    {
        if (front == rear)
        {
            return -1;
        }
        else
        {

            arr[front] = -1;
            front++;
        }
    }
    bool isempty()
    {
        if (front == rear)
        {
            return true;
        }
        else
            return false;
    }
    int qfront()
    {
        if (front == rear)
        {
            return -1;
        }
        else
            return arr[front];
    }
};

int main()
{
    Queue q;

    q.enqueue(12);
    q.enqueue(23);
    q.enqueue(25);
    q.enqueue(87);
    cout << q.qfront() << endl;
    q.dequeue();
    cout << q.qfront() << endl;
    q.dequeue();
    cout << q.qfront() << endl;
    return 0;
}