
#include <iostream>
using namespace std;
class Stack
{
public:
    int *arr;
    int top;
    int size;
    Stack(int size)
    {
        this->size = size;
        arr = new int[size];
        top = -1;
    }
    void push(int element)
    {
        if (size - top > 1)
        {
            top++;
            arr[top] = element;
        }
        else
        {
            cout << "Stack overflow" << endl;
        }
    }
    void pop()
    {

        if (top >= 0)
        {
            top--;
        }
        else
        {
            cout << " stack underflow" << endl;
        }
    }
    int peek()
    {
        if (top >= 0)
            return arr[top];
        else
        {
            cout << " Stack is empty" << endl;
        }
    }
    bool IsEmpty()
    {
        if (top == -1)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
};

int main()
{
    Stack st(5);
    st.push(22);
    st.push(42);
    st.push(45);
    st.push(56);
    st.push(868);
    // st.pop();
    // st.push(12);
    // cout<< st.peek()<<endl;

    cout << st.peek() << endl;
    st.pop();
    cout << st.peek() << endl;
    return 0;
}

// #include <iostream>
// using namespace std;
// class Stack
// {
//     public:
//     int *arr;
//     int top;
//     int size;
//      Stack(int size){
//         this->size = size;
//         int top= -1;
//         arr = new int[size];
//     }
//     void push(int data){
//         if (size-top > 1)
//         {
//             top++;
//             arr[top]= data;
//         }
//         }
//         void pop(){
//             top--;
//         }
// };
// int main()
// {
//     int size = 5;
//     Stack st(6);
//   //  st.push(12);
//     return 0;
// }
