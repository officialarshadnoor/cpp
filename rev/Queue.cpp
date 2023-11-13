// Queue follow fifo odering
// #include <iostream>
// #include <queue>
// using namespace std;

// int main()
// {
//     // creation
//     queue<int> q;

//     // insertion
//     q.push(5);
//     q.push(15);
//     q.push(25);
//     q.push(55);

//     cout << "Size of queue is: " << q.size() << endl;

//     if (!q.empty())
//     {
//         cout << "Queue is not empty";
//     }
//     else
//     {
//         cout << "Queue is empty!";
//     }

//     cout << "Front element is : " << q.front();

//     return 0;
// }

// Implementing queue using vector

#include <iostream>
using namespace std;

class Queue
{
public:
    int *arr;
    int size;
    int front;
    int rear;
    Queue()
    {
        this->size = size;
        arr = new int[size];
        front = 0;
        rear = 0;
    }
    void push(int data)
    {
        if (rear == size)
        {
            cout << "Q is full" << endl;
        }
        else
        {
            arr[rear] = data;
            rear++;
        }
    }

    void pop()
    {
        if (front == rear)
        {
            cout << "Queue is full" << endl;
        }
        else
        {
            arr[front] = -1;
            front++;
            if (front == rear)
            {
                front = 0;
                rear = 0;
            }
        }
    }

    void getFront()
    {
        if (front == rear)
        {
            cout << "Q is empty" << endl;
            return -1;
        }
        else
        {
            return arr[front];
        }
    }

    bool isEmpty()
    {
        if (front == rear)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
};