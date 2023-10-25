// ------------- Queue ------------------//
// Data stores in FIFO (First in First Out) Order

// Insertion is done from rear-end
// Deletion done from front-end

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

//     // size
//     cout << "Size of queue is " << q.size() << endl;

//     // removal of element
//     q.pop(); // element from front will be removed

//     // print
//     cout << "Size of queue is " << q.size() << endl;

//     // checking queue is empty or not
//     if (q.empty())
//     {
//         cout << "Q is empty" << endl;
//     }
//     else
//     {
//         cout << "Q is not empty" << endl;
//     }

//     return 0;
// }

#include <iostream>
#include <queue>
using namespace std;

class Queue
{
public:
    int *arr;
    int size;
    int front;
    int rear;

    Queue(int size)
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
            cout << "Queue is empty";
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

    int getFront()
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

    int getSize()
    {
        return rear - front;
    }
};

int main()
{
    Queue q(10);

    q.push(5);
    q.push(15);
    q.push(25);
    q.push(55);

    cout << "Size of queue is: " << q.getSize() << endl;

    cout << "Front element is " << q.getFront() << endl;
    q.pop(); // remove
    cout << q.getSize();

    return 0;
}