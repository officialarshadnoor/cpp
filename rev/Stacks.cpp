//

// #include <iostream>
// #include <stack>
// using namespace std;

// int main()
// {
//     stack<int> st;
//     st.push(10);
//     cout << st.size() << endl;
//     st.push(20);
//     st.push(30);
//     st.push(40);
//     cout << st.size() << endl;
//     st.pop();
//     cout << st.size() << endl;
//     cout << st.top() << endl;

//     // printing -> bad method
//     // while (st.size() > 0)
//     // {
//     //     cout << st.top() << " ";
//     //     st.pop();
//     // }

//     // we will use extra stack to store the removing elements

//     stack<int> temp;
//     while (st.size() > 0)
//     {
//         cout << st.top() << " ";
//         int x = st.top();
//         st.pop();
//         temp.push(x);
//     }
//     // putting elements back from temp to st
//     while (temp.size() > 0)
//     {
//         int x = temp.top();
//         temp.pop();
//         st.push(x);
//     }
// }

// // Reverse Stack
// #include <iostream>
// #include <stack>
// using namespace std;

// void print(stack<int> st)
// {
//     stack<int> temp;
//     while (st.size() > 0)
//     {
//         temp.push(st.top());
//         st.pop();
//     }
//     // putting elements back from temp to st
//     while (temp.size() > 0)
//     {
//         cout << temp.top() << " ";
//         st.push(temp.top());
//         temp.pop();
//     }
// }

// int main()
// {
//     stack<int> st;
//     st.push(10);
//     st.push(20);
//     st.push(30);
//     st.push(40);
//     st.push(50);
//     print(st);
//     stack<int> gt;
//     stack<int> rt;

//     // empty st into gt
//     while (st.size() > 0)
//     {
//         gt.push(st.top());
//         st.pop();
//     }
//     // empty gt into rt
//     while (gt.size() > 0)
//     {
//         rt.push(gt.top());
//         gt.pop();
//     }

//     // empty rt to st
//     while (rt.size() > 0)
//     {
//         st.push(rt.top());
//         rt.pop();
//     }
//     cout << endl;
//     print(st);
// }

// Reverse Stack
// #include <iostream>
// #include <stack>
// using namespace std;

// void print(stack<int> st)
// {
//     stack<int> temp;
//     while (st.size() > 0)
//     {
//         temp.push(st.top());
//         st.pop();
//     }
//     // putting elements back from temp to st
//     while (temp.size() > 0)
//     {
//         cout << temp.top() << " ";
//         st.push(temp.top());
//         temp.pop();
//     }
// }

// void pushAtBottom(stack<int> &st, int val)
// {
//     stack<int> temp;
//     while (st.size() > 0)
//     {
//         temp.push(st.top());
//         st.pop();
//     }
//     st.push(val);
//     while (temp.size() > 0)
//     {
//         st.push(temp.top());
//         temp.pop();
//     }
// }

// void insertAtIndex(stack<int> &st, int idx, int val)
// {
//     stack<int> temp;
//     while (st.size() > idx)
//     {
//         temp.push(st.top());
//         st.pop();
//     }
//     st.push(val);
//     while (temp.size() > 0)
//     {
//         st.push(temp.top());
//         temp.pop();
//     }
//     cout << endl;
// }

// int main()
// {
//     stack<int> st;
//     st.push(10);
//     st.push(20);
//     st.push(30);
//     st.push(40);
//     st.push(50);
//     print(st);
//     cout << endl;
//     pushAtBottom(st, 80);
//     print(st);
//     cout << endl;
//     insertAtIndex(st, 3, 90);
//     print(st);
// }

// Reverse elements display using recursion

// #include <iostream>
// #include <stack>
// using namespace std;

// void displayRev(stack<int> &st)
// {
//     if (st.size() == 0)
//         return;
//     int x = st.top();
//     cout << x << " ";
//     st.pop();
//     displayRev(st);
//     st.push(x);
// }

// void display(stack<int> &st)
// {
//     if (st.size() == 0)
//         return;
//     int x = st.top();
//     st.pop();
//     display(st);
//     cout << st.top() << " ";
//     st.push(x);
// }

// int main()
// {
//     stack<int> st;
//     st.push(10);
//     st.push(20);
//     st.push(30);
//     st.push(40);
//     st.push(50);
//     displayRev(st);
// }

// push at bottom using recursion

// #include <iostream>
// #include <stack>
// using namespace std;

// void display(stack<int> &st)
// {
//     if (st.size() == 0)
//         return;
//     int x = st.top();
//     st.pop();
//     display(st);
//     cout << x << " ";
//     st.push(x);
// }

// void pushAtBottom(stack<int> &st, int val)
// {
//     if (st.size() == 0)
//     {
//         st.push(val);
//         return;
//     }
//     int x = st.top();
//     st.pop();
//     pushAtBottom(st, val);
//     st.push(x);
// }

// int main()
// {
//     stack<int> st;
//     st.push(10);
//     st.push(20);
//     st.push(30);
//     st.push(40);
//     st.push(50);
//     display(st);
//     pushAtBottom(st, -10);
//     cout << endl;
//     display(st);
// }

// Array Implementation in stacks
// #include <iostream>
// // #include <stack>
// using namespace std;

// class Stack
// { // user defined data structure
// public:
//     int arr[5];
//     int idx;

//     Stack()
//     {
//         idx = -1;
//     }

//     void push(int val)
//     {
//         idx++;
//         arr[idx] = val;
//     }
//     void pop()
//     {
//         idx--;
//     }
//     int top()
//     {
//         return arr[idx];
//     }
//     int size()
//     {
//         return idx + 1;
//     }
// };

// int main()
// {
//     Stack st;
//     st.push(10);
//     st.push(20);
//     st.push(30);
//     cout << st.size();
// }

// Stack implementation using vector
// #include <iostream>
// #include <vector>
// using namespace std;

// class Stack
// { // user defined data structure
// public:
//     vector<int> v;
//     int idx;
//     Stack()
//     {
//         idx = -1;
//     }
//     void push(int val)
//     {
//         v.push_back(val);
//     }
//     void pop()
//     {
//         if (v.size() == 0)
//         {
//             cout << "Stack is empty!" << endl;
//             return;
//         }
//         v.pop_back();
//     }
//     int top()
//     {
//         if (idx == -1)
//         {
//             cout << "Stack is empty!" << endl;
//             return -1;
//         }
//         return v[v.size() - 1];
//     }
//     int size()
//     {
//         return v.size();
//     }
// };

// int main()
// {
//     Stack st;
//     cout << st.top() << endl;
//     st.push(10);
//     st.push(20);
//     st.push(30);
//     st.push(40);
//     st.push(50);
//     st.push(60);
//     cout << st.size() << endl;
//     cout << st.top() << endl;
// }

// Stack implementation using linked list
// #include <iostream>
// using namespace std;

// class Node
// {
// public:
//     int val;
//     Node *next;
//     Node(int val)
//     {
//         this->val = val;
//         this->next = NULL;
//     }
// };

// class Stack
// {
// public:
//     Node *head;
//     int size;
//     Stack()
//     {
//         head = NULL;
//         size = 0;
//     }
//     void push(int val)
//     {
//         Node *temp = new Node(val);
//         temp->next = head;
//         head = temp;
//         size++;
//     }
//     void pop()
//     {
//         if (head == NULL)
//         {
//             cout << "Stack is empty!" << endl;
//             return;
//         }
//         head = head->next;
//         size--;
//     }
//     int top()
//     {
//         if (head == NULL)
//         {
//             cout << "Stack is empty!" << endl;
//             return -1;
//         }
//         return head->val;
//     }

//     void display()
//     {
//         Node *temp = head;
//         while (temp != NULL)
//         {
//             cout << temp->val << " ";
//             temp = temp->next;
//         }
//         cout << endl;
//     }
// };

// int main()
// {
//     Stack st;
//     cout << st.top() << endl;
//     st.push(10);
//     st.push(20);
//     st.push(30);
//     st.push(40);
//     st.push(50);
//     st.push(60);
//     // cout << st.size() << endl;
//     cout << st.top() << endl;
//     st.display();
// }

// is Balanced
#include <iostream>
#include <stack>
using namespace std;
bool isBalanced(string s)
{
    if (s.length() % 2 != 0)
        return false;
    stack<char> st;
    for (int i = 0; i < s.length)
}