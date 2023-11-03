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

// #include <iostream>
// #include <queue>
// using namespace std;

// class Queue
// {
// public:
//     int *arr;
//     int size;
//     int front;
//     int rear;

//     Queue(int size)
//     {
//         this->size = size;
//         arr = new int[size];
//         front = 0;
//         rear = 0;
//     }

//     void push(int data)
//     {
//         if (rear == size)
//         {
//             cout << "Q is full" << endl;
//         }
//         else
//         {
//             arr[rear] = data;
//             rear++;
//         }
//     }

//     void pop()
//     {
//         if (front == rear)
//         {
//             cout << "Queue is empty";
//         }
//         else
//         {
//             arr[front] = -1;
//             front++;
//             if (front == rear)
//             {
//                 front = 0;
//                 rear = 0;
//             }
//         }
//     }

//     int getFront()
//     {
//         if (front == rear)
//         {
//             cout << "Q is empty" << endl;
//             return -1;
//         }
//         else
//         {
//             return arr[front];
//         }
//     }

//     bool isEmpty()
//     {
//         if (front == rear)
//         {
//             return true;
//         }
//         else
//         {
//             return false;
//         }
//     }

//     int getSize()
//     {
//         return rear - front;
//     }
// };

// int main()
// {
//     Queue q(10);

//     q.push(5);
//     q.push(15);
//     q.push(25);
//     q.push(55);

//     cout << "Size of queue is: " << q.getSize() << endl;

//     cout << "Front element is " << q.getFront() << endl;
//     q.pop(); // remove
//     cout << q.getSize();

//     return 0;
// }

/* -------------------- Queue --------------------------
------------------------Day 2 ---------------------- */

// Circular Queue

// #include <iostream>
// using namespace std;

// class CirQueue
// {
// public:
//     int size;
//     int *arr;
//     int front;
//     int rear;

//     CirQueue(int size)
//     {
//         this->size = size;
//         arr = new int[size];
//         front = -1;
//         rear = -1;
//     }

//     void push(int data)
//     {
//         // Queue full

//         // single element case -> first element

//         // circular nature

//         // writing normal flow

//         // TODO: add one more condition in the QUeue FULL condition
//         if (front == 0 && rear == size - 1)
//         {
//             cout << "Q is full, cannot insert" << endl;
//         }
//         else if (front == -1)
//         {
//             front = rear = 0;
//             arr[rear] = data;
//         }
//         else if (rear == size - 1 && front != 0)
//         {
//             rear = 0;
//             arr[rear] = data;
//         }

//         else
//         {
//             rear++;
//             arr[rear] = data;
//         }
//     }

//     // writing pop flow
//     void pop()
//     {
//         // empty check
//         // single element check
//         // circular nature
//         // normal flow
//         if (front == -1)
//         {
//             cout << "Q is empty, cannot pop" << endl;
//         }
//         else if (front == rear)
//         {
//             arr[front] = -1;
//             front = -1;
//             rear = -1;
//         }
//         else if (front == size - 1)
//         {
//             front = 0;
//         }
//         else
//         {
//             front++;
//         }
//     }

//     // for checking Queue is empty
//     bool isEmpty()
//     {
//         return front == -1;
//     }

//     // displaying circular queue
//     void display()
//     {
//         if (isEmpty())
//         {
//             cout << "Queue is empty" << endl;
//             return;
//         }
//         int i = front;
//         while (true)
//         {
//             cout << CirQueue[i] << " ";
//             if (i == rear)
//                 break;
//             i = (i + 1) % MAX_SIZE;
//         }
//         cout << endl;
//     }

//     // circular queue size
//     int size()
//     {
//         if (isEmpty())
//         {
//             return 0;
//         }

//         if
//         {
//             return rear - front + 1;
//         }
//         else
//         {
//             return MAX_SIZE - front + rear + 1;
//         }
//     }

//     // Front and rear Element access
//     int getFront()
//     {
//         if (isEmpty())
//         {
//             return -1;
//         }
//         return circularQueue[front];
//     }

//     int getRear()
//     {
//         if (isEmpty())
//         {
//             return -1;
//         }
//         return CirQueue[rear];
//     }

//     // reusing space after dequeue
//     int dequeue()
//     {
//         if (front == -1)
//         {
//             // Circular queue is empty.
//             return -1;
//         }
//         int item = circularQueue[front];
//         if (front == rear)
//         {
//             front = rear = -1;
//         }
//         else
//         {
//             front = (front + 1) % MAX_SIZE;
//         }
//         return item;
//     }
// };

/* --------------------- Queue : DAY 3 -------------------- */

// Program for reversing a queue

// #include <iostream>
// #include <queue>
// #include <stack>
// using namespace std;

// void reverseQueue(queue<int> &q)
// {
//     stack<int> s;

//     // step 1: put all elements of q into s
//     while (!q.empty())
//     {
//         int element = q.front();
//         q.pop();
//         s.push(element);
//     }

//     // step2: put all element from stack onto q

//     while (!s.empty())
//     {
//         int element = s.top();
//         s.pop();

//         q.push(element);
//     }
// }

// int main()
// {
//     queue<int> q;
//     q.push(3);
//     q.push(6);
//     q.push(9);
//     q.push(2);
//     q.push(8);

//     reverseQueue(q);

//     cout << "printing queue" << endl;
//     while (!q.empty())
//     {
//         cout << q.front() << " ";
//         q.pop();
//     }
//     cout << endl;
// }

// Day 4: Queue

// #include <iostream>
// #include <deque>
// using namespace std;

// void solve(int arr[], int n, int k)
// {
//     deque<int> q;

//     // process first window of size k
//     for (int i = 0; i < k; i++)
//     {
//         if (arr[i] < 0)
//         {
//             q.push_back(i);
//         }
//     }

//     // remaining window ko process karo
//     for (int i = k; i < n; i++)
//     {
//         // answer of old window
//         if (q.empty())
//         {
//             cout << 0 << " ";
//         }
//         else
//         {
//             cout << arr[q.front()] << " ";
//         }

//         // out of window elements ko remove kardo
//         while ((!q.empty()) && (i - q.front() >= k))
//         {
//             q.pop_front();
//         }

//         if (arr[i] < 0)
//             q.push_back(i);
//     }

//     // print ans of last window
//     if (q.empty())
//     {
//         cout << 0 << " ";
//     }
//     else
//     {
//         cout << arr[q.front()] << " ";
//     }
// }

// int main()
// {
//     int arr[] = {12, -1, -7, 8, -15, 30, 16, 28};

//     int size = 8;
//     int k = 3;

//     solve(arr, size, k);

//     return 0;
// }
